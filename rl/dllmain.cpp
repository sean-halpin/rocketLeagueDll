#include "stdafx.h"
#include "SdkHeaders.h"
#include "TFL_HT.h"
#include <chrono>
#include <thread>
#include "VMTH.h"

//#define ProcessEventWP 0x0041EAC0//0x00746500 0x0041EAC0
//#define ProcessEventWP_Index 66	
#define ProcessEvent_Pattern	"\x74\x00\x83\xC0\x07\x83\xE0\xF8\xE8\x00\x00\x00\x00\x8B\xC4"
#define ProcessEvent_Mask		"x?xxxxxxx????xx"
DWORD	ProcessEventWP = 0;
UINT	ProcessEventWP_Index = 0;

AHUD* pAHUD = NULL;
UCanvas* pCanvas = NULL;
APlayerController* pPlayerController = NULL;
float fDeltaTime = NULL;

char FunctionName[256] = { '\0' };

UClass * SUObject::FindClass(char * ClassFullName)
{
	while (!UObject::GObjObjects())
		Sleep(100);

	while (!FName::Names())
		Sleep(100);

	for (int i = 0; i < UObject::GObjObjects()->Count; ++i)
	{
		UObject* Object = UObject::GObjObjects()->Data[i];

		if (!Object)
			continue;

		if (!_stricmp(Object->GetFullName(), ClassFullName))
			return (UClass*)Object;
	}

	return NULL;
}

FColor MakeColor(int R, int G, int B, int A)
{
	FColor ReturnedColor;
	ReturnedColor.R = R;
	ReturnedColor.G = G;
	ReturnedColor.B = B;
	ReturnedColor.A = A;
	return ReturnedColor;
}
FColor Green = MakeColor(0, 255, 0, 255);
FColor Red = MakeColor(255, 0, 0, 255);
void inline PostRender(UCanvas* pCanvas)
{
	if (pCanvas)
	{
		FColor Green = MakeColor(0, 255, 0, 255);
		pCanvas->Draw2DLine(pCanvas->ClipX / 2 - 10, pCanvas->ClipY / 2, pCanvas->ClipX / 2 + 10, pCanvas->ClipY / 2, Green);
		pCanvas->Draw2DLine(pCanvas->ClipX / 2, pCanvas->ClipY / 2 - 10, pCanvas->ClipX / 2, pCanvas->ClipY / 2 + 10, Green);
	}
}

void PlayerTick() {

}

/* [...] */
typedef void(__stdcall* tProcessEventWP) (UFunction*, void*, void*);
tProcessEventWP pProcessEventWP = NULL;

UObject* pCallObject = NULL;
UFunction* pFunction = NULL;
void* pParms = NULL;
void* pResult = NULL;

void __declspec (naked) hkProcessEventWP()
{
	__asm mov pCallObject, ecx;

	__asm
	{
		push eax
		mov eax, dword ptr[esp + 0x8]
		mov pFunction, eax
		mov eax, dword ptr[esp + 0xC]
		mov pParms, eax
		mov eax, dword ptr[esp + 0x10]
		mov pResult, eax
		pop eax

		pushad
	}
	printf("Hooked ");
	if (pFunction)
	{
		strcpy(FunctionName, pFunction->GetFullName());

		if (!strcmp(FunctionName, "Function Engine.GameViewportClient.PostRender")) //If its a postrender call
		{
			UGameViewportClient* viewport = (UGameViewportClient*)pCallObject;
			UGameViewportClient_eventPostRender_Parms* parameters = (UGameViewportClient_eventPostRender_Parms*)pParms;

			if (parameters)
			{
				PostRender(parameters->Canvas);
			}
		}
		//if (!strcmp(FunctionName, "Function Engine.PlayerController.PlayerTick"))
		//{
		//	//APlayerController* playerController = (APlayerController*)pCallObject;
		//	printf("Hooked F");
		//}
	}

	__asm popad;

	__asm
	{
		push pResult
		push pParms
		push pFunction
		call pProcessEventWP

		retn 0xC
	}
}

/* [...] */

void OnAttach() {
	AllocConsole();
	AttachConsole(GetCurrentProcessId());
	freopen("CON", "w", stdout);
	printf("Attach success\n");


	UObject* viewport = NULL;
	UObject* controller = NULL;

	PDWORD newviewport = NULL;
	PDWORD newcontroller = NULL;

	viewport = UObject::FindObject<UObject>("GameViewportClient_TA TAGame.Default__GameViewportClient_TA");
	controller = UObject::FindObject<UObject>("PlayerController_TA TAGame.Default__PlayerController_TA");

	PDWORD oldviewport = *(PDWORD*)viewport;
	PDWORD oldcontroller = *(PDWORD*)controller;

	//FIND PROCESS EVENT
	UClass * pClass = (UClass*)UObject::FindClass("Class Core.Object");
	unsigned long VfTable = (unsigned long)(((SUClass *)pClass)->VfTableObject.Dummy);
	for (unsigned long i = 0x0; i < 0x400; i += 0x4)
	{
		if (TFLHACKT00LS::FindPattern(*(unsigned long*)(VfTable + i), 0x200, (unsigned char*)ProcessEvent_Pattern, (char*)ProcessEvent_Mask))
		{
			ProcessEventWP = (*(unsigned long*)(VfTable + i));
			ProcessEventWP_Index = i / 4;
			break;
		}
	}
	pProcessEventWP = (tProcessEventWP)ProcessEventWP;

	if (VMTH::SwapVMT((PDWORD*)viewport))
	{
		newviewport = *(PDWORD*)viewport;
		if (VMTH::HookVMTFuncion((PDWORD*)viewport, (DWORD)hkProcessEventWP, (UINT)ProcessEventWP_Index)) {
			printf("HookVMTFuncion successfull for viewport\n");
		}
	}

	if (VMTH::SwapVMT((PDWORD*)controller))
	{
		newcontroller = *(PDWORD*)controller;
		if(VMTH::HookVMTFuncion((PDWORD*)controller, (DWORD)hkProcessEventWP, (UINT)ProcessEventWP_Index)) {
			printf("HookVMTFuncion successfull for controller\n");
		}
	}

	while (true) {
		Sleep(1);
	}
}

void onDetach() {
	FreeConsole();
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)OnAttach, NULL, 0, NULL);
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		onDetach();
		return false;
		break;
	}
	return TRUE;
}


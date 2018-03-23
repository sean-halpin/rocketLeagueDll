#include "stdafx.h"
#include "SdkHeaders.h"
#include <chrono>
#include <thread>
#include "VMTH.h"

#define ProcessEventWP 0x0041EAC0//0x00746500 0x0041EAC0
#define ProcessEventWP_Index 66	
typedef void(__stdcall* tProcessEventWP) (UFunction*, void*, void*);
tProcessEventWP pProcessEventWP = (tProcessEventWP)ProcessEventWP;

UObject* pCallObject = NULL;
UFunction* pFunction = NULL;
void* pParms = NULL;
void* pResult = NULL;

AHUD* pAHUD = NULL;
UCanvas* pCanvas = NULL;
APlayerController* pPlayerController = NULL;
float fDeltaTime = NULL;

char FunctionName[256] = { '\0' };

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
void PostRender(UCanvas* pCanvas)
{
	if (pCanvas)
	{
		FColor Green = MakeColor(0, 255, 0, 255);
		pCanvas->Draw2DLine(pCanvas->ClipX / 2 - 10, pCanvas->ClipY / 2, pCanvas->ClipX / 2 + 10, pCanvas->ClipY / 2, Green);
		pCanvas->Draw2DLine(pCanvas->ClipX / 2, pCanvas->ClipY / 2 - 10, pCanvas->ClipX / 2, pCanvas->ClipY / 2 + 10, Green);
	}
}

/* [...] */

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
	if (pFunction)
	{
		strcpy(FunctionName, pFunction->GetFullName());

#ifdef DUMP_FUNCTIONS
		fputs(FunctionName, funcallsfp);
		fputs("\n", funcallsfp);
#endif

		if (!strcmp(FunctionName, "Function Engine.GameViewportClient.PostRender")) //If its a postrender call
		{
			UGameViewportClient* viewport = (UGameViewportClient*)pCallObject;
			UGameViewportClient_eventPostRender_Parms* parameters = (UGameViewportClient_eventPostRender_Parms*)pParms;

			if (parameters)
			{
				PostRender(parameters->Canvas);
			}
		}
		if (!strcmp(FunctionName, "Function Engine.PlayerController.PlayerTick"))
		{
			APlayerController_TA* playerController = (APlayerController_TA*)pCallObject;
		}
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
	UObject* viewport = NULL;
	UObject* controller = NULL;

	PDWORD newviewport = NULL;
	PDWORD newcontroller = NULL;

	viewport = UObject::FindObject<UObject>("GameViewportClient_TA TAGame.Default__GameViewportClient_TA");
	controller = UObject::FindObject<UObject>("PlayerController_TA TAGame.Default__PlayerController_TA");

	PDWORD oldviewport = *(PDWORD*)viewport;
	PDWORD oldcontroller = *(PDWORD*)controller;

	if (VMTH::SwapVMT((PDWORD*)viewport))
	{
		newviewport = *(PDWORD*)viewport;
		VMTH::HookVMTFuncion((PDWORD*)viewport, (DWORD)hkProcessEventWP, (UINT)ProcessEventWP_Index);
	}

	if (VMTH::SwapVMT((PDWORD*)controller))
	{
		newcontroller = *(PDWORD*)controller;
		VMTH::HookVMTFuncion((PDWORD*)controller, (DWORD)hkProcessEventWP, (UINT)ProcessEventWP_Index);
	}
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
		break;
	}
	return TRUE;
}


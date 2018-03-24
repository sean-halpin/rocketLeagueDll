#include "stdafx.h"
#include "SdkHeaders.h"
#include "TFL_HT.h"
#include <chrono>
#include <thread>
#include "VMTH.h"
	
//#define DUMP_OBJECTS
#define OBJECT_DUMP_PATH    "objects.txt"

#define ProcessEvent_Pattern	"\x74\x00\x83\xC0\x07\x83\xE0\xF8\xE8\x00\x00\x00\x00\x8B\xC4"
#define ProcessEvent_Mask		"x?xxxxxxx????xx"
DWORD	ProcessEventWP = 0;
UINT	ProcessEventWP_Index = 0;

float fDeltaTime = 0.0;
APlayerController* playerController = NULL;

/* [...] */
typedef void(__stdcall* tProcessEventWP) (UFunction*, void*, void*);
tProcessEventWP pProcessEventWP = NULL;

UObject* pCallObject = NULL;
UFunction* pFunction = NULL;
void* pParms = NULL;
void* pResult = NULL;
char FunctionName[256];

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
	}
	_asm pushad

	//if (pFunction)
	//{
		//strcpy(FunctionName, pFunction->GetFullName());
		fDeltaTime += 1;
		//if (!strcmp(FunctionName, "Function Engine.PlayerController.PlayerTick"))
		//{
		//	fDeltaTime += 1;
		//	//if (!playerController && pCallObject) {
		//	//	playerController = (APlayerController*)pCallObject;
		//	//}
		//}
		//else if (!strcmp(FunctionName, "Function Engine.PlayerController.Destroyed"))
		//{
		//	//if (pCallObject && playerController == pCallObject)
		//	//{
		//	//	playerController = NULL;
		//	//}
		//}
	//}
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
	
	APlayerController* controller = NULL;
	PDWORD newcontroller = NULL;
	//controller = UObject::FindObject<UObject>("PlayerController_TA TAGame.Default__PlayerController_TA");
	controller = UObject::FindObject<APlayerController>("PlayerController_TA TheWorld.PersistentLevel.PlayerController_TA");
	//controller = UObject::FindObject<UObject>("Class Engine.PlayerController");
	//controller = UObject::FindObject<UObject>("PlayerController Engine.Default__PlayerController");
	//controller = UObject::FindObject<UObject>("GamePlayerController GameFramework.Default__GamePlayerController");
	PDWORD oldcontroller = *(PDWORD*)controller;

	//FIND PROCESS EVENT
	UObject * pClass = UObject::FindClass("Class Core.Object");
	unsigned long VfTable = *(DWORD*)pClass;
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

	if (VMTH::SwapVMT((PDWORD*)controller))
	{
		newcontroller = *(PDWORD*)controller;
		if(VMTH::HookVMTFuncion((PDWORD*)controller, (DWORD)hkProcessEventWP, (UINT)ProcessEventWP_Index)) {
			printf("HookVMTFuncion successfull for controller\n");
		}
	}

#ifdef DUMP_OBJECTS
	TArray<UObject*> * arr2 = UObject::GObjObjects();

	FILE* fp = fopen(OBJECT_DUMP_PATH, "w");

	if (arr2)
	{
		printf("Dumping.....\n");
		for (int i = 0; i < arr2->Num(); i++)
		{
			if ((*arr2)(i) == NULL) // there are null objects for somereason
				continue;
			if (strcmp((*arr2)(i)->GetName(), "None") && (*arr2)(i))
			{
				fprintf(fp, "%d - %d : %s\n", i, arr2->Num(), (*arr2)(i)->GetFullName());
			}
		}
		printf("Done\n");
	}
	else
	{
		printf("Objects not found\n");
	}
	fclose(fp);
#endif

	while (true) {
		Sleep(1000/30);
		if (fDeltaTime) {
			printf("Delta %.6f \n", fDeltaTime);
		}
		if (playerController) {
			printf("Car %.6f \n", 0.0);
		}
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


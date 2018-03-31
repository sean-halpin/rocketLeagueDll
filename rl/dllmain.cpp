#include "stdafx.h"
#include "SdkHeaders.h"
#include "TFL_HT.h"
#include "VMTH.h"
#include <iostream>
#include <fstream>

#define ProcessEvent_Pattern	"\x74\x00\x83\xC0\x07\x83\xE0\xF8\xE8\x00\x00\x00\x00\x8B\xC4"
#define ProcessEvent_Mask		"x?xxxxxxx????xx"
DWORD	ProcessEventWP = 0;
UINT	ProcessEventWP_Index = 0;

float fDeltaTime = 0.0;
AGameEvent_Soccar_TA * gameEvent = NULL;
APlayerController_TA* playerController = NULL; //PlayerController_TA TheWorld.PersistentLevel.PlayerController_TA //APlayerController
AActor* ball = NULL; ////Ball_TA TheWorld.PersistentLevel.Ball_TA //ABall_TA

/* [...] */
typedef void(__stdcall* tProcessEventWP) (UFunction*, void*, void*);
tProcessEventWP pProcessEventWP = NULL;

UObject* pCallObject = NULL;
UFunction* pFunction = NULL;
void* pParms = NULL;
void* pResult = NULL;
char FunctionName[256];

void __declspec (naked) __stdcall hkProcessEventWP()
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

	if (pFunction)
	{
		strcpy(FunctionName, pFunction->GetFullName());
		if (!strcmp(FunctionName, "Function Engine.PlayerController.PlayerTick"))
		{
			fDeltaTime += 1;
			if (playerController == NULL && pCallObject != NULL) {
				playerController = (APlayerController_TA*)pCallObject;
			}
		}
		else if (!strcmp(FunctionName, "Function Engine.PlayerController.Destroyed"))
		{
			if (pCallObject != NULL && playerController == pCallObject)
			{
				playerController = NULL;
			}
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

template <typename T> void findInstanceAndHookVMT(char* objectName, T * instance) {
	PDWORD newInstance = NULL;
	instance = UObject::FindObject<T>(objectName);
	if (instance != NULL) {
		PDWORD oldInstance = *(PDWORD*)instance;

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



		if (VMTH::SwapVMT((PDWORD*)instance))
		{
			newInstance = *(PDWORD*)instance;
			if (VMTH::HookVMTFuncion((PDWORD*)instance, (DWORD)hkProcessEventWP, (UINT)ProcessEventWP_Index)) {
				printf("HookVMTFuncion successfull for controller\n");
			}
		}
	}
}

void OnAttach() {
	AllocConsole();
	AttachConsole(GetCurrentProcessId());
	freopen("CON", "w", stdout);
	printf("Attach success\n");
	findInstanceAndHookVMT("PlayerController_TA TheWorld.PersistentLevel.PlayerController_TA", playerController);
	ofstream dataFile;
	dataFile.open("dataset.csv");

	float tempDeltaTime = 0.0;

	while (true) {
		Sleep(1000 / 30);
		if (fDeltaTime != NULL) {
			//printf("Previous Delta %.6f \n", tempDeltaTime);
			//printf("Delta %.6f \n", fDeltaTime);
			if (tempDeltaTime == fDeltaTime && playerController == NULL) {
				Sleep(1000 / 4);
				//findInstanceAndHookVMT("GameEvent_Soccar_TA TheWorld.PersistentLevel.GameEvent_Soccar_TA", gameEvent);
				findInstanceAndHookVMT("PlayerController_TA TheWorld.PersistentLevel.PlayerController_TA", playerController);
				//findInstanceAndHookVMT("Ball_TA TheWorld.PersistentLevel.Ball_TA", ball);
			}
			tempDeltaTime = fDeltaTime;
		}
		else {
			findInstanceAndHookVMT("PlayerController_TA TheWorld.PersistentLevel.PlayerController_TA", playerController);
		}

		if (playerController != NULL && playerController->Pawn != NULL) {
			if (!playerController->bDeleteMe) {
				if (playerController->Car != NULL &&
					playerController->Car->BallIndicator != NULL &&
					playerController->Car->BallIndicator->Ball != NULL) {
					if (!playerController->Car->BallIndicator->Ball->bDeleteMe) {
						if (((int)fDeltaTime) % 1 == 0) {
							if (ball == NULL || ball->bDeleteMe) {
								ball = playerController->Car->BallIndicator->Ball;
							}
							printf("Car.X %.6f ", playerController->Location.X);
							printf("Car.Y %.6f ", playerController->Location.Y);
							printf("Car.Z %.6f \n", playerController->Location.Z);
							printf("Ball.X %.6f ", ball->Location.X);
							printf("Ball.Y %.6f ", ball->Location.Y);
							printf("Ball.Z %.6f \n", ball->Location.Z);
							printf("Throttle %.6f ", playerController->LastInputs.Throttle);
							printf("Steer %.6f ", playerController->LastInputs.Steer);
							printf("Pitch %.6f ", playerController->LastInputs.Pitch);
							printf("Yaw %.6f ", playerController->LastInputs.Yaw);
							printf("Roll %.6f \n", playerController->LastInputs.Roll);
							printf("DodgeForward %.6f ", playerController->LastInputs.DodgeForward);
							printf("DodgeStrafe %.6f ", playerController->LastInputs.DodgeStrafe);
							printf("bJump %lu ", playerController->LastInputs.bJump);
							printf("bActivateBoost %lu ", playerController->LastInputs.bActivateBoost);
							printf("bHoldingBoost %lu ", playerController->LastInputs.bHoldingBoost);
							printf("bHandbrake %lu ", playerController->LastInputs.bHandbrake);
							printf("bJumped %lu \n", playerController->LastInputs.bJumped);
							//
							dataFile << playerController->Location.X; dataFile << ",";
							dataFile << playerController->Location.Y; dataFile << ",";
							dataFile << playerController->Location.Z; dataFile << ",";
							dataFile << ball->Location.X; dataFile << ",";
							dataFile << ball->Location.Y; dataFile << ",";
							dataFile << ball->Location.Z; dataFile << ",";
							dataFile << playerController->LastInputs.Throttle; dataFile << ",";
							dataFile << playerController->LastInputs.Steer; dataFile << ",";
							dataFile << playerController->LastInputs.Pitch; dataFile << ",";
							dataFile << playerController->LastInputs.Yaw; dataFile << ",";
							dataFile << playerController->LastInputs.Roll; dataFile << ",";
							dataFile << playerController->LastInputs.DodgeForward; dataFile << ",";
							dataFile << playerController->LastInputs.DodgeStrafe; dataFile << ",";
							dataFile << playerController->LastInputs.bJump; dataFile << ",";
							dataFile << playerController->LastInputs.bActivateBoost; dataFile << ",";
							dataFile << playerController->LastInputs.bHoldingBoost; dataFile << ",";
							dataFile << playerController->LastInputs.bHandbrake; dataFile << ",";
							dataFile << playerController->LastInputs.bJumped; dataFile << "\n";
						}
					}
				}
			}
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
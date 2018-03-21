// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "SdkHeaders.h"
#include <chrono>
#include <thread>

void OnAttach() {
	UWorld *myWorld = reinterpret_cast<UWorld*>(UWorld::StaticClass());
	if (!myWorld) {
		printf("[ERROR] myWorld NULL!\n");
		return;
	}
	while (true) {

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		printf("TESTING\n");
		try
		{
			//for (int j = 0; j < myWorld->Levels.Max; j++) {
			//	ULevel* pLevel = myWorld->Levels.Data[j];
			//	if (pLevel) {
			//		for (int i = 0; i < pLevel->Actors.Count; i++) {
			//			AActor* Actor = pLevel->Actors.Data[i];
			//			if (Actor && !Actor->bDeleteMe) {
			//				printf(Actor->GetName());
			//			}
			//		}
			//	}
			//}
		}
		catch (const std::exception& ex) {
			printf("Exception1");
		}
		catch (const std::string& ex) {
			printf("Exception2");
		}
		catch (...) {
			printf("Exception");
		}
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


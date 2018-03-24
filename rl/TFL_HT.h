#pragma comment(lib, "Psapi.lib")

#include <Windows.h>
#include <Psapi.h>

namespace TFLHACKT00LS
{
	//===========================================================================//
	//==== GetModuleInfo - Get Module Base, Module Size, Module Entry Point =====//
	//===========================================================================//

	MODULEINFO GetModuleInfo ( LPCTSTR lpModuleName );

	//===========================================================================//
	//==== FindPattern ==========================================================//
	//===========================================================================//

	DWORD FindPattern ( DWORD startAddres, DWORD fileSize, PBYTE pattern, char mask[] );
}
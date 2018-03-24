#include "TFL_HT.h"

namespace TFLHACKT00LS
{
	//===========================================================================//
	//==== GetModuleInfo - Get Module Base, Module Size, Module Entry Point =====//
	//===========================================================================//

	MODULEINFO GetModuleInfo ( LPCTSTR lpModuleName )
	{
		MODULEINFO miInfos = { NULL };

		HMODULE hmModule = GetModuleHandle ( lpModuleName );

		if ( hmModule )
		{
			GetModuleInformation ( GetCurrentProcess(), hmModule, &miInfos, sizeof ( MODULEINFO ) );
		}

		return miInfos;
	}

	//===========================================================================//
	//==== FindPattern ==========================================================//
	//===========================================================================//

	DWORD FindPattern ( DWORD startAddres, DWORD fileSize, PBYTE pattern, char mask[] )
	{
		DWORD pos = 0;
		int searchLen = strlen ( mask ) - 1;

		for ( DWORD retAddress = startAddres; retAddress < startAddres + fileSize; retAddress++ )
		{
			if ( *(PBYTE) retAddress == pattern[ pos ] || mask[ pos ] == '?' )
			{
				if ( mask[ pos + 1 ] == '\0' )
				{
					return ( retAddress - searchLen );
				}
					
				pos++;
			} 
			else
			{
				pos = 0;
			}		
		}

		return NULL;
	}
}
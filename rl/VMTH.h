/* [...] */

#include <windows.h>

using namespace std;

namespace VMTH
{
	//===========================================================================//
	//==== CountVMTFunctions - Count number of functions inside VMT =============//
	//===========================================================================//

	UINT CountVMTFunctions(PDWORD pdwVMT);

	//===========================================================================//
	//==== SwapWMT - Copy VMT to a new one and then change VMT class pointer ====//
	//===========================================================================//

	bool SwapVMT(PDWORD *ppdwClassBase);

	//===========================================================================//
	//==== ReHookVMT - Update VMT class pointer to an already swapped VMT =======//
	//===========================================================================//

	bool ReHookVMT(PDWORD *ppdwClassBase, PDWORD dwNewVMT);

	//===========================================================================//
	//==== HookVMTFuncion - Hook a function inside VMT ==========================//
	//===========================================================================//

	bool HookVMTFuncion(PDWORD *ppdwClassBase, DWORD dwNewFunction, UINT uiFunctionIndex);
}

/* [...] */
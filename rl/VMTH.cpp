/* [...] */

#include "VMTH.h"

namespace VMTH
{
	//===========================================================================//
	//==== CountVMTFunctions - Count number of functions inside VMT =============//
	//===========================================================================//

	UINT CountVMTFunctions(PDWORD pdwVMT)
	{
		UINT dwIndex = 0;

		for (dwIndex = 0; pdwVMT[dwIndex]; dwIndex++)
		{
			if (IsBadCodePtr((FARPROC)pdwVMT[dwIndex]))
			{
				break;
			}
		}

		return dwIndex;
	}

	//===========================================================================//
	//==== SwapWMT - Copy VMT to a new one and then change VMT class pointer ====//
	//===========================================================================//

	bool SwapVMT(PDWORD *ppdwClassBase)
	{
		PDWORD pdwOldVMT = *ppdwClassBase;

		// get vmt size
		UINT dwVMTSize = CountVMTFunctions(pdwOldVMT);
		if (!dwVMTSize) { return false; }

		// allocate memory for new vmt
		PDWORD pdwNewVMT = new DWORD[dwVMTSize];
		if (!pdwNewVMT) { return false; }

		// copy old vmt into new vmt
		memcpy(pdwNewVMT, pdwOldVMT, sizeof(DWORD) * dwVMTSize);

		// update pointer
		*ppdwClassBase = pdwNewVMT;

		return true;
	}

	//===========================================================================//
	//==== ReHookVMT - Update VMT class pointer to an already swapped VMT =======//
	//===========================================================================//

	bool ReHookVMT(PDWORD *ppdwClassBase, PDWORD dwNewVMT)
	{
		if
			(
				*ppdwClassBase
				&&  dwNewVMT
				)
		{
			*ppdwClassBase = dwNewVMT;
			return true;
		}

		return false;
	}

	//===========================================================================//
	//==== HookVMTFuncion - Hook a function inside VMT ==========================//
	//===========================================================================//

	bool HookVMTFuncion(PDWORD *ppdwClassBase, DWORD dwNewFunction, UINT uiFunctionIndex)
	{
		PDWORD pdwVMT = *ppdwClassBase;

		if
			(
				pdwVMT
				&&  uiFunctionIndex <= CountVMTFunctions(pdwVMT)
				&& uiFunctionIndex >= 0
				)
		{
			pdwVMT[uiFunctionIndex] = dwNewFunction;
			return true;
		}

		return false;
	}
}

/* [...] */
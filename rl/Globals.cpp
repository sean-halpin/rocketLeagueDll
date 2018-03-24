#include "Globals.h"

#define GObjects_Pattern		"\xA1\x00\x00\x00\x00\x8B\x00\x00\x8B\x00\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask			"x????x??x??xxxxx"
#define GObjects_Offset			0x1

#define GNames_Pattern			"\x8B\x0D\x00\x00\x00\x00\x83\x3C\x81\x00\x74"
#define GNames_Mask				"xx????xxxxx"
#define GNames_Offset			0x2

unsigned long Glob::GObjectsValue = 0;
unsigned long Glob::GNamesValue = 0;

unsigned long Glob::GObjects()
{
	if (Glob::GObjectsValue == 0) {
		MODULEINFO miGame = TFLHACKT00LS::GetModuleInfo(NULL);
		Glob::GObjectsValue = *(unsigned long*)(TFLHACKT00LS::FindPattern((unsigned long)miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*)GObjects_Pattern, (char*)GObjects_Mask) + GObjects_Offset);
	}
	return Glob::GObjectsValue;
}

unsigned long Glob::GNames()
{
	if (Glob::GNamesValue == 0) {
		MODULEINFO miGame = TFLHACKT00LS::GetModuleInfo(NULL);
		Glob::GNamesValue = *(unsigned long*)(TFLHACKT00LS::FindPattern((unsigned long)miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*)GNames_Pattern, (char*)GNames_Mask) + GNames_Offset);
	}
	return Glob::GNamesValue;
}

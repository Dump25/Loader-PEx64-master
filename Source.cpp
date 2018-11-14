#include "PeLdr.h"
#include "Debug.h"
#include <Windows.h>
#include <conio.h>

int wmain()
{
	PE_LDR_PARAM peLdr;

	PeLdrInit(&peLdr);
	PeLdrStart(&peLdr);
	_getch();
	return 0;
}

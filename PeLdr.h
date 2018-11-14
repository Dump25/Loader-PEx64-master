#ifndef _PE_LDR_H
#define _PE_LDR_H

#include <windows.h>
#include <tchar.h>
#include <winnt.h>

typedef struct
{
	PIMAGE_DOS_HEADER		pDosHeader;
	PIMAGE_NT_HEADERS		pNtHeaders;

	DWORD64					dwImage;
	DWORD64					dwImageSizeOnDisk;

	DWORD64					dwLoaderBase;
	DWORD64					dwLoaderRelocatedBase;

	DWORD64					dwMapBase;

} PE_LDR_PARAM;

VOID PeLdrInit(PE_LDR_PARAM *pe);
BOOL PeLdrStart(PE_LDR_PARAM *pe);

#endif

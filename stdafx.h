#pragma once

#define WIN32_LEAN_AND_MEAN

#include<windows.h>
#include<WinUser.h>

#include<stdlib.h>
#include<malloc.h>
#include<memory.h>
#include<math.h>
#include<string>
#include<wchar.h>
#include<tchar.h>
#include<sstream>

#include<d3d12.h>
#include<d2d1.h>
#include<d2d1helper.h>
#include<dwrite.h>
#include<wincodec.h>

#include"IDCounter.h"

#pragma comment(lib,"d2d1.lib")
#pragma comment(lib,"Dwrite.lib")

const int MAT = 32;
extern int Times;

template <class T> void SafeRelease(T **ppT)
{
	if (*ppT)
	{
		(*ppT)->Release();
		*ppT = NULL;
	}
}

#ifndef HINST_THISCOMPONENT
EXTERN_C IMAGE_DOS_HEADER __ImageBase;
#define HINST_THISCOMPONENT ((HINSTANCE)&__ImageBase)
#endif


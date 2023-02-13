// testCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "WinNT.h"


int _tmain(int argc, _TCHAR* argv[])
{
	wchar_t xpath[256];
	//int i =sizeof(xpath);
	int ret = _snwprintf_s(xpath, sizeof(xpath), _TRUNCATE, L"*[name()='%s' or @Name='%s']", L"", L"");

	int size = sizeof(xpath);
	int r1 = _snwprintf_s(xpath, sizeof(xpath), size, L"*[name()='%s' or @Name='%s']", L"", L"");
	if (r1 > size - 1)
	{
					// raise exception
	}
	return 0;
}


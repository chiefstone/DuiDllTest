// DuiDllTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


extern "C" _declspec(dllexport)void CreateDui();
#pragma comment(lib,"DLLTest.lib")


int _tmain(int argc, _TCHAR* argv[])
{
	CreateDui();
	return 0;
}


// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             //  �� Windows ͷ�ļ����ų�����ʹ�õ���Ϣ
// Windows ͷ�ļ�:
#include <windows.h>



// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�


#include "DuiLib/UIlib.h"
using namespace DuiLib;


#ifdef _UNICODE

#ifdef _DEBUG
#	pragma comment(lib,"Lib/DuiLib_d.lib")
#else
#	pragma comment(lib,"Lib/DuiLib.lib")
#endif   //_DEBUG

#else //RELEASE

#ifdef _DEBUG
#	pragma comment(lib,"Lib\DuiLibA_d.lib")
#else
#	pragma comment(lib,"Lib\DuiLibA.lib")
#endif

#endif  //_UNICODE

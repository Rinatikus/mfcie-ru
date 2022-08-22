/***********************************************************
** ������ = StdAfx = ����������� ����������
**
** ����� :       Adamanteus
** ����������   MSVC ver. 12.0   ����    13.07.2021
** ���������� :  �������� ����������� ��������� �������
**      � ����������� ��� ����� ������� ���������
** ���������� :
**      �������� ����� ������������ � ���������� �����������
************************************************************
*/

#if (defined _MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif

#if !defined	StdAfx_defined
# define StdAfx_defined

/*:::::: ������� ::::::::::::::::::::::::::::::::::::::::::::::::::*/

#if !defined VC_EXTRALEAN
# define	VC_EXTRALEAN            // ��������� ����� ������������ ���������� �� ���������� Windows
#endif

/*

#define	K_LIB_EXT	// ������������ ���������� ���������� K-Lib

#if !defined _SECURE_ATL
# define	_SECURE_ATL	1	// ���������� ��������� �������
#endif

#define	_CRT_NON_CONFORMING_SWPRINTFS
#define	_ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ��������� ������������ CString ����� ������

#define	_CRT_SECURE_NO_WARNINGS	// ��������� �������������� ������� ������������� �����
#define	_SCL_SECURE_NO_WARNINGS	// ��������� �������������� �������� ������������� �����

// ��������� ������� ������� ��������� ����� � ����� ������������ �������������� MFC
#define	_AFX_ALL_WARNINGS
*/

#if (defined _MSC_VER) && (defined K_LIB_EXT)
# pragma warning (disable : 4005)
# pragma warning (disable : 4391)
# pragma warning (disable : 4163)
#endif

/*::::::::: ��������� ������������ ������� ::::::::::::::::::::::::::*/

#include	"targetver.h"
#include	"resource.h"
#include	"version.h"

/*:::::: ������� ����������� ����� ������ :::::::::::::::::::::::::::*/

#include	<tchar.h>

/*
#include	<string>
#include	<memory>
#include	<cassert>
#include	<exception>
#include	<stdexcept>
#include	<iostream>
#include	<fstream>
#include	<iomanip>
#include	<iosfwd>
#include	<vector>

#include	<malloc.h>
#include	<memory.h>
#include	<locale.h>
#include	<ctype.h>
#include	<conio.h>
#include	<io.h>
#include	<dirent.h>
#include	<threads.h>
#include	<signal.h>
#include	<setjmp.h>
#include	<stdarg.h>
#include	<stdlib.h>
#include	<time.h>
#include	<math.h>

#include	<crtdbg.h>
*/

/*:::::: ������� �������������� ���������� ::::::::::::::::::::::::::*/

#if (defined _CONSOLE) || (defined CONSOLE)

#include	<stdio.h>

#elif (defined _WINDOWS) || (defined WINDOWS)

#define WIN32_LEAN_AND_MEAN	/* ��������� ����� ������������ ����������� */
/*
#include	<windows.h>
#include	<windowsx.h>
#include	<commctrl.h>
#include	<commdlg.h>
#include	<htmlhelp.h>
#include	<shellapi.h>

#include	<dialogs.h>
#include	<dlgvalid.h>
#include	<helpview.h>
#include	<misc>

#include	<modernui.h>
*/

#include	<afxwin.h>         // �������� � ����������� ���������� MFC
#include	<afxext.h>         // ���������� MFC
#include	<afxdisp.h>        // ������ ������������� MFC
#if !defined _AFX_NO_OLE_SUPPORT
# include	<afxdtctl.h>           // ��������� MFC ��� ������� ��������� ���������� Internet Explorer 4
#endif
#if !defined _AFX_NO_AFXCMN_SUPPORT
# include	<afxcmn.h>                     // ��������� MFC ��� ������� ��������� ���������� Windows
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // ��������� MFC ��� ������� ��������� ������� ������������
#include <afxcview.h>     // ��������� MFC ��� ����������� ����������� �������� ������
#include <afxhtml.h>     // ��������� MFC ��� ����������� �������������� �������
#include <afxsock.h>     // ��������� MFC ���������� ����� ��������-�����

#endif

/*:::::: ������ ���������� ��������� ::::::::::::::::::::::::::::::::*/

/*
#include	<strsafe.h>

#if defined	_DEBUG
# undef	THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

*/

/*::::::::::::: ���� �� ������� ���������� ������� ::::::::::::::::*/

#define	MAXPATH	300	/* ������������ ����� ����� ����� */
 typedef	double	mace;
#if !defined __cplusplus
 typedef	char	bool;
#endif
#if defined UNICODE
 typedef	wchar_t	char_t;
#else
 typedef	char	char_t;
#endif

/*:::::: ������� ���������� ��������� :::::::::::::::::::::::::::::::*/

# define  ccrtl	_cdecl
# define	EOS	'\0'
# if !defined __cplusplus
#  define	false	0
#  define	true	~false
# endif
# if !defined _T
#  if defined UNICODE
#   define	_T(x)	(char_t *)L##x
#  else
#   define	_T(x)	x
#  endif
# endif

#if (defined __WATCOMC__) && ((defined UNICODE) || (defined _UNICODE))
# define ultoa   _ultot
# define ltoa    _ltot
# define atol    _ttol
# define strlen  _tcslen
# define strcpy  _tcscpy
# define strncpy    wcsncpy
# define strcat  _tcscat
# define strchr  _tcschr
# define sprintf  wsprintf
# define stricmp _wcsicmp
# define sscanf  swscanf
#endif

#if (defined __POCC__) && ((defined UNICODE) || (defined _UNICODE))
# define ultoa   _ultot
# undef	 atol
# define atol    _ttol
# define strlen  wcslen
# define strcpy  wcscpy
# define strncpy wcsncpy
# define strcat  wcscat
# define strcmp  wcscmp
# define strchr  wcschr
# define sprintf wsprintf
#endif

#if (!defined UNICODE) && (!defined _UNICODE)
# define     subcmp(buf1, buf2, count)     memcmp (buf1, buf2, count * sizeof(cap_t))
# define     subcpy(dst, src, count)     memcpy (dst, src, count * sizeof(cap_t))
# define     subchr(buf, lenght, sim)     memchr (buf, lenght * sizeof(cap_t), sim)
# define     subrchr(buf, lenght, sim)     memrchr (buf, lenght * sizeof(cap_t), sim)
#else
# undef	 _MBCS
#endif

#define     strbck1(str)     strcpy(str, &str[1])
#define     zapstr(str,n)     strcpy(str, str + n)
#define     lastchar(str)     *(cap_t*)(str + strlen(str) - 1)
#define     strsize(str)     ((strlen(str) + 1) * sizeof(cap_t))

# if !defined STRSIZE
#define	STRSIZE(str)	(_countof(str) - 1)
# endif

#if (defined UNICODE) && (!defined K_LIB)
#  define tcout wcout
#else
#  define tcout cout
#endif

#endif	// !defined	StdAfx_defined

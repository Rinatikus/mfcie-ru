/***********************************************************
** Модуль = StdAfx = прикладного приложения
**
** Автор :       Adamanteus
** Компилятор   MSVC ver. 12.0   Дата    13.07.2021
** Назначение :  описание стандартных системных функций
**      и специфичных для всего проекта библиотек
** Примечания :
**      включает часто используемые и неизменные определения
************************************************************
*/

#if (defined _MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif

#if !defined	StdAfx_defined
# define StdAfx_defined

/*:::::: макросы ::::::::::::::::::::::::::::::::::::::::::::::::::*/

#if !defined VC_EXTRALEAN
# define	VC_EXTRALEAN            // Исключите редко используемые компоненты из заголовков Windows
#endif

/*

#define	K_LIB_EXT	// Использовать расширения библиотеки K-Lib

#if !defined _SECURE_ATL
# define	_SECURE_ATL	1	// Безопасные шаблонные функции
#endif

#define	_CRT_NON_CONFORMING_SWPRINTFS
#define	_ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // некоторые конструкторы CString будут явными

#define	_CRT_SECURE_NO_WARNINGS	// отключает предупреждения функций небезопасного стиля
#define	_SCL_SECURE_NO_WARNINGS	// отключает предупреждения объектов небезопасного стиля

// отключает функцию скрытия некоторых общих и часто пропускаемых предупреждений MFC
#define	_AFX_ALL_WARNINGS
*/

#if (defined _MSC_VER) && (defined K_LIB_EXT)
# pragma warning (disable : 4005)
# pragma warning (disable : 4391)
# pragma warning (disable : 4163)
#endif

/*::::::::: константы используемых модулей ::::::::::::::::::::::::::*/

#include	"targetver.h"
#include	"resource.h"
#include	"version.h"

/*:::::: функции стандартных типов данных :::::::::::::::::::::::::::*/

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

/*:::::: функции интерактивного интерфейса ::::::::::::::::::::::::::*/

#if (defined _CONSOLE) || (defined CONSOLE)

#include	<stdio.h>

#elif (defined _WINDOWS) || (defined WINDOWS)

#define WIN32_LEAN_AND_MEAN	/* отключаем редко используемые определения */
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

#include	<afxwin.h>         // основные и стандартные компоненты MFC
#include	<afxext.h>         // расширения MFC
#include	<afxdisp.h>        // классы автоматизации MFC
#if !defined _AFX_NO_OLE_SUPPORT
# include	<afxdtctl.h>           // поддержка MFC для типовых элементов управления Internet Explorer 4
#endif
#if !defined _AFX_NO_AFXCMN_SUPPORT
# include	<afxcmn.h>                     // поддержка MFC для типовых элементов управления Windows
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // поддержка MFC для типовых элементов панелей инструментов
#include <afxcview.h>     // поддержка MFC для отображения древовидных структур данных
#include <afxhtml.h>     // поддержка MFC для отображения гипертекстовых страниц
#include <afxsock.h>     // поддержка MFC соединений через интранет-порты

#endif

/*:::::: модули прикладных библиотек ::::::::::::::::::::::::::::::::*/

/*
#include	<strsafe.h>

#if defined	_DEBUG
# undef	THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

*/

/*::::::::::::: Типы из словаря предметной области ::::::::::::::::*/

#define	MAXPATH	300	/* максимальная длина имени файла */
 typedef	double	mace;
#if !defined __cplusplus
 typedef	char	bool;
#endif
#if defined UNICODE
 typedef	wchar_t	char_t;
#else
 typedef	char	char_t;
#endif

/*:::::: макросы прикладной программы :::::::::::::::::::::::::::::::*/

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

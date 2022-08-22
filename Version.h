/***********************************************************
** ������ = Version = ����������� ����������
**
** ����� :       Adamanteus
** ����������   MSVC ver. 12.0   ����    26.03.2021
** ���������� :  ������� ������������ ������ ���������
**      � ������ �������� (��� ����������� ������ � �������)
************************************************************
*/

#define	PRODUCT_VERSION	"1.00"	/* ������ ��������� */
#define PRODUCT_VERDOT "1.0.0.2"	/* ������ ��������� � �������������� */
#define PRODUCT_VERNUM 0x1002	/* ������ ��������� ������������������ */
#define PRODUCT_VER_MAJOR 1	/* ����� ������ ��������� */
#define PRODUCT_VER_MINOR 0	/* ����� ��������� ��������� */
#define PRODUCT_VER_REVISION 0	/* ����� ������� ��������� */
#define PRODUCT_VER_SUBREVISION 2	/* ����� ���������� ��������� */

# define GOOD_VERSION	"1.00"	/* ������ �������� */
# define GOOD_VERDOT "1.0.0.2"	/* ������ �������� � �������������� */
# define GOOD_VERNUM 0x1230	/* ������ �������� ������������������ */
# define GOOD_VER_MAJOR 1	/* ����� ������ �������� */
# define GOOD_VER_MINOR 0	/* ����� ��������� �������� */
# define GOOD_VER_REVISION 0	/* ����� ������� �������� */
# define GOOD_VER_SUBREVISION 2	/* ����� ���������� �������� */

#define	PRODUCT_PROJECT_RU_RU	"MFCIE"	/* �������� ������� */
#define PRODUCT_TITLE_RU_RU	"���������������� ���������"	/* �������� �������� */
#define	PRODUCT_BANNER_RU_RU	PRODUCT_PROJECT_RU_RU	/* �������� ��������� */
#define	PRODUCT_FILE_NAME_RU_RU	PRODUCT_BANNER ".exe"	/* �������� ����� ��������� */

#define	GOOD_PROJECT_RU_RU	"�������"	/* �������� ������� �������� */
#define GOOD_TITLE_RU_RU	"��������� ��������������� ��������"	/* �������� �������� */
#define GOOD_BANNER_RU_RU	GOOD_PROJECT_RU_RU	/* �������� �������� */

#define	PRODUCT_PROJECT_EN_EN	"MFCIE"	/* �������� ������� */
#define PRODUCT_TITLE_EN_EN	"Demonstration program"	/* �������� �������� */
#define	PRODUCT_BANNER_EN_EN	PRODUCT_PROJECT_EN_EN	/* �������� ��������� */
#define	PRODUCT_FILE_NAME_EN_EN	PRODUCT_BANNER_EN_EN ".exe"	/* �������� ����� ��������� */

#define	GOOD_PROJECT_EN_EN	"Devoid"	/* �������� ������� �������� */
#define GOOD_TITLE_EN_EN	"Collection of utilities"	/* �������� �������� */
#define GOOD_BANNER_EN_EN	GOOD_PROJECT_EN_EN	/* �������� �������� */

#if defined	PRODUCT_GOOD
# undef GOOD_VERSION
# undef GOOD_VERDOT
# undef GOOD_VERNUM
# undef GOOD_VER_MAJOR
# undef GOOD_VER_MINOR
# undef GOOD_VER_REVISION
# undef GOOD_VER_SUBREVISION
# undef GOOD_PROJECT_EN_EN
# undef GOOD_TITLE_EN_EN
# undef GOOD_BANNER_EN_EN
# undef GOOD_PROJECT_RU_RU
# undef GOOD_TITLE_RU_RU
# undef GOOD_BANNER_RU_RU
# define GOOD_PROJECT_EN_EN	PRODUCT_PROJECT_EN_EN	/* �������� ������� �������� */
# define GOOD_TITLE_EN_EN	PRODUCT_TITLE_EN_EN	/* �������� �������� */
# define GOOD_BANNER_EN_EN	PRODUCT_BANNER_EN_EN	/* �������� �������� */
# define GOOD_PROJECT_RU_RU	PRODUCT_PROJECT_RU_RU	/* �������� ������� �������� */
# define GOOD_TITLE_RU_RU	PRODUCT_TITLE_RU_RU	/* �������� �������� */
# define GOOD_BANNER_RU_RU	PRODUCT_BANNER_RU_RU	/* �������� �������� */
#endif

#if !defined	PRODUCT_PROJECT
# define	PRODUCT_PROJECT	PRODUCT_PROJECT_EN_EN	/* �������� ������� */
# define	PRODUCT_TITLE	PRODUCT_TITLE_EN_EN	/* �������� �������� */
# define	PRODUCT_BANNER	PRODUCT_BANNER_EN_EN	/* �������� ��������� */
# define	PRODUCT_FILE_NAME	PRODUCT_FILE_NAME_EN_EN	/* �������� ����� ��������� */
#endif

#if !defined	GOOD_PROJECT
# define	GOOD_PROJECT	GOOD_PROJECT_EN_EN	/* �������� ������� �������� */
# define GOOD_TITLE	GOOD_TITLE_EN_EN	/* �������� �������� */
# define GOOD_BANNER	GOOD_BANNER_EN_EN	/* �������� �������� */
#endif

#if !defined	GOOD_VERSION
# define	GOOD_VERSION	PRODUCT_VERSION	/* ������ �������� */
# define GOOD_VERDOT PRODUCT_VERDOT	/* ������ �������� � �������������� */
# define GOOD_VERNUM PRODUCT_VERNUM	/* ������ �������� ������������������ */
# define GOOD_VER_MAJOR PRODUCT_VER_MAJOR	/* ����� ������ �������� */
# define GOOD_VER_MINOR PRODUCT_VER_MINOR	/* ����� ��������� �������� */
# define GOOD_VER_REVISION PRODUCT_VER_REVISION	/* ����� ������� �������� */
# define GOOD_VER_SUBREVISION PRODUCT_VER_SUBREVISION	/* ����� ���������� �������� */
#endif

#if !defined	PRODUCT_FILE_NAME
# define	PRODUCT_FILE_NAME	PRODUCT_BANNER ".exe"	/* �������� ����� ��������� */
#endif


/***********************************************************
** Модуль = Version = прикладного приложения
**
** Автор :       Adamanteus
** Компилятор   MSVC ver. 12.0   Дата    26.03.2021
** Назначение :  макросы определяющие версию программы
**      и версию продукта (для определения версии в ресурсе)
************************************************************
*/

#define	PRODUCT_VERSION	"1.00"	/* версия программы */
#define PRODUCT_VERDOT "1.0.0.2"	/* версия программы с разделителясми */
#define PRODUCT_VERNUM 0x1002	/* версия программы шестнадцатериченая */
#define PRODUCT_VER_MAJOR 1	/* номер версии программы */
#define PRODUCT_VER_MINOR 0	/* номер подверсии программы */
#define PRODUCT_VER_REVISION 0	/* номер ревизии программы */
#define PRODUCT_VER_SUBREVISION 2	/* номер компиляции программы */

# define GOOD_VERSION	"1.00"	/* версия продукта */
# define GOOD_VERDOT "1.0.0.2"	/* версия продукта с разделителясми */
# define GOOD_VERNUM 0x1230	/* версия продукта шестнадцатериченая */
# define GOOD_VER_MAJOR 1	/* номер версии продукта */
# define GOOD_VER_MINOR 0	/* номер подверсии продукта */
# define GOOD_VER_REVISION 0	/* номер ревизии продукта */
# define GOOD_VER_SUBREVISION 2	/* номер компиляции продукта */

#define	PRODUCT_PROJECT_RU_RU	"MFCIE"	/* название проекта */
#define PRODUCT_TITLE_RU_RU	"Демонстрационная программа"	/* описание продукта */
#define	PRODUCT_BANNER_RU_RU	PRODUCT_PROJECT_RU_RU	/* название программы */
#define	PRODUCT_FILE_NAME_RU_RU	PRODUCT_BANNER ".exe"	/* название файла программы */

#define	GOOD_PROJECT_RU_RU	"Свобода"	/* название проекта продукта */
#define GOOD_TITLE_RU_RU	"Коллекции вспомогательных программ"	/* описание продукта */
#define GOOD_BANNER_RU_RU	GOOD_PROJECT_RU_RU	/* название продукта */

#define	PRODUCT_PROJECT_EN_EN	"MFCIE"	/* название проекта */
#define PRODUCT_TITLE_EN_EN	"Demonstration program"	/* описание продукта */
#define	PRODUCT_BANNER_EN_EN	PRODUCT_PROJECT_EN_EN	/* название программы */
#define	PRODUCT_FILE_NAME_EN_EN	PRODUCT_BANNER_EN_EN ".exe"	/* название файла программы */

#define	GOOD_PROJECT_EN_EN	"Devoid"	/* название проекта продукта */
#define GOOD_TITLE_EN_EN	"Collection of utilities"	/* описание продукта */
#define GOOD_BANNER_EN_EN	GOOD_PROJECT_EN_EN	/* название продукта */

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
# define GOOD_PROJECT_EN_EN	PRODUCT_PROJECT_EN_EN	/* название проекта продукта */
# define GOOD_TITLE_EN_EN	PRODUCT_TITLE_EN_EN	/* описание продукта */
# define GOOD_BANNER_EN_EN	PRODUCT_BANNER_EN_EN	/* название продукта */
# define GOOD_PROJECT_RU_RU	PRODUCT_PROJECT_RU_RU	/* название проекта продукта */
# define GOOD_TITLE_RU_RU	PRODUCT_TITLE_RU_RU	/* описание продукта */
# define GOOD_BANNER_RU_RU	PRODUCT_BANNER_RU_RU	/* название продукта */
#endif

#if !defined	PRODUCT_PROJECT
# define	PRODUCT_PROJECT	PRODUCT_PROJECT_EN_EN	/* название проекта */
# define	PRODUCT_TITLE	PRODUCT_TITLE_EN_EN	/* описание продукта */
# define	PRODUCT_BANNER	PRODUCT_BANNER_EN_EN	/* название программы */
# define	PRODUCT_FILE_NAME	PRODUCT_FILE_NAME_EN_EN	/* название файла программы */
#endif

#if !defined	GOOD_PROJECT
# define	GOOD_PROJECT	GOOD_PROJECT_EN_EN	/* название проекта продукта */
# define GOOD_TITLE	GOOD_TITLE_EN_EN	/* описание продукта */
# define GOOD_BANNER	GOOD_BANNER_EN_EN	/* название продукта */
#endif

#if !defined	GOOD_VERSION
# define	GOOD_VERSION	PRODUCT_VERSION	/* версия продукта */
# define GOOD_VERDOT PRODUCT_VERDOT	/* версия продукта с разделителясми */
# define GOOD_VERNUM PRODUCT_VERNUM	/* версия продукта шестнадцатериченая */
# define GOOD_VER_MAJOR PRODUCT_VER_MAJOR	/* номер версии продукта */
# define GOOD_VER_MINOR PRODUCT_VER_MINOR	/* номер подверсии продукта */
# define GOOD_VER_REVISION PRODUCT_VER_REVISION	/* номер ревизии продукта */
# define GOOD_VER_SUBREVISION PRODUCT_VER_SUBREVISION	/* номер компиляции продукта */
#endif

#if !defined	PRODUCT_FILE_NAME
# define	PRODUCT_FILE_NAME	PRODUCT_BANNER ".exe"	/* название файла программы */
#endif


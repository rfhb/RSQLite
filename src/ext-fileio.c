#define SQLITE_CORE
#include <R_ext/Visibility.h>
#define sqlite3_fileio_init attribute_visible sqlite3_fileio_init

#include "vendor/extensions/fileio.c"

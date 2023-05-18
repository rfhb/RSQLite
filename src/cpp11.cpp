// Generated by cpp11: do not edit by hand
// clang-format off

#include "RSQLite_types.h"
#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// connection.cpp
cpp11::external_pointer<DbConnectionPtr> connection_connect(const std::string& path, const bool allow_ext, const int flags, const std::string& vfs, bool with_alt_types);
extern "C" SEXP _RSQLite_connection_connect(SEXP path, SEXP allow_ext, SEXP flags, SEXP vfs, SEXP with_alt_types) {
  BEGIN_CPP11
    return cpp11::as_sexp(connection_connect(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(path), cpp11::as_cpp<cpp11::decay_t<const bool>>(allow_ext), cpp11::as_cpp<cpp11::decay_t<const int>>(flags), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(vfs), cpp11::as_cpp<cpp11::decay_t<bool>>(with_alt_types)));
  END_CPP11
}
// connection.cpp
bool connection_valid(cpp11::external_pointer<DbConnectionPtr> con_);
extern "C" SEXP _RSQLite_connection_valid(SEXP con_) {
  BEGIN_CPP11
    return cpp11::as_sexp(connection_valid(cpp11::as_cpp<cpp11::decay_t<cpp11::external_pointer<DbConnectionPtr>>>(con_)));
  END_CPP11
}
// connection.cpp
void connection_release(cpp11::external_pointer<DbConnectionPtr> con_);
extern "C" SEXP _RSQLite_connection_release(SEXP con_) {
  BEGIN_CPP11
    connection_release(cpp11::as_cpp<cpp11::decay_t<cpp11::external_pointer<DbConnectionPtr>>>(con_));
    return R_NilValue;
  END_CPP11
}
// connection.cpp
void connection_copy_database(const cpp11::external_pointer<DbConnectionPtr>& from, const cpp11::external_pointer<DbConnectionPtr>& to);
extern "C" SEXP _RSQLite_connection_copy_database(SEXP from, SEXP to) {
  BEGIN_CPP11
    connection_copy_database(cpp11::as_cpp<cpp11::decay_t<const cpp11::external_pointer<DbConnectionPtr>&>>(from), cpp11::as_cpp<cpp11::decay_t<const cpp11::external_pointer<DbConnectionPtr>&>>(to));
    return R_NilValue;
  END_CPP11
}
// connection.cpp
bool connection_import_file(const cpp11::external_pointer<DbConnectionPtr>& con, const std::string& name, const std::string& value, const std::string& sep, const std::string& eol, const int skip);
extern "C" SEXP _RSQLite_connection_import_file(SEXP con, SEXP name, SEXP value, SEXP sep, SEXP eol, SEXP skip) {
  BEGIN_CPP11
    return cpp11::as_sexp(connection_import_file(cpp11::as_cpp<cpp11::decay_t<const cpp11::external_pointer<DbConnectionPtr>&>>(con), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(name), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(value), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(sep), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(eol), cpp11::as_cpp<cpp11::decay_t<const int>>(skip)));
  END_CPP11
}
// connection.cpp
void set_busy_handler(const cpp11::external_pointer<DbConnectionPtr>& con, SEXP r_callback);
extern "C" SEXP _RSQLite_set_busy_handler(SEXP con, SEXP r_callback) {
  BEGIN_CPP11
    set_busy_handler(cpp11::as_cpp<cpp11::decay_t<const cpp11::external_pointer<DbConnectionPtr>&>>(con), cpp11::as_cpp<cpp11::decay_t<SEXP>>(r_callback));
    return R_NilValue;
  END_CPP11
}
// extensions.cpp
void extension_load(cpp11::external_pointer<DbConnectionPtr> con, const std::string& file, const std::string& entry_point);
extern "C" SEXP _RSQLite_extension_load(SEXP con, SEXP file, SEXP entry_point) {
  BEGIN_CPP11
    extension_load(cpp11::as_cpp<cpp11::decay_t<cpp11::external_pointer<DbConnectionPtr>>>(con), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(file), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(entry_point));
    return R_NilValue;
  END_CPP11
}
// result.cpp
cpp11::external_pointer<DbResult> result_create(cpp11::external_pointer<DbConnectionPtr> con, std::string sql);
extern "C" SEXP _RSQLite_result_create(SEXP con, SEXP sql) {
  BEGIN_CPP11
    return cpp11::as_sexp(result_create(cpp11::as_cpp<cpp11::decay_t<cpp11::external_pointer<DbConnectionPtr>>>(con), cpp11::as_cpp<cpp11::decay_t<std::string>>(sql)));
  END_CPP11
}
// result.cpp
void result_release(cpp11::external_pointer<DbResult> res);
extern "C" SEXP _RSQLite_result_release(SEXP res) {
  BEGIN_CPP11
    result_release(cpp11::as_cpp<cpp11::decay_t<cpp11::external_pointer<DbResult>>>(res));
    return R_NilValue;
  END_CPP11
}
// result.cpp
bool result_valid(cpp11::external_pointer<DbResult> res_);
extern "C" SEXP _RSQLite_result_valid(SEXP res_) {
  BEGIN_CPP11
    return cpp11::as_sexp(result_valid(cpp11::as_cpp<cpp11::decay_t<cpp11::external_pointer<DbResult>>>(res_)));
  END_CPP11
}
// result.cpp
cpp11::list result_fetch(DbResult* res, const int n);
extern "C" SEXP _RSQLite_result_fetch(SEXP res, SEXP n) {
  BEGIN_CPP11
    return cpp11::as_sexp(result_fetch(cpp11::as_cpp<cpp11::decay_t<DbResult*>>(res), cpp11::as_cpp<cpp11::decay_t<const int>>(n)));
  END_CPP11
}
// result.cpp
void result_bind(DbResult* res, cpp11::list params);
extern "C" SEXP _RSQLite_result_bind(SEXP res, SEXP params) {
  BEGIN_CPP11
    result_bind(cpp11::as_cpp<cpp11::decay_t<DbResult*>>(res), cpp11::as_cpp<cpp11::decay_t<cpp11::list>>(params));
    return R_NilValue;
  END_CPP11
}
// result.cpp
bool result_has_completed(DbResult* res);
extern "C" SEXP _RSQLite_result_has_completed(SEXP res) {
  BEGIN_CPP11
    return cpp11::as_sexp(result_has_completed(cpp11::as_cpp<cpp11::decay_t<DbResult*>>(res)));
  END_CPP11
}
// result.cpp
int result_rows_fetched(DbResult* res);
extern "C" SEXP _RSQLite_result_rows_fetched(SEXP res) {
  BEGIN_CPP11
    return cpp11::as_sexp(result_rows_fetched(cpp11::as_cpp<cpp11::decay_t<DbResult*>>(res)));
  END_CPP11
}
// result.cpp
int result_rows_affected(DbResult* res);
extern "C" SEXP _RSQLite_result_rows_affected(SEXP res) {
  BEGIN_CPP11
    return cpp11::as_sexp(result_rows_affected(cpp11::as_cpp<cpp11::decay_t<DbResult*>>(res)));
  END_CPP11
}
// result.cpp
cpp11::list result_column_info(DbResult* res);
extern "C" SEXP _RSQLite_result_column_info(SEXP res) {
  BEGIN_CPP11
    return cpp11::as_sexp(result_column_info(cpp11::as_cpp<cpp11::decay_t<DbResult*>>(res)));
  END_CPP11
}
// result.cpp
cpp11::strings result_get_placeholder_names(SqliteResult* res);
extern "C" SEXP _RSQLite_result_get_placeholder_names(SEXP res) {
  BEGIN_CPP11
    return cpp11::as_sexp(result_get_placeholder_names(cpp11::as_cpp<cpp11::decay_t<SqliteResult*>>(res)));
  END_CPP11
}
// rsqlite.cpp
cpp11::strings rsqliteVersion();
extern "C" SEXP _RSQLite_rsqliteVersion() {
  BEGIN_CPP11
    return cpp11::as_sexp(rsqliteVersion());
  END_CPP11
}
// rsqlite.cpp
void init_logging(const std::string& log_level);
extern "C" SEXP _RSQLite_init_logging(SEXP log_level) {
  BEGIN_CPP11
    init_logging(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(log_level));
    return R_NilValue;
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_RSQLite_connection_connect",           (DL_FUNC) &_RSQLite_connection_connect,           5},
    {"_RSQLite_connection_copy_database",     (DL_FUNC) &_RSQLite_connection_copy_database,     2},
    {"_RSQLite_connection_import_file",       (DL_FUNC) &_RSQLite_connection_import_file,       6},
    {"_RSQLite_connection_release",           (DL_FUNC) &_RSQLite_connection_release,           1},
    {"_RSQLite_connection_valid",             (DL_FUNC) &_RSQLite_connection_valid,             1},
    {"_RSQLite_extension_load",               (DL_FUNC) &_RSQLite_extension_load,               3},
    {"_RSQLite_init_logging",                 (DL_FUNC) &_RSQLite_init_logging,                 1},
    {"_RSQLite_result_bind",                  (DL_FUNC) &_RSQLite_result_bind,                  2},
    {"_RSQLite_result_column_info",           (DL_FUNC) &_RSQLite_result_column_info,           1},
    {"_RSQLite_result_create",                (DL_FUNC) &_RSQLite_result_create,                2},
    {"_RSQLite_result_fetch",                 (DL_FUNC) &_RSQLite_result_fetch,                 2},
    {"_RSQLite_result_get_placeholder_names", (DL_FUNC) &_RSQLite_result_get_placeholder_names, 1},
    {"_RSQLite_result_has_completed",         (DL_FUNC) &_RSQLite_result_has_completed,         1},
    {"_RSQLite_result_release",               (DL_FUNC) &_RSQLite_result_release,               1},
    {"_RSQLite_result_rows_affected",         (DL_FUNC) &_RSQLite_result_rows_affected,         1},
    {"_RSQLite_result_rows_fetched",          (DL_FUNC) &_RSQLite_result_rows_fetched,          1},
    {"_RSQLite_result_valid",                 (DL_FUNC) &_RSQLite_result_valid,                 1},
    {"_RSQLite_rsqliteVersion",               (DL_FUNC) &_RSQLite_rsqliteVersion,               0},
    {"_RSQLite_set_busy_handler",             (DL_FUNC) &_RSQLite_set_busy_handler,             2},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_RSQLite(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
#include <postgres.h>

#include <utils/builtins.h>

PG_MODULE_MAGIC;

PG_FUNCTION_INFO_V1(hello);
Datum hello(PG_FUNCTION_ARGS)
{
  PG_RETURN_TEXT_P(cstring_to_text("hello"));
}

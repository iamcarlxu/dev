#include "postgres.h"
#include "fmgr.h"
#include "utils/jsonb.h"
 
PG_MODULE_MAGIC;
 
Numeric *sum(Numeric, Numeric);
 
PG_FUNCTION_INFO_V1(ext_1);
 
Datum
ext_1(PG_FUNCTION_ARGS)
{
    Numeric elm1;
    Numeric elm2;
    Numeric res;

 
    elm1 = PG_GETARG_NUMERIC(0);
    elm2 = PG_GETARG_NUMERIC(1);
    res = elm1 + elm2;
 
    PG_RETURN_NUMERIC(res);
}

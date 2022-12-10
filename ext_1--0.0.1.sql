-- complain if script is sourced in psql, rather than via CREATE EXTENSION
\echo Use "CREATE EXTENSION ext_1" to load this file. \quit
CREATE FUNCTION ext_1(numeric, numeric) RETURNS numeric
AS '$libdir/ext_1'
LANGUAGE C IMMUTABLE CALLED ON NULL INPUT;
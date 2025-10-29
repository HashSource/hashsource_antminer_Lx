const char *__fastcall sub_18F50(const char *result, int a2)
{
  if ( yydebug )
  {
    _fprintf_chk(stderr, 1, "%s ", result);
    sub_18EA8(stderr, a2);
    return (const char *)fputc(10, stderr);
  }
  return result;
}

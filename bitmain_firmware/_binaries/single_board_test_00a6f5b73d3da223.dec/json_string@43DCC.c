_DWORD *__fastcall json_string(const char *a1)
{
  size_t v2; // r0

  if ( !a1 )
    return 0;
  v2 = strlen(a1);
  return json_stringn(a1, v2);
}

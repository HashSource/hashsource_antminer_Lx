int __fastcall get_work_by_key(const json_t *a1, const char *a2, unsigned __int8 *a3, int a4)
{
  char *s; // [sp+10h] [bp+10h] BYREF
  unsigned __int8 v8; // [sp+17h] [bp+17h]

  v8 = 0;
  s = 0;
  if ( a4 )
  {
    if ( get_key_value_string(a1, a2, (void **)&s) )
    {
      if ( strlen(s) == 2 * a4 && s2hex(a3, s, 2 * a4) == a4 )
        v8 = 1;
      free(s);
    }
  }
  else
  {
    return 1;
  }
  return v8;
}

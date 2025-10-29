void *__fastcall json_load_callback(int a1, int a2, unsigned int a3, json_error_t *a4)
{
  _DWORD s[260]; // [sp+10h] [bp+10h] BYREF
  _BYTE v11[76]; // [sp+420h] [bp+420h] BYREF
  void *v12; // [sp+46Ch] [bp+46Ch]

  memset(s, 0, sizeof(s));
  s[258] = a1;
  s[259] = a2;
  jsonp_error_init(a4, "<callback>");
  if ( a1 )
  {
    if ( lex_init((int)v11, 273821, a3, (int)s) )
    {
      return 0;
    }
    else
    {
      v12 = sub_42974((unsigned int)v11, a3, (int)a4);
      lex_close((lex_t *)v11);
      return v12;
    }
  }
  else
  {
    sub_4188C((int)a4, 0, 4, "wrong arguments");
    return 0;
  }
}

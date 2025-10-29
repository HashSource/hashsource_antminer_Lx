void *__fastcall json_loads(int a1, unsigned int a2, json_error_t *a3)
{
  _DWORD v8[2]; // [sp+10h] [bp+10h] BYREF
  _BYTE v9[76]; // [sp+18h] [bp+18h] BYREF
  void *v10; // [sp+64h] [bp+64h]

  jsonp_error_init(a3, "<string>");
  if ( a1 )
  {
    v8[0] = a1;
    v8[1] = 0;
    if ( lex_init((int)v9, 272933, a2, (int)v8) )
    {
      return 0;
    }
    else
    {
      v10 = sub_42974((unsigned int)v9, a2, (int)a3);
      lex_close((lex_t *)v9);
      return v10;
    }
  }
  else
  {
    sub_4188C((int)a3, 0, 4, "wrong arguments");
    return 0;
  }
}

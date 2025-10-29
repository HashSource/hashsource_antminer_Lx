void *__fastcall json_loadf(int a1, unsigned int a2, json_error_t *a3)
{
  _BYTE v8[72]; // [sp+10h] [bp+10h] BYREF
  void *v9; // [sp+58h] [bp+58h]
  const char *v10; // [sp+5Ch] [bp+5Ch]

  if ( a1 == stdin )
    v10 = "<stdin>";
  else
    v10 = "<stream>";
  jsonp_error_init(a3, v10);
  if ( a1 )
  {
    if ( lex_init((int)v8, (int)fgetc, a2, a1) )
    {
      return 0;
    }
    else
    {
      v9 = sub_42974((unsigned int)v8, a2, (int)a3);
      lex_close((lex_t *)v8);
      return v9;
    }
  }
  else
  {
    sub_4188C((int)a3, 0, 4, "wrong arguments");
    return 0;
  }
}

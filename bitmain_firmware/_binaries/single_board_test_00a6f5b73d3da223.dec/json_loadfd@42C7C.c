void *__fastcall json_loadfd(int a1, unsigned int a2, json_error_t *a3)
{
  int v7; // [sp+Ch] [bp+Ch] BYREF
  _BYTE v8[72]; // [sp+10h] [bp+10h] BYREF
  void *v9; // [sp+58h] [bp+58h]
  const char *v10; // [sp+5Ch] [bp+5Ch]

  v7 = a1;
  if ( a1 )
    v10 = "<stream>";
  else
    v10 = "<stdin>";
  jsonp_error_init(a3, v10);
  if ( v7 >= 0 )
  {
    if ( lex_init((int)v8, 273485, a2, (int)&v7) )
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

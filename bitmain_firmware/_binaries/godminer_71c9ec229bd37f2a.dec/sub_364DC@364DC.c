int sub_364DC(int result, _DWORD *a2, int a3, const char *a4, ...)
{
  int v4; // r6
  const char *v7; // r0
  int v8; // r8
  int v9; // r7
  int v10; // r9
  char *v11; // r3
  char s[160]; // [sp+18h] [bp-144h] BYREF
  char v13[159]; // [sp+B8h] [bp-A4h] BYREF
  char v14; // [sp+157h] [bp-5h]
  const char *varg_r3; // [sp+17Ch] [bp+20h]
  va_list arg; // [sp+180h] [bp+24h] BYREF

  va_start(arg, a4);
  varg_r3 = a4;
  v4 = result;
  if ( result )
  {
    vsnprintf(s, 0xA0u, varg_r3, arg);
    s[159] = 0;
    if ( a2 )
    {
      v7 = (const char *)strbuffer_value((int)(a2 + 10));
      v8 = a2[6];
      v9 = a2[7];
      v10 = a2[9];
      if ( v7 && *v7 )
      {
        if ( a2[11] <= 0x14u )
        {
          snprintf(v13, 0xA0u, "%s near '%s'", s, v7);
          v11 = v13;
          v14 = 0;
          return jsonp_error_set(v4, v8, v9, v10, a3, "%s", v11);
        }
      }
      else
      {
        if ( a3 == 8 )
          LOBYTE(a3) = 6;
        if ( a2[5] != -2 )
        {
          snprintf(v13, 0xA0u, "%s near end of file", s);
          v11 = v13;
          v14 = 0;
          return jsonp_error_set(v4, v8, v9, v10, a3, "%s", v11);
        }
      }
      v11 = s;
    }
    else
    {
      v9 = -1;
      v11 = s;
      v10 = 0;
      v8 = -1;
    }
    return jsonp_error_set(v4, v8, v9, v10, a3, "%s", v11);
  }
  return result;
}

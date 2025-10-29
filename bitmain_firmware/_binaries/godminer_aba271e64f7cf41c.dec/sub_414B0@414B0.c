json_t *__fastcall sub_414B0(_DWORD *a1, char a2, json_error_t *a3)
{
  int v4; // r3
  size_t n; // [sp+14h] [bp-10h]
  void *s; // [sp+18h] [bp-Ch]
  json_t *v10; // [sp+1Ch] [bp-8h]

  if ( ++a1[14] > 0x800u )
  {
    sub_3FAB8((int)a3, (int)a1, 2, "maximum parsing depth reached");
    return 0;
  }
  v4 = a1[15];
  if ( v4 == 257 )
  {
    v10 = (json_t *)json_integer(a1[16], a1[17]);
  }
  else if ( v4 > 257 )
  {
    if ( v4 == 259 )
    {
      v10 = json_true();
    }
    else if ( v4 < 259 )
    {
      v10 = (json_t *)json_real();
    }
    else if ( v4 == 260 )
    {
      v10 = (json_t *)json_false();
    }
    else
    {
      if ( v4 != 261 )
        goto LABEL_29;
      v10 = (json_t *)json_null();
    }
  }
  else if ( v4 == 91 )
  {
    v10 = sub_41388((int)a1, a2, a3);
  }
  else
  {
    if ( v4 <= 91 )
    {
      if ( v4 == -1 )
      {
        sub_3FAB8((int)a3, (int)a1, 8, "invalid token");
        return 0;
      }
LABEL_29:
      sub_3FAB8((int)a3, (int)a1, 8, "unexpected token");
      return 0;
    }
    if ( v4 == 123 )
    {
      v10 = sub_41124((int)a1, a2, a3);
    }
    else
    {
      if ( v4 != 256 )
        goto LABEL_29;
      s = (void *)a1[16];
      n = a1[17];
      if ( (a2 & 0x10) == 0 && memchr(s, 0, n) )
      {
        sub_3FAB8((int)a3, (int)a1, 11, "\\u0000 is not allowed without JSON_ALLOW_NUL");
        return 0;
      }
      v10 = jsonp_stringn_nocheck_own((const char *)s, n);
      a1[16] = 0;
      a1[17] = 0;
    }
  }
  if ( !v10 )
    return 0;
  --a1[14];
  return v10;
}

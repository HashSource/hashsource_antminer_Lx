void *__fastcall sub_427FC(double a1, json_error_t *a2)
{
  int v3; // r3
  _DWORD *v6; // [sp+Ch] [bp+Ch]
  size_t n; // [sp+14h] [bp+14h]
  void *s; // [sp+18h] [bp+18h]
  void *v9; // [sp+1Ch] [bp+1Ch]

  v6 = (_DWORD *)LODWORD(a1);
  if ( ++*(_DWORD *)(LODWORD(a1) + 56) > 0x800u )
  {
    sub_4188C((int)a2, (_DWORD *)LODWORD(a1), 2, "maximum parsing depth reached");
    return 0;
  }
  v3 = *(_DWORD *)(LODWORD(a1) + 60);
  if ( v3 == 257 )
  {
    v9 = (void *)json_integer(*(_DWORD *)(LODWORD(a1) + 64), *(_DWORD *)(LODWORD(a1) + 68));
  }
  else if ( v3 >= 258 )
  {
    if ( v3 == 259 )
    {
      v9 = json_true();
    }
    else if ( v3 <= 258 )
    {
      v9 = json_real(a1);
    }
    else if ( v3 == 260 )
    {
      v9 = json_false();
    }
    else
    {
      if ( v3 != 261 )
        goto LABEL_29;
      v9 = json_null();
    }
  }
  else if ( v3 == 91 )
  {
    v9 = sub_42750(LODWORD(a1), HIDWORD(a1), a2);
  }
  else
  {
    if ( v3 <= 91 )
    {
      if ( v3 == -1 )
      {
        sub_4188C((int)a2, (_DWORD *)LODWORD(a1), 8, "invalid token");
        return 0;
      }
LABEL_29:
      sub_4188C((int)a2, (_DWORD *)LODWORD(a1), 8, "unexpected token");
      return 0;
    }
    if ( v3 == 123 )
    {
      v9 = sub_425D4(LODWORD(a1), HIDWORD(a1), a2);
    }
    else
    {
      if ( v3 != 256 )
        goto LABEL_29;
      s = *(void **)(LODWORD(a1) + 64);
      n = *(_DWORD *)(LODWORD(a1) + 68);
      if ( (BYTE4(a1) & 0x10) == 0 && memchr(s, 0, n) )
      {
        sub_4188C((int)a2, v6, 11, "\\u0000 is not allowed without JSON_ALLOW_NUL");
        return 0;
      }
      v9 = jsonp_stringn_nocheck_own((const char *)s, n);
      v6[16] = 0;
      v6[17] = 0;
    }
  }
  if ( !v9 )
    return 0;
  --v6[14];
  return v9;
}

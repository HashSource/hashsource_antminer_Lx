json_t *__fastcall sub_425D4(unsigned int a1, unsigned int a2, json_error_t *a3)
{
  size_t n; // [sp+10h] [bp+10h] BYREF
  json_t *v9; // [sp+14h] [bp+14h]
  void *s; // [sp+18h] [bp+18h]
  json_t *v11; // [sp+1Ch] [bp+1Ch]

  v11 = (json_t *)json_object();
  if ( !v11 )
    return 0;
  lex_scan((lex_t *)a1, a3);
  if ( *(_DWORD *)(a1 + 60) == 125 )
    return v11;
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 60) != 256 )
    {
      sub_4188C((int)a3, (_DWORD *)a1, 8, "string or '}' expected");
      goto LABEL_24;
    }
    s = lex_steal_string((lex_t *)a1, &n);
    if ( !s )
      return 0;
    if ( memchr(s, 0, n) )
    {
      jsonp_free(s);
      sub_4188C((int)a3, (_DWORD *)a1, 13, "NUL byte in object key not supported");
      goto LABEL_24;
    }
    if ( (a2 & 1) != 0 && json_object_get(v11, (const char *)s) )
    {
      jsonp_free(s);
      sub_4188C((int)a3, (_DWORD *)a1, 14, "duplicate object key");
      goto LABEL_24;
    }
    lex_scan((lex_t *)a1, a3);
    if ( *(_DWORD *)(a1 + 60) != 58 )
    {
      jsonp_free(s);
      sub_4188C((int)a3, (_DWORD *)a1, 8, "':' expected");
      goto LABEL_24;
    }
    lex_scan((lex_t *)a1, a3);
    v9 = (json_t *)sub_427FC(COERCE_DOUBLE(__PAIR64__(a2, a1)), a3);
    if ( !v9 || json_object_set_new_nocheck(v11, (const char *)s, v9) )
    {
      jsonp_free(s);
      goto LABEL_24;
    }
    jsonp_free(s);
    lex_scan((lex_t *)a1, a3);
    if ( *(_DWORD *)(a1 + 60) != 44 )
      break;
    lex_scan((lex_t *)a1, a3);
  }
  if ( *(_DWORD *)(a1 + 60) == 125 )
    return v11;
  sub_4188C((int)a3, (_DWORD *)a1, 8, "'}' expected");
LABEL_24:
  sub_41848((int)v11);
  return 0;
}

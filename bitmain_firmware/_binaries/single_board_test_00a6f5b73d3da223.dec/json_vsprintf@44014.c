_DWORD *__fastcall json_vsprintf(const char *a1, void *a2)
{
  char *s; // [sp+Ch] [bp+Ch]
  size_t v6; // [sp+10h] [bp+10h]
  int v7; // [sp+14h] [bp+14h]

  v7 = 0;
  v6 = vsnprintf(0, 0, a1, a2);
  if ( !v6 )
    return json_string(byte_1B4D34);
  s = (char *)jsonp_malloc(v6 + 1);
  if ( s )
  {
    vsnprintf(s, v6 + 1, a1, a2);
    if ( utf8_check_string((int)s, v6) )
      return jsonp_stringn_nocheck_own(s, v6);
    else
      jsonp_free(s);
  }
  return (_DWORD *)v7;
}

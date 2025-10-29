json_t *__fastcall sub_42750(unsigned int a1, unsigned int a2, json_error_t *a3)
{
  json_t *v8; // [sp+10h] [bp+10h]
  json_t *v9; // [sp+14h] [bp+14h]

  v9 = (json_t *)json_array();
  if ( !v9 )
    return 0;
  lex_scan((lex_t *)a1, a3);
  if ( *(_DWORD *)(a1 + 60) == 93 )
    return v9;
  while ( *(_DWORD *)(a1 + 60) )
  {
    v8 = (json_t *)sub_427FC(COERCE_DOUBLE(__PAIR64__(a2, a1)), a3);
    if ( !v8 || json_array_append_new(v9, v8) )
      goto LABEL_13;
    lex_scan((lex_t *)a1, a3);
    if ( *(_DWORD *)(a1 + 60) != 44 )
      break;
    lex_scan((lex_t *)a1, a3);
  }
  if ( *(_DWORD *)(a1 + 60) == 93 )
    return v9;
  sub_4188C((int)a3, (_DWORD *)a1, 8, "']' expected");
LABEL_13:
  sub_41848((int)v9);
  return 0;
}

json_t *__fastcall sub_41388(int a1, char a2, json_error_t *a3)
{
  json_t *v8; // [sp+10h] [bp-Ch]
  json_t *v9; // [sp+14h] [bp-8h]

  v9 = (json_t *)json_array();
  if ( !v9 )
    return 0;
  lex_scan((lex_t *)a1, a3);
  if ( *(_DWORD *)(a1 + 60) == 93 )
    return v9;
  while ( *(_DWORD *)(a1 + 60) )
  {
    v8 = sub_414B0(a1, a2, a3);
    if ( !v8 || json_array_append_new(v9, v8) )
      goto LABEL_13;
    lex_scan((lex_t *)a1, a3);
    if ( *(_DWORD *)(a1 + 60) != 44 )
      break;
    lex_scan((lex_t *)a1, a3);
  }
  if ( *(_DWORD *)(a1 + 60) == 93 )
    return v9;
  sub_3FAB8((int)a3, a1, 8, "']' expected");
LABEL_13:
  sub_3FA50((int)v9);
  return 0;
}

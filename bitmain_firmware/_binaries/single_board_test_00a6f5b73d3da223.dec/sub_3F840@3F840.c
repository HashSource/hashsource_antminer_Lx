json_t *__fastcall sub_3F840(unsigned int a1, unsigned int a2)
{
  json_t *v6; // [sp+Ch] [bp+Ch]
  char v7; // [sp+13h] [bp+13h]
  json_t *v8; // [sp+14h] [bp+14h]

  v8 = (json_t *)json_array();
  sub_3F2C8((_DWORD *)a1);
  while ( *(_BYTE *)(a1 + 36) != 93 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      sub_3F404((int *)a1, "<format>", 9, "Unexpected end of format string");
      goto LABEL_17;
    }
    sub_3F2C8((_DWORD *)a1);
    v7 = *(_BYTE *)(a1 + 36);
    sub_3F3D0((_DWORD *)a1);
    v6 = (json_t *)sub_3FB38(COERCE_DOUBLE(__PAIR64__(a2, a1)));
    if ( v6 )
    {
      if ( *(_DWORD *)(a1 + 76) )
        sub_3F210((int)v6);
      if ( !*(_DWORD *)(a1 + 76) && json_array_append_new(v8, v6) )
      {
        sub_3F404((int *)a1, "<internal>", 1, "Unable to append to array");
        *(_DWORD *)(a1 + 76) = 1;
      }
    }
    else if ( v7 != 42 )
    {
      *(_DWORD *)(a1 + 76) = 1;
    }
    sub_3F2C8((_DWORD *)a1);
  }
  if ( !*(_DWORD *)(a1 + 76) )
    return v8;
LABEL_17:
  sub_3F210((int)v8);
  return 0;
}

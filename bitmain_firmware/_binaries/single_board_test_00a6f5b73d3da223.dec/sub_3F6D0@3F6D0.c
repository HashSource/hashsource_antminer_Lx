json_t *__fastcall sub_3F6D0(unsigned int a1, char ***a2)
{
  int v6; // [sp+10h] [bp+8h] BYREF
  size_t v7; // [sp+14h] [bp+Ch] BYREF
  json_t *v8; // [sp+18h] [bp+10h]
  char v9; // [sp+1Fh] [bp+17h]
  char *v10; // [sp+20h] [bp+18h]
  json_t *v11; // [sp+24h] [bp+1Ch]

  v11 = (json_t *)json_object();
  sub_3F2C8((_DWORD *)a1);
  while ( *(_BYTE *)(a1 + 36) != 125 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      sub_3F404((int *)a1, "<format>", 9, "Unexpected end of format string");
      goto LABEL_23;
    }
    if ( *(_BYTE *)(a1 + 36) != 115 )
    {
      sub_3F404((int *)a1, "<format>", 9, "Expected format 's', got '%c'");
      goto LABEL_23;
    }
    v10 = sub_3F454(a1, a2, (int)"object key", &v7, &v6, 0);
    sub_3F2C8((_DWORD *)a1);
    sub_3F2C8((_DWORD *)a1);
    v9 = *(_BYTE *)(a1 + 36);
    sub_3F3D0((_DWORD *)a1);
    v8 = (json_t *)sub_3FB38(COERCE_DOUBLE(__PAIR64__((unsigned int)a2, a1)));
    if ( v8 )
    {
      if ( *(_DWORD *)(a1 + 76) )
        sub_3F210((int)v8);
      if ( !*(_DWORD *)(a1 + 76) && json_object_set_new_nocheck(v11, v10, v8) )
      {
        sub_3F404((int *)a1, "<internal>", 1, "Unable to add key \"%s\"");
        *(_DWORD *)(a1 + 76) = 1;
      }
      if ( v6 )
        jsonp_free(v10);
    }
    else
    {
      if ( v6 )
        jsonp_free(v10);
      if ( v9 != 42 )
      {
        sub_3F404((int *)a1, "<args>", 12, "NULL object value");
        *(_DWORD *)(a1 + 76) = 1;
      }
    }
    sub_3F2C8((_DWORD *)a1);
  }
  if ( !*(_DWORD *)(a1 + 76) )
    return v11;
LABEL_23:
  sub_3F210((int)v11);
  return 0;
}

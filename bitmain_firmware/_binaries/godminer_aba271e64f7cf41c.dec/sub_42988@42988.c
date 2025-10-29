json_t *__fastcall sub_42988(int a1, char ***a2)
{
  int v6; // [sp+10h] [bp-1Ch] BYREF
  size_t v7; // [sp+14h] [bp-18h] BYREF
  json_t *v8; // [sp+18h] [bp-14h]
  char v9; // [sp+1Fh] [bp-Dh]
  char *v10; // [sp+20h] [bp-Ch]
  json_t *v11; // [sp+24h] [bp-8h]

  v11 = (json_t *)json_object();
  sub_422CC((_DWORD *)a1);
  while ( *(_BYTE *)(a1 + 36) != 125 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      sub_4250C((int *)a1, "<format>", 9, "Unexpected end of format string");
      goto LABEL_23;
    }
    if ( *(_BYTE *)(a1 + 36) != 115 )
    {
      sub_4250C((int *)a1, "<format>", 9, "Expected format 's', got '%c'", *(unsigned __int8 *)(a1 + 36));
      goto LABEL_23;
    }
    v10 = sub_42598(a1, a2, "object key", &v7, &v6, 0);
    sub_422CC((_DWORD *)a1);
    sub_422CC((_DWORD *)a1);
    v9 = *(_BYTE *)(a1 + 36);
    sub_424BC((_DWORD *)a1);
    v8 = sub_43068(a1, (int **)a2);
    if ( v8 )
    {
      if ( *(_DWORD *)(a1 + 76) )
        sub_42190((int)v8);
      if ( !*(_DWORD *)(a1 + 76) && json_object_set_new_nocheck(v11, v10, v8) )
      {
        sub_4250C((int *)a1, "<internal>", 1, "Unable to add key \"%s\"", v10);
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
        sub_4250C((int *)a1, "<args>", 12, "NULL object value");
        *(_DWORD *)(a1 + 76) = 1;
      }
    }
    sub_422CC((_DWORD *)a1);
  }
  if ( !*(_DWORD *)(a1 + 76) )
    return v11;
LABEL_23:
  sub_42190((int)v11);
  return 0;
}

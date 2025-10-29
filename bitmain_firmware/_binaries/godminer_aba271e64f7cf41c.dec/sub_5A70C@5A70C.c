int __fastcall sub_5A70C(int a1, __int64 *a2)
{
  __int64 v6; // [sp+8h] [bp-E4h] BYREF
  char v7[64]; // [sp+10h] [bp-DCh] BYREF
  _BYTE v8[80]; // [sp+50h] [bp-9Ch] BYREF
  int v9; // [sp+A0h] [bp-4Ch]
  _BYTE v10[32]; // [sp+A4h] [bp-48h] BYREF
  _DWORD v11[8]; // [sp+C4h] [bp-28h] BYREF
  size_t *v12; // [sp+E4h] [bp-8h]

  v12 = (size_t *)*((_DWORD *)a2 + 283);
  if ( v12 )
  {
    v6 = *a2;
    strcpy(v7, *((const char **)a2 + 281));
    memcpy(v8, a2 + 1, sizeof(v8));
    v9 = target_to_diff_ltc((int)(a2 + 129));
    memcpy(v10, a2 + 129, sizeof(v10));
    memcpy(v11, v12 + 1, *v12);
    v11[4] = *v12;
    v11[5] = *((_DWORD *)a2 + 275);
    (*(void (__fastcall **)(int, __int64 *))(a1 + 32))(a1, &v6);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}

_DWORD *__fastcall find_c_rb(int a1, int a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r7
  _DWORD *v6; // r3
  int v7; // r5
  void *ptr; // [sp+4h] [bp-4h] BYREF

  v3 = (_DWORD *)(a1 + 4);
  v2 = *(_DWORD **)a1;
  if ( *(_DWORD *)a1 == a1 + 4 )
    return 0;
  while ( 1 )
  {
    get_raw_clib_object(v2[4], &ptr);
    v7 = (*(int (__fastcall **)(int, void *))(a1 + 36))(a2, ptr);
    free(ptr);
    if ( !v7 )
      break;
    v6 = (_DWORD *)*v2;
    v2 = (_DWORD *)v2[1];
    if ( v7 < 0 )
      v2 = v6;
    if ( v2 == v3 )
      return 0;
  }
  return v2;
}

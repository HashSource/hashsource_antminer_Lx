int __fastcall pcba_read_ckb_temperature(
        int a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v13; // [sp+24h] [bp+14h] BYREF
  int v14; // [sp+28h] [bp+18h] BYREF
  int v15; // [sp+2Ch] [bp+1Ch] BYREF
  int v16; // [sp+30h] [bp+20h] BYREF
  _DWORD *v17; // [sp+34h] [bp+24h]
  _DWORD *v18; // [sp+38h] [bp+28h]
  int i; // [sp+3Ch] [bp+2Ch]

  v18 = *(_DWORD **)(a1 + 212);
  *a2 = -150;
  *a3 = 150;
  *a4 = -150;
  *a5 = 150;
  for ( i = 0; v18[1] > i; ++i )
  {
    v17 = (_DWORD *)(20 * i + *v18);
    v14 = 0;
    (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 100))(
      a1,
      &v16,
      &v14,
      *v17,
      v17[1],
      v17[2],
      v17[3],
      v17[4]);
    if ( v14 )
    {
      ++*a6;
      if ( *a2 < v16 )
        *a2 = v16;
      if ( *a3 > v16 )
        *a3 = v16;
    }
    v13 = 0;
    (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 104))(
      a1,
      &v15,
      &v13,
      *v17,
      v17[1],
      v17[2],
      v17[3],
      v17[4]);
    if ( v13 )
    {
      ++*a7;
      if ( *a4 < v15 )
        *a4 = v15;
      if ( *a5 > v15 )
        *a5 = v15;
    }
  }
  if ( *a6 == v18[1] && *a7 == v18[1] )
    return 0;
  else
    return -1;
}

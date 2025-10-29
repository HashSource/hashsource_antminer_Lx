int __fastcall sub_6F9F0(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v10; // [sp+24h] [bp+14h] BYREF
  _BYTE v11[4072]; // [sp+28h] [bp+18h] BYREF
  struct timeval v12; // [sp+1028h] [bp+1018h] BYREF
  struct timeval tv; // [sp+1030h] [bp+1020h] BYREF
  _DWORD *v14; // [sp+1038h] [bp+1028h]
  int v15; // [sp+103Ch] [bp+102Ch]
  int v16; // [sp+1040h] [bp+1030h]
  int v17; // [sp+1044h] [bp+1034h]
  __int64 v18; // [sp+1048h] [bp+1038h]
  void (__fastcall **v19)(_DWORD); // [sp+1054h] [bp+1044h]
  int k; // [sp+1058h] [bp+1048h]
  int j; // [sp+105Ch] [bp+104Ch]
  int i; // [sp+1060h] [bp+1050h]
  int v23; // [sp+1064h] [bp+1054h]

  v10 = a1;
  v23 = 0;
  gettimeofday(&tv, 0);
  v19 = (void (__fastcall **)(_DWORD))new_graph29(29, 21);
  (*((void (__fastcall **)(void (__fastcall *)(_DWORD), int, int, int *, int, int, int, _DWORD))v19[23] + 18))(
    v19[23],
    v10,
    a2,
    &v10,
    a5,
    a6,
    25,
    0);
  for ( i = 0; a4 / 4 > i; ++i )
  {
    v18 = ((__int64 (__fastcall *)(void (__fastcall **)(_DWORD), _DWORD))v19[29])(v19, a3[i]);
    v17 = a3[i] & 1;
    v16 = v17 | (2 * (v18 & 0xFFFFFFF));
    v15 = v17 | (2 * (HIDWORD(v18) & 0xFFFFFFF));
    ((void (__fastcall *)(void (__fastcall **)(_DWORD), int, int))v19[27])(v19, v16, v15);
  }
  v14 = (_DWORD *)((int (__fastcall *)(_DWORD))v19[28])(v19);
  if ( v14 )
  {
    for ( j = 0; *v14 > j; ++j )
    {
      for ( k = 0; k <= 41; ++k )
        a3[k] = a3[*(_DWORD *)(4 * k + v14[1] + 172 * j + 4)];
      qsort(a3, 0x2Au, 4u, (__compar_fn_t)sub_6F9D0);
      v23 = *(_DWORD *)(172 * j + v14[1]);
    }
  }
  else
  {
    v23 = 0;
  }
  free_graph29(v19);
  gettimeofday(&v12, 0);
  V_LOCK();
  logfmt_raw(
    v11,
    0x1000u,
    0,
    "%s, nsols: %d, time: %ld us",
    "findcycle_grin29",
    *v14,
    1000000 * v12.tv_sec + v12.tv_usec - 1000000 * tv.tv_sec - tv.tv_usec);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_grin29/backend_grin29.c",
    89,
    "findcycle_grin29",
    16,
    408,
    20,
    v11);
  return v23;
}

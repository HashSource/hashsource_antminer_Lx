int __fastcall sub_504B0(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v10; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v11[28]; // [sp+24h] [bp+14h] BYREF
  struct timeval v12; // [sp+1024h] [bp+1014h] BYREF
  struct timeval v13; // [sp+102Ch] [bp+101Ch] BYREF
  _DWORD *v14; // [sp+1034h] [bp+1024h]
  __int64 v15; // [sp+1038h] [bp+1028h]
  __int64 v16; // [sp+1040h] [bp+1030h]
  void (__fastcall **v17)(_DWORD); // [sp+104Ch] [bp+103Ch]
  int k; // [sp+1050h] [bp+1040h]
  int j; // [sp+1054h] [bp+1044h]
  int i; // [sp+1058h] [bp+1048h]
  int v21; // [sp+105Ch] [bp+104Ch]

  v10 = a1;
  v21 = 0;
  gettimeofday(&v13, 0);
  v17 = (void (__fastcall **)(_DWORD))new_graph32(32, 25);
  (*((void (__fastcall **)(void (__fastcall *)(_DWORD), int, int, int *, int, int, int, _DWORD))v17[23] + 18))(
    v17[23],
    v10,
    a2,
    &v10,
    a5,
    a6,
    21,
    0);
  for ( i = 0; a4 / 4 > i; ++i )
  {
    v16 = ((__int64 (__fastcall *)(void (__fastcall **)(_DWORD), _DWORD, _DWORD))v17[29])(v17, a3[i], 0);
    v15 = ((__int64 (__fastcall *)(void (__fastcall **)(_DWORD), _DWORD, int))v17[29])(v17, a3[i], 1);
    ((void (__fastcall *)(void (__fastcall **)(_DWORD), _DWORD, _DWORD))v17[27])(v17, v15, v16);
  }
  v14 = (_DWORD *)((int (__fastcall *)(_DWORD))v17[28])(v17);
  if ( v14 )
  {
    for ( j = 0; *v14 > j; ++j )
    {
      for ( k = 0; k <= 41; ++k )
        a3[k] = a3[*(_DWORD *)(4 * k + v14[1] + 172 * j + 4)];
      qsort(a3, 0x2Au, 4u, (__compar_fn_t)sub_50490);
      v21 = *(_DWORD *)(172 * j + v14[1]);
    }
  }
  else
  {
    v21 = 0;
  }
  free_graph32(v17);
  gettimeofday(&v12, 0);
  V_LOCK();
  logfmt_raw(
    v11,
    0x1000u,
    0,
    "%s, nsols: %d, time: %ld us",
    "findcycle_grin32",
    *v14,
    1000000 * v12.tv_sec + v12.tv_usec - 1000000 * v13.tv_sec - v13.tv_usec);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_grin32/backend_grin32.c",
    89,
    "findcycle_grin32",
    16,
    378,
    20,
    v11);
  return v21;
}

int __fastcall chip_setting_check_bist_ltc(int a1, unsigned __int8 a2, int a3, int a4, _BOOL4 *a5)
{
  int v5; // r3
  char v6; // r3
  int v7; // r2
  int v9; // [sp+4h] [bp-2Ch]
  _BYTE v14[20]; // [sp+44h] [bp+14h] BYREF
  int v15; // [sp+1044h] [bp+1014h] BYREF
  _WORD v16[8]; // [sp+1048h] [bp+1018h] BYREF
  _DWORD v17[7]; // [sp+1058h] [bp+1028h] BYREF
  int v18; // [sp+1074h] [bp+1044h]
  unsigned int v19; // [sp+107Ch] [bp+104Ch]
  unsigned __int8 *v20; // [sp+1080h] [bp+1050h]
  int v21; // [sp+1084h] [bp+1054h]
  int j; // [sp+1088h] [bp+1058h]
  int i; // [sp+108Ch] [bp+105Ch]
  int v24; // [sp+1090h] [bp+1060h]
  _BOOL4 v25; // [sp+1094h] [bp+1064h]

  v15 = 0;
  if ( a2 )
    v5 = *(_DWORD *)(a1 + 196);
  else
    v5 = 1;
  v21 = v5;
  v24 = 0;
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "check bist result, chip_all %d chip_no %d core %d ", a2, a3, a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
    88,
    "chip_setting_check_bist_ltc",
    27,
    186,
    20,
    v14);
  v20 = (unsigned __int8 *)malloc(12 * v21);
  memset(v20, 0, 12 * v21);
  memset(a5, 0, 4 * v21);
  memset(v16, 0, sizeof(v16));
  LOBYTE(v16[4]) = a2;
  if ( a2 )
    v6 = 0;
  else
    v6 = *(_BYTE *)(a3 + *(_DWORD *)(a1 + 296));
  HIBYTE(v16[4]) = v6;
  HIBYTE(v16[7]) = a4;
  LOBYTE(v16[7]) = 0;
  HIBYTE(v16[6]) = *(_DWORD *)(a1 + 200);
  LOBYTE(v16[6]) = a4;
  v16[5] = 6;
  (*(void (__fastcall **)(int, _WORD *, int, unsigned __int8 *, int *, int, int, _DWORD))(a1 + 184))(
    a1,
    v16,
    v21,
    v20,
    &v15,
    v9,
    2000,
    0);
  for ( i = 0; i < v15; ++i )
  {
    v19 = (unsigned int)v20[12 * i + 4] / *(_DWORD *)(a1 + 240);
    v25 = *(_WORD *)&v20[12 * i + 6] == 6 && (*(_DWORD *)&v20[12 * i] & 0x1000000) != 0;
    if ( a2 )
      a5[v19] = v25;
    else
      *a5 = v25;
  }
  if ( v15 < v21 )
  {
    V_LOCK();
    sub_DF6A0((int)v17, *(int *)(a1 + 140));
    logfmt_raw(
      v14,
      0x1000u,
      0,
      v18,
      v17[0],
      v17[1],
      v17[2],
      v17[3],
      v17[4],
      v17[5],
      v17[6],
      v18,
      "detected core %d get check bist results less than expect num(%d < %d)",
      a4,
      v15,
      v21);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
      88,
      "chip_setting_check_bist_ltc",
      27,
      220,
      80,
      v14);
    for ( j = 0; j < v21; ++j )
    {
      if ( !a5[j] )
      {
        v24 = -1;
        V_LOCK();
        if ( a2 )
          v7 = j;
        else
          v7 = a3;
        logfmt_raw(v14, 0x1000u, 0, "chip %d core %d check bist failed", v7, a4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
          88,
          "chip_setting_check_bist_ltc",
          27,
          225,
          80,
          v14);
      }
    }
  }
  free(v20);
  return v24;
}

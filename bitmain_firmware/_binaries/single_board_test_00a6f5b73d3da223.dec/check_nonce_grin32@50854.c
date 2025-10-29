int __fastcall check_nonce_grin32(int a1, int a2)
{
  unsigned int *v3; // r2
  unsigned int v4; // r4
  int v6; // [sp+24h] [bp-1Ch]
  _BYTE v9[24]; // [sp+48h] [bp+8h] BYREF
  unsigned __int64 v10; // [sp+1048h] [bp+1008h] BYREF
  _QWORD v11[4]; // [sp+1050h] [bp+1010h] BYREF
  _BYTE v12[168]; // [sp+1070h] [bp+1030h] BYREF
  _BYTE v13[248]; // [sp+1118h] [bp+10D8h] BYREF
  _DWORD v14[7]; // [sp+1210h] [bp+11D0h] BYREF
  int v15; // [sp+122Ch] [bp+11ECh]
  _DWORD v16[7]; // [sp+1230h] [bp+11F0h] BYREF
  int v17; // [sp+124Ch] [bp+120Ch]
  unsigned int v18; // [sp+1250h] [bp+1210h]
  int v19; // [sp+1254h] [bp+1214h]
  unsigned int v20; // [sp+125Ch] [bp+121Ch]
  unsigned int v21; // [sp+1260h] [bp+1220h]
  int v22; // [sp+1264h] [bp+1224h]
  unsigned int v23; // [sp+1268h] [bp+1228h]
  unsigned __int8 v24; // [sp+126Fh] [bp+122Fh]
  int v25; // [sp+1270h] [bp+1230h]
  int v26; // [sp+1274h] [bp+1234h]
  unsigned int j; // [sp+1278h] [bp+1238h]
  unsigned int i; // [sp+127Ch] [bp+123Ch]

  memset(v13, 0, 0xF6u);
  v26 = a2;
  v25 = *(_DWORD *)(a1 + 624);
  memcpy(v13, (const void *)(246 * *(unsigned __int8 *)(a2 + 16) + 4096 + v25), 0xF6u);
  v24 = sub_504B0(
          (int)v13,
          246,
          (_DWORD *)(v26 + 35),
          *(unsigned __int16 *)(v26 + 33),
          *(_DWORD *)(v26 + 25),
          *(_DWORD *)(v26 + 29));
  V_LOCK();
  sub_4BC3C((int)v14, *(int *)(a1 + 140));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    "nonce %llx wc %d sols_len %d cycle len (%d/42)",
    v6,
    *(_DWORD *)(v26 + 25),
    *(_DWORD *)(v26 + 29),
    *(unsigned __int8 *)(v26 + 16),
    *(unsigned __int16 *)(v26 + 33),
    v24);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_grin32/backend_grin32.c",
    89,
    "check_nonce_grin32",
    18,
    392,
    20,
    v9);
  if ( v24 == 42 )
  {
    memset(v11, 0, sizeof(v11));
    memset(v12, 0, sizeof(v12));
    v23 = 32;
    v22 = -1;
    for ( i = 0; i <= 0x29; ++i )
    {
      v21 = v22 & *(_DWORD *)(4 * (i + 8) + v26 + 3);
      for ( j = 0; j < v23; ++j )
      {
        v20 = j + v23 * i;
        if ( ((v21 >> j) & 1) != 0 )
          v12[v20 >> 3] |= 1 << (v20 & 7);
      }
    }
    blake2b(v11, (int)v12, 0xA8u);
    v10 = v11[0];
    sub_4BE84(&v10, (int)&v10, v11[0], SHIDWORD(v11[0]));
    v3 = (unsigned int *)(v25 + 8 * (*(unsigned __int8 *)(v26 + 16) + 384));
    v4 = v3[1];
    v18 = *v3;
    v19 = v4;
    if ( __PAIR64__(v4, v18) >= v10 )
    {
      return 0;
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v9,
        0x1000u,
        0,
        "nonce %016llx hw target (%016llx:%016llx) not reach pool",
        *(_DWORD *)(v26 + 25),
        *(_DWORD *)(v26 + 29),
        v10,
        v18,
        v19);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_grin32/backend_grin32.c",
        89,
        "check_nonce_grin32",
        18,
        420,
        20,
        v9);
      return 1;
    }
  }
  else
  {
    V_LOCK();
    sub_4BC3C((int)v16, *(int *)(a1 + 140));
    logfmt_raw(
      v9,
      0x1000u,
      0,
      v17,
      v16[0],
      v16[1],
      v16[2],
      v16[3],
      v16[4],
      v16[5],
      v16[6],
      v17,
      "wc %d error_nonce",
      *(unsigned __int8 *)(v26 + 16));
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_grin32/backend_grin32.c",
      89,
      "check_nonce_grin32",
      18,
      394,
      20,
      v9);
    return 2;
  }
}

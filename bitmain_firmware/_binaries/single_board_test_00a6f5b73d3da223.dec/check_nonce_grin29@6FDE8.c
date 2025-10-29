int __fastcall check_nonce_grin29(int a1, int a2)
{
  unsigned int *v3; // r2
  unsigned int v4; // r4
  int v6; // [sp+24h] [bp-1Ch]
  _BYTE v9[16]; // [sp+48h] [bp+8h] BYREF
  unsigned __int64 v10; // [sp+1048h] [bp+1008h] BYREF
  _QWORD v11[4]; // [sp+1050h] [bp+1010h] BYREF
  _BYTE v12[156]; // [sp+1074h] [bp+1034h] BYREF
  _BYTE v13[248]; // [sp+1110h] [bp+10D0h] BYREF
  _DWORD v14[7]; // [sp+1208h] [bp+11C8h] BYREF
  int v15; // [sp+1224h] [bp+11E4h]
  _DWORD v16[7]; // [sp+1228h] [bp+11E8h] BYREF
  int v17; // [sp+1244h] [bp+1204h]
  unsigned int v18; // [sp+1248h] [bp+1208h]
  int v19; // [sp+124Ch] [bp+120Ch]
  unsigned int v20; // [sp+1254h] [bp+1214h]
  unsigned int v21; // [sp+1258h] [bp+1218h]
  int v22; // [sp+125Ch] [bp+121Ch]
  unsigned int v23; // [sp+1260h] [bp+1220h]
  unsigned __int8 v24; // [sp+1267h] [bp+1227h]
  int v25; // [sp+1268h] [bp+1228h]
  int v26; // [sp+126Ch] [bp+122Ch]
  unsigned int j; // [sp+1270h] [bp+1230h]
  unsigned int i; // [sp+1274h] [bp+1234h]

  memset(v13, 0, 0xF6u);
  v26 = a2;
  v25 = *(_DWORD *)(a1 + 624);
  memcpy(v13, (const void *)(246 * *(unsigned __int8 *)(a2 + 16) + 4352 + v25), 0xF6u);
  v24 = sub_6F9F0(
          (int)v13,
          246,
          (_DWORD *)(v26 + 35),
          *(unsigned __int16 *)(v26 + 33),
          *(_DWORD *)(v26 + 25),
          *(_DWORD *)(v26 + 29));
  V_LOCK();
  sub_6AFD4((int)v14, *(int *)(a1 + 140));
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
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_grin29/backend_grin29.c",
    89,
    "check_nonce_grin29",
    18,
    434,
    20,
    v9);
  if ( v24 == 42 )
  {
    memset(v11, 0, sizeof(v11));
    memset(v12, 0, 0x99u);
    v23 = 29;
    v22 = 0x1FFFFFFF;
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
    blake2b(v11, (int)v12, 0x99u);
    v10 = v11[0];
    sub_6B21C(&v10, (int)&v10, v11[0], SHIDWORD(v11[0]));
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
        "nonce %016llx hw target (%016llx:%016llx) not reach pool\n",
        *(_DWORD *)(v26 + 25),
        *(_DWORD *)(v26 + 29),
        v10,
        v18,
        v19);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_grin29/backend_grin29.c",
        89,
        "check_nonce_grin29",
        18,
        462,
        20,
        v9);
      return 1;
    }
  }
  else
  {
    V_LOCK();
    sub_6AFD4((int)v16, *(int *)(a1 + 140));
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
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_grin29/backend_grin29.c",
      89,
      "check_nonce_grin29",
      18,
      436,
      20,
      v9);
    return 2;
  }
}

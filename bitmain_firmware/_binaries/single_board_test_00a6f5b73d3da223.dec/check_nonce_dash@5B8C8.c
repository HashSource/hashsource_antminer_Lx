int __fastcall check_nonce_dash(int a1, unsigned __int8 *a2)
{
  _BYTE v5[8]; // [sp+38h] [bp+8h] BYREF
  _BYTE v6[24]; // [sp+1038h] [bp+1008h] BYREF
  _BYTE v7[80]; // [sp+1058h] [bp+1028h] BYREF
  _DWORD v8[7]; // [sp+10A8h] [bp+1078h] BYREF
  int v9; // [sp+10C4h] [bp+1094h]
  unsigned __int8 v10; // [sp+10CFh] [bp+109Fh]
  unsigned int v11; // [sp+10D0h] [bp+10A0h]
  int v12; // [sp+10D4h] [bp+10A4h]
  unsigned __int8 *v13; // [sp+10D8h] [bp+10A8h]
  int i; // [sp+10DCh] [bp+10ACh]

  v13 = a2;
  V_LOCK();
  sub_563D4((int)v8, *(int *)(a1 + 140));
  logfmt_raw(
    v5,
    0x1000u,
    0,
    v9,
    v8[0],
    v8[1],
    v8[2],
    v8[3],
    v8[4],
    v8[5],
    v8[6],
    v9,
    "nonce %llx back wc %d",
    *((_DWORD *)v13 + 12),
    v13[53]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
    85,
    "check_nonce_dash",
    16,
    617,
    20,
    v5);
  v12 = *(_DWORD *)(a1 + 624);
  v11 = *(_DWORD *)(v12 + 4 * (v13[53] + 3840));
  memcpy(v13 + 54, (const void *)(12 * v13[53] + 19968 + v12), 8u);
  memcpy(v7, (const void *)(v12 + 80 * v13[53] + 5120), sizeof(v7));
  for ( i = 0; i <= 19; ++i )
  {
    v7[4 * i + 3] = *(_BYTE *)(80 * v13[53] + v12 + 4 * i + 5120);
    v7[4 * i + 2] = *(_BYTE *)(80 * v13[53] + v12 + 4 * i + 1 + 5120);
    v7[4 * i + 1] = *(_BYTE *)(80 * v13[53] + v12 + 4 * i + 2 + 5120);
    v7[4 * i] = *(_BYTE *)(80 * v13[53] + v12 + 4 * i + 3 + 5120);
  }
  memcpy(&v7[76], v13 + 48, 4u);
  Xhash(v6, v7);
  v10 = target_to_diff_dash((int)v6);
  if ( v10 > 0x22u )
  {
    if ( v10 == v13[52] )
    {
      if ( v13[52] < v11 || (unsigned __int8)sub_5B854((int)v6, v12 + 32 * (v13[53] + 496)) != 1 )
      {
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v13[52], v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
          85,
          "check_nonce_dash",
          16,
          661,
          20,
          v5);
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v10, v13[52], v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
        85,
        "check_nonce_dash",
        16,
        647,
        20,
        v5);
      return 3;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "hw error calculate diff %d ans diff %d TICKET_MASK_DASH %d", v10, v13[52], 35);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
      85,
      "check_nonce_dash",
      16,
      638,
      20,
      v5);
    if ( (unsigned __int8)++*(_BYTE *)(a1 + 308) % 0x3E8u )
      return 6;
    else
      return 2;
  }
}

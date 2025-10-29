int __fastcall check_nonce_ckb2(int a1, unsigned __int8 *a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r6
  _DWORD *v4; // lr
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v10; // [sp+Ch] [bp-4h]
  _BYTE v13[4088]; // [sp+18h] [bp+8h] BYREF
  _BYTE v14[24]; // [sp+1018h] [bp+1008h] BYREF
  _BYTE v15[24]; // [sp+1038h] [bp+1028h] BYREF
  _BYTE v16[16]; // [sp+1058h] [bp+1048h] BYREF
  unsigned __int8 v17; // [sp+106Bh] [bp+105Bh]
  unsigned int v18; // [sp+106Ch] [bp+105Ch]
  int v19; // [sp+1070h] [bp+1060h]
  unsigned __int8 *v20; // [sp+1074h] [bp+1064h]

  v20 = a2;
  v19 = *(_DWORD *)(a1 + 624);
  v18 = *(_DWORD *)(v19 + 4 * (a2[65] + 2816));
  v2 = (_DWORD *)(48 * a2[65] + 5120 + v19);
  v3 = v15;
  v4 = v2 + 12;
  do
  {
    v5 = v2[1];
    v6 = v2[2];
    v7 = v2[3];
    *v3 = *v2;
    v3[1] = v5;
    v3[2] = v6;
    v3[3] = v7;
    v2 += 4;
    v3 += 4;
  }
  while ( v2 != v4 );
  memcpy(v16, v20 + 48, sizeof(v16));
  EaglesongHash((int)v14, (int)v15, 0x30u);
  v17 = target_to_diff_ckb((int)v14);
  if ( v17 > 0x18u )
  {
    if ( v17 == v20[64] )
    {
      if ( v20[64] < v18 || (unsigned __int8)sub_662C8((int)v14, v19 + 32 * (v20[65] + 368)) != 1 )
      {
        V_LOCK();
        logfmt_raw(v13, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v20[64], v18);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb2/backend_ckb2.c",
          85,
          "check_nonce_ckb2",
          16,
          328,
          20,
          v13);
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
      logfmt_raw(v13, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v17, v20[64], v18, v10, a2, a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb2/backend_ckb2.c",
        85,
        "check_nonce_ckb2",
        16,
        323,
        20,
        v13);
      return 3;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(
      v13,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_CKB2 %d",
      v17,
      v20[64],
      25,
      v10,
      a2,
      a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb2/backend_ckb2.c",
      85,
      "check_nonce_ckb2",
      16,
      318,
      20,
      v13);
    return 2;
  }
}

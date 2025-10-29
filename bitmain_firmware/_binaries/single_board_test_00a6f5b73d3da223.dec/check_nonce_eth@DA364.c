int __fastcall check_nonce_eth(int a1, int a2)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v18; // [sp+Ch] [bp-4h]
  _BYTE v21[20]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v22[8]; // [sp+101Ch] [bp+100Ch] BYREF
  _BYTE v23[12]; // [sp+1024h] [bp+1014h] BYREF
  _DWORD v24[8]; // [sp+1044h] [bp+1034h] BYREF
  _DWORD v25[8]; // [sp+1064h] [bp+1054h] BYREF
  unsigned __int8 v26; // [sp+1085h] [bp+1075h]
  unsigned __int8 v27; // [sp+1086h] [bp+1076h]
  char v28; // [sp+1087h] [bp+1077h]
  int v29; // [sp+1088h] [bp+1078h]
  int v30; // [sp+108Ch] [bp+107Ch]

  v30 = a2;
  v29 = *(_DWORD *)(a1 + 624);
  v28 = *(_BYTE *)(a2 + 16);
  v2 = (_DWORD *)(a2 + 34);
  v3 = *(_DWORD *)(a2 + 34);
  v4 = *(_DWORD *)(a2 + 38);
  v5 = v2[2];
  v6 = v2[3];
  v25[0] = v3;
  v25[1] = v4;
  v25[2] = v5;
  v25[3] = v6;
  v7 = v2[5];
  v8 = v2[6];
  v9 = v2[7];
  v25[4] = v2[4];
  v25[5] = v7;
  v25[6] = v8;
  v25[7] = v9;
  v10 = *(_DWORD *)(v30 + 102);
  v11 = *(_DWORD *)(v30 + 106);
  v12 = *(_DWORD *)(v30 + 110);
  v24[0] = *(_DWORD *)(v30 + 98);
  v24[1] = v10;
  v24[2] = v11;
  v24[3] = v12;
  v13 = *(_DWORD *)(v30 + 118);
  v14 = *(_DWORD *)(v30 + 122);
  v15 = *(_DWORD *)(v30 + 126);
  v24[4] = *(_DWORD *)(v30 + 114);
  v24[5] = v13;
  v24[6] = v14;
  v24[7] = v15;
  memcpy(v22, (const void *)(v30 + 26), sizeof(v22));
  sub_7565C(v25, v22, v24, (int)v23);
  v27 = target_to_diff_eth((int)v23);
  v26 = *(_BYTE *)(v29 + *(unsigned __int8 *)(v30 + 16) + 34816);
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "check_nonce_eth, diff:%d", v27);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_nonce_eth",
    15,
    12704,
    20,
    v21);
  if ( v27 > 0x1Cu )
  {
    if ( v27 >= (unsigned int)v26 )
    {
      return 0;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v27, v26);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "check_nonce_eth",
        15,
        12739,
        20,
        v21);
      return 1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(
      v21,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_ETH %d",
      v27,
      *(unsigned __int8 *)(v30 + 17),
      29,
      v18,
      a2,
      a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "check_nonce_eth",
      15,
      12734,
      20,
      v21);
    return 2;
  }
}

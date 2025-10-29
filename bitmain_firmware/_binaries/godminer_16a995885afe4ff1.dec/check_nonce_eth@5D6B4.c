int __fastcall check_nonce_eth(int a1, int a2)
{
  _DWORD *v2; // r7
  int v3; // r5
  int v5; // t1
  int v6; // r1
  unsigned int v7; // r9
  unsigned int v8; // r5
  int v10; // [sp+10h] [bp+0h]
  int v11; // [sp+14h] [bp+4h]
  int v12; // [sp+18h] [bp+8h]
  int v13; // [sp+1Ch] [bp+Ch]
  int v14; // [sp+20h] [bp+10h]
  int v15; // [sp+24h] [bp+14h]
  int v16; // [sp+28h] [bp+18h]
  int v17; // [sp+2Ch] [bp+1Ch]
  int v18; // [sp+30h] [bp+20h]
  int v19; // [sp+34h] [bp+24h]
  int v20; // [sp+38h] [bp+28h]
  int v21; // [sp+3Ch] [bp+2Ch]
  int v22; // [sp+40h] [bp+30h]
  int v23; // [sp+44h] [bp+34h]
  int v24; // [sp+48h] [bp+38h]
  int v25; // [sp+4Ch] [bp+3Ch]
  int v26; // [sp+50h] [bp+40h]
  int v27; // [sp+54h] [bp+44h]
  _BYTE v28[32]; // [sp+58h] [bp+48h] BYREF
  _DWORD v29[1025]; // [sp+78h] [bp+68h] BYREF

  v3 = *(_DWORD *)(a1 + 624);
  v12 = *(_DWORD *)(a2 + 34);
  v13 = *(_DWORD *)(a2 + 38);
  v14 = *(_DWORD *)(a2 + 42);
  v15 = *(_DWORD *)(a2 + 46);
  v16 = *(_DWORD *)(a2 + 50);
  v17 = *(_DWORD *)(a2 + 54);
  v18 = *(_DWORD *)(a2 + 58);
  v19 = *(_DWORD *)(a2 + 62);
  v20 = *(_DWORD *)(a2 + 98);
  v21 = *(_DWORD *)(a2 + 102);
  v22 = *(_DWORD *)(a2 + 106);
  v23 = *(_DWORD *)(a2 + 110);
  v24 = *(_DWORD *)(a2 + 114);
  v25 = *(_DWORD *)(a2 + 118);
  v26 = *(_DWORD *)(a2 + 122);
  v27 = *(_DWORD *)(a2 + 126);
  v5 = *(_DWORD *)(a2 + 26);
  v6 = *(_DWORD *)(a2 + 30);
  *v2 = v5;
  v2[1] = v6;
  v29[0] = v12;
  v29[1] = v13;
  v29[2] = v14;
  v29[3] = v15;
  v29[4] = v16;
  v29[5] = v17;
  v29[6] = v18;
  v29[7] = v19;
  v29[8] = v10;
  v29[9] = v11;
  eth_sha3_512((int)v29, 0x40u, (int)v29, 0x28u);
  v29[16] = v20;
  v29[17] = v21;
  v29[18] = v22;
  v29[19] = v23;
  v29[20] = v24;
  v29[21] = v25;
  v29[22] = v26;
  v29[23] = v27;
  eth_sha3_256((int)v28, 0x20u, (int)v29, 0x60u);
  v7 = target_to_diff_eth(v28);
  v8 = *(unsigned __int8 *)(v3 + *(unsigned __int8 *)(a2 + 16) + 34816);
  V_LOCK();
  logfmt_raw((char *)v29, 0x1000u, 0, "check_nonce_eth, diff:%d", v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "check_nonce_eth",
    15,
    12482,
    20,
    v29);
  if ( v7 <= 0x1C )
  {
    V_LOCK();
    logfmt_raw(
      (char *)v29,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_ETH %d",
      v7,
      *(unsigned __int8 *)(a2 + 17),
      29);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_eth/backend_eth.c",
      169,
      "check_nonce_eth",
      15,
      12512,
      20,
      v29);
    return 2;
  }
  else if ( v7 < v8 )
  {
    V_LOCK();
    logfmt_raw((char *)v29, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v7, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_eth/backend_eth.c",
      169,
      "check_nonce_eth",
      15,
      12517,
      20,
      v29);
    return 1;
  }
  else
  {
    return 0;
  }
}

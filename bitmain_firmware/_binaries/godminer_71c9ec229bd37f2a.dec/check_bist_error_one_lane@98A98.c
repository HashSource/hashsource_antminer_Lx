int __fastcall check_bist_error_one_lane(int a1, int a2, unsigned int a3, int a4)
{
  __int16 v6; // r10
  int back; // r0
  int v8; // r10
  unsigned __int8 *v9; // r4
  int v10; // r6
  int v11; // r3
  int v12; // r6
  int v13; // r6
  int v14; // r3
  int v15; // r6
  int v16; // r6
  int v17; // r2
  unsigned __int8 *v18; // r6
  int v19; // r8
  int v20; // r9
  int v21; // r0
  int v22; // r2
  int v23; // r0
  _BYTE *v24; // r0
  _BYTE *v25; // r3
  _DWORD *v26; // r1
  unsigned int v27; // r2
  int v28; // r0
  int *v29; // r6
  int v30; // t1
  int v31; // r8
  int v32; // r0
  int v33; // t1
  int *v37; // [sp+30h] [bp-115Ch]
  __int16 v38; // [sp+34h] [bp-1158h]
  int v40; // [sp+44h] [bp-1148h]
  _DWORD v41[7]; // [sp+48h] [bp-1144h] BYREF
  _DWORD v42[9]; // [sp+64h] [bp-1128h] BYREF
  _BYTE v43[64]; // [sp+88h] [bp-1104h] BYREF
  _BYTE v44[64]; // [sp+C8h] [bp-10C4h] BYREF
  _BYTE v45[128]; // [sp+108h] [bp-1084h] BYREF
  char v46[4100]; // [sp+188h] [bp-1004h] BYREF

  v6 = a4;
  V_LOCK();
  V_INT((int)v41, "chain", *(int *)(a1 + 148));
  logfmt_raw(
    v46,
    0x1000u,
    0,
    v42[0],
    v41[0],
    v41[1],
    v41[2],
    v41[3],
    v41[4],
    v41[5],
    v41[6],
    v42[0],
    "%s...",
    "check_bist_error_one_lane");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_error_one_lane",
    25,
    9070,
    60,
    v46);
  v38 = v6 << 12;
  back = serdes_apb_read_back(a1, a2, a3, (unsigned __int16)(v6 << 12) | 0x10, (int)v43);
  if ( *(_DWORD *)(a1 + 244) != back )
  {
    v8 = back;
    V_LOCK();
    logfmt_raw(
      v46,
      0x1000u,
      0,
      "%s d'16 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      v8,
      *(_DWORD *)(a1 + 244));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_bist_error_one_lane",
      25,
      9078,
      100,
      v46);
  }
  v9 = v44;
  v10 = serdes_apb_read_back(a1, a2, a3, v38 & 0xF000 | 0x13, (int)v44);
  if ( *(_DWORD *)(a1 + 244) != v10 )
  {
    V_LOCK();
    logfmt_raw(
      v46,
      0x1000u,
      0,
      "%s d'19 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      v10,
      *(_DWORD *)(a1 + 244));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_bist_error_one_lane",
      25,
      9084,
      100,
      v46);
  }
  if ( v10 > 0 )
  {
    v11 = 4;
    v12 = 8 * v10 + 4;
    do
    {
      *(_DWORD *)&v45[v11 + 64] = *(_DWORD *)&v44[v11] >> 28;
      v11 += 8;
    }
    while ( v11 != v12 );
  }
  v13 = serdes_apb_read_back(a1, a2, a3, v38 & 0xF000 | 0x14, (int)v44);
  if ( *(_DWORD *)(a1 + 244) != v13 )
  {
    V_LOCK();
    logfmt_raw(
      v46,
      0x1000u,
      0,
      "%s d'19 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      v13,
      *(_DWORD *)(a1 + 244));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_bist_error_one_lane",
      25,
      9090,
      100,
      v46);
  }
  if ( v13 > 0 )
  {
    v14 = 4;
    v15 = 8 * v13 + 4;
    do
    {
      *(_DWORD *)&v45[v14 + 64] |= 16 * *(_DWORD *)&v44[v14];
      v14 += 8;
    }
    while ( v14 != v15 );
  }
  v16 = serdes_apb_read_back(a1, a2, a3, v38 & 0xF000 | 0x15, (int)v45);
  if ( *(_DWORD *)(a1 + 244) != v16 )
  {
    V_LOCK();
    logfmt_raw(
      v46,
      0x1000u,
      0,
      "%s d'19 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      v16,
      *(_DWORD *)(a1 + 244));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_bist_error_one_lane",
      25,
      9096,
      100,
      v46);
  }
  if ( v16 > 0 )
  {
    v40 = a1;
    v17 = 8 * v16 + 4;
    v18 = v43;
    v19 = 4;
    v20 = v17;
    do
    {
      if ( (*((_DWORD *)v18 + 1) & 0xE000000) != 0 )
      {
        V_LOCK();
        logfmt_raw(
          v46,
          0x1000u,
          0,
          "channel %1x, chip_id %02x core_id %02x bist err(%02x) cnt %08x %08x",
          a4,
          *v18,
          v18[1],
          (*((_DWORD *)v18 + 1) >> 25) & 7,
          *(_DWORD *)&v45[v19],
          *(_DWORD *)&v45[v19 + 64]);
        V_UNLOCK();
        v21 = g_zc;
        v22 = 9101;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v46, 0x1000u, 0, "channel %1x, chip_id %02x core_id %02x bist ok", a4, *v18, v18[1]);
        V_UNLOCK();
        v21 = g_zc;
        v22 = 9104;
      }
      v19 += 8;
      zlog(
        v21,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "check_bist_error_one_lane",
        25,
        v22,
        60,
        v46);
      v18 += 8;
    }
    while ( v19 != v20 );
    a1 = v40;
  }
  memset(&v42[1], 0, 0x20u);
  v23 = serdes_apb_read_back(a1, a2, a3, v38 & 0xF000 | 0x16, (int)v44);
  if ( v23 > 0 )
  {
    v24 = &v44[8 * v23];
    v25 = v44;
    v26 = v42;
    do
    {
      v27 = *((_DWORD *)v25 + 1);
      v25 += 8;
      v26[1] = v27 >> 12;
      ++v26;
    }
    while ( v25 != v24 );
  }
  v28 = serdes_apb_read_back(a1, a2, a3, v38 & 0xF000 | 0x17, (int)v44);
  if ( v28 > 0 )
  {
    v29 = v42;
    v37 = &v42[v28];
    do
    {
      v30 = v29[1];
      ++v29;
      v31 = v30 | (*((_DWORD *)v9 + 1) << 20);
      *v29 = v31;
      V_LOCK();
      v32 = v9[1];
      v33 = *v9;
      v9 += 8;
      logfmt_raw(v46, 0x1000u, 0, "channel %1x, chip_id %02x core_id %02x sample_cnt %08x", a4, v33, v32, v31);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "check_bist_error_one_lane",
        25,
        9116,
        60,
        v46);
    }
    while ( v37 != v29 );
  }
  return 0;
}

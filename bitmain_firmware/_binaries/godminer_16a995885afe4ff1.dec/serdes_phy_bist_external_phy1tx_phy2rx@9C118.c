int __fastcall serdes_phy_bist_external_phy1tx_phy2rx(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  int v12; // r10
  int v13; // r9
  int v14; // r9
  const char *v15; // r8
  unsigned __int8 *v16; // r10
  unsigned __int8 v17; // r2
  unsigned __int8 v18; // t1
  unsigned int v20; // r3
  unsigned __int8 v21; // r2
  unsigned __int8 v22; // r3
  unsigned __int8 *i; // r9
  unsigned __int8 v24; // t1
  int v26; // [sp+30h] [bp-103Ch]
  int v27; // [sp+3Ch] [bp-1030h]
  int v28; // [sp+40h] [bp-102Ch]
  _DWORD v29[7]; // [sp+48h] [bp-1024h] BYREF
  int v30; // [sp+64h] [bp-1008h]
  int v31; // [sp+68h] [bp-1004h] BYREF
  char v32; // [sp+6Ch] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v29, "chain", *(int *)(a1 + 140));
  v12 = 61458;
  logfmt_raw(
    (char *)&v31,
    0x1000u,
    0,
    v30,
    v29[0],
    v29[1],
    v29[2],
    v29[3],
    v29[4],
    v29[5],
    v29[6],
    v30,
    "%s...",
    "serdes_phy_bist_external_phy1tx_phy2rx");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "serdes_phy_bist_external_phy1tx_phy2rx",
    38,
    10425,
    60,
    &v31);
  v13 = 61441;
  if ( a3 != 8 )
  {
    v13 = 1;
    v12 = 18;
  }
  sub_5C8F0(
    a1,
    a6,
    97,
    (a4 << 28) & 0x70000000
  | (a4 << 24) & 0x7000000
  | a4 & 7
  | (a4 << 20) & 0x700000
  | (a4 << 16) & 0x70000
  | ((_WORD)a4 << 12) & 0x7000
  | ((_WORD)a4 << 8) & 0x700
  | (16 * a4) & 0x70);
  sub_5E03C(a1, a7, v13, -15);
  sub_5E03C(a1, a7, v12, (2 * (_BYTE)a4) & 0xE);
  sub_5E03C(a1, a7, v13, 0);
  if ( a5 )
  {
    v20 = a5 >> 1;
    if ( a5 >> 1 )
    {
      v21 = 0;
      do
      {
        v20 >>= 1;
        ++v21;
      }
      while ( v20 );
      v14 = v21;
      v27 = v21;
    }
    else
    {
      v27 = 0;
      v14 = 0;
    }
  }
  else
  {
    v27 = 1;
    v14 = 1;
  }
  V_LOCK();
  if ( a4 )
    v15 = "prbs";
  else
    v15 = "clock";
  logfmt_raw((char *)&v31, 0x1000u, 0, "test %d %s...", v14, v15);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "serdes_phy_bist_external_phy1tx_phy2rx",
    38,
    10449,
    60,
    &v31);
  switch ( a5 )
  {
    case 2u:
      div2_seq_one_lane(a1, a2, a6, a8);
      div2_seq_one_lane(a1, a2, a6, a8);
      break;
    case 4u:
      div4_seq_one_lane(a1, a2, a6, a8);
      div4_seq_one_lane(a1, a2, a6, a8);
      break;
    case 8u:
      div8_seq_one_lane(a1, a2, a6, a8);
      div8_seq_one_lane(a1, a2, a6, a8);
      break;
    default:
      V_LOCK();
      logfmt_raw((char *)&v31, 0x1000u, 0, "do not set div_seq with testcase 4");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/backend_eth/backend_eth.c",
        169,
        "serdes_phy_bist_external_phy1tx_phy2rx",
        38,
        10464,
        60,
        &v31);
      break;
  }
  v31 = 336529925;
  v16 = (unsigned __int8 *)&v31 + 1;
  sub_5C8F0(a1, a6, 98, 1 << a8);
  v17 = 5;
  v28 = (unsigned __int16)(a9 << 12) | 0x91;
  v26 = (unsigned __int16)(a9 << 12) | 0x77;
  while ( 1 )
  {
    enable_rxbist_autostop_one_lane(a1, a2, a7, a9, v17);
    read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a6, a8);
    read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a7, a9);
    sub_5E03C(a1, a7, (unsigned __int16)(a9 << 12) | 1, -9);
    sub_5E03C(a1, a7, (unsigned __int16)(a9 << 12) | 0x91, 8);
    sub_5E03C(a1, a7, (unsigned __int16)(a9 << 12) | 1, -1073741825);
    sub_5E03C(a1, a7, v26, 0x40000000);
    sub_5E03C(a1, a7, (unsigned __int16)(a9 << 12) | 1, 0);
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running_one_lane(a1, a2, a6, a8);
    check_bist_rx_running_one_lane(a1, a2, a7, a9);
    usleep(0x493E0u);
    sub_5E03C(a1, a7, (unsigned __int16)(a9 << 12) | 1, -9);
    sub_5E03C(a1, a7, (unsigned __int16)(a9 << 12) | 0x91, 0);
    sub_5E03C(a1, a7, (unsigned __int16)(a9 << 12) | 1, 0);
    check_ref_clock_ready(a1, a2, a6);
    check_bist_done_one_lane(a1, a2, a6, a9);
    check_ref_clock_ready(a1, a2, a7);
    check_bist_done_one_lane(a1, a2, a7, a9);
    check_bist_error_one_lane(a1, a2, a7, a9);
    if ( &v32 == (char *)v16 )
      break;
    v18 = *v16++;
    v17 = v18;
  }
  if ( v27 == 4 )
  {
    enable_rx_equalizer_tuning_one_lane(a1, a2, a7, a9);
    v22 = 5;
    for ( i = (unsigned __int8 *)&v31 + 1; ; ++i )
    {
      enable_rxbist_autostop_one_lane(a1, a2, a7, a9, v22);
      read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a6, a8);
      read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a7, a9);
      sub_5E03C(a1, a7, (unsigned __int16)(a9 << 12) | 1, -9);
      sub_5E03C(a1, a7, v28, 8);
      sub_5E03C(a1, a7, (unsigned __int16)(a9 << 12) | 1, -1073741825);
      sub_5E03C(a1, a7, v26, 0x40000000);
      sub_5E03C(a1, a7, (unsigned __int16)(a9 << 12) | 1, 0);
      usleep((__useconds_t)&loc_F4240);
      check_bist_tx_running_one_lane(a1, a2, a6, a8);
      check_bist_rx_running_one_lane(a1, a2, a7, a9);
      usleep(0x493E0u);
      sub_5E03C(a1, a7, (unsigned __int16)(a9 << 12) | 1, -9);
      sub_5E03C(a1, a7, v28, 0);
      sub_5E03C(a1, a7, (unsigned __int16)(a9 << 12) | 1, 0);
      check_ref_clock_ready(a1, a2, a6);
      check_bist_done_one_lane(a1, a2, a6, a9);
      check_ref_clock_ready(a1, a2, a7);
      check_bist_done_one_lane(a1, a2, a7, a9);
      check_bist_error_one_lane(a1, a2, a7, a9);
      if ( i == v16 )
        break;
      v24 = *i;
      v22 = v24;
    }
  }
  sub_5C8F0(a1, a6, 98, 0);
  return 0;
}

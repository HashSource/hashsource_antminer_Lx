int __fastcall serdes_phy_bist_external_0811_all_lane(
        int a1,
        int a2,
        _BYTE *a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  int v10; // r11
  int v11; // r12
  int v12; // r8
  int v13; // r10
  int v14; // r11
  const char *v15; // r9
  unsigned __int8 *v16; // r9
  unsigned __int8 i; // r3
  unsigned __int8 v18; // t1
  unsigned int v20; // r3
  unsigned __int8 v21; // r2
  unsigned __int8 v22; // r3
  unsigned __int8 *j; // r11
  unsigned __int8 v24; // t1
  int v25; // [sp+28h] [bp-1034h]
  int v26; // [sp+30h] [bp-102Ch]
  _DWORD v27[7]; // [sp+38h] [bp-1024h] BYREF
  int v28; // [sp+54h] [bp-1008h]
  int v29; // [sp+58h] [bp-1004h] BYREF
  char v30; // [sp+5Ch] [bp-1000h]
  char v31; // [sp+5Dh] [bp-FFFh] BYREF

  V_LOCK();
  V_INT((int)v27, "chain", *(int *)(a1 + 140));
  v10 = 61458;
  logfmt_raw(
    (char *)&v29,
    0x1000u,
    0,
    v28,
    v27[0],
    v27[1],
    v27[2],
    v27[3],
    v27[4],
    v27[5],
    v27[6],
    v28,
    "%s...",
    "serdes_phy_bist_external_0811_all_lane");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_0811_all_lane",
    38,
    10290,
    60,
    &v29);
  v11 = 61559;
  v12 = 61441;
  if ( a4 != 8 )
  {
    v11 = 119;
    v12 = 1;
    v10 = 18;
  }
  v25 = v11;
  v13 = 61585;
  if ( a4 != 8 )
    v13 = 145;
  sub_5BD68(
    a1,
    (unsigned __int8)a3,
    97,
    (a5 << 28) & 0x70000000
  | (a5 << 24) & 0x7000000
  | a5 & 7
  | (a5 << 20) & 0x700000
  | (a5 << 16) & 0x70000
  | (a5 << 12) & 0x7000
  | (a5 << 8) & 0x700
  | (16 * a5) & 0x70);
  sub_5D4B4(a1, (unsigned __int8)a3, v12, -15);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, (2 * a5) & 0xE);
  sub_5D4B4(a1, (unsigned __int8)a3, v12, 0);
  if ( a6 )
  {
    v20 = a6 >> 1;
    if ( a6 >> 1 )
    {
      v21 = 0;
      do
      {
        v20 >>= 1;
        ++v21;
      }
      while ( v20 );
      v14 = v21;
      v26 = v21;
    }
    else
    {
      v26 = 0;
      v14 = 0;
    }
  }
  else
  {
    v26 = 1;
    v14 = 1;
  }
  V_LOCK();
  if ( a5 )
    v15 = "prbs";
  else
    v15 = "clock";
  logfmt_raw((char *)&v29, 0x1000u, 0, "test %d %s...", v14, v15);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_0811_all_lane",
    38,
    10312,
    60,
    &v29);
  switch ( a6 )
  {
    case 2u:
      div2_seq(a1, a2, (int)a3, a4);
      break;
    case 4u:
      div4_seq(a1, a2, (int)a3, a4);
      break;
    case 8u:
      div8_seq_one_lane(a1, a2, (int)a3, a4);
      break;
    case 0x20u:
      div32_20210813_500M_one_lane(a1, a2, (int)a3, a4);
      break;
    default:
      V_LOCK();
      logfmt_raw((char *)&v29, 0x1000u, 0, "do not set div_seq with testcase 4");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "serdes_phy_bist_external_0811_all_lane",
        38,
        10323,
        60,
        &v29);
      break;
  }
  v29 = 336529925;
  v16 = (unsigned __int8 *)&v29 + 1;
  v30 = 28;
  sub_5BD68(a1, (unsigned __int8)a3, 98, 255);
  for ( i = 5; ; i = v18 )
  {
    enable_rxbist_autostop(a1, a2, (unsigned __int8)a3, a4, i);
    read_rx_debug_reg2_one_lane(a1, a2, a3, a4);
    sub_5D4B4(a1, (unsigned __int8)a3, v12, -9);
    sub_5D4B4(a1, (unsigned __int8)a3, v13, 8);
    sub_5D4B4(a1, (unsigned __int8)a3, v12, -1073741825);
    sub_5D4B4(a1, (unsigned __int8)a3, v25, 0x40000000);
    sub_5D4B4(a1, (unsigned __int8)a3, v12, 0);
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running(a1, a2, a3, a4);
    check_bist_rx_running(a1, a2, (int)a3, a4);
    usleep(0x493E0u);
    sub_5D4B4(a1, (unsigned __int8)a3, v12, -9);
    sub_5D4B4(a1, (unsigned __int8)a3, v13, 0);
    sub_5D4B4(a1, (unsigned __int8)a3, v12, 0);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done(a1, a2, a3, a4);
    check_bist_done(a1, a2, a3, a4);
    check_bist_error(a1, a2, (int)a3, a4);
    if ( &v31 == (char *)v16 )
      break;
    v18 = *v16++;
  }
  if ( v26 == 4 )
  {
    enable_rx_equalizer_tuning(a1, a2, a3, a4);
    v22 = 5;
    for ( j = (unsigned __int8 *)&v29 + 1; ; ++j )
    {
      enable_rxbist_autostop(a1, a2, (unsigned __int8)a3, a4, v22);
      read_rx_debug_reg2_one_lane(a1, a2, a3, a4);
      sub_5D4B4(a1, (unsigned __int8)a3, v12, -9);
      sub_5D4B4(a1, (unsigned __int8)a3, v13, 8);
      sub_5D4B4(a1, (unsigned __int8)a3, v12, -1073741825);
      sub_5D4B4(a1, (unsigned __int8)a3, v25, 0x40000000);
      sub_5D4B4(a1, (unsigned __int8)a3, v12, 0);
      usleep((__useconds_t)&loc_F4240);
      check_bist_tx_running(a1, a2, a3, a4);
      check_bist_rx_running(a1, a2, (int)a3, a4);
      usleep(0x493E0u);
      sub_5D4B4(a1, (unsigned __int8)a3, v12, -9);
      sub_5D4B4(a1, (unsigned __int8)a3, v13, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v12, 0);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done(a1, a2, a3, a4);
      check_bist_done(a1, a2, a3, a4);
      check_bist_error(a1, a2, (int)a3, a4);
      if ( j == v16 )
        break;
      v24 = *j;
      v22 = v24;
    }
  }
  sub_5BD68(a1, (unsigned __int8)a3, 98, 0);
  return 0;
}

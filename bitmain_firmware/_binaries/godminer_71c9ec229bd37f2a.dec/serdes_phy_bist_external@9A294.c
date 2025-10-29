int __fastcall serdes_phy_bist_external(int a1, int a2, _BYTE *a3, int a4, unsigned __int8 a5, int a6)
{
  __int16 v9; // r12
  int v10; // r9
  int v11; // r10
  const char *v12; // r7
  unsigned __int8 *v13; // r9
  unsigned __int8 i; // r3
  unsigned __int8 v15; // t1
  int v16; // r8
  int v17; // r7
  unsigned __int8 *v19; // r10
  unsigned __int8 j; // r3
  unsigned __int8 v21; // t1
  __int16 v23; // [sp+2Ch] [bp-1028h]
  _DWORD v24[7]; // [sp+30h] [bp-1024h] BYREF
  int v25; // [sp+4Ch] [bp-1008h]
  int v26; // [sp+50h] [bp-1004h] BYREF
  int v27; // [sp+54h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v24, "chain", *(int *)(a1 + 148));
  logfmt_raw(
    (char *)&v26,
    0x1000u,
    0,
    v25,
    v24[0],
    v24[1],
    v24[2],
    v24[3],
    v24[4],
    v24[5],
    v24[6],
    v25,
    "%s...",
    "serdes_phy_bist_external");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external",
    24,
    9436,
    60,
    &v26);
  v9 = -4096;
  v10 = 61441;
  if ( a4 != 8 )
  {
    v9 = 0;
    v10 = 1;
  }
  v23 = v9;
  v11 = 61458;
  if ( a4 != 8 )
    v11 = 18;
  sub_5DE08(
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
  sub_5F554(a1, (unsigned __int8)a3, v10, -15);
  sub_5F554(a1, (unsigned __int8)a3, v11, (2 * a5) & 0xE);
  sub_5F554(a1, (unsigned __int8)a3, v10, 0);
  V_LOCK();
  if ( a5 )
    v12 = "prbs";
  else
    v12 = "clock";
  logfmt_raw((char *)&v26, 0x1000u, 0, "test %d %s...", a6, v12);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external",
    24,
    9459,
    60,
    &v26);
  if ( a6 > 2 )
  {
    sub_5DE08(a1, (unsigned __int8)a3, 98, 255);
    read_rx_debug_reg2(a1, a2, a3, a4);
    sub_5F554(a1, (unsigned __int8)a3, v10, -2);
    v16 = (unsigned __int16)v23 | 0x91;
    v17 = (unsigned __int16)v23 | 0x77;
    sub_5F554(a1, (unsigned __int8)a3, v16, 1);
    sub_5F554(a1, (unsigned __int8)a3, v10, -4194305);
    sub_5F554(a1, (unsigned __int8)a3, v17, 0x400000);
    sub_5F554(a1, (unsigned __int8)a3, v10, 0);
    sub_5F554(a1, (unsigned __int8)a3, v10, -9);
    sub_5F554(a1, (unsigned __int8)a3, v16, 8);
    sub_5F554(a1, (unsigned __int8)a3, v10, -1073741825);
    sub_5F554(a1, (unsigned __int8)a3, v17, 0x40000000);
    sub_5F554(a1, (unsigned __int8)a3, v10, 0);
    check_bist_tx_running(a1, a2, a3, a4);
    check_bist_rx_running(a1, a2, (unsigned int)a3, a4);
    usleep(0x493E0u);
    sub_5F554(a1, (unsigned __int8)a3, v10, -9);
    sub_5F554(a1, (unsigned __int8)a3, v16, 0);
    sub_5F554(a1, (unsigned __int8)a3, v10, 0);
    sub_5DE08(a1, (unsigned __int8)a3, 98, 0);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done(a1, a2, a3, a4);
    check_bist_error(a1, a2, (unsigned int)a3, a4);
    return 0;
  }
  else
  {
    v26 = 336529925;
    sub_5DE08(a1, (unsigned __int8)a3, 98, 16);
    v13 = (unsigned __int8 *)&v26 + 1;
    for ( i = 5; ; i = v15 )
    {
      enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 7u, i);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      sub_5DE08(a1, (unsigned __int8)a3, 144, -9);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5DE08(a1, (unsigned __int8)a3, 144, 8);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_5DE08(a1, (unsigned __int8)a3, 144, -1073741825);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5DE08(a1, (unsigned __int8)a3, 144, 0x40000000);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454857);
      sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454975);
      usleep(0xF4240u);
      check_bist_tx_running_one_lane(a1, a2, (unsigned int)a3, 4);
      check_bist_rx_running_one_lane(a1, a2, (unsigned int)a3, 7);
      usleep(0x493E0u);
      sub_5DE08(a1, (unsigned __int8)a3, 144, -9);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454975);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done_one_lane(a1, a2, (unsigned int)a3, 4);
      check_bist_done_one_lane(a1, a2, (unsigned int)a3, 7);
      check_bist_error_one_lane(a1, a2, (unsigned int)a3, 7);
      if ( v13 == (unsigned __int8 *)&v27 )
        break;
      v15 = *v13++;
    }
    v19 = (unsigned __int8 *)&v26 + 1;
    sub_5DE08(a1, (unsigned __int8)a3, 98, 0);
    sub_5DE08(a1, 3u, 83, 0);
    sub_5DE08(a1, (unsigned __int8)a3, 98, 128);
    for ( j = 5; ; j = v21 )
    {
      enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 7u, j);
      sub_5DE08(a1, (unsigned __int8)a3, 144, -13);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5DE08(a1, (unsigned __int8)a3, 144, 12);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454962);
      sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454975);
      config_rxifrx_sigdet_ovr_one_lane(a1, a2, (unsigned __int8)a3, 7);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      sub_5DE08(a1, (unsigned __int8)a3, 144, -9);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5DE08(a1, (unsigned __int8)a3, 144, 8);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_5DE08(a1, (unsigned __int8)a3, 144, -1073741825);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5DE08(a1, (unsigned __int8)a3, 144, 0x40000000);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454857);
      sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454975);
      usleep(0xF4240u);
      check_bist_tx_running_one_lane(a1, a2, (unsigned int)a3, 7);
      check_bist_rx_running_one_lane(a1, a2, (unsigned int)a3, 7);
      usleep(0x493E0u);
      sub_5DE08(a1, (unsigned __int8)a3, 144, -9);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
      sub_5DE08(a1, (unsigned __int8)a3, 145, -2147454975);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done_one_lane(a1, a2, (unsigned int)a3, 7);
      check_bist_error_one_lane(a1, a2, (unsigned int)a3, 7);
      if ( v13 == v19 )
        break;
      v21 = *v19++;
    }
    sub_5DE08(a1, (unsigned __int8)a3, 98, 0);
    return 0;
  }
}

int __fastcall serdes_phy_bist_external(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4, char a5, int a6)
{
  const char *v6; // r3
  _BYTE v12[20]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v13[2]; // [sp+101Ch] [bp+100Ch] BYREF
  unsigned int j; // [sp+1024h] [bp+1014h]
  unsigned int i; // [sp+1028h] [bp+1018h]
  __int16 v16; // [sp+102Eh] [bp+101Eh]

  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "%s...", "serdes_phy_bist_external");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_phy_bist_external",
    24,
    9489,
    60,
    v12);
  v16 = 0;
  if ( a4 == 8 )
    v16 = 15;
  v13[1] = a5 & 7
         | ((a5 & 7) << 28)
         | ((a5 & 7) << 24)
         | ((a5 & 7) << 20)
         | ((a5 & 7) << 16)
         | ((a5 & 7) << 12)
         | ((a5 & 7) << 8)
         | (16 * (a5 & 7));
  sub_789C4(
    a1,
    a3,
    97,
    a5 & 7
  | (((a5 & 7) << 28)
   | ((a5 & 7) << 24)
   | ((a5 & 7) << 20)
   | ((a5 & 7) << 16)
   | ((a5 & 7) << 12)
   | ((a5 & 7) << 8)
   | (16 * (a5 & 7)))
  & 0x7FFFFFFF);
  serdes_apb_write(a1, a2, a3, (v16 << 12) | 1, -15);
  serdes_apb_write(a1, a2, a3, (v16 << 12) | 0x12, 2 * (a5 & 7));
  serdes_apb_write(a1, a2, a3, (v16 << 12) | 1, 0);
  V_LOCK();
  if ( a5 )
    v6 = "prbs";
  else
    v6 = "clock";
  logfmt_raw(v12, 0x1000u, 0, "test %d %s...", a6, v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_phy_bist_external",
    24,
    9512,
    60,
    v12);
  if ( a6 > 2 )
  {
    sub_789C4(a1, a3, 98, 255);
    read_rx_debug_reg2(a1, a2, a3, a4);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 1, -2);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 0x91, 1);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 1, -4194305);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 0x77, 0x400000);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 1, 0);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 0x91, 8);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 1, -1073741825);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 0x77, 0x40000000);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 1, 0);
    check_bist_tx_running(a1, a2, a3, a4);
    check_bist_rx_running(a1, a2, a3, a4);
    usleep(0x493E0u);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 0x91, 0);
    serdes_apb_write(a1, a2, a3, (v16 << 12) | 1, 0);
    sub_789C4(a1, a3, 98, 0);
    check_ref_clock_ready(a1, a2, a3);
    check_bist_done(a1, a2, a3, a4);
    check_bist_error(a1, a2, a3, a4);
  }
  else
  {
    v13[0] = 336529925;
    sub_789C4(a1, a3, 98, 16);
    for ( i = 0; i <= 3; ++i )
    {
      enable_rxbist_autostop_one_lane(a1, a2, a3, 7u, *((_BYTE *)v13 + i));
      read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      serdes_apb_write(a1, a2, a3, 0x7001u, -9);
      serdes_apb_write(a1, a2, a3, 0x7091u, 8);
      serdes_apb_write(a1, a2, a3, 0x7001u, -1073741825);
      serdes_apb_write(a1, a2, a3, 0x7077u, 0x40000000);
      serdes_apb_write(a1, a2, a3, 0x7001u, 0);
      usleep(0xF4240u);
      check_bist_tx_running_one_lane(a1, a2, a3, 4u);
      check_bist_rx_running_one_lane(a1, a2, a3, 7u);
      usleep(0x493E0u);
      serdes_apb_write(a1, a2, a3, 0x7001u, -9);
      serdes_apb_write(a1, a2, a3, 0x7091u, 0);
      serdes_apb_write(a1, a2, a3, 0x7001u, 0);
      check_ref_clock_ready(a1, a2, a3);
      check_bist_done_one_lane(a1, a2, a3, 4u);
      check_bist_done_one_lane(a1, a2, a3, 7u);
      check_bist_error_one_lane(a1, a2, a3, 7u);
    }
    sub_789C4(a1, a3, 98, 0);
    sub_789C4(a1, 3, 83, 0);
    sub_789C4(a1, a3, 98, 128);
    for ( j = 0; j <= 3; ++j )
    {
      enable_rxbist_autostop_one_lane(a1, a2, a3, 7u, *((_BYTE *)v13 + j));
      serdes_apb_write(a1, a2, a3, 0x7001u, -13);
      serdes_apb_write(a1, a2, a3, 0x700Eu, 12);
      serdes_apb_write(a1, a2, a3, 0x7001u, 0);
      config_rxifrx_sigdet_ovr_one_lane(a1, a2, a3, 7u);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      serdes_apb_write(a1, a2, a3, 0x7001u, -9);
      serdes_apb_write(a1, a2, a3, 0x7091u, 8);
      serdes_apb_write(a1, a2, a3, 0x7001u, -1073741825);
      serdes_apb_write(a1, a2, a3, 0x7077u, 0x40000000);
      serdes_apb_write(a1, a2, a3, 0x7001u, 0);
      usleep(0xF4240u);
      check_bist_tx_running_one_lane(a1, a2, a3, 7u);
      check_bist_rx_running_one_lane(a1, a2, a3, 7u);
      usleep(0x493E0u);
      serdes_apb_write(a1, a2, a3, 0x7001u, -9);
      serdes_apb_write(a1, a2, a3, 0x7091u, 0);
      serdes_apb_write(a1, a2, a3, 0x7001u, 0);
      check_ref_clock_ready(a1, a2, a3);
      check_bist_done_one_lane(a1, a2, a3, 7u);
      check_bist_error_one_lane(a1, a2, a3, 7u);
    }
    sub_789C4(a1, a3, 98, 0);
  }
  return 0;
}

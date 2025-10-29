int __fastcall serdes_phy_bist_external_0811_all_lane(
        int a1,
        unsigned __int8 a2,
        char a3,
        char a4,
        char a5,
        unsigned int a6)
{
  const char *v6; // r3
  _BYTE v12[24]; // [sp+18h] [bp+8h] BYREF
  int v13; // [sp+1018h] [bp+1008h] BYREF
  char v14; // [sp+101Ch] [bp+100Ch]
  unsigned __int8 v15; // [sp+101Fh] [bp+100Fh]
  int v16; // [sp+1020h] [bp+1010h]
  unsigned int j; // [sp+1024h] [bp+1014h]
  unsigned int i; // [sp+1028h] [bp+1018h]
  __int16 v19; // [sp+102Eh] [bp+101Eh]

  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "%s...", "serdes_phy_bist_external_0811_all_lane");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_phy_bist_external_0811_all_lane",
    38,
    10343,
    60,
    v12);
  v19 = 0;
  if ( a4 == 8 )
    v19 = 15;
  v16 = a5 & 7
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
  serdes_apb_write(a1, a2, a3, (v19 << 12) | 1, -15);
  serdes_apb_write(a1, a2, a3, (v19 << 12) | 0x12, 2 * (a5 & 7));
  serdes_apb_write(a1, a2, a3, (v19 << 12) | 1, 0);
  v15 = sub_D0584(a6, 2u);
  V_LOCK();
  if ( a5 )
    v6 = "prbs";
  else
    v6 = "clock";
  logfmt_raw(v12, 0x1000u, 0, "test %d %s...", v15, v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_phy_bist_external_0811_all_lane",
    38,
    10365,
    60,
    v12);
  switch ( a6 )
  {
    case 2u:
      div2_seq(a1, a2, a3, a4);
      break;
    case 4u:
      div4_seq(a1, a2, a3, a4);
      break;
    case 8u:
      div8_seq_one_lane(a1, a2, a3, a4);
      break;
    case 0x20u:
      div32_20210813_500M_one_lane(a1, a2, a3, a4);
      break;
    default:
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "do not set div_seq with testcase 4");
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "serdes_phy_bist_external_0811_all_lane",
        38,
        10376,
        60,
        v12);
      break;
  }
  v13 = 336529925;
  v14 = 28;
  sub_789C4(a1, a3, 98, 255);
  for ( i = 0; i <= 4; ++i )
  {
    enable_rxbist_autostop(a1, a2, a3, a4, *((_BYTE *)&v13 + i));
    read_rx_debug_reg2_one_lane(a1, a2, a3, a4);
    serdes_apb_write(a1, a2, a3, (v19 << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (v19 << 12) | 0x91, 8);
    serdes_apb_write(a1, a2, a3, (v19 << 12) | 1, -1073741825);
    serdes_apb_write(a1, a2, a3, (v19 << 12) | 0x77, 0x40000000);
    serdes_apb_write(a1, a2, a3, (v19 << 12) | 1, 0);
    usleep(0xF4240u);
    check_bist_tx_running(a1, a2, a3, a4);
    check_bist_rx_running(a1, a2, a3, a4);
    usleep(0x493E0u);
    serdes_apb_write(a1, a2, a3, (v19 << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (v19 << 12) | 0x91, 0);
    serdes_apb_write(a1, a2, a3, (v19 << 12) | 1, 0);
    check_ref_clock_ready(a1, a2, a3);
    check_bist_done(a1, a2, a3, a4);
    check_bist_done(a1, a2, a3, a4);
    check_bist_error(a1, a2, a3, a4);
  }
  if ( v15 == 4 )
  {
    enable_rx_equalizer_tuning(a1, a2, a3, a4);
    for ( j = 0; j <= 4; ++j )
    {
      enable_rxbist_autostop(a1, a2, a3, a4, *((_BYTE *)&v13 + j));
      read_rx_debug_reg2_one_lane(a1, a2, a3, a4);
      serdes_apb_write(a1, a2, a3, (v19 << 12) | 1, -9);
      serdes_apb_write(a1, a2, a3, (v19 << 12) | 0x91, 8);
      serdes_apb_write(a1, a2, a3, (v19 << 12) | 1, -1073741825);
      serdes_apb_write(a1, a2, a3, (v19 << 12) | 0x77, 0x40000000);
      serdes_apb_write(a1, a2, a3, (v19 << 12) | 1, 0);
      usleep(0xF4240u);
      check_bist_tx_running(a1, a2, a3, a4);
      check_bist_rx_running(a1, a2, a3, a4);
      usleep(0x493E0u);
      serdes_apb_write(a1, a2, a3, (v19 << 12) | 1, -9);
      serdes_apb_write(a1, a2, a3, (v19 << 12) | 0x91, 0);
      serdes_apb_write(a1, a2, a3, (v19 << 12) | 1, 0);
      check_ref_clock_ready(a1, a2, a3);
      check_bist_done(a1, a2, a3, a4);
      check_bist_done(a1, a2, a3, a4);
      check_bist_error(a1, a2, a3, a4);
    }
  }
  sub_789C4(a1, a3, 98, 0);
  return 0;
}

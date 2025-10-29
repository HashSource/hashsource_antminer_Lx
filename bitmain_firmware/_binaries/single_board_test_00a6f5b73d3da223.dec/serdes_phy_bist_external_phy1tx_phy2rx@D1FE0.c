int __fastcall serdes_phy_bist_external_phy1tx_phy2rx(
        int a1,
        unsigned __int8 a2,
        char a3,
        char a4,
        unsigned int a5,
        char a6,
        char a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  const char *v9; // r3
  _BYTE v15[24]; // [sp+18h] [bp+8h] BYREF
  int v16; // [sp+1018h] [bp+1008h] BYREF
  unsigned __int8 v17; // [sp+101Eh] [bp+100Eh]
  char v18; // [sp+101Fh] [bp+100Fh]
  int v19; // [sp+1020h] [bp+1010h]
  unsigned int j; // [sp+1024h] [bp+1014h]
  unsigned int i; // [sp+1028h] [bp+1018h]
  __int16 v22; // [sp+102Eh] [bp+101Eh]

  V_LOCK();
  logfmt_raw(v15, 0x1000u, 0, "%s...", "serdes_phy_bist_external_phy1tx_phy2rx");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_phy_bist_external_phy1tx_phy2rx",
    38,
    10478,
    60,
    v15);
  v22 = 0;
  if ( a3 == 8 )
    v22 = 15;
  v19 = a4 & 7
      | ((a4 & 7) << 28)
      | ((a4 & 7) << 24)
      | ((a4 & 7) << 20)
      | ((a4 & 7) << 16)
      | ((a4 & 7) << 12)
      | ((a4 & 7) << 8)
      | (16 * (a4 & 7));
  v18 = a6;
  sub_789C4(
    a1,
    a6,
    97,
    a4 & 7
  | (((a4 & 7) << 28)
   | ((a4 & 7) << 24)
   | ((a4 & 7) << 20)
   | ((a4 & 7) << 16)
   | ((a4 & 7) << 12)
   | ((a4 & 7) << 8)
   | (16 * (a4 & 7)))
  & 0x7FFFFFFF);
  v18 = a7;
  serdes_apb_write(a1, a2, a7, (v22 << 12) | 1, -15);
  serdes_apb_write(a1, a2, v18, (v22 << 12) | 0x12, 2 * (a4 & 7));
  serdes_apb_write(a1, a2, v18, (v22 << 12) | 1, 0);
  v17 = sub_D0584(a5, 2u);
  V_LOCK();
  if ( a4 )
    v9 = "prbs";
  else
    v9 = "clock";
  logfmt_raw(v15, 0x1000u, 0, "test %d %s...", v17, v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_phy_bist_external_phy1tx_phy2rx",
    38,
    10502,
    60,
    v15);
  v18 = a6;
  switch ( a5 )
  {
    case 2u:
      div2_seq_one_lane(a1, a2, v18, a8);
      div2_seq_one_lane(a1, a2, v18, a8);
      break;
    case 4u:
      div4_seq_one_lane(a1, a2, v18, a8);
      div4_seq_one_lane(a1, a2, v18, a8);
      break;
    case 8u:
      div8_seq_one_lane(a1, a2, v18, a8);
      div8_seq_one_lane(a1, a2, v18, a8);
      break;
    default:
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "do not set div_seq with testcase 4");
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "serdes_phy_bist_external_phy1tx_phy2rx",
        38,
        10517,
        60,
        v15);
      break;
  }
  v16 = 336529925;
  v18 = a6;
  sub_789C4(a1, a6, 98, 1 << a8);
  for ( i = 0; i <= 3; ++i )
  {
    v18 = a7;
    enable_rxbist_autostop_one_lane(a1, a2, a7, a9, *((_BYTE *)&v16 + i));
    v18 = a6;
    read_rx_debug_reg2_one_lane(a1, a2, a6, a8);
    v18 = a7;
    read_rx_debug_reg2_one_lane(a1, a2, a7, a9);
    v18 = a7;
    serdes_apb_write(a1, a2, a7, (a9 << 12) | 1, -9);
    serdes_apb_write(a1, a2, v18, (a9 << 12) | 0x91, 8);
    serdes_apb_write(a1, a2, v18, (a9 << 12) | 1, -1073741825);
    serdes_apb_write(a1, a2, v18, (a9 << 12) | 0x77, 0x40000000);
    serdes_apb_write(a1, a2, v18, (a9 << 12) | 1, 0);
    usleep(0xF4240u);
    v18 = a6;
    check_bist_tx_running_one_lane(a1, a2, a6, a8);
    v18 = a7;
    check_bist_rx_running_one_lane(a1, a2, a7, a9);
    usleep(0x493E0u);
    v18 = a7;
    serdes_apb_write(a1, a2, a7, (a9 << 12) | 1, -9);
    serdes_apb_write(a1, a2, v18, (a9 << 12) | 0x91, 0);
    serdes_apb_write(a1, a2, v18, (a9 << 12) | 1, 0);
    v18 = a6;
    check_ref_clock_ready(a1, a2, a6);
    check_bist_done_one_lane(a1, a2, v18, a9);
    v18 = a7;
    check_ref_clock_ready(a1, a2, a7);
    check_bist_done_one_lane(a1, a2, v18, a9);
    check_bist_error_one_lane(a1, a2, v18, a9);
  }
  if ( v17 == 4 )
  {
    v18 = a7;
    enable_rx_equalizer_tuning_one_lane(a1, a2, a7, a9);
    for ( j = 0; j <= 3; ++j )
    {
      v18 = a7;
      enable_rxbist_autostop_one_lane(a1, a2, a7, a9, *((_BYTE *)&v16 + j));
      v18 = a6;
      read_rx_debug_reg2_one_lane(a1, a2, a6, a8);
      v18 = a7;
      read_rx_debug_reg2_one_lane(a1, a2, a7, a9);
      v18 = a7;
      serdes_apb_write(a1, a2, a7, (a9 << 12) | 1, -9);
      serdes_apb_write(a1, a2, v18, (a9 << 12) | 0x91, 8);
      serdes_apb_write(a1, a2, v18, (a9 << 12) | 1, -1073741825);
      serdes_apb_write(a1, a2, v18, (a9 << 12) | 0x77, 0x40000000);
      serdes_apb_write(a1, a2, v18, (a9 << 12) | 1, 0);
      usleep(0xF4240u);
      v18 = a6;
      check_bist_tx_running_one_lane(a1, a2, a6, a8);
      v18 = a7;
      check_bist_rx_running_one_lane(a1, a2, a7, a9);
      usleep(0x493E0u);
      v18 = a7;
      serdes_apb_write(a1, a2, a7, (a9 << 12) | 1, -9);
      serdes_apb_write(a1, a2, v18, (a9 << 12) | 0x91, 0);
      serdes_apb_write(a1, a2, v18, (a9 << 12) | 1, 0);
      v18 = a6;
      check_ref_clock_ready(a1, a2, a6);
      check_bist_done_one_lane(a1, a2, v18, a9);
      v18 = a7;
      check_ref_clock_ready(a1, a2, a7);
      check_bist_done_one_lane(a1, a2, v18, a9);
      check_bist_error_one_lane(a1, a2, v18, a9);
    }
  }
  v18 = a6;
  sub_789C4(a1, a6, 98, 0);
  return 0;
}

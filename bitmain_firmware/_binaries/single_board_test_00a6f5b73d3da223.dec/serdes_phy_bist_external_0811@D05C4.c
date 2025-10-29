int __fastcall serdes_phy_bist_external_0811(
        int a1,
        unsigned __int8 a2,
        char a3,
        char a4,
        char a5,
        unsigned int a6,
        int a7)
{
  const char *v7; // r3
  _BYTE v13[24]; // [sp+18h] [bp+8h] BYREF
  int v14; // [sp+1018h] [bp+1008h] BYREF
  char v15; // [sp+101Ch] [bp+100Ch]
  unsigned __int8 v16; // [sp+101Fh] [bp+100Fh]
  int v17; // [sp+1020h] [bp+1010h]
  unsigned int j; // [sp+1024h] [bp+1014h]
  unsigned int i; // [sp+1028h] [bp+1018h]
  __int16 v20; // [sp+102Eh] [bp+101Eh]

  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "%s...", "serdes_phy_bist_external_0811");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_phy_bist_external_0811",
    29,
    10029,
    60,
    v13);
  v20 = 0;
  if ( a4 == 8 )
    v20 = 15;
  v17 = a5 & 7
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
  serdes_apb_write(a1, a2, a3, (v20 << 12) | 1, -15);
  serdes_apb_write(a1, a2, a3, (v20 << 12) | 0x12, 2 * (a5 & 7));
  serdes_apb_write(a1, a2, a3, (v20 << 12) | 1, 0);
  v16 = sub_D0584(a6, 2u);
  V_LOCK();
  if ( a5 )
    v7 = "prbs";
  else
    v7 = "clock";
  logfmt_raw(v13, 0x1000u, 0, "group %d test %d %s...", a7, v16, v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_phy_bist_external_0811",
    29,
    10051,
    60,
    v13);
  switch ( a6 )
  {
    case 2u:
      if ( a7 )
        div2_seq_one_lane(a1, a2, a3, 4u);
      else
        div2_seq_one_lane(a1, a2, a3, 7u);
      break;
    case 4u:
      if ( a7 )
        div4_seq_one_lane(a1, a2, a3, 4u);
      else
        div4_seq_one_lane(a1, a2, a3, 7u);
      break;
    case 8u:
      if ( a7 )
        div8_seq_one_lane(a1, a2, a3, 4u);
      else
        div8_seq_one_lane(a1, a2, a3, 7u);
      break;
    case 0x20u:
      if ( a7 )
        div32_20210813_500M_one_lane(a1, a2, a3, 4u);
      else
        div32_20210813_500M_one_lane(a1, a2, a3, 7u);
      break;
    default:
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "do not set div_seq with testcase 4");
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "serdes_phy_bist_external_0811",
        29,
        10074,
        60,
        v13);
      break;
  }
  v14 = 336529925;
  v15 = 28;
  if ( a7 )
    sub_789C4(a1, a3, 98, 16);
  else
    sub_789C4(a1, a3, 98, 128);
  for ( i = 0; i <= 4; ++i )
  {
    if ( a7 )
      enable_rxbist_autostop_one_lane(a1, a2, a3, 7u, *((_BYTE *)&v14 + i));
    else
      enable_rxbist_autostop_one_lane(a1, a2, a3, 4u, *((_BYTE *)&v14 + i));
    read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
    read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
    if ( a7 )
    {
      serdes_apb_write(a1, a2, a3, 0x7001u, -9);
      serdes_apb_write(a1, a2, a3, 0x7091u, 8);
      serdes_apb_write(a1, a2, a3, 0x7001u, -1073741825);
      serdes_apb_write(a1, a2, a3, 0x7077u, 0x40000000);
      serdes_apb_write(a1, a2, a3, 0x7001u, 0);
    }
    else
    {
      serdes_apb_write(a1, a2, a3, 0x4001u, -9);
      serdes_apb_write(a1, a2, a3, 0x4091u, 8);
      serdes_apb_write(a1, a2, a3, 0x4001u, -1073741825);
      serdes_apb_write(a1, a2, a3, 0x4077u, 0x40000000);
      serdes_apb_write(a1, a2, a3, 0x4001u, 0);
    }
    usleep(0xF4240u);
    if ( a7 )
    {
      check_bist_tx_running_one_lane(a1, a2, a3, 4u);
      check_bist_rx_running_one_lane(a1, a2, a3, 7u);
    }
    else
    {
      check_bist_tx_running_one_lane(a1, a2, a3, 7u);
      check_bist_rx_running_one_lane(a1, a2, a3, 4u);
    }
    usleep(0x493E0u);
    if ( a7 )
    {
      serdes_apb_write(a1, a2, a3, 0x7001u, -9);
      serdes_apb_write(a1, a2, a3, 0x7091u, 0);
      serdes_apb_write(a1, a2, a3, 0x7001u, 0);
    }
    else
    {
      serdes_apb_write(a1, a2, a3, 0x4001u, -9);
      serdes_apb_write(a1, a2, a3, 0x4091u, 0);
      serdes_apb_write(a1, a2, a3, 0x4001u, 0);
    }
    check_ref_clock_ready(a1, a2, a3);
    check_bist_done_one_lane(a1, a2, a3, 4u);
    check_bist_done_one_lane(a1, a2, a3, 7u);
    if ( a7 )
      check_bist_error_one_lane(a1, a2, a3, 7u);
    else
      check_bist_error_one_lane(a1, a2, a3, 4u);
  }
  if ( v16 == 4 )
  {
    if ( a7 )
      enable_rx_equalizer_tuning_one_lane(a1, a2, a3, 7u);
    else
      enable_rx_equalizer_tuning_one_lane(a1, a2, a3, 4u);
    for ( j = 0; j <= 4; ++j )
    {
      if ( a7 )
        enable_rxbist_autostop_one_lane(a1, a2, a3, 7u, *((_BYTE *)&v14 + j));
      else
        enable_rxbist_autostop_one_lane(a1, a2, a3, 4u, *((_BYTE *)&v14 + j));
      read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      if ( a7 )
      {
        serdes_apb_write(a1, a2, a3, 0x7001u, -9);
        serdes_apb_write(a1, a2, a3, 0x7091u, 8);
        serdes_apb_write(a1, a2, a3, 0x7001u, -1073741825);
        serdes_apb_write(a1, a2, a3, 0x7077u, 0x40000000);
        serdes_apb_write(a1, a2, a3, 0x7001u, 0);
      }
      else
      {
        serdes_apb_write(a1, a2, a3, 0x4001u, -9);
        serdes_apb_write(a1, a2, a3, 0x4091u, 8);
        serdes_apb_write(a1, a2, a3, 0x4001u, -1073741825);
        serdes_apb_write(a1, a2, a3, 0x4077u, 0x40000000);
        serdes_apb_write(a1, a2, a3, 0x4001u, 0);
      }
      usleep(0xF4240u);
      if ( a7 )
      {
        check_bist_tx_running_one_lane(a1, a2, a3, 4u);
        check_bist_rx_running_one_lane(a1, a2, a3, 7u);
      }
      else
      {
        check_bist_tx_running_one_lane(a1, a2, a3, 7u);
        check_bist_rx_running_one_lane(a1, a2, a3, 4u);
      }
      usleep(0x493E0u);
      if ( a7 )
      {
        serdes_apb_write(a1, a2, a3, 0x7001u, -9);
        serdes_apb_write(a1, a2, a3, 0x7091u, 0);
        serdes_apb_write(a1, a2, a3, 0x7001u, 0);
      }
      else
      {
        serdes_apb_write(a1, a2, a3, 0x4001u, -9);
        serdes_apb_write(a1, a2, a3, 0x4091u, 0);
        serdes_apb_write(a1, a2, a3, 0x4001u, 0);
      }
      check_ref_clock_ready(a1, a2, a3);
      check_bist_done_one_lane(a1, a2, a3, 4u);
      check_bist_done_one_lane(a1, a2, a3, 7u);
      if ( a7 )
        check_bist_error_one_lane(a1, a2, a3, 7u);
      else
        check_bist_error_one_lane(a1, a2, a3, 4u);
    }
  }
  sub_789C4(a1, a3, 98, 0);
  return 0;
}

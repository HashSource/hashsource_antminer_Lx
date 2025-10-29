int __fastcall serdes_phy_bist_external_all_phy(int a1, unsigned __int8 a2, unsigned __int8 a3, char a4)
{
  const char *v4; // r3
  _BYTE v10[4088]; // [sp+18h] [bp+8h] BYREF
  char v11; // [sp+1018h] [bp+1008h]
  int v12; // [sp+101Ch] [bp+100Ch] BYREF
  _DWORD v13[2]; // [sp+1020h] [bp+1010h] BYREF
  unsigned __int8 v14; // [sp+1029h] [bp+1019h]
  __int16 v15; // [sp+102Ah] [bp+101Ah]
  int j; // [sp+102Ch] [bp+101Ch]
  int i; // [sp+1030h] [bp+1020h]
  unsigned __int8 v18; // [sp+1037h] [bp+1027h]

  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s...", "serdes_phy_bist_external_all_phy");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_phy_bist_external_all_phy",
    32,
    10644,
    60,
    v10);
  v15 = 15;
  v14 = -1;
  v13[1] = a4 & 7
         | ((a4 & 7) << 28)
         | ((a4 & 7) << 24)
         | ((a4 & 7) << 20)
         | ((a4 & 7) << 16)
         | ((a4 & 7) << 12)
         | ((a4 & 7) << 8)
         | (16 * (a4 & 7));
  sub_789C4(
    a1,
    255,
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
  serdes_apb_write(a1, a2, v14, (v15 << 12) | 1, -15);
  serdes_apb_write(a1, a2, v14, (v15 << 12) | 0x12, 2 * (a4 & 7));
  serdes_apb_write(a1, a2, v14, (v15 << 12) | 1, 0);
  v12 = 0;
  v13[0] = 0;
  v18 = 0;
  if ( (a4 & 0xF) == 0 )
    v18 = 0;
  if ( (a4 & 0xF) == 1 )
    v18 = 7;
  if ( (a4 & 0xF) == 2 )
    v18 = 9;
  if ( (a4 & 0xF) == 3 )
    v18 = 11;
  if ( (a4 & 0xF) == 4 )
    v18 = 13;
  if ( (a4 & 0xF) == 5 )
    v18 = 15;
  if ( (a4 & 0xF) == 6 )
    v18 = 23;
  if ( (a4 & 0xF) == 7 )
    v18 = 31;
  if ( v18 )
    v4 = "prbs";
  else
    v4 = "clock";
  strcpy((char *)&v12, v4);
  if ( v18 )
    sprintf((char *)v13, "%2d", v18);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s %s...", "serdes_phy_bist_external_all_phy", &v12);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_phy_bist_external_all_phy",
    32,
    10678,
    60,
    v10);
  v11 = 31;
  sub_789C4(a1, v14, 98, 255);
  for ( i = 0; !i; ++i )
  {
    enable_rxbist_autostop(a1, a2, v14, a3, v11);
    read_rx_debug_reg2(a1, a2, v14, a3);
    serdes_apb_write(a1, a2, v14, (v15 << 12) | 1, -9);
    serdes_apb_write(a1, a2, v14, (v15 << 12) | 0x91, 8);
    serdes_apb_write(a1, a2, v14, (v15 << 12) | 1, -1073741825);
    serdes_apb_write(a1, a2, v14, (v15 << 12) | 0x77, 0x40000000);
    serdes_apb_write(a1, a2, v14, (v15 << 12) | 1, 0);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "wait rx bist done!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "serdes_phy_bist_external_all_phy",
      32,
      10715,
      60,
      v10);
    usleep(0xF42400u);
    check_bist_tx_running(a1, a2, v14, a3);
    usleep(0x493E0u);
    serdes_apb_write(a1, a2, v14, (v15 << 12) | 1, -9);
    serdes_apb_write(a1, a2, v14, (v15 << 12) | 0x91, 0);
    serdes_apb_write(a1, a2, v14, (v15 << 12) | 1, 0);
    check_ref_clock_ready_ext(a1, a2, v14, a3, 0);
    check_bist_done(a1, a2, v14, a3);
    check_bist_error(a1, a2, v14, a3);
  }
  if ( a4 )
  {
    enable_rx_equalizer_tuning(a1, a2, v14, a3);
    for ( j = 0; !j; ++j )
    {
      enable_rxbist_autostop(a1, a2, v14, a3, v11);
      read_rx_debug_reg2(a1, a2, v14, a3);
      serdes_apb_write(a1, a2, v14, (v15 << 12) | 1, -9);
      serdes_apb_write(a1, a2, v14, (v15 << 12) | 0x91, 8);
      serdes_apb_write(a1, a2, v14, (v15 << 12) | 1, -1073741825);
      serdes_apb_write(a1, a2, v14, (v15 << 12) | 0x77, 0x40000000);
      serdes_apb_write(a1, a2, v14, (v15 << 12) | 1, 0);
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, "wait rx bist done!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "serdes_phy_bist_external_all_phy",
        32,
        10762,
        60,
        v10);
      usleep(0xF42400u);
      check_bist_tx_running(a1, a2, v14, a3);
      usleep(0x493E0u);
      serdes_apb_write(a1, a2, v14, (v15 << 12) | 1, -9);
      serdes_apb_write(a1, a2, v14, (v15 << 12) | 0x91, 0);
      serdes_apb_write(a1, a2, v14, (v15 << 12) | 1, 0);
      check_ref_clock_ready_ext(a1, a2, v14, a3, 0);
      check_bist_done(a1, a2, v14, a3);
      check_bist_error(a1, a2, v14, a3);
    }
  }
  sub_789C4(a1, v14, 98, 0);
  return 0;
}

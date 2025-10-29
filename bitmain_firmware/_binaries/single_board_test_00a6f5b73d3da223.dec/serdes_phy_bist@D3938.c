int __fastcall serdes_phy_bist(int a1, unsigned __int8 a2, unsigned __int8 a3, int a4)
{
  int v10; // [sp+24h] [bp+14h] BYREF
  __int16 v11; // [sp+1026h] [bp+1016h]

  V_LOCK();
  logfmt_raw(&v10, 0x1000u, 0, "%s core_id %02x", "serdes_phy_bist", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_phy_bist",
    15,
    10880,
    60,
    &v10);
  v11 = 0;
  if ( a3 == 8 )
    v11 = 15;
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 1, -241);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 6, 80);
  serdes_apb_write_1_chip(a1, 1, 2, 0x1006u, 64);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 1, -13);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 0x69, 8);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 1, -4);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 2, 2);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 1, -4);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 3, 0);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 1, 0x7FFFFFFF);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 0x1B, 0);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 1, -2);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 0x1C, 0);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 1, -2);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 0x3C, 100663296);
  serdes_apb_write(a1, 0, a2, (v11 << 12) | 1, 0);
  sub_788A8(a1, 80, (int)&word_1FFFE + 1);
  usleep(0x2710u);
  sub_789C4(a1, a2, 112, 0);
  sub_789C4(a1, a2, 113, 0);
  sub_789C4(a1, a2, 114, 0);
  sub_789C4(a1, a2, 115, 0);
  sub_789C4(a1, a2, 116, 0);
  sub_789C4(a1, a2, 117, 0);
  check_tx_rx_status(a1, 0, a2);
  if ( check_ref_clock_ready_ext(a1, 0, a2, a3, a4) && (++dword_47B2F4, dword_47B2F4 <= 2) )
  {
    V_LOCK();
    logfmt_raw(&v10, 0x1000u, 0, "check_ref_clock_ready_ext failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "serdes_phy_bist",
      15,
      11071,
      60,
      &v10);
    return -1;
  }
  else
  {
    sub_789C4(a1, a2, 87, 255);
    usleep(0x2710u);
    serdes_phy_bist_external_all_phy(a1, 0, a3, 119);
    sub_788A8(a1, 158, 2);
    check_mac_done(a1, 0, a2, 0);
    return 0;
  }
}

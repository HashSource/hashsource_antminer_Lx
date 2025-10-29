int __fastcall setup_serdes_phy_x_y(int a1, char a2, char a3, unsigned __int8 a4, unsigned __int8 a5, char a6)
{
  int v11; // [sp+24h] [bp+Ch] BYREF
  char v12; // [sp+1025h] [bp+100Dh]
  __int16 v13; // [sp+1026h] [bp+100Eh]

  V_LOCK();
  logfmt_raw(
    &v11,
    0x1000u,
    0,
    "%s PHY%dL%d->PHY%dL%d",
    "setup_serdes_phy_x_y",
    (unsigned __int8)a2,
    a4,
    (unsigned __int8)a3,
    a5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "setup_serdes_phy_x_y",
    20,
    11148,
    60,
    &v11);
  v13 = 0;
  if ( a6 == 8 )
    v13 = 15;
  v12 = a2;
  serdes_apb_write(a1, 0, a2, (v13 << 12) | 1, -13);
  serdes_apb_write(a1, 0, v12, (v13 << 12) | 0x69, 8);
  serdes_apb_write(a1, 0, v12, (v13 << 12) | 1, 0);
  v12 = a3;
  serdes_apb_write(a1, 0, a3, (v13 << 12) | 1, -13);
  serdes_apb_write(a1, 0, v12, (v13 << 12) | 0x69, 8);
  serdes_apb_write(a1, 0, v12, (v13 << 12) | 1, 0);
  sub_788A8(a1, 80, (int)&word_1FFFE + 1);
  usleep(0x2710u);
  v12 = a2;
  sub_789C4(a1, a2, 112, 0);
  sub_789C4(a1, v12, 113, 0);
  sub_789C4(a1, v12, 114, 0);
  sub_789C4(a1, v12, 115, 0);
  sub_789C4(a1, v12, 116, 0);
  sub_789C4(a1, v12, 117, 0);
  check_ref_clock_ready(a1, 0, v12);
  v12 = a3;
  sub_789C4(a1, a3, 112, 0);
  sub_789C4(a1, v12, 113, 0);
  sub_789C4(a1, v12, 114, 0);
  sub_789C4(a1, v12, 115, 0);
  sub_789C4(a1, v12, 116, 0);
  sub_789C4(a1, v12, 117, 0);
  check_ref_clock_ready(a1, 0, v12);
  v12 = a2;
  sub_789C4(a1, a2, 87, 255);
  usleep(0x2710u);
  serdes_phy_bist_external_phy1tx_phy2rx(a1, 0, a6, 17, 0x10u, a2, a3, a4, a5);
  return 0;
}

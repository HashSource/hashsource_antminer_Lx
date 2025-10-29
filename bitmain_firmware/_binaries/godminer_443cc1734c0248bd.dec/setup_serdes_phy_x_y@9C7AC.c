int __fastcall setup_serdes_phy_x_y(int a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v10; // r7
  int v11; // r9
  char v13[4100]; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "%s PHY%dL%d->PHY%dL%d", "setup_serdes_phy_x_y", a2, a4, a3, a5);
  V_UNLOCK();
  v10 = 61441;
  v11 = 61545;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_serdes_phy_x_y",
    0x14u,
    11095,
    60,
    v13);
  if ( a6 != 8 )
  {
    v10 = 1;
    v11 = 105;
  }
  sub_5D4B4(a1, a2, v10, -13);
  sub_5D4B4(a1, a2, v11, 8);
  sub_5D4B4(a1, a2, v10, 0);
  sub_5D4B4(a1, a3, v10, -13);
  sub_5D4B4(a1, a3, v11, 8);
  sub_5D4B4(a1, a3, v10, 0);
  sub_5BD10(a1, 80, (int)"t_level_ltc");
  usleep(0x2710u);
  sub_5BD68(a1, a2, 112, 0);
  sub_5BD68(a1, a2, 113, 0);
  sub_5BD68(a1, a2, 114, 0);
  sub_5BD68(a1, a2, 115, 0);
  sub_5BD68(a1, a2, 116, 0);
  sub_5BD68(a1, a2, 117, 0);
  check_ref_clock_ready(a1, 0, a2);
  sub_5BD68(a1, a3, 112, 0);
  sub_5BD68(a1, a3, 113, 0);
  sub_5BD68(a1, a3, 114, 0);
  sub_5BD68(a1, a3, 115, 0);
  sub_5BD68(a1, a3, 116, 0);
  sub_5BD68(a1, a3, 117, 0);
  check_ref_clock_ready(a1, 0, a3);
  sub_5BD68(a1, a2, 87, 255);
  usleep(0x2710u);
  serdes_phy_bist_external_phy1tx_phy2rx(a1, 0, a6, 17, 0x10u, a2, a3, a4, a5);
  return 0;
}

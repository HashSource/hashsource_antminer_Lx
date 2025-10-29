int __fastcall serdes_phy_bist(int a1, unsigned __int8 *a2, int a3, int a4)
{
  int v7; // r6
  int v8; // r12
  int v9; // r12
  int v10; // lr
  int v11; // r7
  int v12; // r12
  int v13; // r11
  int v14; // r10
  int v16; // [sp+10h] [bp-101Ch]
  int v17; // [sp+14h] [bp-1018h]
  int v18; // [sp+18h] [bp-1014h]
  int v19; // [sp+1Ch] [bp-1010h]
  char v21[4100]; // [sp+28h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "%s core_id %02x", "serdes_phy_bist", a2);
  V_UNLOCK();
  v7 = 61441;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist",
    15,
    10827,
    60,
    v21);
  v8 = 61467;
  if ( a3 != 8 )
  {
    v8 = 27;
    v7 = 1;
  }
  v19 = v8;
  v9 = 61443;
  if ( a3 != 8 )
    v9 = 3;
  v10 = 61545;
  v11 = 61446;
  if ( a3 != 8 )
  {
    v10 = 105;
    v11 = 6;
  }
  v18 = v9;
  v12 = 61442;
  if ( a3 != 8 )
    v12 = 2;
  v17 = v12;
  v13 = 61500;
  v16 = v10;
  if ( a3 != 8 )
    v13 = 60;
  v14 = 61468;
  if ( a3 != 8 )
    v14 = 28;
  sub_5F554(a1, (unsigned __int8)a2, v7, -241);
  sub_5F554(a1, (unsigned __int8)a2, v11, 80);
  serdes_apb_write_1_chip(a1, 1, 2u, 4102, 64);
  sub_5F554(a1, (unsigned __int8)a2, v7, -13);
  sub_5F554(a1, (unsigned __int8)a2, v16, 8);
  sub_5F554(a1, (unsigned __int8)a2, v7, -4);
  sub_5F554(a1, (unsigned __int8)a2, v17, 2);
  sub_5F554(a1, (unsigned __int8)a2, v7, -4);
  sub_5F554(a1, (unsigned __int8)a2, v18, 0);
  sub_5F554(a1, (unsigned __int8)a2, v7, 0x7FFFFFFF);
  sub_5F554(a1, (unsigned __int8)a2, v19, 0);
  sub_5F554(a1, (unsigned __int8)a2, v7, -2);
  sub_5F554(a1, (unsigned __int8)a2, v14, 0);
  sub_5F554(a1, (unsigned __int8)a2, v7, -2);
  sub_5F554(a1, (unsigned __int8)a2, v13, 100663296);
  sub_5F554(a1, (unsigned __int8)a2, v7, 0);
  sub_5DDB0(a1, 80, (int)"or_temp_remote_grin32");
  usleep(0x2710u);
  sub_5DE08(a1, (unsigned __int8)a2, 112, 0);
  sub_5DE08(a1, (unsigned __int8)a2, 113, 0);
  sub_5DE08(a1, (unsigned __int8)a2, 114, 0);
  sub_5DE08(a1, (unsigned __int8)a2, 115, 0);
  sub_5DE08(a1, (unsigned __int8)a2, 116, 0);
  sub_5DE08(a1, (unsigned __int8)a2, 117, 0);
  check_tx_rx_status(a1, 0, a2);
  if ( check_ref_clock_ready_ext(a1, 0, (char *)a2, a3, a4) && (++dword_16CF68, dword_16CF68 <= 2) )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "check_ref_clock_ready_ext failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "serdes_phy_bist",
      15,
      11018,
      60,
      v21);
    return -1;
  }
  else
  {
    sub_5DE08(a1, (unsigned __int8)a2, 87, 255);
    usleep(0x2710u);
    serdes_phy_bist_external_all_phy(a1, 0, a3, 119);
    sub_5DDB0(a1, 158, 2);
    check_mac_done(a1, 0, (int)a2, 0);
    return 0;
  }
}

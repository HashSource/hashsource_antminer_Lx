int __fastcall serdes_phy_bist_internal_digital(int a1, int a2, _DWORD *a3, int a4, unsigned __int8 a5)
{
  int v8; // r10
  int v9; // r11
  int v10; // r8
  int v11; // r9
  int v12; // r12
  int v14; // [sp+28h] [bp-102Ch]
  _DWORD v16[7]; // [sp+30h] [bp-1024h] BYREF
  int v17; // [sp+4Ch] [bp-1008h]
  char v18[4080]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v16, "chain", *(int *)(a1 + 140));
  v8 = 61513;
  v9 = 61458;
  logfmt_raw(
    v18,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    "%s...",
    "serdes_phy_bist_internal_digital");
  V_UNLOCK();
  v10 = 61441;
  v11 = 61585;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_internal_digital",
    0x20u,
    9366,
    60,
    v18);
  v12 = 61559;
  if ( a4 != 8 )
  {
    v10 = 1;
    v12 = 119;
    v8 = 73;
    v11 = 145;
    v9 = 18;
  }
  v14 = v12;
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -521);
  sub_5D4B4(a1, (unsigned __int8)a3, v8, 520);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, 0);
  sub_5BD68(
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
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -15);
  sub_5D4B4(a1, (unsigned __int8)a3, v9, (2 * a5) & 0xE);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 98, 255);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -9);
  sub_5D4B4(a1, (unsigned __int8)a3, v11, 8);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -1073741825);
  sub_5D4B4(a1, (unsigned __int8)a3, v14, 0x40000000);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, 0);
  usleep((__useconds_t)&stru_18694.st_info);
  check_bist_tx_running(a1, a2, a3, a4);
  check_bist_rx_running(a1, a2, (int)a3, a4);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -9);
  sub_5D4B4(a1, (unsigned __int8)a3, v11, 0);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 98, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, a3, a4);
  check_bist_error(a1, a2, (int)a3, a4);
  return 0;
}

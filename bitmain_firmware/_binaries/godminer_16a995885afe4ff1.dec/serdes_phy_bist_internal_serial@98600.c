int __fastcall serdes_phy_bist_internal_serial(int a1, int a2, _DWORD *a3, int a4, unsigned __int8 a5)
{
  int v9; // r11
  int v10; // lr
  int v11; // r12
  int v12; // r9
  int v13; // r10
  int v15; // [sp+28h] [bp-102Ch]
  int v16; // [sp+2Ch] [bp-1028h]
  _DWORD v17[7]; // [sp+30h] [bp-1024h] BYREF
  int v18; // [sp+4Ch] [bp-1008h]
  char v19[4080]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v17, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    v19,
    0x1000u,
    0,
    v18,
    v17[0],
    v17[1],
    v17[2],
    v17[3],
    v17[4],
    v17[5],
    v17[6],
    v18,
    "%s...",
    "serdes_phy_bist_internal_serial");
  V_UNLOCK();
  v9 = 61559;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "serdes_phy_bist_internal_serial",
    31,
    9244,
    60,
    v19);
  v10 = 61454;
  v11 = 61458;
  if ( a4 != 8 )
  {
    v10 = 14;
    v11 = 18;
  }
  v12 = 61441;
  if ( a4 != 8 )
  {
    v12 = 1;
    v9 = 119;
  }
  v16 = v10;
  v13 = 61585;
  v15 = v11;
  if ( a4 != 8 )
    v13 = 145;
  sub_5C8F0(
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
  sub_5E03C(a1, (unsigned __int8)a3, v12, -15);
  sub_5E03C(a1, (unsigned __int8)a3, v15, (2 * a5) & 0xE);
  sub_5E03C(a1, (unsigned __int8)a3, v12, 0);
  sub_5C8F0(a1, (unsigned __int8)a3, 98, 255);
  check_bist_tx_running(a1, a2, a3, a4);
  sub_5E03C(a1, (unsigned __int8)a3, v12, -13);
  sub_5E03C(a1, (unsigned __int8)a3, v16, 12);
  sub_5E03C(a1, (unsigned __int8)a3, v12, 0);
  config_rxifrx_sigdet_ovr(a1, a2, (unsigned __int8)a3, a4);
  read_rx_debug_reg2(a1, a2, a3, a4);
  sub_5E03C(a1, (unsigned __int8)a3, v12, -9);
  sub_5E03C(a1, (unsigned __int8)a3, v13, 8);
  sub_5E03C(a1, (unsigned __int8)a3, v12, -1073741825);
  sub_5E03C(a1, (unsigned __int8)a3, v9, 0x40000000);
  sub_5E03C(a1, (unsigned __int8)a3, v12, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  check_bist_rx_running(a1, a2, (int)a3, a4);
  sub_5E03C(a1, (unsigned __int8)a3, v12, -9);
  sub_5E03C(a1, (unsigned __int8)a3, v13, 0);
  sub_5E03C(a1, (unsigned __int8)a3, v12, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, a3, a4);
  check_bist_error(a1, a2, (int)a3, a4);
  enable_rx_equalizer_tuning(a1, a2, a3, a4);
  sub_5E03C(a1, (unsigned __int8)a3, v12, -9);
  sub_5E03C(a1, (unsigned __int8)a3, v13, 8);
  sub_5E03C(a1, (unsigned __int8)a3, v12, -1073741825);
  sub_5E03C(a1, (unsigned __int8)a3, v9, 0x40000000);
  sub_5E03C(a1, (unsigned __int8)a3, v12, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  check_bist_rx_running(a1, a2, (int)a3, a4);
  sub_5E03C(a1, (unsigned __int8)a3, v12, -9);
  sub_5E03C(a1, (unsigned __int8)a3, v13, 0);
  sub_5E03C(a1, (unsigned __int8)a3, v12, 0);
  sub_5C8F0(a1, (unsigned __int8)a3, 98, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, a3, a4);
  check_bist_error(a1, a2, (int)a3, a4);
  return 0;
}

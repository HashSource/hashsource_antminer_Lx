int __fastcall serdes_phy_bist_external_all_phy(int a1, int a2, int a3, int a4)
{
  int v8; // r3
  int v9; // r2
  _DWORD v11[2]; // [sp+30h] [bp-68h] BYREF
  _DWORD v12[7]; // [sp+38h] [bp-60h] BYREF
  int v13; // [sp+54h] [bp-44h]
  _DWORD v14[7]; // [sp+58h] [bp-40h] BYREF
  int v15; // [sp+74h] [bp-24h]
  _DWORD v16[7]; // [sp+78h] [bp-20h] BYREF
  int v17; // [sp+94h] [bp-4h]
  char v18[4100]; // [sp+98h] [bp+0h] BYREF

  V_LOCK();
  V_INT((int)v12, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    v18,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "%s...",
    "serdes_phy_bist_external_all_phy");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_all_phy",
    32,
    10591,
    60,
    v18);
  sub_5BD68(
    a1,
    0xFFu,
    97,
    (a4 << 28) & 0x70000000
  | (a4 << 24) & 0x7000000
  | a4 & 7
  | (a4 << 20) & 0x700000
  | (a4 << 16) & 0x70000
  | ((_WORD)a4 << 12) & 0x7000
  | ((_WORD)a4 << 8) & 0x700
  | (16 * (_BYTE)a4) & 0x70);
  sub_5D4B4(a1, 0xFFu, 61441, -15);
  sub_5D4B4(a1, 0xFFu, 61458, (2 * (_BYTE)a4) & 0xE);
  sub_5D4B4(a1, 0xFFu, 61441, 0);
  v8 = a4 & 0xF;
  v11[1] = 0;
  switch ( v8 )
  {
    case 1:
      v9 = 7;
      goto LABEL_5;
    case 2:
      v9 = 9;
LABEL_5:
      strcpy((char *)v11, "prbs");
LABEL_6:
      sprintf((char *)&v11[1], "%2d", v9);
      goto LABEL_7;
    case 3:
      v9 = 11;
      goto LABEL_5;
    case 4:
      v9 = 13;
      goto LABEL_5;
    case 5:
      v9 = 15;
      goto LABEL_5;
    case 6:
      v9 = 23;
      goto LABEL_5;
    case 7:
      v9 = 31;
      strcpy((char *)v11, "prbs");
      goto LABEL_6;
  }
  strcpy((char *)v11, "clock");
LABEL_7:
  V_LOCK();
  logfmt_raw(v18, 0x1000u, 0, "%s %s...", "serdes_phy_bist_external_all_phy", v11);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_all_phy",
    32,
    10625,
    60,
    v18);
  sub_5BD68(a1, 0xFFu, 98, 255);
  enable_rxbist_autostop(a1, a2, 0xFFu, a3, 0x1Fu);
  read_rx_debug_reg2(a1, a2, (_BYTE *)0xFF, a3);
  sub_5D4B4(a1, 0xFFu, 61441, -9);
  sub_5D4B4(a1, 0xFFu, 61585, 8);
  sub_5D4B4(a1, 0xFFu, 61441, -1073741825);
  sub_5D4B4(a1, 0xFFu, 61559, 0x40000000);
  sub_5D4B4(a1, 0xFFu, 61441, 0);
  V_LOCK();
  V_INT((int)v14, "chain", *(int *)(a1 + 140));
  logfmt_raw(v18, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, "wait rx bist done!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_all_phy",
    32,
    10662,
    60,
    v18);
  usleep(0xF42400u);
  check_bist_tx_running(a1, a2, (_DWORD *)0xFF, a3);
  usleep(0x493E0u);
  sub_5D4B4(a1, 0xFFu, 61441, -9);
  sub_5D4B4(a1, 0xFFu, 61585, 0);
  sub_5D4B4(a1, 0xFFu, 61441, 0);
  check_ref_clock_ready_ext(a1, a2, (char *)0xFF, a3, 0);
  check_bist_done(a1, a2, (_BYTE *)0xFF, a3);
  check_bist_error(a1, a2, 255, a3);
  if ( a4 )
  {
    enable_rx_equalizer_tuning(a1, a2, (_BYTE *)0xFF, a3);
    enable_rxbist_autostop(a1, a2, 0xFFu, a3, 0x1Fu);
    read_rx_debug_reg2(a1, a2, (_BYTE *)0xFF, a3);
    sub_5D4B4(a1, 0xFFu, 61441, -9);
    sub_5D4B4(a1, 0xFFu, 61585, 8);
    sub_5D4B4(a1, 0xFFu, 61441, -1073741825);
    sub_5D4B4(a1, 0xFFu, 61559, 0x40000000);
    sub_5D4B4(a1, 0xFFu, 61441, 0);
    V_LOCK();
    V_INT((int)v16, "chain", *(int *)(a1 + 140));
    logfmt_raw(v18, 0x1000u, 0, v17, v16[0], v16[1], v16[2], v16[3], v16[4], v16[5], v16[6], v17, "wait rx bist done!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "serdes_phy_bist_external_all_phy",
      32,
      10709,
      60,
      v18);
    usleep(0xF42400u);
    check_bist_tx_running(a1, a2, (_DWORD *)0xFF, a3);
    usleep(0x493E0u);
    sub_5D4B4(a1, 0xFFu, 61441, -9);
    sub_5D4B4(a1, 0xFFu, 61585, 0);
    sub_5D4B4(a1, 0xFFu, 61441, 0);
    check_ref_clock_ready_ext(a1, a2, (char *)0xFF, a3, 0);
    check_bist_done(a1, a2, (_BYTE *)0xFF, a3);
    check_bist_error(a1, a2, 255, a3);
  }
  sub_5BD68(a1, 0xFFu, 98, 0);
  return 0;
}

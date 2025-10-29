int __fastcall serdes_phy_bist_external_0811(
        int a1,
        int a2,
        _BYTE *a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6,
        int a7)
{
  int v10; // r10
  int v11; // r9
  int v12; // r9
  const char *v13; // r7
  unsigned __int8 *v14; // r8
  unsigned __int8 v15; // r3
  unsigned __int8 v16; // t1
  unsigned int v18; // r3
  unsigned __int8 v19; // r2
  int *v20; // r9
  unsigned __int8 v21; // t1
  unsigned __int8 v22; // [sp+0h] [bp-106Ch]
  int v24; // [sp+40h] [bp-102Ch]
  _DWORD v25[7]; // [sp+48h] [bp-1024h] BYREF
  int v26; // [sp+64h] [bp-1008h]
  int v27; // [sp+68h] [bp-1004h] BYREF
  char v28; // [sp+6Ch] [bp-1000h]
  _BYTE _6D[4115]; // [sp+6Dh] [bp-FFFh] BYREF

  V_LOCK();
  V_INT((int)v25, "chain", *(int *)(a1 + 140));
  v10 = 61458;
  logfmt_raw(
    (char *)&v27,
    0x1000u,
    0,
    v26,
    v25[0],
    v25[1],
    v25[2],
    v25[3],
    v25[4],
    v25[5],
    v25[6],
    v26,
    "%s...",
    "serdes_phy_bist_external_0811");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "serdes_phy_bist_external_0811",
    29,
    9976,
    60,
    &v27);
  v11 = 61441;
  if ( a4 != 8 )
  {
    v11 = 1;
    v10 = 18;
  }
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
  sub_5E03C(a1, (unsigned __int8)a3, v11, -15);
  sub_5E03C(a1, (unsigned __int8)a3, v10, (2 * a5) & 0xE);
  sub_5E03C(a1, (unsigned __int8)a3, v11, 0);
  if ( a6 )
  {
    v18 = a6 >> 1;
    if ( a6 >> 1 )
    {
      v19 = 0;
      do
      {
        v18 >>= 1;
        ++v19;
      }
      while ( v18 );
      v12 = v19;
      v24 = v19;
    }
    else
    {
      v24 = 0;
      v12 = 0;
    }
  }
  else
  {
    v24 = 1;
    v12 = 1;
  }
  V_LOCK();
  if ( a5 )
    v13 = "prbs";
  else
    v13 = "clock";
  logfmt_raw((char *)&v27, 0x1000u, 0, "group %d test %d %s...", a7, v12, v13);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "serdes_phy_bist_external_0811",
    29,
    9998,
    60,
    &v27);
  switch ( a6 )
  {
    case 2u:
      if ( a7 )
      {
        div2_seq_one_lane(a1, a2, (int)a3, 4);
        goto LABEL_34;
      }
      div2_seq_one_lane(a1, a2, (int)a3, 7);
      goto LABEL_19;
    case 4u:
      if ( a7 )
      {
        div4_seq_one_lane(a1, a2, (int)a3, 4);
        goto LABEL_34;
      }
      div4_seq_one_lane(a1, a2, (int)a3, 7);
      goto LABEL_19;
    case 8u:
      if ( a7 )
      {
        div8_seq_one_lane(a1, a2, (int)a3, 4);
        goto LABEL_34;
      }
      div8_seq_one_lane(a1, a2, (int)a3, 7);
LABEL_19:
      v28 = 28;
      v27 = 336529925;
      goto LABEL_20;
    case 0x20u:
      if ( a7 )
      {
        div32_20210813_500M_one_lane(a1, a2, (int)a3, 4);
LABEL_34:
        v28 = 28;
        v27 = 336529925;
LABEL_35:
        sub_5C8F0(a1, (unsigned __int8)a3, 98, 16);
        goto LABEL_21;
      }
      div32_20210813_500M_one_lane(a1, a2, (int)a3, 7);
      goto LABEL_19;
  }
  V_LOCK();
  logfmt_raw((char *)&v27, 0x1000u, 0, "do not set div_seq with testcase 4");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "serdes_phy_bist_external_0811",
    29,
    10021,
    60,
    &v27);
  v28 = 28;
  v27 = 336529925;
  if ( a7 )
    goto LABEL_35;
LABEL_20:
  sub_5C8F0(a1, (unsigned __int8)a3, 98, 128);
LABEL_21:
  v14 = (unsigned __int8 *)&v27 + 1;
  v15 = 5;
  while ( a7 )
  {
    enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 7u, v15);
    read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
    read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
    sub_5C8F0(a1, (unsigned __int8)a3, 144, -9);
    sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454975);
    sub_5C8F0(a1, (unsigned __int8)a3, 144, 8);
    sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454831);
    sub_5C8F0(a1, (unsigned __int8)a3, 144, -1073741825);
    sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454975);
    sub_5C8F0(a1, (unsigned __int8)a3, 144, 0x40000000);
    sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454857);
    sub_5C8F0(a1, (unsigned __int8)a3, 144, 0);
    sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454975);
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
    check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
    usleep(0x493E0u);
    sub_5C8F0(a1, (unsigned __int8)a3, 144, -9);
    sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454975);
    sub_5C8F0(a1, (unsigned __int8)a3, 144, 0);
    sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454831);
    sub_5C8F0(a1, (unsigned __int8)a3, 144, 0);
    sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454975);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done_one_lane(a1, a2, (int)a3, 4);
    check_bist_done_one_lane(a1, a2, (int)a3, 7);
    check_bist_error_one_lane(a1, a2, (int)a3, 7);
    if ( _6D == v14 )
      goto LABEL_26;
LABEL_23:
    v16 = *v14++;
    v15 = v16;
  }
  enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 4u, v15);
  read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
  read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
  sub_5C8F0(a1, (unsigned __int8)a3, 144, -9);
  sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467263);
  sub_5C8F0(a1, (unsigned __int8)a3, 144, 8);
  sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467119);
  sub_5C8F0(a1, (unsigned __int8)a3, 144, -1073741825);
  sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467263);
  sub_5C8F0(a1, (unsigned __int8)a3, 144, 0x40000000);
  sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467145);
  sub_5C8F0(a1, (unsigned __int8)a3, 144, 0);
  sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467263);
  usleep((__useconds_t)&loc_F4240);
  check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
  check_bist_rx_running_one_lane(a1, a2, (int)a3, 4);
  usleep(0x493E0u);
  sub_5C8F0(a1, (unsigned __int8)a3, 144, -9);
  sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467263);
  sub_5C8F0(a1, (unsigned __int8)a3, 144, 0);
  sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467119);
  sub_5C8F0(a1, (unsigned __int8)a3, 144, 0);
  sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467263);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done_one_lane(a1, a2, (int)a3, 4);
  check_bist_done_one_lane(a1, a2, (int)a3, 7);
  check_bist_error_one_lane(a1, a2, (int)a3, 4);
  if ( _6D != v14 )
    goto LABEL_23;
LABEL_26:
  if ( v24 == 4 )
  {
    if ( a7 )
      enable_rx_equalizer_tuning_one_lane(a1, a2, (int)a3, 7);
    else
      enable_rx_equalizer_tuning_one_lane(a1, a2, (int)a3, 4);
    v20 = &v27;
    do
    {
      v21 = *(_BYTE *)v20;
      v20 = (int *)((char *)v20 + 1);
      v22 = v21;
      if ( a7 )
      {
        enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 7u, v22);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, -9);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454975);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, 8);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454831);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, -1073741825);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454975);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, 0x40000000);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454857);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, 0);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454975);
        usleep((__useconds_t)&loc_F4240);
        check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
        check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
        usleep(0x493E0u);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, -9);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454975);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, 0);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454831);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, 0);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147454975);
        check_ref_clock_ready(a1, a2, (int)a3);
        check_bist_done_one_lane(a1, a2, (int)a3, 4);
        check_bist_done_one_lane(a1, a2, (int)a3, 7);
        check_bist_error_one_lane(a1, a2, (int)a3, 7);
      }
      else
      {
        enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 4u, v22);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, -9);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467263);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, 8);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467119);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, -1073741825);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467263);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, 0x40000000);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467145);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, 0);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467263);
        usleep((__useconds_t)&loc_F4240);
        check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
        check_bist_rx_running_one_lane(a1, a2, (int)a3, 4);
        usleep(0x493E0u);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, -9);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467263);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, 0);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467119);
        sub_5C8F0(a1, (unsigned __int8)a3, 144, 0);
        sub_5C8F0(a1, (unsigned __int8)a3, 145, -2147467263);
        check_ref_clock_ready(a1, a2, (int)a3);
        check_bist_done_one_lane(a1, a2, (int)a3, 4);
        check_bist_done_one_lane(a1, a2, (int)a3, 7);
        check_bist_error_one_lane(a1, a2, (int)a3, 4);
      }
    }
    while ( v20 != (int *)v14 );
  }
  sub_5C8F0(a1, (unsigned __int8)a3, 98, 0);
  return 0;
}

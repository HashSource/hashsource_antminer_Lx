int __fastcall setup_all_chip_dash(int a1)
{
  int v2; // r5
  int v3; // s15
  float v4; // s0
  float v5; // s15
  float v6; // s0
  float v7; // s16
  void *v8; // r0
  char v9; // r8
  int v10; // r5
  char v11; // r0
  int result; // r0
  int v13; // r9
  int v14; // [sp+4h] [bp-1018h]
  unsigned __int8 v15; // [sp+16h] [bp-1006h] BYREF
  unsigned __int8 v16; // [sp+17h] [bp-1005h] BYREF
  char v17[4100]; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v17, 0x1000u, 0, "setup_all_chip_dash\n");
  v2 = 25;
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_dash/backend_dash.c",
    171,
    "setup_all_chip_dash",
    19,
    319,
    60,
    v17);
  v15 = 0;
  v16 = 0;
  do
  {
    sub_5A1DC(a1);
    usleep(0x61A8u);
    v3 = v2;
    v2 += 25;
    v4 = (float)v3;
    v5 = *(float *)(a1 + 760);
    v6 = v4 + 50.0;
  }
  while ( v6 <= v5 );
  v7 = v6 - 25.0;
  if ( v5 > (float)(v6 - 25.0) )
  {
    sub_5A1DC(a1);
    usleep(0x61A8u);
    v7 = *(float *)(a1 + 760);
  }
  V_LOCK();
  logfmt_raw(v17, 0x1000u, 0, "Set chip final freq=%f", v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_dash/backend_dash.c",
    171,
    "set_working_freq_by_steps",
    25,
    313,
    60,
    v17);
  sub_585C8(a1);
  usleep(0x4E20u);
  eeprom_read(*(_DWORD *)(a1 + 140), 0xC3u, (int)&v15, 1);
  V_LOCK();
  logfmt_raw(v17, 0x1000u, 0, "read marker %x", v15);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_dash/backend_dash.c",
    171,
    "setup_all_chip_dash",
    19,
    354,
    60,
    v17);
  if ( v15 == 165 )
  {
    *(_BYTE *)(a1 + 310) = 1;
    eeprom_read(*(_DWORD *)(a1 + 140), 0xC4u, (int)&v16, 1);
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "read eeprom high hashrate: %02x", v16);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_dash/backend_dash.c",
      171,
      "setup_all_chip_dash",
      19,
      358,
      20,
      v17);
    v13 = v16;
    eeprom_read(*(_DWORD *)(a1 + 140), 0xC5u, (int)&v16, 1);
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "read eeprom low hashrate: %02x", v16);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_dash/backend_dash.c",
      171,
      "setup_all_chip_dash",
      19,
      361,
      20,
      v17);
    *(double *)(a1 + 312) = (double)(v16 | (v13 << 8)) * 1000.0 * 1000.0 * 1000.0;
    V_LOCK();
    logfmt_raw(
      v17,
      0x1000u,
      0,
      "chain%d  avg hashrate is %f",
      *(_DWORD *)(a1 + 140),
      v14,
      *(_DWORD *)(a1 + 312),
      *(_DWORD *)(a1 + 316));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_dash/backend_dash.c",
      171,
      "setup_all_chip_dash",
      19,
      364,
      20,
      v17);
  }
  set_ticket_mask_dash(a1, 255);
  v8 = calloc(1u, 0xB0u);
  v9 = *(_BYTE *)(a1 + 136);
  v10 = (int)v8;
  v11 = rand();
  memset((void *)(v10 + 40), (unsigned __int8)(v9 + v11), 0x50u);
  push_work_base(a1, v10);
  free((void *)v10);
  V_LOCK();
  logfmt_raw(v17, 0x1000u, 0, "get addr after open cores.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_dash/backend_dash.c",
    171,
    "setup_all_chip_dash",
    19,
    375,
    60,
    v17);
  sub_59AB0(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}

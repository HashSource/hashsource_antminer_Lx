int __fastcall setup_all_chip_dcr(int a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r7
  _BYTE *v5; // r8
  _BYTE *v6; // r2
  char v7; // r3
  unsigned int v8; // r3
  int result; // r0
  int v10; // r6
  void (__fastcall *v11)(int, int *); // r3
  char *v12; // r7
  void (__fastcall *v13)(int, int *); // r3
  char v14; // r10
  char v15; // r0
  unsigned int v16; // [sp+50h] [bp-1094h]
  void *ptr; // [sp+54h] [bp-1090h]
  int v18; // [sp+58h] [bp-108Ch]
  _DWORD v19[4]; // [sp+70h] [bp-1074h] BYREF
  _DWORD v20[8]; // [sp+80h] [bp-1064h] BYREF
  _DWORD v21[7]; // [sp+A0h] [bp-1044h] BYREF
  int v22; // [sp+BCh] [bp-1028h]
  _DWORD v23[7]; // [sp+C0h] [bp-1024h] BYREF
  int v24; // [sp+DCh] [bp-1008h]
  int v25; // [sp+E0h] [bp-1004h] BYREF
  int v26; // [sp+E4h] [bp-1000h]
  int v27; // [sp+E8h] [bp-FFCh]
  int v28; // [sp+ECh] [bp-FF8h]

  v2 = *(_DWORD *)(a1 + 196);
  V_LOCK();
  logfmt_raw((char *)&v25, 0x1000u, 0, "%s", "setup_all_chip_dcr");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_dcr/backend_dcr.c",
    169,
    "setup_all_chip_dcr",
    18,
    248,
    60,
    &v25);
  v3 = sub_12CE18(256, (unsigned __int8)v2);
  v4 = v3;
  v5 = *(_BYTE **)(a1 + 296);
  if ( (_BYTE)v2 )
  {
    v6 = v5 - 1;
    v7 = 0;
    do
    {
      *++v6 = v7;
      v7 += v3;
    }
    while ( &v5[(unsigned __int8)v2 - 1] != v6 );
  }
  *v5 = rand();
  *(_DWORD *)(a1 + 240) = v4;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), v2);
  V_LOCK();
  logfmt_raw((char *)&v25, 0x1000u, 0, "get addr after open cores and set frequency.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_dcr/backend_dcr.c",
    169,
    "setup_all_chip_dcr",
    18,
    263,
    60,
    &v25);
  v16 = *(_DWORD *)(a1 + 196);
  v18 = 3;
  while ( 1 )
  {
    V_LOCK();
    logfmt_raw((char *)&v25, 0x1000u, 0, "get_addr %s chip_no %d", "ChipSetting_get_addr_DCR", v16);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/chip_setting.c",
      158,
      "ChipSetting_get_addr_DCR",
      24,
      26,
      20,
      &v25);
    v19[2] = 1;
    v19[0] = 0;
    v19[1] = 0;
    v19[3] = 0;
    ptr = calloc(12 * v16, 1u);
    (*(void (__fastcall **)(int, _DWORD *, unsigned int))(a1 + 176))(a1, v19, v16);
    V_LOCK();
    V_INT((int)v23, "chain", *(int *)(a1 + 140));
    logfmt_raw(
      (char *)&v25,
      0x1000u,
      0,
      v24,
      v23[0],
      v23[1],
      v23[2],
      v23[3],
      v23[4],
      v23[5],
      v23[6],
      v24,
      "%s detect %d chips",
      "ChipSetting_get_addr_DCR",
      0);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/chip_setting.c",
      158,
      "ChipSetting_get_addr_DCR",
      24,
      36,
      60,
      &v25);
    if ( *(int *)(a1 + 196) > 0 )
    {
      V_LOCK();
      V_INT((int)v21, "chain", *(int *)(a1 + 140));
      V_STR(v20, "error", "asic num error");
      logfmt_raw(
        (char *)&v25,
        0x1000u,
        0,
        v22,
        v21[0],
        v21[1],
        v21[2],
        v21[3],
        v21[4],
        v21[5],
        v21[6],
        v22,
        v20[0],
        v20[1],
        v20[2],
        v20[3],
        v20[4],
        v20[5],
        v20[6],
        v20[7],
        "detected asic num less than design");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/chip_setting.c",
        158,
        "ChipSetting_get_addr_DCR",
        24,
        54,
        100,
        &v25);
    }
    free(ptr);
    *(_DWORD *)(a1 + 236) = 0;
    usleep(0x2710u);
    v8 = *(_DWORD *)(a1 + 236);
    if ( v16 <= v8 )
      break;
    if ( !--v18 )
      return 3;
  }
  if ( v16 != v8 )
    return 3;
  v27 = 6291456;
  v26 = 0;
  v28 = 0;
  v25 = 48;
  v10 = 0;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v27) = 1;
  v11(a1, &v25);
  v27 = 524289;
  v28 = 255;
  v26 = 0;
  v25 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 160))(a1, &v25);
  usleep((__useconds_t)&stru_1869C.st_value);
  chip_setting_ticket_value_dcr(a1, 255);
  chip_setting_misc_dcr(a1);
  v12 = (char *)calloc(1u, 0x118u);
  do
  {
    v13 = *(void (__fastcall **)(int, int *))(a1 + 160);
    v25 = 23130;
    v27 = 131073;
    v26 = 0;
    v28 = (unsigned __int8)v10++;
    v13(a1, &v25);
    usleep((__useconds_t)&stru_1387C.st_value);
    usleep(0x4E20u);
    v14 = *(_BYTE *)(a1 + 136);
    v15 = rand();
    memset(v12 + 40, (unsigned __int8)(v14 + v15), 0xB4u);
    push_work_base(a1, (int)v12);
    usleep((__useconds_t)&loc_3D090);
  }
  while ( v10 != 192 );
  free(v12);
  result = *(unsigned __int8 *)(a1 + 268);
  if ( *(_BYTE *)(a1 + 268) )
    return 0;
  *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}

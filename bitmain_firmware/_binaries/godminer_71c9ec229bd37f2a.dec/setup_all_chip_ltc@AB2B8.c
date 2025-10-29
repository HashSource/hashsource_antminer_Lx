int __fastcall setup_all_chip_ltc(int a1)
{
  int v2; // r8
  int v3; // r4
  int v4; // r0
  int v5; // r1
  char v6; // r3
  int v7; // r1
  void (__fastcall *v8)(int, int, int); // r3
  int v9; // r4
  int v11; // [sp+0h] [bp-1024h]
  _DWORD v12[4]; // [sp+10h] [bp-1014h] BYREF
  char v13[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 204);
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "%s", "setup_all_chip_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/backend_ltc.c",
    154,
    "setup_all_chip_ltc",
    18,
    336,
    60,
    v13);
  if ( !check_asic_num_ltc((_DWORD *)a1, 1) )
    return 3;
  v3 = *(_DWORD *)(a1 + 304);
  v4 = sub_12EF40(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    v5 = v3 - 1;
    v6 = 0;
    do
    {
      *(_BYTE *)++v5 = v6;
      v6 += v4;
    }
    while ( v3 - 1 + (unsigned __int8)v2 != v5 );
    v3 = *(_DWORD *)(a1 + 304);
  }
  v7 = v3;
  v8 = *(void (__fastcall **)(int, int, int))(a1 + 156);
  *(_DWORD *)(a1 + 248) = v4;
  v9 = 0;
  v8(a1, v7, v2);
  v12[2] = 2883585;
  v12[1] = 0;
  v12[3] = 0;
  v12[0] = 0;
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "set analog value %08x", 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_analog_mux_LTC",
    26,
    503,
    60,
    v13);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 164))(a1, v12);
  chip_setting_ticket_mask_ltc((_DWORD *)a1, 0xFFFFFFFF);
  if ( *(int *)(a1 + 208) > 0 )
  {
    do
    {
      v11 = v9++;
      chip_setting_working_mode_ltc(a1, 1, 0, 0, v11, 0xFFu);
    }
    while ( *(_DWORD *)(a1 + 208) > v9 );
  }
  if ( *(_BYTE *)(a1 + 788) )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "low power mode select!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/backend_ltc.c",
      154,
      "setup_all_chip_ltc",
      18,
      401,
      60,
      v13);
    chip_setting_share_mode_ltc(a1);
  }
  *(_DWORD *)(a1 + 280) = 900;
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "get addr after open cores and set frequency.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/backend_ltc.c",
    154,
    "setup_all_chip_ltc",
    18,
    409,
    60,
    v13);
  if ( check_asic_num_ltc((_DWORD *)a1, 0) )
    return 0;
  else
    return 3;
}

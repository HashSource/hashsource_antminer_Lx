int __fastcall top_init_ltc(int a1)
{
  char v4[56]; // [sp+1Ch] [bp-1038h] BYREF
  float v5; // [sp+102Ch] [bp-28h]
  float v6; // [sp+1030h] [bp-24h]
  int v7; // [sp+1034h] [bp-20h]
  int v8; // [sp+1038h] [bp-1Ch]
  int v9; // [sp+103Ch] [bp-18h]
  int v10; // [sp+1040h] [bp-14h]
  float i; // [sp+1044h] [bp-10h]
  int j; // [sp+1048h] [bp-Ch]
  int v13; // [sp+104Ch] [bp-8h]

  v13 = *(_DWORD *)(a1 + 336);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "get chip address %s ", "top_init_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
    181,
    "top_init_ltc",
    12,
    717,
    20,
    v4);
  if ( sub_818D8((_DWORD *)a1) )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "get chip address failed ");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
      181,
      "top_init_ltc",
      12,
      719,
      100,
      v4);
    return 102;
  }
  else
  {
    *(_DWORD *)(a1 + 428) = sub_83464(*(_DWORD *)(a1 + 492), v13);
    (*(void (__fastcall **)(int, _DWORD, int))(a1 + 260))(a1, *(_DWORD *)(a1 + 492), v13);
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    chip_setting_misc_ltc(a1, 0, 0, 0, 0);
    v6 = 50.0;
    v5 = 50.0;
    for ( i = (float)*(int *)(a1 + 464) - 50.0; i >= v6; i = i - v5 )
    {
      (*(void (__fastcall **)(int, _DWORD))(a1 + 192))(a1, 0);
      usleep((__useconds_t)sub_30D40);
    }
    for ( j = 0; j <= 2; ++j )
      (*(void (__fastcall **)(int))(a1 + 60))(a1);
    chip_setting_working_mode_ltc(a1, 1, 0, *(_DWORD *)(a1 + 340), 0, 0xFFu);
    chip_setting_core_error_ctrl_ltc(a1);
    (*(void (__fastcall **)(int))(a1 + 36))(a1);
    return 0;
  }
}

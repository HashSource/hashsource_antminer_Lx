int __fastcall hot_cold_restart_base(int a1)
{
  __int64 v1; // r0
  int (**v2)(); // r0
  int (**v3)(); // r0
  int (**v4)(); // r0
  int (**v5)(); // r0
  int (**v6)(); // r0
  char v9[32]; // [sp+1Ch] [bp-1020h] BYREF
  int v10; // [sp+101Ch] [bp-20h] BYREF
  unsigned int seconds; // [sp+1020h] [bp-1Ch]
  int k; // [sp+1024h] [bp-18h]
  int v13; // [sp+1028h] [bp-14h]
  _DWORD *all_created_runtime; // [sp+102Ch] [bp-10h]
  int i; // [sp+1030h] [bp-Ch]
  int j; // [sp+1034h] [bp-8h]

  v13 = 0;
  v10 = 0;
  all_created_runtime = get_all_created_runtime(&v10);
  for ( i = 0; i <= 14; ++i )
  {
    power_on();
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "----%s, No.%d begin----", "hot_cold_restart_base", i + 1);
    V_UNLOCK();
    v1 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godm"
           "iner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
           176,
           "hot_cold_restart_base",
           21,
           831,
           60,
           v9);
    for ( j = 0; j < v10; ++j )
    {
      v2 = dev_ctrl();
      ((void (__fastcall *)(_DWORD))v2[8])(*(_DWORD *)(all_created_runtime[j] + 248));
      sleep(5u);
      for ( k = 0; k <= 2; ++k )
      {
        v3 = dev_ctrl();
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v3[6])(
          *(_DWORD *)(all_created_runtime[j] + 248),
          *(_DWORD *)(all_created_runtime[j] + 1108),
          *(_DWORD *)(all_created_runtime[j] + 1128));
        v13 = (*(int (__fastcall **)(_DWORD))(all_created_runtime[j] + 220))(all_created_runtime[j]);
        if ( !v13 )
          break;
      }
      (*(void (__fastcall **)(_DWORD))(all_created_runtime[j] + 232))(all_created_runtime[j]);
    }
    for ( j = 0; j < v10; ++j )
    {
      HIDWORD(v1) = all_created_runtime;
      if ( *(_DWORD *)(all_created_runtime[j] + 424) != *(_DWORD *)(all_created_runtime[j] + 336) )
      {
        V_LOCK();
        logfmt_raw(
          v9,
          0x1000u,
          0,
          "chain %d check asic number error before increasing freq",
          *(_DWORD *)(all_created_runtime[j] + 252));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
          176,
          "hot_cold_restart_base",
          21,
          850,
          100,
          v9);
LABEL_29:
        fan_pwm_set_max();
        power_off();
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, "----%s failed----", "hot_cold_restart_base");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
          176,
          "hot_cold_restart_base",
          21,
          893,
          60,
          v9);
        while ( 1 )
          sleep(1u);
      }
    }
    (*(void (__fastcall **)(int, _DWORD))(a1 + 68))(a1, HIDWORD(v1));
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 100));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "hot_cold_restart_base",
      21,
      855,
      60,
      v9);
    check_if_bringup_temp_valid(a1);
    v13 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
    if ( v13 )
      goto LABEL_29;
    for ( j = 0; j < v10; ++j )
    {
      v13 = (*(int (__fastcall **)(_DWORD))(all_created_runtime[j] + 220))(all_created_runtime[j]);
      if ( *(_DWORD *)(all_created_runtime[j] + 424) != *(_DWORD *)(all_created_runtime[j] + 336) )
      {
        V_LOCK();
        logfmt_raw(
          v9,
          0x1000u,
          0,
          "chain %d check asic number error after increasing freq",
          *(_DWORD *)(all_created_runtime[j] + 252));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
          176,
          "hot_cold_restart_base",
          21,
          866,
          100,
          v9);
        goto LABEL_29;
      }
    }
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "----%s, No.%d end----", "hot_cold_restart_base", i + 1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "hot_cold_restart_base",
      21,
      870,
      60,
      v9);
    seconds = 120;
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "----cooling for %d seconds----", seconds);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "hot_cold_restart_base",
      21,
      872,
      60,
      v9);
    power_off();
    fan_pwm_set_max();
    for ( j = 0; j < v10; ++j )
    {
      v4 = dev_ctrl();
      ((void (__fastcall *)(_DWORD))v4[8])(*(_DWORD *)(all_created_runtime[j] + 248));
      v5 = dev_ctrl();
      ((void (__fastcall *)(int))v5[10])(j);
    }
    sleep(seconds);
  }
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "----%s success----", "hot_cold_restart_base");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/machine_runtime_base.c",
    176,
    "hot_cold_restart_base",
    21,
    883,
    60,
    v9);
  power_on();
  for ( j = 0; j < v10; ++j )
  {
    v6 = dev_ctrl();
    ((void (__fastcall *)(_DWORD))v6[8])(*(_DWORD *)(all_created_runtime[j] + 248));
  }
  return 0;
}

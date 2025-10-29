int __fastcall set_frequency_with_voltage_1491(int a1)
{
  float v1; // r3
  int v3; // r0
  int v4; // r3
  char v5; // r0
  int v6; // r0
  int v7; // r3
  char v8; // r0
  int v9; // r0
  int v10; // r3
  char v11; // r0
  char v14[16]; // [sp+1Ch] [bp-1090h] BYREF
  pthread_t newthread; // [sp+101Ch] [bp-90h] BYREF
  struct timespec v16[2]; // [sp+1020h] [bp-8Ch] BYREF
  int v17; // [sp+1030h] [bp-7Ch] BYREF
  int v18; // [sp+1034h] [bp-78h] BYREF
  int v19; // [sp+1038h] [bp-74h] BYREF
  struct timespec *v20; // [sp+103Ch] [bp-70h]
  struct timespec *tp; // [sp+1040h] [bp-6Ch]
  int v22; // [sp+1044h] [bp-68h]
  int v23; // [sp+1048h] [bp-64h]
  int v24; // [sp+104Ch] [bp-60h]
  int v25; // [sp+1050h] [bp-5Ch]
  int v26; // [sp+1054h] [bp-58h]
  int v27; // [sp+1058h] [bp-54h]
  float v28; // [sp+105Ch] [bp-50h]
  int v29; // [sp+1060h] [bp-4Ch]
  int working_voltage; // [sp+1064h] [bp-48h]
  unsigned int v31; // [sp+1068h] [bp-44h]
  int v32; // [sp+106Ch] [bp-40h]
  float v33; // [sp+1070h] [bp-3Ch]
  float v34; // [sp+1074h] [bp-38h]
  _DWORD *all_created_runtime; // [sp+1078h] [bp-34h]
  int v36; // [sp+107Ch] [bp-30h]
  int j; // [sp+1080h] [bp-2Ch]
  float v38; // [sp+1084h] [bp-28h]
  int v39; // [sp+1088h] [bp-24h]
  int current_voltage; // [sp+108Ch] [bp-20h]
  int v41; // [sp+1090h] [bp-1Ch]
  int v42; // [sp+1094h] [bp-18h]
  int k; // [sp+1098h] [bp-14h]
  int i; // [sp+109Ch] [bp-10h]

  v36 = 0;
  v19 = 0;
  all_created_runtime = get_all_created_runtime(&v19);
  v34 = 12.5;
  v38 = (float)*(int *)(*all_created_runtime + 464);
  if ( *(float *)(*all_created_runtime + 1104) <= *(float *)(a1 + 112) )
    v1 = *(float *)(*all_created_runtime + 1104);
  else
    v1 = *(float *)(a1 + 112);
  v33 = v1;
  v41 = 120000;
  v32 = (int)(float)((float)(v1 - v38) / v34);
  v18 = -64;
  v17 = 255;
  v31 = 10;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v29 = 0;
  v39 = working_voltage;
  v42 = sub_CC518(current_voltage - working_voltage, v31);
  v28 = v33 * *(float *)(a1 + 120);
  if ( *(_DWORD *)(a1 + 100) != -64 )
  {
    v29 = (*(int (__fastcall **)(int, _DWORD))a1)(a1, *(_DWORD *)(a1 + 100));
    v39 = v29 + working_voltage;
    v42 = sub_CC518(current_voltage - (v29 + working_voltage), v31);
  }
  for ( i = 0; i < v32; ++i )
  {
    v38 = v38 + v34;
    if ( v38 > 850.0 )
    {
      v38 = 850.0;
      break;
    }
    for ( j = 0; j < v19; ++j )
    {
      if ( !all_created_runtime[j] )
      {
        printf("invalid pointer(%s)!\n", "be_runtimes[b]");
        return 3;
      }
      v36 = (*(int (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[j] + 192))(all_created_runtime[j], 0);
      if ( v36 )
        return v36;
    }
    usleep(*(_DWORD *)(a1 + 108));
    if ( current_voltage > (int)(2 * v31 + v39) && v38 > v28 && i >= v32 - v42 )
    {
      current_voltage -= v31;
      v36 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( v36 )
        return v36;
      usleep((__useconds_t)sub_30D40);
    }
  }
  v36 = check_temperature_base(a1, &v18, &v17);
  if ( v36 )
    return v36;
  if ( v18 <= 69 && v17 <= 69 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "Warming up chains, please wait...");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/ltc_1491/machine_runtime_ltc_1491.c",
      189,
      "set_frequency_with_voltage_1491",
      31,
      188,
      60,
      v14);
  }
  while ( v18 <= 69 && v17 <= 69 && v41 > 0 )
  {
    tp = v16;
    clock_gettime(1, v16);
    fan_pwm_set(0x1Eu);
    sleep(1u);
    for ( j = 0; j < v19; ++j )
    {
      v36 = check_temperature_base(a1, &v18, &v17);
      if ( v36 )
        return v36;
      if ( !dword_1523DC )
      {
        V_LOCK();
        logfmt_raw(v14, 0x1000u, 0, "warming up, min temp %d max temp %d", v18, v17);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/ltc_1491/machine_runtime_ltc_1491.c",
          189,
          "set_frequency_with_voltage_1491",
          31,
          198,
          40,
          v14);
      }
      dword_1523DC = (dword_1523DC + 1) % 10;
    }
    v20 = v16;
    clock_gettime(1, &v16[1]);
    v41 -= (v20[1].tv_nsec - v20->tv_nsec) / 1000000
         + vshld_n_s64(
             4 * (vshld_n_s64(v20[1].tv_sec - v20->tv_sec, 5u) - (v20[1].tv_sec - v20->tv_sec))
           + v20[1].tv_sec
           - v20->tv_sec,
             3u);
  }
  fan_pwm_set(0x32u);
  pthread_create(&newthread, 0, (void *(*)(void *))thread_monitor_temperature_in_startup_stage, (void *)a1);
  if ( *(int *)(a1 + 100) > 7 )
  {
    if ( *(int *)(a1 + 100) > 32 )
    {
      v9 = get_current_voltage();
      v27 = v9;
      v26 = 1350;
      v10 = v9 - 1350;
      if ( v9 - 1350 < 0 )
        v10 = 1350 - v9;
      if ( v10 > 9 )
      {
        V_LOCK();
        logfmt_raw(v14, 0x1000u, 0, "cur_voltage:%d, set voltage to %d", v27, v26);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/ltc_1491/machine_runtime_ltc_1491.c",
          189,
          "set_frequency_with_voltage_1491",
          31,
          232,
          40,
          v14);
        v11 = is_power_init();
        set_voltage_by_steps(v26, v11, 0x64u);
      }
    }
    else
    {
      v6 = get_current_voltage();
      v25 = v6;
      v24 = 1390;
      v7 = v6 - 1390;
      if ( v6 - 1390 < 0 )
        v7 = 1390 - v6;
      if ( v7 > 9 )
      {
        V_LOCK();
        logfmt_raw(v14, 0x1000u, 0, "cur_voltage:%d, set voltage to %d", v25, v24);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/ltc_1491/machine_runtime_ltc_1491.c",
          189,
          "set_frequency_with_voltage_1491",
          31,
          222,
          40,
          v14);
        v8 = is_power_init();
        set_voltage_by_steps(v24, v8, 0x64u);
      }
    }
  }
  else
  {
    v3 = get_current_voltage();
    v23 = v3;
    v22 = 1420;
    v4 = v3 - 1420;
    if ( v3 - 1420 < 0 )
      v4 = 1420 - v3;
    if ( v4 > 9 )
    {
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "cur_voltage:%d, set voltage to %d", v23, v22);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/ltc_1491/machine_runtime_ltc_1491.c",
        189,
        "set_frequency_with_voltage_1491",
        31,
        212,
        40,
        v14);
      v5 = is_power_init();
      set_voltage_by_steps(v22, v5, 0x64u);
    }
  }
  *(_BYTE *)(a1 + 128) = 1;
  sleep(1u);
  pthread_join(newthread, 0);
  v34 = 6.25;
  v32 = (int)(float)((float)(v33 - v38) / 6.25);
  for ( k = 0; k < v32; ++k )
  {
    v38 = v38 + v34;
    for ( j = 0; j < v19; ++j )
    {
      if ( !all_created_runtime[j] )
      {
        printf("invalid pointer(%s)!\n", "be_runtimes[b]");
        return 3;
      }
      v36 = (*(int (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[j] + 192))(all_created_runtime[j], 0);
      if ( v36 )
        return v36;
    }
    usleep(*(_DWORD *)(a1 + 108));
  }
  return v36;
}

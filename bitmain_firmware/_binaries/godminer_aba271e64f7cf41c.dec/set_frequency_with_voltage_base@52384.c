int __fastcall set_frequency_with_voltage_base(int a1)
{
  float v1; // r3
  int v3; // r3
  int v4; // r4
  int eeprom_PT2_freq; // r0
  char v8[60]; // [sp+20h] [bp-227Ch] BYREF
  char v9[32]; // [sp+1020h] [bp-127Ch] BYREF
  char v10[4096]; // [sp+1040h] [bp-125Ch] BYREF
  float v11; // [sp+2040h] [bp-25Ch] BYREF
  float v12[128]; // [sp+2044h] [bp-258h] BYREF
  int v13; // [sp+2244h] [bp-58h] BYREF
  int eeprom_sweep_freq; // [sp+2248h] [bp-54h]
  int v15; // [sp+224Ch] [bp-50h]
  int v16; // [sp+2250h] [bp-4Ch]
  float v17; // [sp+2254h] [bp-48h]
  int v18; // [sp+2258h] [bp-44h]
  int working_voltage; // [sp+225Ch] [bp-40h]
  unsigned int v20; // [sp+2260h] [bp-3Ch]
  float v21; // [sp+2264h] [bp-38h]
  float v22; // [sp+2268h] [bp-34h]
  _DWORD *all_created_runtime; // [sp+226Ch] [bp-30h]
  int v24; // [sp+2270h] [bp-2Ch]
  int j; // [sp+2274h] [bp-28h]
  float v26; // [sp+2278h] [bp-24h]
  float v27; // [sp+227Ch] [bp-20h]
  int current_voltage; // [sp+2280h] [bp-1Ch]
  int v29; // [sp+2284h] [bp-18h]
  int i; // [sp+2288h] [bp-14h]
  unsigned int k; // [sp+228Ch] [bp-10h]

  v24 = 0;
  v13 = 0;
  all_created_runtime = get_all_created_runtime(&v13);
  current_voltage = 0;
  v22 = 6.25;
  v27 = *(float *)(*all_created_runtime + 1100);
  if ( *(float *)(*all_created_runtime + 1104) <= *(float *)(a1 + 112) )
    v1 = *(float *)(*all_created_runtime + 1104);
  else
    v1 = *(float *)(a1 + 112);
  v21 = v1;
  v20 = 10;
  v29 = 0;
  working_voltage = get_working_voltage();
  if ( (unsigned __int8)is_check_asic_voltage_enable() != 1 )
  {
    v24 = set_check_asic_voltage(1);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "set high voltage befor rise freq.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "set_frequency_with_voltage_base",
      31,
      574,
      40,
      v8);
  }
  if ( *(_DWORD *)(a1 + 100) != -64 )
    v29 = (*(int (__fastcall **)(int, _DWORD))a1)(a1, *(_DWORD *)(a1 + 100));
  v18 = v29 + working_voltage;
  v17 = v21 * *(float *)(a1 + 120);
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/machine_runtime_base.c",
    176,
    "set_frequency_with_voltage_base",
    31,
    584,
    60,
    v8);
  current_voltage = get_current_voltage();
  v16 = sub_CC518(current_voltage - v18, v20);
  v15 = (int)(float)((float)(v21 - v27) / v22);
  for ( i = 0; i < v15; ++i )
  {
    v27 = v27 + v22;
    for ( j = 0; j < v13; ++j )
    {
      if ( !all_created_runtime[j] )
      {
        printf("invalid pointer(%s)!\n", "be_runtimes[b]");
        return 3;
      }
      v24 = (*(int (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[j] + 192))(all_created_runtime[j], 0);
      if ( v24 )
        return v24;
      usleep(*(_DWORD *)(a1 + 108));
    }
    if ( current_voltage > (int)(2 * v20 + v18) && v27 > v17 && i >= v15 - v16 )
    {
      current_voltage -= v20;
      v24 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( v24 )
        return v24;
      usleep((__useconds_t)sub_30D40);
    }
  }
  if ( v27 != v21 )
  {
    for ( j = 0; j < v13; ++j )
    {
      v24 = (*(int (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[j] + 192))(all_created_runtime[j], 0);
      if ( v24 )
        return v24;
      usleep(*(_DWORD *)(a1 + 108));
    }
  }
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v21, current_voltage);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/machine_runtime_base.c",
    176,
    "set_frequency_with_voltage_base",
    31,
    619,
    60,
    v8);
  if ( byte_1523ED != 1 )
  {
    for ( j = 0; j < v13; ++j )
    {
      if ( api_get_eeprom_fmt_version(*(_DWORD *)(all_created_runtime[j] + 248)) == 4
        && !api_get_eeprom_asic_freqs(*(_DWORD *)(all_created_runtime[j] + 248), v12, &v11) )
      {
        v26 = 0.0;
        memset(v10, 0, sizeof(v10));
        for ( k = 0; k < *(_DWORD *)(all_created_runtime[j] + 336); ++k )
        {
          v26 = v26 + v12[k];
          sprintf(v9, "ASIC-%03d [%.2f] ", k, v12[k]);
          strcat(v10, v9);
          if ( (k & 7) == 7 )
            *(_WORD *)&v10[strlen(v10)] = 10;
        }
        v26 = v26 / (float)*(int *)(all_created_runtime[j] + 336);
        (*(void (__fastcall **)(_DWORD, float *))(all_created_runtime[j] + 216))(all_created_runtime[j], v12);
        v3 = all_created_runtime[j];
        *(_DWORD *)(v3 + 464) = (int)v26;
        *(float *)(all_created_runtime[j] + 1104) = (float)*(int *)(v3 + 464);
        eeprom_sweep_freq = api_get_eeprom_sweep_freq(j);
        V_LOCK();
        v4 = *(_DWORD *)(all_created_runtime[j] + 248);
        eeprom_PT2_freq = api_get_eeprom_PT2_freq(j);
        logfmt_raw(
          v8,
          0x1000u,
          0,
          "chain:%d, PT2_freq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d  sweep_matrix:\n%s",
          v4,
          eeprom_PT2_freq,
          v26,
          eeprom_sweep_freq,
          v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
          176,
          "set_frequency_with_voltage_base",
          31,
          652,
          40,
          v8);
      }
    }
  }
  return v24;
}

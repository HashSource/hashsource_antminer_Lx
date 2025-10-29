int __fastcall main(int argc, const char **argv, const char **envp)
{
  int pool_stratum_threads; // r4
  int v7; // r0
  int v8; // r0
  int hardware_version; // r9
  int v10; // r3
  int v11; // r2
  int v12; // r9
  __pid_t v13; // r0
  int *all_created_runtime; // r0
  void *v15; // lr
  int *v16; // r5
  int v17; // r1
  int v18; // r12
  int v19; // r0
  int i; // r3
  int v21; // r2
  int j; // r9
  int v23; // r0
  int v24; // r0
  int v25; // r0
  __int64 (__fastcall *v26)(int); // r3
  int v27; // r0
  __int64 v28; // r0
  int eeprom_chain_load_state; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  const char *v37; // r1
  int v38; // r12
  int v39; // r3
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // lr
  int v45; // r12
  int v46; // r3
  FILE *v47; // r0
  FILE *v48; // r4
  int v49; // r4
  _DWORD *v50; // r9
  _DWORD *v51; // r0
  int n; // r4
  int (__fastcall *v53)(int); // r3
  int v54; // r0
  int ii; // r4
  int v56; // r1
  int jj; // r4
  void *(**v58)(void *); // r3
  pthread_t *v59; // r0
  int kk; // r4
  pthread_t v61; // r0
  int v62; // r12
  int *v63; // r5
  int mm; // r4
  int v65; // r1
  int v66; // r0
  int nn; // r10
  bool v68; // cc
  int v69; // r9
  int v71; // r1
  int v72; // r9
  int v73; // r8
  const char *v74; // r0
  bool v75; // r0
  int v76; // r7
  int v77; // r0
  int (__fastcall *v78)(int); // r3
  int v79; // r0
  int v80; // r7
  _DWORD *v81; // r8
  int v82; // r0
  int v83; // r10
  int v84; // r3
  unsigned int v85; // r3
  bool v86; // cf
  int v87; // r3
  int m; // r4
  int v89; // r5
  int v90; // lr
  char *v91; // [sp+28h] [bp-10B4h]
  char *v92; // [sp+28h] [bp-10B4h]
  char *s1; // [sp+2Ch] [bp-10B0h]
  char *s1a; // [sp+2Ch] [bp-10B0h]
  _DWORD *v95; // [sp+30h] [bp-10ACh]
  int k; // [sp+30h] [bp-10ACh]
  _DWORD *v97; // [sp+38h] [bp-10A4h]
  int *v98; // [sp+44h] [bp-1098h]
  int device_num; // [sp+4Ch] [bp-1090h] BYREF
  int v100; // [sp+50h] [bp-108Ch] BYREF
  size_t nmemb[4]; // [sp+54h] [bp-1088h] BYREF
  _DWORD ptr[4]; // [sp+64h] [bp-1078h] BYREF
  __int16 v103; // [sp+74h] [bp-1068h]
  _DWORD v104[7]; // [sp+78h] [bp-1064h] BYREF
  int v105; // [sp+94h] [bp-1048h]
  _DWORD v106[7]; // [sp+98h] [bp-1044h] BYREF
  int v107; // [sp+B4h] [bp-1028h]
  _DWORD v108[7]; // [sp+B8h] [bp-1024h] BYREF
  int v109; // [sp+D4h] [bp-1008h]
  char v110[4100]; // [sp+D8h] [bp-1004h] BYREF

  device_num = 0;
  if ( (int)sub_2BC58("godminer") > 1 )
  {
    pool_stratum_threads = 1;
    printf("godminer is forbidden to start again as it is already started, will exit immediately.");
    return pool_stratum_threads;
  }
  if ( (int)sub_2BC58("godminer-update") > 0 )
  {
    pool_stratum_threads = 1;
    printf("godminer-update is running now, exit.");
    return pool_stratum_threads;
  }
  if ( log_init() )
    puts("log init error!");
  while ( 1 )
  {
    v7 = EVPX_EncryptInit_ex(argc, (int)argv, "a:c:hp:Po:u:v:F", (const char **)&off_12F034, 0);
    if ( v7 < 0 )
      break;
    parse_arg(v7, (char *)optarg);
  }
  if ( argc > optind )
  {
    V_LOCK();
    logfmt_raw(v110, 0x1000u, 0, "%s: unsupported non-option argument -- '%s'", *argv, argv[optind]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "parse_cmdline",
      13,
      614,
      100,
      v110);
    exit(1);
  }
  if ( !total_pools )
  {
    V_LOCK();
    logfmt_raw(v110, 0x1000u, 0, "Need to specify at least one pool server.");
    V_UNLOCK();
    pool_stratum_threads = 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1138,
      80,
      v110);
    V_LOCK();
    logfmt_raw(v110, 0x1000u, 0, "Pool setup failed!");
    V_UNLOCK();
    v37 = "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c";
    v38 = 100;
    v39 = 1139;
    v40 = g_zc;
LABEL_40:
    zlog(v40, v37, 132, "main", 4, v39, v38, v110);
    return pool_stratum_threads;
  }
  V_LOCK();
  logfmt_raw(v110, 0x1000u, 0, "release version");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1144,
    40,
    v110);
  V_LOCK();
  logfmt_raw(v110, 0x1000u, 0, "asic mode");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1154,
    40,
    v110);
  check_pool_worker();
  if ( system_info_init(opt_algo) )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v110, 0x1000u, 0, "system info init failed!");
    V_UNLOCK();
    v38 = 100;
    v39 = 1165;
LABEL_43:
    LOWORD(v37) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/god-miner.c";
LABEL_44:
    HIWORD(v37) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/god-miner.c" >> 16;
    v40 = g_zc;
    goto LABEL_40;
  }
  v8 = dev_ctrl(0);
  pool_stratum_threads = (*(int (__fastcall **)(int))(v8 + 8))(opt_algo);
  if ( pool_stratum_threads )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v110, 0x1000u, 0, "dev init failed!");
    V_UNLOCK();
    v38 = 100;
    v39 = 1171;
    goto LABEL_43;
  }
  check_fan_valiad();
  device_num = query_device_num();
  if ( device_num <= 0 )
  {
    V_LOCK();
    logfmt_raw(v110, 0x1000u, 0, "query_device_num error code %d and then exit", device_num);
    V_UNLOCK();
    v38 = 80;
    v39 = 1181;
    goto LABEL_43;
  }
  if ( opt_version_path )
    read_version_file();
  else
    make_fake_version();
  hardware_version = get_hardware_version();
  V_LOCK();
  logfmt_raw(
    v110,
    0x1000u,
    0,
    "godminer Version = 0x%04X %s",
    (unsigned __int16)hardware_version,
    "1.0.0_release_clean_dev_aab5bf56125ba6d9c9137fb341b71163f478eb3d_Jan 30 2023 09:50:03");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "init_miner_version",
    18,
    694,
    40,
    v110);
  v10 = BYTE2(hardware_version);
  v11 = (unsigned __int8)hardware_version;
  v12 = 0;
  sprintf(g_miner_version, "%d.%d-%s", v11, v10, "1.0.0");
  V_LOCK();
  v13 = getpid();
  logfmt_raw(v110, 0x1000u, 0, "miner thread with %d backend runtime created pid %d", device_num, v13);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1192,
    60,
    v110);
  V_LOCK();
  logfmt_raw(v110, 0x1000u, 0, "opt_algo %d, %s", opt_algo, off_12EFD8[opt_algo]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1193,
    60,
    v110);
  while ( device_num > v12 )
  {
    if ( !runtime_ctrl(opt_algo) )
    {
      pool_stratum_threads = 1;
      V_LOCK();
      logfmt_raw(v110, 0x1000u, 0, "runtime ctrl error!");
      V_UNLOCK();
      v44 = 80;
      v45 = 1197;
LABEL_48:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        v45,
        v44,
        v110);
      return pool_stratum_threads;
    }
    ++v12;
  }
  all_created_runtime = (int *)get_all_created_runtime(&device_num);
  v15 = &unk_145005;
  v16 = all_created_runtime;
  v17 = device_num;
  if ( opt_custom_power_mode != 3 )
    v15 = &loc_E7E20 + 1;
  v18 = opt_algo;
  v19 = opt_custom_power_mode == 3;
  for ( i = 0; v17 > i; ++i )
  {
    v21 = v16[i];
    *(_BYTE *)(v21 + 780) = v19;
    if ( v18 == 6 )
      *(_DWORD *)(v21 + 772) = v15;
  }
  for ( j = 0; device_num > j; ++j )
  {
    v23 = dev_ctrl(v19);
    v24 = (*(int (__fastcall **)(int))(v23 + 40))(j);
    v25 = printf("eeprom add device :%d\n", v24);
    v26 = *(__int64 (__fastcall **)(int))(dev_ctrl(v25) + 40);
    v27 = j;
    v28 = v26(v27);
    v19 = add_eeprom_device(v28, SHIDWORD(v28));
  }
  s1 = (char *)eeprom_load();
  while ( device_num > pool_stratum_threads )
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(pool_stratum_threads);
    if ( eeprom_chain_load_state == -1 )
    {
      v41 = V_LOCK();
      v42 = dev_ctrl(v41);
      v43 = (*(int (__fastcall **)(int))(v42 + 40))(pool_stratum_threads);
      logfmt_raw(v110, 0x1000u, 0, "g_eeprom_data is not ready, chain = %d", v43);
      V_UNLOCK();
      v33 = 1225;
      goto LABEL_37;
    }
    if ( !eeprom_chain_load_state )
    {
      v30 = V_LOCK();
      v31 = dev_ctrl(v30);
      v32 = (*(int (__fastcall **)(int))(v31 + 40))(pool_stratum_threads);
      logfmt_raw(v110, 0x1000u, 0, "Chain%d load EEPROM error.", v32);
      V_UNLOCK();
      v33 = 1227;
LABEL_37:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        v33,
        100,
        v110);
LABEL_38:
      v34 = V_LOCK();
      v35 = dev_ctrl(v34);
      v36 = (*(int (__fastcall **)(int))(v35 + 40))(pool_stratum_threads);
      logfmt_raw(v110, 0x1000u, 0, "Error! Chain [%d] EEPROM data corrupted", v36);
      V_UNLOCK();
      pool_stratum_threads = -1;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1249,
        60,
        v110);
      return pool_stratum_threads;
    }
    if ( eeprom_chain_load_state <= 0 )
      goto LABEL_38;
    ++pool_stratum_threads;
  }
  ptr[1] = 0;
  ptr[0] = 0;
  if ( opt_algo == 5 )
    LOWORD(v46) = -392;
  else
    LOWORD(v46) = -384;
  HIWORD(v46) = 18;
  g_miner_sn_file_path = v46;
  ptr[2] = 0;
  ptr[3] = 0;
  v103 = 0;
  v47 = (FILE *)fopen64(v46, "r");
  v48 = v47;
  if ( v47 )
  {
    if ( fread(ptr, 0x11u, 1u, v47) )
    {
      V_LOCK();
      logfmt_raw(v110, 0x1000u, 0, "miner sn: %s", ptr);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1273,
        60,
        v110);
    }
    fclose(v48);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v110, 0x1000u, 0, "miner has no sn!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1267,
      100,
      v110);
  }
  if ( s1 )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v110, 0x1000u, 0, "Eeprom load error!");
    V_UNLOCK();
    v44 = 100;
    v45 = 1296;
    goto LABEL_48;
  }
  opt_custom_freq = eeprom_get_min_freq();
  opt_custom_voltage = eeprom_get_max_voltage();
  V_LOCK();
  logfmt_raw(v110, 0x1000u, 0, "MAX voltage: %d", opt_custom_voltage);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1292,
    60,
    v110);
  V_LOCK();
  logfmt_raw(v110, 0x1000u, 0, "MIN freq: %d", opt_custom_freq);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1293,
    60,
    v110);
  if ( opt_algo == 6 )
    sub_2C894();
  v49 = 0;
  nmemb[0] = 0;
  v50 = get_all_created_runtime(nmemb);
  v51 = (_DWORD *)is_eeprom_loaded();
  if ( v51 )
  {
    while ( v49 < (int)nmemb[0] )
    {
      v62 = v50[v49++];
      v51 = (_DWORD *)(*(int (__fastcall **)(int, int, int))(v62 + 108))(v62, 1, opt_custom_freq);
    }
  }
  if ( !opt_custom_freq && opt_algo == 2 )
  {
    v51 = calloc(nmemb[0], 4u);
    v97 = v51;
    v95 = v51;
    v83 = 0;
    v92 = 0;
    v98 = v16;
    while ( v83 < (int)nmemb[0] )
    {
      (*(void (**)(void))(v50[v83] + 116))();
      V_LOCK();
      v84 = v50[v83++];
      V_INT((int)v108, "chain", *(int *)(v84 + 140));
      logfmt_raw(
        v110,
        0x1000u,
        0,
        v109,
        v108[0],
        v108[1],
        v108[2],
        v108[3],
        v108[4],
        v108[5],
        v108[6],
        v109,
        "level %d",
        *v95);
      V_UNLOCK();
      v51 = (_DWORD *)zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/god-miner.c",
                        132,
                        "backend_runtime_custom_parameter_update",
                        39,
                        983,
                        60,
                        v110);
      v85 = *v95++ - 1;
      v86 = v85 >= 2;
      v87 = (int)v92;
      if ( v86 )
        v87 = 1;
      v92 = (char *)v87;
    }
    for ( k = 1; ; k = 2 )
    {
      for ( m = 0; m < (int)nmemb[0]; ++m )
      {
        if ( v92 && v97[m] == k )
        {
          V_LOCK();
          --v92;
          V_INT((int)v106, "chain", *(int *)(v50[m] + 140));
          logfmt_raw(
            v110,
            0x1000u,
            0,
            v107,
            v106[0],
            v106[1],
            v106[2],
            v106[3],
            v106[4],
            v106[5],
            v106[6],
            v107,
            "adjust freq to %d",
            (int)*(float *)(v50[m] + 760) + 25);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "backend_runtime_custom_parameter_update",
            39,
            992,
            60,
            v110);
          v51 = (_DWORD *)(*(int (__fastcall **)(_DWORD, int, int, _DWORD, _DWORD))(v50[m] + 108))(
                            v50[m],
                            1,
                            (int)*(float *)(v50[m] + 760) + 25,
                            0,
                            0);
        }
      }
      if ( k == 2 )
        break;
    }
    v89 = 0;
    while ( v89 < (int)nmemb[0] )
    {
      V_LOCK();
      V_INT((int)v104, "chain", *(int *)(v50[v89] + 140));
      v90 = v50[v89++];
      logfmt_raw(
        v110,
        0x1000u,
        0,
        v105,
        v104[0],
        v104[1],
        v104[2],
        v104[3],
        v104[4],
        v104[5],
        v104[6],
        v105,
        "freq %d",
        (int)*(float *)(v90 + 760));
      V_UNLOCK();
      v51 = (_DWORD *)zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/god-miner.c",
                        132,
                        "backend_runtime_custom_parameter_update",
                        39,
                        1000,
                        60,
                        v110);
    }
    v16 = v98;
  }
  for ( n = 0; device_num > n; ++n )
  {
    v53 = *(int (__fastcall **)(int))(dev_ctrl(v51) + 28);
    v54 = n;
    v51 = (_DWORD *)v53(v54);
  }
  V_LOCK();
  logfmt_raw(v110, 0x1000u, 0, "all runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1308,
    60,
    v110);
  power_off();
  if ( opt_algo == 6 && opt_custom_power_mode == 1 )
  {
    V_LOCK();
    logfmt_raw(v110, 0x1000u, 0, "sleep on!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1311,
      60,
      v110);
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  sleep(8u);
  if ( power_init() )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v110, 0x1000u, 0, "power init error!");
    V_UNLOCK();
    v44 = 100;
    v45 = 1318;
    goto LABEL_48;
  }
  for ( ii = 0; device_num > ii; ++ii )
  {
    (*(void (**)(void))v16[ii])();
    v56 = v16[ii];
    redirect_nonce_output(*v16, v56);
  }
  for ( jj = 0; device_num > jj; ++jj )
  {
    sub_2B9BC();
    v58 = (void *(**)(void *))v16[jj];
    v59 = &nmemb[jj];
    pthread_create(v59, 0, v58[1], v58);
  }
  for ( kk = 0; device_num > kk; ++kk )
  {
    v61 = nmemb[kk];
    pthread_join(v61, 0);
  }
  check_and_destroy_abnormal_runtime();
  v63 = (int *)get_all_created_runtime(&device_num);
  if ( device_num <= 0 )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v110, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
    V_UNLOCK();
    v44 = 100;
    v45 = 1353;
    goto LABEL_48;
  }
  for ( mm = 0; mm < device_num; ++mm )
  {
    v65 = v63[mm];
    redirect_nonce_output(*v63, v65);
  }
  if ( is_check_asic_voltage_enable() )
  {
    if ( opt_algo == 6 )
    {
      set_working_voltage_and_runtime_freq();
    }
    else
    {
      sub_2B9BC();
      set_working_voltage(1);
    }
  }
  set_baud(3125000);
  v66 = opt_algo;
  if ( opt_algo == 8 )
    v66 = 2;
  set_frontend_runtime_type(v66);
  for ( nn = 0; total_pools > nn; ++nn )
  {
    v68 = opt_algo != 0;
    if ( opt_algo )
      v68 = (unsigned int)(opt_algo - 4) > 1;
    if ( !v68 )
    {
      v91 = *(char **)(pools + 4 * nn);
      V_LOCK();
      logfmt_raw(v110, 0x1000u, 0, "Using JSON-RPC 2.0");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1384,
        40,
        v110);
      v91[1824] = 1;
    }
  }
  signal(2, (__sighandler_t)sub_2BA10);
  signal(3, (__sighandler_t)sub_2BA10);
  signal(15, (__sighandler_t)sub_2BA10);
  signal(11, (__sighandler_t)sub_2BA10);
  signal(10, (__sighandler_t)sub_2BA10);
  signal(13, (__sighandler_t)1);
  V_LOCK();
  logfmt_raw(v110, 0x1000u, 0, "signal");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1405,
    60,
    v110);
  pool_stratum_threads = create_pool_stratum_threads();
  if ( pool_stratum_threads )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v110, 0x1000u, 0, "stratum thread create failed");
    V_UNLOCK();
    v38 = 100;
    v39 = 1408;
    LOWORD(v37) = -2536;
    goto LABEL_44;
  }
  v69 = 1;
  sleep(1u);
  while ( v69 != 60 && ((unsigned __int8)pools_active ^ 1) & 1 )
  {
    ++v69;
    sleep(1u);
    sub_12D4A4(v69, 0xAu);
    if ( !v71 )
      sub_2B9BC();
  }
  miner_monitor_init();
  godminer_register_status_monitor();
  miner_monitor_start();
  v72 = (unsigned __int8)pools_active;
  if ( !pools_active )
  {
    V_LOCK();
    logfmt_raw(v110, 0x1000u, v72, "No servers were found that could be used to get work from.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1426,
      100,
      v110);
    V_LOCK();
    logfmt_raw(v110, 0x1000u, v72, "Please check the details from the list below of the servers you have input.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1427,
      100,
      v110);
    V_LOCK();
    logfmt_raw(
      v110,
      0x1000u,
      v72,
      "Most likely you have input the wrong URL, forgotten to add a port, have not set up workers, or the network was disconnected.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1428,
      100,
      v110);
    while ( total_pools > v72 )
    {
      v73 = *(_DWORD *)(pools + 4 * v72);
      V_LOCK();
      logfmt_raw(
        v110,
        0x1000u,
        0,
        "Pool: %d  URL: %s\tUser: %s  Password: %s",
        *(_DWORD *)v73,
        *(_DWORD *)(v73 + 8),
        *(_DWORD *)(v73 + 12),
        *(_DWORD *)(v73 + 16));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1434,
        80,
        v110);
      v74 = *(const char **)(v73 + 16);
      if ( v74 )
      {
        s1a = *(char **)(v73 + 12);
        if ( s1a )
        {
          if ( strstr(v74, "stats") )
            v75 = 1;
          else
            v75 = strcmp(s1a, "benchmark") == 0;
          *(_BYTE *)(v73 + 1816) = v75;
        }
      }
      ++v72;
    }
    V_LOCK();
    v76 = 0;
    logfmt_raw(v110, 0x1000u, 0, "No servers could be used!");
    V_UNLOCK();
    v77 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "main",
            4,
            1440,
            100,
            v110);
    while ( device_num > v76 )
    {
      v78 = *(int (__fastcall **)(int))(dev_ctrl(v77) + 28);
      v79 = v76++;
      v77 = v78(v79);
    }
    v80 = 0;
    v100 = 0;
    v81 = get_all_created_runtime(&v100);
    while ( v80 < v100 )
    {
      (*(void (**)(void))(v81[v80] + 8))();
      v82 = v81[v80++];
      (*(void (**)(void))(v82 + 16))();
    }
    fan_pwm_set(0x14u);
    green_led_off();
    red_led_off();
    power_off();
    if ( opt_api_remote && (dword_16CDE8 = 1, sub_22398((int)&dword_16CDE8, (void *(*)(void *))sub_2C864)) )
    {
      V_LOCK();
      logfmt_raw(v110, 0x1000u, 0, "api thread create failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "process_no_servers_could_be_used",
        32,
        937,
        100,
        v110);
    }
    else
    {
      set_miner_network_working_status(1);
      while ( !pools_active )
        sleep(1u);
    }
    V_LOCK();
    logfmt_raw(v110, 0x1000u, 0, "Pool is activing, exiting and restart.");
    V_UNLOCK();
    v44 = 60;
    v45 = 1446;
    goto LABEL_48;
  }
  thr_info = 0;
  if ( sub_22398((int)&thr_info, (void *(*)(void *))work_generator_thread) )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v110, 0x1000u, 0, "work generator thread %d create failed");
    V_UNLOCK();
    v44 = 100;
    v45 = 1455;
    goto LABEL_48;
  }
  dword_16CDE8 = 1;
  if ( sub_22398((int)&dword_16CDE8, (void *(*)(void *))nonce_submit_thread) )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v110, 0x1000u, 0, "simulation submit thread create failed");
    V_UNLOCK();
    v44 = 100;
    v45 = 1463;
    goto LABEL_48;
  }
  set_miner_start_time();
  dword_16CE18 = 2;
  pool_stratum_threads = sub_22398((int)&dword_16CE18, (void *(*)(void *))watchpool_thread);
  if ( pool_stratum_threads )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v110, 0x1000u, 0, "watchpool thread create failed");
    V_UNLOCK();
    v44 = 100;
    v45 = 1474;
    goto LABEL_48;
  }
  sleep(5u);
  if ( opt_api_remote )
  {
    dword_16CE48 = 3;
    if ( sub_22398((int)&dword_16CE48, (void *(*)(void *))sub_2C864) )
    {
      V_LOCK();
      pool_stratum_threads = 1;
      logfmt_raw(v110, 0x1000u, 0, "api thread create failed");
      V_UNLOCK();
      v44 = 100;
      v45 = 1485;
      goto LABEL_48;
    }
  }
  http_test_case_init();
  start_http_thread();
  pthread_join(dword_16CDBC, 0);
  V_LOCK();
  logfmt_raw(v110, 0x1000u, 0, "workio threads dead, exiting.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1497,
    80,
    v110);
  print_summary();
  return pool_stratum_threads;
}

int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v5; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int hardware_version; // r9
  int v11; // r3
  int v12; // r2
  int v13; // r9
  __pid_t v14; // r0
  int *all_created_runtime; // r0
  int v16; // r9
  int *v17; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r0
  __int64 (__fastcall *v21)(int); // r3
  int v22; // r0
  __int64 v23; // r0
  int v24; // r10
  int eeprom_chain_load_state; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  const char *v33; // r1
  int v34; // r12
  int v35; // r3
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // lr
  int v41; // r12
  int v42; // r3
  FILE *v43; // r0
  FILE *v44; // r4
  int v45; // r4
  int *v46; // r0
  int v47; // r12
  int k; // r4
  int (__fastcall *v49)(int); // r3
  int v50; // r0
  int v51; // r4
  int v52; // r1
  int m; // r4
  void *(**v54)(void *); // r3
  pthread_t *v55; // r0
  int n; // r4
  pthread_t v57; // r0
  int *v58; // r5
  int ii; // r4
  int v60; // r1
  int v61; // r0
  bool v62; // cc
  int v63; // r4
  int v64; // r9
  int v66; // r1
  int v67; // r9
  int v68; // r5
  const char *v69; // r0
  bool v70; // r0
  int v71; // r5
  int v72; // r0
  int (__fastcall *v73)(int); // r3
  int v74; // r0
  int v75; // r5
  _DWORD *v76; // r6
  int v77; // r0
  int *v78; // r5
  int v79; // r9
  int v80; // r3
  int v81; // t1
  int v82; // r3
  int v83; // r6
  int i; // r9
  int j; // r4
  int v86; // r9
  int v87; // lr
  char *s1; // [sp+2Ch] [bp-10B8h]
  char *s1a; // [sp+2Ch] [bp-10B8h]
  int v90; // [sp+30h] [bp-10B4h]
  int *v91; // [sp+38h] [bp-10ACh]
  int *v92; // [sp+48h] [bp-109Ch]
  int device_num; // [sp+54h] [bp-1090h] BYREF
  int v94; // [sp+58h] [bp-108Ch] BYREF
  size_t nmemb[4]; // [sp+5Ch] [bp-1088h] BYREF
  _DWORD ptr[4]; // [sp+6Ch] [bp-1078h] BYREF
  __int16 v97; // [sp+7Ch] [bp-1068h]
  char v98[32]; // [sp+80h] [bp-1064h] BYREF
  char v99[32]; // [sp+A0h] [bp-1044h] BYREF
  char v100[32]; // [sp+C0h] [bp-1024h] BYREF
  char v101[4100]; // [sp+E0h] [bp-1004h] BYREF

  device_num = 0;
  if ( (int)sub_2BB40("godminer") > 1 )
  {
    v5 = 1;
    printf("godminer is forbidden to start again as it is already started, will exit immediately.");
    return v5;
  }
  if ( (int)sub_2BB40("godminer-update") > 0 )
  {
    v5 = 1;
    printf("godminer-update is running now, exit.");
    return v5;
  }
  if ( log_init() )
    puts("log init error!");
  while ( 1 )
  {
    v7 = EVPX_EncryptInit_ex(argc, (int)argv, "a:c:hp:Po:u:v:F", (const char **)&off_12EC4C, 0);
    if ( v7 < 0 )
      break;
    parse_arg(v7, (char *)optarg);
  }
  if ( argc > optind )
  {
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "%s: unsupported non-option argument -- '%s'", *argv, argv[optind]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/god-miner.c",
      147,
      "parse_cmdline",
      13,
      607,
      100,
      v101);
    exit(1);
  }
  if ( !total_pools )
  {
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "Need to specify at least one pool server.");
    V_UNLOCK();
    v5 = 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/god-miner.c",
      147,
      "main",
      4,
      1127,
      80,
      v101);
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "Pool setup failed!");
    V_UNLOCK();
    v33 = "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/god-miner.c";
    v34 = 100;
    v35 = 1128;
    v36 = g_zc;
LABEL_34:
    zlog(v36, v33, 147, "main", 4, v35, v34, v101);
    return v5;
  }
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "release version");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/god-miner.c",
    147,
    "main",
    4,
    1133,
    40,
    v101);
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "asic mode");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/god-miner.c",
    147,
    "main",
    4,
    1143,
    40,
    v101);
  check_pool_worker();
  if ( system_info_init(opt_algo) )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "system info init failed!");
    V_UNLOCK();
    v34 = 100;
    v35 = 1154;
LABEL_37:
    LOWORD(v33) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs"
                                    "/buildroot/tmp/release/build/godminer-origin_master/god-miner.c";
LABEL_38:
    HIWORD(v33) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/bui"
                                "ldroot/tmp/release/build/godminer-origin_master/god-miner.c" >> 16;
    v36 = g_zc;
    goto LABEL_34;
  }
  v8 = dev_ctrl(0);
  v5 = (*(int (__fastcall **)(int))(v8 + 8))(opt_algo);
  if ( v5 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "dev init failed!");
    V_UNLOCK();
    v34 = 100;
    v35 = 1160;
    goto LABEL_37;
  }
  v9 = check_fan_valiad();
  device_num = query_device_num(v9);
  if ( device_num <= 0 )
  {
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "query_device_num error code %d and then exit", device_num);
    V_UNLOCK();
    v34 = 80;
    v35 = 1170;
    goto LABEL_37;
  }
  if ( opt_version_path )
    read_version_file();
  else
    make_fake_version();
  hardware_version = get_hardware_version();
  V_LOCK();
  logfmt_raw(
    v101,
    0x1000u,
    0,
    "godminer Version = 0x%04X %s",
    (unsigned __int16)hardware_version,
    "1.0.0_release_clean_dev_aab5bf56125ba6d9c9137fb341b71163f478eb3d_Nov 30 2022 12:11:39");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/god-miner.c",
    147,
    "init_miner_version",
    18,
    687,
    40,
    v101);
  v11 = BYTE2(hardware_version);
  v12 = (unsigned __int8)hardware_version;
  v13 = 0;
  sprintf(g_miner_version, "%d.%d-%s", v12, v11, "1.0.0");
  V_LOCK();
  v14 = getpid();
  logfmt_raw(v101, 0x1000u, 0, "miner thread with %d backend runtime created pid %d", device_num, v14);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/god-miner.c",
    147,
    "main",
    4,
    1181,
    60,
    v101);
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "opt_algo %d, %s", opt_algo, off_12EBF0[opt_algo]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/god-miner.c",
    147,
    "main",
    4,
    1182,
    60,
    v101);
  while ( device_num > v13 )
  {
    if ( !runtime_ctrl(opt_algo) )
    {
      v5 = 1;
      V_LOCK();
      logfmt_raw(v101, 0x1000u, 0, "runtime ctrl error!");
      V_UNLOCK();
      v40 = 80;
      v41 = 1186;
LABEL_42:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "main",
        4,
        v41,
        v40,
        v101);
      return v5;
    }
    ++v13;
  }
  all_created_runtime = (int *)get_all_created_runtime(&device_num);
  v16 = 0;
  v17 = all_created_runtime;
  while ( device_num > v16 )
  {
    v18 = dev_ctrl(all_created_runtime);
    v19 = (*(int (__fastcall **)(int))(v18 + 40))(v16);
    v20 = printf("eeprom add device :%d\n", v19);
    v21 = *(__int64 (__fastcall **)(int))(dev_ctrl(v20) + 40);
    v22 = v16++;
    v23 = v21(v22);
    all_created_runtime = (int *)add_eeprom_device(v23, SHIDWORD(v23));
  }
  v24 = eeprom_load();
  while ( device_num > v5 )
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(v5);
    if ( eeprom_chain_load_state == -1 )
    {
      v37 = V_LOCK();
      v38 = dev_ctrl(v37);
      v39 = (*(int (__fastcall **)(int))(v38 + 40))(v5);
      logfmt_raw(v101, 0x1000u, 0, "g_eeprom_data is not ready, chain = %d", v39);
      V_UNLOCK();
      v29 = 1209;
      goto LABEL_31;
    }
    if ( !eeprom_chain_load_state )
    {
      v26 = V_LOCK();
      v27 = dev_ctrl(v26);
      v28 = (*(int (__fastcall **)(int))(v27 + 40))(v5);
      logfmt_raw(v101, 0x1000u, 0, "Chain%d load EEPROM error.", v28);
      V_UNLOCK();
      v29 = 1211;
LABEL_31:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "main",
        4,
        v29,
        100,
        v101);
LABEL_32:
      v30 = V_LOCK();
      v31 = dev_ctrl(v30);
      v32 = (*(int (__fastcall **)(int))(v31 + 40))(v5);
      logfmt_raw(v101, 0x1000u, 0, "Error! Chain [%d] EEPROM data corrupted", v32);
      V_UNLOCK();
      v5 = -1;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "main",
        4,
        1233,
        60,
        v101);
      return v5;
    }
    if ( eeprom_chain_load_state <= 0 )
      goto LABEL_32;
    ++v5;
  }
  ptr[1] = 0;
  ptr[0] = 0;
  if ( opt_algo == 5 )
    LOWORD(v42) = -1420;
  else
    LOWORD(v42) = -1412;
  HIWORD(v42) = 18;
  g_miner_sn_file_path = v42;
  ptr[2] = 0;
  ptr[3] = 0;
  v97 = 0;
  v43 = (FILE *)fopen64(v42, "r");
  v44 = v43;
  if ( v43 )
  {
    if ( fread(ptr, 0x11u, 1u, v43) )
    {
      V_LOCK();
      logfmt_raw(v101, 0x1000u, 0, "miner sn: %s", ptr);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "main",
        4,
        1257,
        60,
        v101);
    }
    fclose(v44);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "miner has no sn!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/god-miner.c",
      147,
      "main",
      4,
      1251,
      100,
      v101);
  }
  if ( v24 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "Eeprom load error!");
    V_UNLOCK();
    v40 = 100;
    v41 = 1280;
    goto LABEL_42;
  }
  opt_custom_freq = eeprom_get_min_freq();
  opt_custom_voltage = eeprom_get_max_voltage();
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "MAX voltage: %d", opt_custom_voltage);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/god-miner.c",
    147,
    "main",
    4,
    1276,
    60,
    v101);
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "MIN freq: %d", opt_custom_freq);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/god-miner.c",
    147,
    "main",
    4,
    1277,
    60,
    v101);
  if ( opt_algo == 6 )
    sub_2C77C();
  v45 = 0;
  nmemb[0] = 0;
  s1 = (char *)get_all_created_runtime(nmemb);
  v46 = (int *)is_eeprom_loaded();
  if ( v46 )
  {
    while ( v45 < (int)nmemb[0] )
    {
      v47 = *(_DWORD *)&s1[4 * v45++];
      v46 = (int *)(*(int (__fastcall **)(int, int, int))(v47 + 108))(v47, 1, opt_custom_freq);
    }
  }
  if ( !opt_custom_freq && opt_algo == 2 )
  {
    v46 = (int *)calloc(nmemb[0], 4u);
    v92 = v17;
    v78 = v46;
    v91 = v46;
    v79 = 0;
    v90 = 0;
    while ( v79 < (int)nmemb[0] )
    {
      (*(void (**)(void))(*(_DWORD *)&s1[4 * v79] + 116))();
      V_LOCK();
      v80 = *(_DWORD *)&s1[4 * v79++];
      V_INT((int)v100, "chain", *(int *)(v80 + 140));
      logfmt_raw(
        v101,
        0x1000u,
        0,
        *(_DWORD *)&v100[28],
        *(_DWORD *)v100,
        *(_DWORD *)&v100[4],
        *(_DWORD *)&v100[8],
        *(_DWORD *)&v100[12],
        *(_DWORD *)&v100[16],
        *(_DWORD *)&v100[20],
        *(_DWORD *)&v100[24],
        *(_DWORD *)&v100[28],
        "level %d",
        *v78);
      V_UNLOCK();
      v46 = (int *)zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/"
                     "release/build/godminer-origin_master/god-miner.c",
                     147,
                     "backend_runtime_custom_parameter_update",
                     39,
                     976,
                     60,
                     v101);
      v81 = *v78++;
      v82 = v90;
      if ( (unsigned int)(v81 - 1) >= 2 )
        v82 = 1;
      v90 = v82;
    }
    v83 = v90;
    for ( i = 1; ; i = 2 )
    {
      for ( j = 0; j < (int)nmemb[0]; ++j )
      {
        if ( v83 && v91[j] == i )
        {
          V_LOCK();
          --v83;
          V_INT((int)v99, "chain", *(int *)(*(_DWORD *)&s1[4 * j] + 140));
          logfmt_raw(
            v101,
            0x1000u,
            0,
            *(_DWORD *)&v99[28],
            *(_DWORD *)v99,
            *(_DWORD *)&v99[4],
            *(_DWORD *)&v99[8],
            *(_DWORD *)&v99[12],
            *(_DWORD *)&v99[16],
            *(_DWORD *)&v99[20],
            *(_DWORD *)&v99[24],
            *(_DWORD *)&v99[28],
            "adjust freq to %d",
            (int)*(float *)(*(_DWORD *)&s1[4 * j] + 760) + 25);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/god-miner.c",
            147,
            "backend_runtime_custom_parameter_update",
            39,
            985,
            60,
            v101);
          v46 = (int *)(*(int (__fastcall **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)&s1[4 * j] + 108))(
                         *(_DWORD *)&s1[4 * j],
                         1,
                         (int)*(float *)(*(_DWORD *)&s1[4 * j] + 760) + 25,
                         0,
                         0);
        }
      }
      if ( i == 2 )
        break;
    }
    v86 = 0;
    while ( v86 < (int)nmemb[0] )
    {
      V_LOCK();
      V_INT((int)v98, "chain", *(int *)(*(_DWORD *)&s1[4 * v86] + 140));
      v87 = *(_DWORD *)&s1[4 * v86++];
      logfmt_raw(
        v101,
        0x1000u,
        0,
        *(_DWORD *)&v98[28],
        *(_DWORD *)v98,
        *(_DWORD *)&v98[4],
        *(_DWORD *)&v98[8],
        *(_DWORD *)&v98[12],
        *(_DWORD *)&v98[16],
        *(_DWORD *)&v98[20],
        *(_DWORD *)&v98[24],
        *(_DWORD *)&v98[28],
        "freq %d",
        (int)*(float *)(v87 + 760));
      V_UNLOCK();
      v46 = (int *)zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/"
                     "release/build/godminer-origin_master/god-miner.c",
                     147,
                     "backend_runtime_custom_parameter_update",
                     39,
                     993,
                     60,
                     v101);
    }
    v24 = 0;
    v17 = v92;
  }
  for ( k = 0; device_num > k; ++k )
  {
    v49 = *(int (__fastcall **)(int))(dev_ctrl(v46) + 28);
    v50 = k;
    v46 = (int *)v49(v50);
  }
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "all runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/god-miner.c",
    147,
    "main",
    4,
    1292,
    60,
    v101);
  power_off();
  sleep(8u);
  v51 = power_init();
  if ( v51 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "power init error!");
    V_UNLOCK();
    v34 = 100;
    v35 = 1296;
    goto LABEL_37;
  }
  while ( device_num > v51 )
  {
    (*(void (**)(void))v17[v51])();
    v52 = v17[v51++];
    redirect_nonce_output(*v17, v52);
  }
  for ( m = 0; device_num > m; ++m )
  {
    sub_2B8A4();
    v54 = (void *(**)(void *))v17[m];
    v55 = &nmemb[m];
    pthread_create(v55, 0, v54[1], v54);
  }
  for ( n = 0; device_num > n; ++n )
  {
    v57 = nmemb[n];
    pthread_join(v57, 0);
  }
  check_and_destroy_abnormal_runtime();
  v58 = (int *)get_all_created_runtime(&device_num);
  if ( device_num <= 0 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
    V_UNLOCK();
    v40 = 100;
    v41 = 1331;
    goto LABEL_42;
  }
  for ( ii = 0; ii < device_num; ++ii )
  {
    v60 = v58[ii];
    redirect_nonce_output(*v58, v60);
  }
  if ( is_check_asic_voltage_enable() )
  {
    if ( opt_algo == 6 )
    {
      set_working_voltage_and_runtime_freq();
    }
    else
    {
      sub_2B8A4();
      set_working_voltage(1);
    }
  }
  set_baud(3125000);
  v61 = opt_algo;
  if ( opt_algo == 8 )
    v61 = 2;
  set_frontend_runtime_type(v61);
  while ( total_pools > v24 )
  {
    v62 = opt_algo != 0;
    if ( opt_algo )
      v62 = (unsigned int)(opt_algo - 4) > 1;
    if ( !v62 )
    {
      v63 = *(_DWORD *)(pools + 4 * v24);
      V_LOCK();
      logfmt_raw(v101, 0x1000u, 0, "Using JSON-RPC 2.0");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "main",
        4,
        1361,
        40,
        v101);
      *(_BYTE *)(v63 + 1824) = 1;
    }
    ++v24;
  }
  signal(2, (__sighandler_t)sub_2B8F8);
  signal(3, (__sighandler_t)sub_2B8F8);
  signal(15, (__sighandler_t)sub_2B8F8);
  signal(11, (__sighandler_t)sub_2B8F8);
  signal(10, (__sighandler_t)sub_2B8F8);
  signal(13, (__sighandler_t)1);
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "signal");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/god-miner.c",
    147,
    "main",
    4,
    1382,
    60,
    v101);
  if ( create_pool_stratum_threads() )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "stratum thread create failed");
    V_UNLOCK();
    v34 = 100;
    v35 = 1385;
    LOWORD(v33) = -3536;
    goto LABEL_38;
  }
  v64 = 1;
  sleep(1u);
  while ( v64 != 60 && ((unsigned __int8)pools_active ^ 1) & 1 )
  {
    ++v64;
    sleep(1u);
    sub_12D0AC(v64, 0xAu);
    if ( !v66 )
      sub_2B8A4();
  }
  miner_monitor_init();
  godminer_register_status_monitor();
  miner_monitor_start();
  v67 = (unsigned __int8)pools_active;
  if ( !pools_active )
  {
    V_LOCK();
    logfmt_raw(v101, 0x1000u, v67, "No servers were found that could be used to get work from.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/god-miner.c",
      147,
      "main",
      4,
      1403,
      100,
      v101);
    V_LOCK();
    logfmt_raw(v101, 0x1000u, v67, "Please check the details from the list below of the servers you have input.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/god-miner.c",
      147,
      "main",
      4,
      1404,
      100,
      v101);
    V_LOCK();
    logfmt_raw(
      v101,
      0x1000u,
      v67,
      "Most likely you have input the wrong URL, forgotten to add a port, have not set up workers, or the network was disconnected.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/god-miner.c",
      147,
      "main",
      4,
      1405,
      100,
      v101);
    while ( total_pools > v67 )
    {
      v68 = *(_DWORD *)(pools + 4 * v67);
      V_LOCK();
      logfmt_raw(
        v101,
        0x1000u,
        0,
        "Pool: %d  URL: %s\tUser: %s  Password: %s",
        *(_DWORD *)v68,
        *(_DWORD *)(v68 + 8),
        *(_DWORD *)(v68 + 12),
        *(_DWORD *)(v68 + 16));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "main",
        4,
        1411,
        80,
        v101);
      v69 = *(const char **)(v68 + 16);
      if ( v69 )
      {
        s1a = *(char **)(v68 + 12);
        if ( s1a )
        {
          if ( strstr(v69, "stats") )
            v70 = 1;
          else
            v70 = strcmp(s1a, "benchmark") == 0;
          *(_BYTE *)(v68 + 1816) = v70;
        }
      }
      ++v67;
    }
    v5 = 0;
    V_LOCK();
    v71 = 0;
    logfmt_raw(v101, 0x1000u, 0, "No servers could be used!");
    V_UNLOCK();
    v72 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/god-miner.c",
            147,
            "main",
            4,
            1417,
            100,
            v101);
    while ( device_num > v71 )
    {
      v73 = *(int (__fastcall **)(int))(dev_ctrl(v72) + 28);
      v74 = v71++;
      v72 = v73(v74);
    }
    v75 = 0;
    v94 = 0;
    v76 = get_all_created_runtime(&v94);
    while ( v75 < v94 )
    {
      (*(void (**)(void))(v76[v75] + 8))();
      v77 = v76[v75++];
      (*(void (**)(void))(v77 + 16))();
    }
    fan_pwm_set(0x14u);
    green_led_off();
    red_led_off();
    power_off();
    if ( opt_api_remote && (dword_16CDE8 = 1, sub_22358((int)&dword_16CDE8, (void *(*)(void *))sub_2C74C)) )
    {
      V_LOCK();
      logfmt_raw(v101, 0x1000u, 0, "api thread create failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "process_no_servers_could_be_used",
        32,
        930,
        100,
        v101);
    }
    else
    {
      set_miner_network_working_status(1);
      while ( !pools_active )
        sleep(1u);
    }
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "Pool is activing, exiting and restart.");
    V_UNLOCK();
    v40 = 60;
    v41 = 1423;
    goto LABEL_42;
  }
  thr_info = 0;
  if ( sub_22358((int)&thr_info, (void *(*)(void *))work_generator_thread) )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "work generator thread %d create failed");
    V_UNLOCK();
    v40 = 100;
    v41 = 1432;
    goto LABEL_42;
  }
  dword_16CDE8 = 1;
  if ( sub_22358((int)&dword_16CDE8, (void *(*)(void *))nonce_submit_thread) )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "simulation submit thread create failed");
    V_UNLOCK();
    v40 = 100;
    v41 = 1440;
    goto LABEL_42;
  }
  set_miner_start_time();
  dword_16CE18 = 2;
  v5 = sub_22358((int)&dword_16CE18, (void *(*)(void *))watchpool_thread);
  if ( v5 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "watchpool thread create failed");
    V_UNLOCK();
    v40 = 100;
    v41 = 1451;
    goto LABEL_42;
  }
  sleep(5u);
  if ( opt_api_remote )
  {
    dword_16CE48 = 3;
    if ( sub_22358((int)&dword_16CE48, (void *(*)(void *))sub_2C74C) )
    {
      V_LOCK();
      v5 = 1;
      logfmt_raw(v101, 0x1000u, 0, "api thread create failed");
      V_UNLOCK();
      v40 = 100;
      v41 = 1462;
      goto LABEL_42;
    }
  }
  http_test_case_init();
  start_http_thread();
  pthread_join(dword_16CDBC, 0);
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "workio threads dead, exiting.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/god-miner.c",
    147,
    "main",
    4,
    1474,
    80,
    v101);
  print_summary();
  return v5;
}

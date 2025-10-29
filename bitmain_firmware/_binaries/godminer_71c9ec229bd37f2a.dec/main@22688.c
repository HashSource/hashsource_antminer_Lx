int __fastcall main(int argc, const char **argv, const char **envp)
{
  int pool_stratum_threads; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int hardware_version; // r9
  int v11; // r3
  int v12; // r2
  int v13; // r9
  __pid_t v14; // r0
  int *all_created_runtime; // r0
  void *v16; // lr
  int *v17; // r5
  int v18; // r1
  int v19; // r12
  int v20; // r0
  int i; // r3
  int v22; // r2
  int j; // r9
  int v24; // r0
  int v25; // r0
  int v26; // r0
  __int64 (__fastcall *v27)(int); // r3
  int v28; // r0
  __int64 v29; // r0
  int eeprom_chain_load_state; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  const char *v38; // r1
  int v39; // r12
  int v40; // r3
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // lr
  int v46; // r12
  int v47; // r3
  FILE *v48; // r0
  FILE *v49; // r4
  int v50; // r4
  _DWORD *v51; // r9
  _DWORD *v52; // r0
  int n; // r4
  int (__fastcall *v54)(int); // r3
  int v55; // r0
  int ii; // r4
  int v57; // r1
  int jj; // r4
  void *(**v59)(void *); // r3
  pthread_t *v60; // r0
  int kk; // r4
  pthread_t v62; // r0
  int v63; // r12
  int *v64; // r5
  int mm; // r4
  int v66; // r1
  int v67; // r0
  int nn; // r10
  bool v69; // cc
  int v70; // r9
  int v72; // r1
  int v73; // r9
  int v74; // r8
  const char *v75; // r0
  bool v76; // r0
  int v77; // r7
  int v78; // r0
  int (__fastcall *v79)(int); // r3
  int v80; // r0
  int v81; // r7
  _DWORD *v82; // r8
  int v83; // r0
  int v84; // r10
  int v85; // r3
  unsigned int v86; // r3
  bool v87; // cf
  int v88; // r3
  int m; // r4
  int v90; // r5
  int v91; // lr
  char *v92; // [sp+28h] [bp-10B4h]
  char *v93; // [sp+28h] [bp-10B4h]
  char *s1; // [sp+2Ch] [bp-10B0h]
  char *s1a; // [sp+2Ch] [bp-10B0h]
  _DWORD *v96; // [sp+30h] [bp-10ACh]
  int k; // [sp+30h] [bp-10ACh]
  _DWORD *v98; // [sp+38h] [bp-10A4h]
  int *v99; // [sp+44h] [bp-1098h]
  int device_num; // [sp+4Ch] [bp-1090h] BYREF
  int v101; // [sp+50h] [bp-108Ch] BYREF
  size_t nmemb[4]; // [sp+54h] [bp-1088h] BYREF
  _DWORD ptr[4]; // [sp+64h] [bp-1078h] BYREF
  __int16 v104; // [sp+74h] [bp-1068h]
  char v105[32]; // [sp+78h] [bp-1064h] BYREF
  char v106[32]; // [sp+98h] [bp-1044h] BYREF
  char v107[32]; // [sp+B8h] [bp-1024h] BYREF
  char v108[4100]; // [sp+D8h] [bp-1004h] BYREF

  device_num = 0;
  if ( (int)sub_2BF7C("godminer") > 1 )
  {
    pool_stratum_threads = 1;
    printf("godminer is forbidden to start again as it is already started, will exit immediately.");
    return pool_stratum_threads;
  }
  if ( (int)sub_2BF7C("godminer-update") > 0 )
  {
    pool_stratum_threads = 1;
    printf("godminer-update is running now, exit.");
    return pool_stratum_threads;
  }
  if ( log_init() )
    puts("log init error!");
  while ( 1 )
  {
    v7 = EVPX_EncryptInit_ex(argc, (int)argv, "a:c:hp:Po:u:v:F", (const char **)&off_130D78, 0);
    if ( v7 < 0 )
      break;
    parse_arg(v7, (char *)optarg);
  }
  if ( argc > optind )
  {
    V_LOCK();
    logfmt_raw(v108, 0x1000u, 0, "%s: unsupported non-option argument -- '%s'", *argv, argv[optind]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "parse_cmdline",
      13,
      762,
      100,
      v108);
    exit(1);
  }
  if ( !total_pools )
  {
    V_LOCK();
    logfmt_raw(v108, 0x1000u, 0, "Need to specify at least one pool server.");
    V_UNLOCK();
    pool_stratum_threads = 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1322,
      80,
      v108);
    V_LOCK();
    logfmt_raw(v108, 0x1000u, 0, "Pool setup failed!");
    V_UNLOCK();
    v38 = "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c";
    v39 = 100;
    v40 = 1323;
    v41 = g_zc;
LABEL_40:
    zlog(v41, v38, 132, "main", 4, v40, v39, v108);
    return pool_stratum_threads;
  }
  V_LOCK();
  logfmt_raw(v108, 0x1000u, 0, "release version");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1328,
    40,
    v108);
  V_LOCK();
  logfmt_raw(v108, 0x1000u, 0, "asic mode");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1338,
    40,
    v108);
  check_pool_worker();
  if ( system_info_init(opt_algo) )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v108, 0x1000u, 0, "system info init failed!");
    V_UNLOCK();
    v39 = 100;
    v40 = 1349;
LABEL_43:
    LOWORD(v38) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/god-miner.c";
LABEL_44:
    HIWORD(v38) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/god-miner.c" >> 16;
    v41 = g_zc;
    goto LABEL_40;
  }
  v8 = dev_ctrl(0);
  pool_stratum_threads = (*(int (__fastcall **)(int))(v8 + 8))(opt_algo);
  if ( pool_stratum_threads )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v108, 0x1000u, 0, "dev init failed!");
    V_UNLOCK();
    v39 = 100;
    v40 = 1355;
    goto LABEL_43;
  }
  v9 = check_fan_valiad();
  device_num = query_device_num(v9);
  if ( device_num <= 0 )
  {
    V_LOCK();
    logfmt_raw(v108, 0x1000u, 0, "query_device_num error code %d and then exit", device_num);
    V_UNLOCK();
    v39 = 80;
    v40 = 1365;
    goto LABEL_43;
  }
  if ( opt_version_path )
    read_version_file();
  else
    make_fake_version();
  hardware_version = get_hardware_version();
  V_LOCK();
  logfmt_raw(
    v108,
    0x1000u,
    0,
    "godminer Version = 0x%04X %s",
    (unsigned __int16)hardware_version,
    "1.0.0_release_dirty_mastertmp_5d3af8e3de0c984c61714d1d8f996482a7e3f606_May 14 2024 14:37:11");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "init_miner_version",
    18,
    842,
    40,
    v108);
  v11 = BYTE2(hardware_version);
  v12 = (unsigned __int8)hardware_version;
  v13 = 0;
  sprintf(g_miner_version, "%d.%d-%s", v12, v11, "1.0.0");
  V_LOCK();
  v14 = getpid();
  logfmt_raw(v108, 0x1000u, 0, "miner thread with %d backend runtime created pid %d", device_num, v14);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1376,
    60,
    v108);
  V_LOCK();
  logfmt_raw(v108, 0x1000u, 0, "opt_algo %d, %s", opt_algo, off_130D08[opt_algo]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1377,
    60,
    v108);
  while ( device_num > v13 )
  {
    if ( !runtime_ctrl(opt_algo) )
    {
      pool_stratum_threads = 1;
      V_LOCK();
      logfmt_raw(v108, 0x1000u, 0, "runtime ctrl error!");
      V_UNLOCK();
      v45 = 80;
      v46 = 1381;
LABEL_48:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        v46,
        v45,
        v108);
      return pool_stratum_threads;
    }
    ++v13;
  }
  all_created_runtime = (int *)get_all_created_runtime(&device_num);
  v16 = &unk_145005;
  v17 = all_created_runtime;
  v18 = device_num;
  if ( opt_custom_power_mode != 3 )
    v16 = &loc_E7E20 + 1;
  v19 = opt_algo;
  v20 = opt_custom_power_mode == 3;
  for ( i = 0; v18 > i; ++i )
  {
    v22 = v17[i];
    *(_BYTE *)(v22 + 788) = v20;
    if ( v19 == 6 )
      *(_DWORD *)(v22 + 780) = v16;
  }
  for ( j = 0; device_num > j; ++j )
  {
    v24 = dev_ctrl(v20);
    v25 = (*(int (__fastcall **)(int))(v24 + 40))(j);
    v26 = printf("eeprom add device :%d\n", v25);
    v27 = *(__int64 (__fastcall **)(int))(dev_ctrl(v26) + 40);
    v28 = j;
    v29 = v27(v28);
    v20 = add_eeprom_device(v29, SHIDWORD(v29));
  }
  s1 = (char *)eeprom_load();
  while ( device_num > pool_stratum_threads )
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(pool_stratum_threads);
    if ( eeprom_chain_load_state == -1 )
    {
      v42 = V_LOCK();
      v43 = dev_ctrl(v42);
      v44 = (*(int (__fastcall **)(int))(v43 + 40))(pool_stratum_threads);
      logfmt_raw(v108, 0x1000u, 0, "g_eeprom_data is not ready, chain = %d", v44);
      V_UNLOCK();
      v34 = 1409;
      goto LABEL_37;
    }
    if ( !eeprom_chain_load_state )
    {
      v31 = V_LOCK();
      v32 = dev_ctrl(v31);
      v33 = (*(int (__fastcall **)(int))(v32 + 40))(pool_stratum_threads);
      logfmt_raw(v108, 0x1000u, 0, "Chain%d load EEPROM error.", v33);
      V_UNLOCK();
      v34 = 1411;
LABEL_37:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        v34,
        100,
        v108);
LABEL_38:
      v35 = V_LOCK();
      v36 = dev_ctrl(v35);
      v37 = (*(int (__fastcall **)(int))(v36 + 40))(pool_stratum_threads);
      logfmt_raw(v108, 0x1000u, 0, "Error! Chain [%d] EEPROM data corrupted", v37);
      V_UNLOCK();
      pool_stratum_threads = -1;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1433,
        60,
        v108);
      return pool_stratum_threads;
    }
    if ( eeprom_chain_load_state <= 0 )
      goto LABEL_38;
    ++pool_stratum_threads;
  }
  ptr[1] = 0;
  ptr[0] = 0;
  if ( opt_algo == 5 )
    LOWORD(v47) = 7720;
  else
    LOWORD(v47) = 7728;
  HIWORD(v47) = 19;
  g_miner_sn_file_path = v47;
  ptr[2] = 0;
  ptr[3] = 0;
  v104 = 0;
  v48 = (FILE *)fopen64(v47, "r");
  v49 = v48;
  if ( v48 )
  {
    if ( fread(ptr, 0x11u, 1u, v48) )
    {
      V_LOCK();
      logfmt_raw(v108, 0x1000u, 0, "miner sn: %s", ptr);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1457,
        60,
        v108);
    }
    fclose(v49);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v108, 0x1000u, 0, "miner has no sn!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1451,
      100,
      v108);
  }
  if ( s1 )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v108, 0x1000u, 0, "Eeprom load error!");
    V_UNLOCK();
    v45 = 100;
    v46 = 1480;
    goto LABEL_48;
  }
  opt_custom_freq = eeprom_get_min_freq();
  opt_custom_voltage = eeprom_get_max_voltage();
  V_LOCK();
  logfmt_raw(v108, 0x1000u, 0, "MAX voltage: %d", opt_custom_voltage);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1476,
    60,
    v108);
  V_LOCK();
  logfmt_raw(v108, 0x1000u, 0, "MIN freq: %d", opt_custom_freq);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1477,
    60,
    v108);
  if ( opt_algo == 6 )
    sub_2CBB8();
  v50 = 0;
  nmemb[0] = 0;
  v51 = get_all_created_runtime(nmemb);
  v52 = (_DWORD *)is_eeprom_loaded();
  if ( v52 )
  {
    while ( v50 < (int)nmemb[0] )
    {
      v63 = v51[v50++];
      v52 = (_DWORD *)(*(int (__fastcall **)(int, int, int))(v63 + 108))(v63, 1, opt_custom_freq);
    }
  }
  if ( !opt_custom_freq && opt_algo == 2 )
  {
    v52 = calloc(nmemb[0], 4u);
    v98 = v52;
    v96 = v52;
    v84 = 0;
    v93 = 0;
    v99 = v17;
    while ( v84 < (int)nmemb[0] )
    {
      (*(void (**)(void))(v51[v84] + 116))();
      V_LOCK();
      v85 = v51[v84++];
      V_INT((int)v107, "chain", *(int *)(v85 + 148));
      logfmt_raw(
        v108,
        0x1000u,
        0,
        *(_DWORD *)&v107[28],
        *(_DWORD *)v107,
        *(_DWORD *)&v107[4],
        *(_DWORD *)&v107[8],
        *(_DWORD *)&v107[12],
        *(_DWORD *)&v107[16],
        *(_DWORD *)&v107[20],
        *(_DWORD *)&v107[24],
        *(_DWORD *)&v107[28],
        "level %d",
        *v96);
      V_UNLOCK();
      v52 = (_DWORD *)zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/god-miner.c",
                        132,
                        "backend_runtime_custom_parameter_update",
                        39,
                        1131,
                        60,
                        v108);
      v86 = *v96++ - 1;
      v87 = v86 >= 2;
      v88 = (int)v93;
      if ( v87 )
        v88 = 1;
      v93 = (char *)v88;
    }
    for ( k = 1; ; k = 2 )
    {
      for ( m = 0; m < (int)nmemb[0]; ++m )
      {
        if ( v93 && v98[m] == k )
        {
          V_LOCK();
          --v93;
          V_INT((int)v106, "chain", *(int *)(v51[m] + 148));
          logfmt_raw(
            v108,
            0x1000u,
            0,
            *(_DWORD *)&v106[28],
            *(_DWORD *)v106,
            *(_DWORD *)&v106[4],
            *(_DWORD *)&v106[8],
            *(_DWORD *)&v106[12],
            *(_DWORD *)&v106[16],
            *(_DWORD *)&v106[20],
            *(_DWORD *)&v106[24],
            *(_DWORD *)&v106[28],
            "adjust freq to %d",
            (int)*(float *)(v51[m] + 768) + 25);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "backend_runtime_custom_parameter_update",
            39,
            1140,
            60,
            v108);
          v52 = (_DWORD *)(*(int (__fastcall **)(_DWORD, int, int, _DWORD, _DWORD))(v51[m] + 108))(
                            v51[m],
                            1,
                            (int)*(float *)(v51[m] + 768) + 25,
                            0,
                            0);
        }
      }
      if ( k == 2 )
        break;
    }
    v90 = 0;
    while ( v90 < (int)nmemb[0] )
    {
      V_LOCK();
      V_INT((int)v105, "chain", *(int *)(v51[v90] + 148));
      v91 = v51[v90++];
      logfmt_raw(
        v108,
        0x1000u,
        0,
        *(_DWORD *)&v105[28],
        *(_DWORD *)v105,
        *(_DWORD *)&v105[4],
        *(_DWORD *)&v105[8],
        *(_DWORD *)&v105[12],
        *(_DWORD *)&v105[16],
        *(_DWORD *)&v105[20],
        *(_DWORD *)&v105[24],
        *(_DWORD *)&v105[28],
        "freq %d",
        (int)*(float *)(v91 + 768));
      V_UNLOCK();
      v52 = (_DWORD *)zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/god-miner.c",
                        132,
                        "backend_runtime_custom_parameter_update",
                        39,
                        1148,
                        60,
                        v108);
    }
    v17 = v99;
  }
  for ( n = 0; device_num > n; ++n )
  {
    v54 = *(int (__fastcall **)(int))(dev_ctrl(v52) + 28);
    v55 = n;
    v52 = (_DWORD *)v54(v55);
  }
  V_LOCK();
  logfmt_raw(v108, 0x1000u, 0, "all runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1492,
    60,
    v108);
  power_off();
  if ( opt_algo == 6 && opt_custom_power_mode == 1 )
  {
    V_LOCK();
    logfmt_raw(v108, 0x1000u, 0, "sleep on!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1495,
      60,
      v108);
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  sleep(8u);
  if ( power_init() )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v108, 0x1000u, 0, "power init error!");
    V_UNLOCK();
    v45 = 100;
    v46 = 1502;
    goto LABEL_48;
  }
  for ( ii = 0; device_num > ii; ++ii )
  {
    (*(void (**)(void))v17[ii])();
    v57 = v17[ii];
    redirect_nonce_output(*v17, v57);
  }
  for ( jj = 0; device_num > jj; ++jj )
  {
    sub_2BCE0();
    v59 = (void *(**)(void *))v17[jj];
    v60 = &nmemb[jj];
    pthread_create(v60, 0, v59[1], v59);
  }
  for ( kk = 0; device_num > kk; ++kk )
  {
    v62 = nmemb[kk];
    pthread_join(v62, 0);
  }
  check_and_destroy_abnormal_runtime();
  v64 = (int *)get_all_created_runtime(&device_num);
  if ( device_num <= 0 )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v108, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
    V_UNLOCK();
    v45 = 100;
    v46 = 1537;
    goto LABEL_48;
  }
  for ( mm = 0; mm < device_num; ++mm )
  {
    v66 = v64[mm];
    redirect_nonce_output(*v64, v66);
  }
  if ( is_check_asic_voltage_enable() )
  {
    if ( opt_algo == 6 )
    {
      set_working_voltage_and_runtime_freq();
    }
    else
    {
      sub_2BCE0();
      set_working_voltage(1);
    }
  }
  set_baud(3125000);
  http_test_case_init();
  start_http_thread();
  v67 = opt_algo;
  if ( opt_algo == 8 )
    v67 = 2;
  set_frontend_runtime_type(v67);
  for ( nn = 0; total_pools > nn; ++nn )
  {
    v69 = opt_algo != 0;
    if ( opt_algo )
      v69 = (unsigned int)(opt_algo - 4) > 1;
    if ( !v69 )
    {
      v92 = *(char **)(pools + 4 * nn);
      V_LOCK();
      logfmt_raw(v108, 0x1000u, 0, "Using JSON-RPC 2.0");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1573,
        40,
        v108);
      v92[1824] = 1;
    }
  }
  signal(2, (__sighandler_t)sub_2BD34);
  signal(3, (__sighandler_t)sub_2BD34);
  signal(15, (__sighandler_t)sub_2BD34);
  signal(11, (__sighandler_t)sub_2BD34);
  signal(10, (__sighandler_t)sub_2BD34);
  signal(13, (__sighandler_t)1);
  V_LOCK();
  logfmt_raw(v108, 0x1000u, 0, "signal");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1594,
    60,
    v108);
  pool_stratum_threads = create_pool_stratum_threads();
  if ( pool_stratum_threads )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v108, 0x1000u, 0, "stratum thread create failed");
    V_UNLOCK();
    v39 = 100;
    v40 = 1597;
    LOWORD(v38) = 4956;
    goto LABEL_44;
  }
  v70 = 1;
  sleep(1u);
  while ( v70 != 60 && ((unsigned __int8)pools_active ^ 1) & 1 )
  {
    ++v70;
    sleep(1u);
    sub_12F1D4(v70, 0xAu);
    if ( !v72 )
      sub_2BCE0();
  }
  miner_monitor_init();
  godminer_register_status_monitor();
  miner_monitor_start();
  v73 = (unsigned __int8)pools_active;
  if ( !pools_active )
  {
    V_LOCK();
    logfmt_raw(v108, 0x1000u, v73, "No servers were found that could be used to get work from.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1615,
      100,
      v108);
    V_LOCK();
    logfmt_raw(v108, 0x1000u, v73, "Please check the details from the list below of the servers you have input.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1616,
      100,
      v108);
    V_LOCK();
    logfmt_raw(
      v108,
      0x1000u,
      v73,
      "Most likely you have input the wrong URL, forgotten to add a port, have not set up workers, or the network was disconnected.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1617,
      100,
      v108);
    while ( total_pools > v73 )
    {
      v74 = *(_DWORD *)(pools + 4 * v73);
      V_LOCK();
      logfmt_raw(
        v108,
        0x1000u,
        0,
        "Pool: %d  URL: %s\tUser: %s  Password: %s",
        *(_DWORD *)v74,
        *(_DWORD *)(v74 + 8),
        *(_DWORD *)(v74 + 12),
        *(_DWORD *)(v74 + 16));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1623,
        80,
        v108);
      v75 = *(const char **)(v74 + 16);
      if ( v75 )
      {
        s1a = *(char **)(v74 + 12);
        if ( s1a )
        {
          if ( strstr(v75, "stats") )
            v76 = 1;
          else
            v76 = strcmp(s1a, "benchmark") == 0;
          *(_BYTE *)(v74 + 1816) = v76;
        }
      }
      ++v73;
    }
    V_LOCK();
    v77 = 0;
    logfmt_raw(v108, 0x1000u, 0, "No servers could be used!");
    V_UNLOCK();
    v78 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "main",
            4,
            1629,
            100,
            v108);
    while ( device_num > v77 )
    {
      v79 = *(int (__fastcall **)(int))(dev_ctrl(v78) + 28);
      v80 = v77++;
      v78 = v79(v80);
    }
    v81 = 0;
    v101 = 0;
    v82 = get_all_created_runtime(&v101);
    while ( v81 < v101 )
    {
      (*(void (**)(void))(v82[v81] + 8))();
      v83 = v82[v81++];
      (*(void (**)(void))(v83 + 16))();
    }
    fan_pwm_set(0x14u);
    green_led_off();
    red_led_off();
    power_off();
    if ( opt_api_remote && (dword_16EE18 = 1, sub_22648((int)&dword_16EE18, (void *(*)(void *))sub_2CB88)) )
    {
      V_LOCK();
      logfmt_raw(v108, 0x1000u, 0, "api thread create failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "process_no_servers_could_be_used",
        32,
        1085,
        100,
        v108);
    }
    else
    {
      set_miner_network_working_status(1);
      while ( !pools_active )
        sleep(1u);
    }
    V_LOCK();
    logfmt_raw(v108, 0x1000u, 0, "Pool is activing, exiting and restart.");
    V_UNLOCK();
    v45 = 60;
    v46 = 1635;
    goto LABEL_48;
  }
  thr_info = 0;
  if ( sub_22648((int)&thr_info, (void *(*)(void *))work_generator_thread) )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v108, 0x1000u, 0, "work generator thread %d create failed");
    V_UNLOCK();
    v45 = 100;
    v46 = 1644;
    goto LABEL_48;
  }
  dword_16EE18 = 1;
  if ( sub_22648((int)&dword_16EE18, (void *(*)(void *))nonce_submit_thread) )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v108, 0x1000u, 0, "simulation submit thread create failed");
    V_UNLOCK();
    v45 = 100;
    v46 = 1652;
    goto LABEL_48;
  }
  set_miner_start_time();
  dword_16EE48 = 2;
  pool_stratum_threads = sub_22648((int)&dword_16EE48, (void *(*)(void *))watchpool_thread);
  if ( pool_stratum_threads )
  {
    V_LOCK();
    pool_stratum_threads = 1;
    logfmt_raw(v108, 0x1000u, 0, "watchpool thread create failed");
    V_UNLOCK();
    v45 = 100;
    v46 = 1663;
    goto LABEL_48;
  }
  sleep(5u);
  if ( opt_api_remote )
  {
    dword_16EE78 = 3;
    if ( sub_22648((int)&dword_16EE78, (void *(*)(void *))sub_2CB88) )
    {
      V_LOCK();
      pool_stratum_threads = 1;
      logfmt_raw(v108, 0x1000u, 0, "api thread create failed");
      V_UNLOCK();
      v45 = 100;
      v46 = 1674;
      goto LABEL_48;
    }
  }
  http_service_all_ready = 1;
  V_LOCK();
  logfmt_raw(v108, 0x1000u, 0, "http_service_all_ready:[%d]", (unsigned __int8)http_service_all_ready);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1681,
    60,
    v108);
  pthread_join(dword_16EDEC, 0);
  V_LOCK();
  logfmt_raw(v108, 0x1000u, 0, "workio threads dead, exiting.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1745,
    80,
    v108);
  print_summary();
  return pool_stratum_threads;
}

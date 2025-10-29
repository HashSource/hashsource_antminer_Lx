int __fastcall main(int argc, const char **argv, const char **envp)
{
  char v7[44]; // [sp+18h] [bp-102Ch] BYREF
  int v8; // [sp+1018h] [bp-2Ch]
  int *v9; // [sp+101Ch] [bp-28h]
  int v10; // [sp+1020h] [bp-24h]
  int v11; // [sp+1024h] [bp-20h]
  int v12; // [sp+1028h] [bp-1Ch]
  int v13; // [sp+102Ch] [bp-18h]
  int v14; // [sp+1030h] [bp-14h]
  void *v15; // [sp+1034h] [bp-10h]
  int v16; // [sp+1038h] [bp-Ch]
  _DWORD *v17; // [sp+103Ch] [bp-8h]

  v12 = 0;
  v11 = 0;
  v10 = 0;
  v13 = 0;
  v16 = 0;
  v14 = 0;
  if ( sub_2E168() )
  {
    printf("godminer is forbidden to start again as it is already started, will exit immediately.");
    return 1;
  }
  else
  {
    if ( log_init() )
      puts("log init error!");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "release version");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/god-miner.c",
      149,
      "main",
      4,
      1969,
      40,
      v7);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "asic mode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/god-miner.c",
      149,
      "main",
      4,
      1974,
      40,
      v7);
    sub_2CE3C(argc, argv);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "opt_algo %d, %s", opt_algo, off_14D568[opt_algo]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/god-miner.c",
      149,
      "main",
      4,
      1978,
      20,
      v7);
    custom_param_check();
    if ( opt_chip_update )
    {
      if ( chip_update_xmr_routine(chip_update_param) )
        return -1;
      else
        return 0;
    }
    else if ( total_pools )
    {
      check_test_pool();
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "Droa is_test_pool=%d", (unsigned __int8)is_test_pool);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "main",
        4,
        2007,
        40,
        v7);
      cal_log_init();
      droa_macro_check();
      if ( opt_version_path )
        read_version_file();
      else
        make_fake_version();
      if ( opt_api_remote )
      {
        pools_active = 1;
        start_api_thread();
      }
      v15 = (void *)dhash_content_init(opt_algo);
      if ( v15 )
      {
        set_frontend_runtime_type((int)v15, opt_algo);
        check_pool_worker();
        v16 = hardware_init((const char *)opt_algo);
        if ( v16 )
        {
          return v16;
        }
        else
        {
          v17 = machine_runtime_init(opt_machine_type, opt_algo);
          if ( v17 )
          {
            sub_2D2F4();
            check_sn(v17[31]);
            sub_2E198();
            http_test_case_init();
            start_http_thread();
            if ( check_pool_connect() == 305 )
            {
              return 1;
            }
            else
            {
              v16 = ((int (__fastcall *)(_DWORD *))v17[12])(v17);
              if ( v16 )
              {
                return v16;
              }
              else
              {
                signal(2, (__sighandler_t)sub_2CFB4);
                signal(3, (__sighandler_t)sub_2CFB4);
                signal(15, (__sighandler_t)sub_2CFB4);
                signal(11, (__sighandler_t)sub_2CFB4);
                signal(10, (__sighandler_t)sub_2CFB4);
                signal(13, (__sighandler_t)1);
                V_LOCK();
                logfmt_raw(v7, 0x1000u, 0, "always catch signal!");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/bui"
                  "ld/godminer-origin_godminer-branch1/god-miner.c",
                  149,
                  "main",
                  4,
                  2096,
                  40,
                  v7);
                if ( create_pool_connect() == 305 )
                {
                  return 1;
                }
                else
                {
                  v9 = &thr_info;
                  thr_info = 0;
                  v8 = sub_2A5D8((int)&thr_info, (void *(*)(void *))work_generator_thread);
                  if ( v8 )
                  {
                    V_LOCK();
                    logfmt_raw(v7, 0x1000u, 0, "work generator thread %d create failed");
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release"
                      "/build/godminer-origin_godminer-branch1/god-miner.c",
                      149,
                      "main",
                      4,
                      2107,
                      100,
                      v7);
                    return 1;
                  }
                  else
                  {
                    v9 = &dword_161030;
                    dword_161030 = 1;
                    v8 = sub_2A5D8((int)&dword_161030, (void *(*)(void *))nonce_submit_thread);
                    if ( v8 )
                    {
                      V_LOCK();
                      logfmt_raw(v7, 0x1000u, 0, "simulation submit thread create failed");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/relea"
                        "se/build/godminer-origin_godminer-branch1/god-miner.c",
                        149,
                        "main",
                        4,
                        2115,
                        100,
                        v7);
                      return 1;
                    }
                    else
                    {
                      miner_monitor_init();
                      if ( is_test_pool != 1 )
                      {
                        V_LOCK();
                        logfmt_raw(v7, 0x1000u, 0, "record droalogs");
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/rel"
                          "ease/build/godminer-origin_godminer-branch1/god-miner.c",
                          149,
                          "main",
                          4,
                          2125,
                          40,
                          v7);
                        record_nvdata_droalog();
                      }
                      godminer_register_status_monitor();
                      miner_monitor_start();
                      sleep(5u);
                      set_miner_start_time();
                      set_elapsed_time_validity(1);
                      start_watchpool_thread();
                      sleep(5u);
                      ((void (__fastcall *)(_DWORD *))v17[3])(v17);
                      pthread_join(dword_161004, 0);
                      V_LOCK();
                      logfmt_raw(v7, 0x1000u, 0, "workio threads dead, exiting.");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/relea"
                        "se/build/godminer-origin_godminer-branch1/god-miner.c",
                        149,
                        "main",
                        4,
                        2182,
                        80,
                        v7);
                      print_summary();
                      dhash_content_exit(v15);
                      ((void (*)(void))v17[5])();
                      machine_runtime_exit((void *)dword_151850);
                      return 0;
                    }
                  }
                }
              }
            }
          }
          else
          {
            printf("invalid pointer(%s)!\n", "machine_runtime");
            return 3;
          }
        }
      }
      else
      {
        printf("invalid pointer(%s)!\n", "dhash_content");
        return 3;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "Need to specify at least one pool server.");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "main",
        4,
        2000,
        80,
        v7);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "Pool setup failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "main",
        4,
        2001,
        100,
        v7);
      return 1;
    }
  }
}

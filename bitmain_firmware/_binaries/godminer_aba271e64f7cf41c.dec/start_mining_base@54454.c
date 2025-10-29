int __fastcall start_mining_base(int a1)
{
  int (**v2)(); // r0
  int (__fastcall *v3)(int, int); // r4
  int v4; // r0
  int (**v5)(); // r0
  __int64 v6; // r0
  char v9[40]; // [sp+1Ch] [bp-1028h] BYREF
  int v10; // [sp+101Ch] [bp-28h] BYREF
  unsigned int v11; // [sp+1020h] [bp-24h]
  int *v12; // [sp+1024h] [bp-20h]
  int j; // [sp+1028h] [bp-1Ch]
  int v14; // [sp+102Ch] [bp-18h]
  _DWORD *all_created_runtime; // [sp+1030h] [bp-14h]
  int i; // [sp+1034h] [bp-10h]

  v14 = 0;
  v10 = 0;
  all_created_runtime = get_all_created_runtime(&v10);
  for ( i = 0; i < v10; ++i )
  {
    if ( !all_created_runtime[i] )
    {
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v2 = dev_ctrl();
    ((void (__fastcall *)(int))v2[7])(i);
  }
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/machine_runtime_base.c",
    176,
    "start_mining_base",
    17,
    914,
    60,
    v9);
  if ( support_of_sleepmode(*(_DWORD *)(a1 + 80)) && opt_custom_power_mode == 1 )
  {
    byte_1523EC = 1;
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "sleep on!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "start_mining_base",
      17,
      920,
      60,
      v9);
  }
  if ( power_init(byte_1523EC, v10) )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, ">> power init error, check PSU please <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "start_mining_base",
      17,
      923,
      100,
      v9);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "start_mining_base",
      17,
      924,
      100,
      v9);
    return 300;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, ">> power init success <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "start_mining_base",
      17,
      927,
      40,
      v9);
    if ( start_heartbeat_thread() )
    {
      return start_heartbeat_thread();
    }
    else if ( opt_algo == 9
           && (v3 = *(int (__fastcall **)(int, int))(a1 + 28),
               v4 = platfrom_get_check_asic_voltage(),
               (v14 = v3(a1, v4)) != 0) )
    {
      return v14;
    }
    else
    {
      (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 88));
      for ( i = 0; i < v10; ++i )
      {
        v14 = (*(int (__fastcall **)(_DWORD))all_created_runtime[i])(all_created_runtime[i]);
        if ( v14 )
          return v14;
      }
      for ( i = 0; i < v10; ++i )
      {
        for ( j = 0; j <= 2; ++j )
        {
          v5 = dev_ctrl();
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v5[6])(
            *(_DWORD *)(all_created_runtime[i] + 248),
            *(_DWORD *)(all_created_runtime[i] + 1108),
            *(_DWORD *)(all_created_runtime[i] + 1128));
          v14 = (*(int (__fastcall **)(_DWORD))(all_created_runtime[i] + 220))(all_created_runtime[i]);
          if ( !v14 )
            break;
        }
        (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 232))(all_created_runtime[i]);
      }
      if ( v14 )
      {
        return v14;
      }
      else
      {
        check_and_destroy_abnormal_runtime();
        v12 = (int *)get_all_created_runtime(&v10);
        if ( v10 > 0 )
        {
          (*(void (__fastcall **)(int))(a1 + 68))(a1);
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 100));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
            176,
            "start_mining_base",
            17,
            976,
            60,
            v9);
          check_if_bringup_temp_valid(a1);
          v11 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 100));
          fan_pwm_set(v11);
          for ( i = 0; i < v10; ++i )
          {
            redirect_nonce_output(*v12, v12[i]);
            (*(void (__fastcall **)(int))(v12[i] + 240))(v12[i]);
          }
          if ( *(_DWORD *)(a1 + 80) == 9 )
          {
            (*(void (__fastcall **)(int))(a1 + 68))(a1);
            V_LOCK();
            logfmt_raw(v9, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 100));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
              176,
              "start_mining_base",
              17,
              992,
              60,
              v9);
          }
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, "Initializing, please wait, this may take up 1 minute...");
          V_UNLOCK();
          v6 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/buil"
                 "d/godminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
                 176,
                 "start_mining_base",
                 17,
                 999,
                 60,
                 v9);
          v14 = (*(int (__fastcall **)(int, _DWORD))(a1 + 44))(a1, HIDWORD(v6));
          if ( v14 )
          {
            fan_pwm_set_max();
            return v14;
          }
          else
          {
            for ( i = 0; i < v10; ++i )
              (*(void (__fastcall **)(int))(v12[i] + 16))(v12[i]);
            return v14;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
            176,
            "start_mining_base",
            17,
            962,
            100,
            v9);
          return 102;
        }
      }
    }
  }
}

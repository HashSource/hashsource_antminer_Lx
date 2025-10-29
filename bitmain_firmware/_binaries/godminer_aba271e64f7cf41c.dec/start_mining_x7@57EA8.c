int __fastcall start_mining_x7(int a1)
{
  int (**v2)(); // r0
  int (**v3)(); // r0
  __int64 v4; // r0
  char v7[32]; // [sp+1Ch] [bp-1020h] BYREF
  int v8; // [sp+101Ch] [bp-20h] BYREF
  unsigned int v9; // [sp+1020h] [bp-1Ch]
  int *v10; // [sp+1024h] [bp-18h]
  _DWORD *all_created_runtime; // [sp+1028h] [bp-14h]
  int i; // [sp+102Ch] [bp-10h]
  int j; // [sp+1030h] [bp-Ch]
  int v14; // [sp+1034h] [bp-8h]

  v14 = 0;
  v8 = 0;
  all_created_runtime = get_all_created_runtime(&v8);
  for ( i = 0; i < v8; ++i )
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
  logfmt_raw(v7, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
    187,
    "start_mining_x7",
    15,
    252,
    60,
    v7);
  if ( power_init(0, v8) )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, ">> power init error, check PSU please <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
      187,
      "start_mining_x7",
      15,
      257,
      100,
      v7);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
      187,
      "start_mining_x7",
      15,
      258,
      100,
      v7);
    return 300;
  }
  else if ( start_heartbeat_thread() )
  {
    return start_heartbeat_thread();
  }
  else
  {
    (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 88));
    for ( i = 0; i < v8; ++i )
    {
      v14 = (*(int (__fastcall **)(_DWORD))all_created_runtime[i])(all_created_runtime[i]);
      if ( !v14 )
      {
        v3 = dev_ctrl();
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v3[6])(
          *(_DWORD *)(all_created_runtime[i] + 248),
          *(_DWORD *)(all_created_runtime[i] + 1108),
          *(_DWORD *)(all_created_runtime[i] + 1128));
      }
    }
    for ( i = 0; i < v8; ++i )
    {
      for ( j = 0; j <= 0; ++j )
      {
        (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 232))(all_created_runtime[i]);
        v14 = (*(int (__fastcall **)(_DWORD))(all_created_runtime[i] + 220))(all_created_runtime[i]);
        if ( !v14 )
          break;
      }
      if ( v14 )
        sleep(0xAu);
    }
    check_and_destroy_abnormal_runtime();
    v10 = (int *)get_all_created_runtime(&v8);
    if ( v8 > 0 )
    {
      v14 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 92));
      if ( v14 )
      {
        return v14;
      }
      else
      {
        (*(void (__fastcall **)(int))(a1 + 68))(a1);
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "first time check temperature %d C", *(_DWORD *)(a1 + 100));
        V_UNLOCK();
        v4 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/"
               "godminer-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
               187,
               "start_mining_x7",
               15,
               300,
               60,
               v7);
        v9 = (*(int (__fastcall **)(_DWORD, _DWORD))(a1 + 24))(*(_DWORD *)(a1 + 100), HIDWORD(v4));
        fan_pwm_set(v9);
        for ( i = 0; i < v8; ++i )
        {
          redirect_nonce_output(*v10, v10[i]);
          (*(void (__fastcall **)(int))(v10[i] + 240))(v10[i]);
        }
        if ( support_of_sleepmode(*(_DWORD *)(a1 + 80)) && *(_DWORD *)&opt_custom_power_mode == 1
          || (v14 = (*(int (__fastcall **)(int))(a1 + 44))(a1)) == 0 )
        {
          for ( i = 0; i < v8; ++i )
          {
            (*(void (__fastcall **)(int))(v10[i] + 4))(v10[i]);
            (*(void (__fastcall **)(int, _DWORD))(v10[i] + 124))(v10[i], *(_DWORD *)(a1 + 84));
            (*(void (__fastcall **)(int))(v10[i] + 16))(v10[i]);
          }
          return v14;
        }
        else
        {
          return v14;
        }
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
        187,
        "start_mining_x7",
        15,
        290,
        100,
        v7);
      return 102;
    }
  }
}

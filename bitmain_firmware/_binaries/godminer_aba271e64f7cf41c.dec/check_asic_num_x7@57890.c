int __fastcall check_asic_num_x7(int a1)
{
  int (**v2)(); // r0
  int (**v3)(); // r0
  int (**v4)(); // r0
  char v7[28]; // [sp+18h] [bp-109Ch] BYREF
  _QWORD s[16]; // [sp+1018h] [bp-9Ch] BYREF
  int v9; // [sp+1098h] [bp-1Ch] BYREF
  _DWORD *all_created_runtime; // [sp+109Ch] [bp-18h]
  int i; // [sp+10A0h] [bp-14h]
  int j; // [sp+10A4h] [bp-10h]
  int k; // [sp+10A8h] [bp-Ch]
  int v14; // [sp+10ACh] [bp-8h]

  v14 = 0;
  v9 = 0;
  all_created_runtime = get_all_created_runtime(&v9);
  for ( i = 0; i < v9; ++i )
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
    "check_asic_num_x7",
    17,
    195,
    60,
    v7);
  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "start to check asic num test loop");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
    187,
    "check_asic_num_x7",
    17,
    200,
    60,
    v7);
  for ( j = 1; j <= 1000; ++j )
  {
    for ( i = 0; i < v9; ++i )
    {
      v3 = dev_ctrl();
      ((void (__fastcall *)(int))v3[10])(i);
    }
    if ( power_init(0, v9) )
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "power init error!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
        187,
        "check_asic_num_x7",
        17,
        207,
        100,
        v7);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "Sweep error string = %s.", "V:1");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
        187,
        "check_asic_num_x7",
        17,
        208,
        100,
        v7);
      return 300;
    }
    (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 88));
    for ( i = 0; i < v9; ++i )
    {
      v14 = (*(int (__fastcall **)(_DWORD))all_created_runtime[i])(all_created_runtime[i]);
      if ( !v14 )
      {
        v4 = dev_ctrl();
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v4[6])(
          *(_DWORD *)(all_created_runtime[i] + 248),
          *(_DWORD *)(all_created_runtime[i] + 1108),
          *(_DWORD *)(all_created_runtime[i] + 1128));
      }
    }
    for ( i = 0; i < v9; ++i )
    {
      for ( k = 0; k <= 0; ++k )
      {
        (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 232))(all_created_runtime[i]);
        v14 = (*(int (__fastcall **)(_DWORD))(all_created_runtime[i] + 220))(all_created_runtime[i]);
        if ( !v14 )
          break;
      }
      if ( v14 )
      {
        ++LODWORD(s[i]);
        sleep(0xAu);
      }
      (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 28))(all_created_runtime[i]);
      V_LOCK();
      logfmt_raw(
        v7,
        0x1000u,
        0,
        "chain[%d] check asic num test, loop:%d done, total failed times:%d",
        i,
        j,
        LODWORD(s[i]));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
        187,
        "check_asic_num_x7",
        17,
        234,
        60,
        v7);
    }
  }
  return 0;
}

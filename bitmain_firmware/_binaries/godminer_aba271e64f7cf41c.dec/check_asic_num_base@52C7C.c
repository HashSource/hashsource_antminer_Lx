int __fastcall check_asic_num_base(int a1)
{
  int (**v2)(); // r0
  int (**v3)(); // r0
  int (**v4)(); // r0
  int (**v5)(); // r0
  char v8[28]; // [sp+18h] [bp-109Ch] BYREF
  _QWORD s[16]; // [sp+1018h] [bp-9Ch] BYREF
  int v10; // [sp+1098h] [bp-1Ch] BYREF
  int j; // [sp+109Ch] [bp-18h]
  int k; // [sp+10A0h] [bp-14h]
  int v13; // [sp+10A4h] [bp-10h]
  _DWORD *all_created_runtime; // [sp+10A8h] [bp-Ch]
  int i; // [sp+10ACh] [bp-8h]

  v13 = 0;
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
  logfmt_raw(v8, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/machine_runtime_base.c",
    176,
    "check_asic_num_base",
    19,
    673,
    60,
    v8);
  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "start to check asic num test loop");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/machine_runtime_base.c",
    176,
    "check_asic_num_base",
    19,
    678,
    60,
    v8);
  for ( j = 1; j <= 1000; ++j )
  {
    for ( i = 0; i < v10; ++i )
    {
      v3 = dev_ctrl();
      ((void (__fastcall *)(int))v3[10])(i);
    }
    if ( power_init(byte_1523EC, v10) )
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "power init error!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
        176,
        "check_asic_num_base",
        19,
        687,
        100,
        v8);
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "Sweep error string = %s.", "V:1");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
        176,
        "check_asic_num_base",
        19,
        688,
        100,
        v8);
      return 300;
    }
    for ( i = 0; i < v10; ++i )
    {
      v4 = dev_ctrl();
      ((void (__fastcall *)(int))v4[9])(i);
    }
    (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 88));
    for ( i = 0; i < v10; ++i )
    {
      v13 = (*(int (__fastcall **)(_DWORD))all_created_runtime[i])(all_created_runtime[i]);
      if ( !v13 )
      {
        for ( k = 0; k <= 2; ++k )
        {
          v5 = dev_ctrl();
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v5[6])(
            *(_DWORD *)(all_created_runtime[i] + 248),
            *(_DWORD *)(all_created_runtime[i] + 1108),
            *(_DWORD *)(all_created_runtime[i] + 1128));
          (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 232))(all_created_runtime[i]);
          v13 = (*(int (__fastcall **)(_DWORD))(all_created_runtime[i] + 220))(all_created_runtime[i]);
          if ( !v13 )
            break;
        }
        if ( v13 )
          ++LODWORD(s[i]);
        (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 28))(all_created_runtime[i]);
        V_LOCK();
        logfmt_raw(
          v8,
          0x1000u,
          0,
          "chain[%d] check asic num test, loop:%d done, total failed times:%d",
          i,
          j,
          LODWORD(s[i]));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
          176,
          "check_asic_num_base",
          19,
          719,
          60,
          v8);
      }
    }
  }
  return 0;
}

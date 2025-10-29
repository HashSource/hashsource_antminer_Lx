int __fastcall check_if_bringup_temp_valid(int a1)
{
  int (**v1)(); // r0
  char v4[24]; // [sp+1Ch] [bp-1018h] BYREF
  int v5; // [sp+101Ch] [bp-18h] BYREF
  _DWORD *all_created_runtime; // [sp+1020h] [bp-14h]
  int i; // [sp+1024h] [bp-10h]
  int j; // [sp+1028h] [bp-Ch]
  int v9; // [sp+102Ch] [bp-8h]

  v9 = 50;
  all_created_runtime = get_all_created_runtime(&v5);
  for ( i = 0; i < v5; ++i )
  {
    if ( *(_DWORD *)(all_created_runtime[i] + 408) > *(_DWORD *)(a1 + 100) || v9 <= *(_DWORD *)(a1 + 100) )
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "bringup temperature unacceptable! refuse to start mining");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
        176,
        "check_if_bringup_temp_valid",
        27,
        1424,
        100,
        v4);
      for ( j = 0; j < i; ++j )
      {
        (*(void (__fastcall **)(_DWORD))(all_created_runtime[j] + 20))(all_created_runtime[j]);
        v1 = dev_ctrl();
        ((void (__fastcall *)(_DWORD))v1[7])(*(_DWORD *)(all_created_runtime[j] + 248));
      }
      power_off();
      while ( 1 )
        sleep(1u);
    }
  }
  return 0;
}

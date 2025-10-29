int __fastcall thread_monitor_temperature_in_startup_stage(int a1)
{
  int v1; // r3
  int v2; // r3
  char v5[36]; // [sp+18h] [bp-1024h] BYREF
  int v6; // [sp+1018h] [bp-24h] BYREF
  int v7; // [sp+101Ch] [bp-20h] BYREF
  int v8; // [sp+1020h] [bp-1Ch] BYREF
  int v9; // [sp+1024h] [bp-18h]
  int v10; // [sp+1028h] [bp-14h]
  int v11; // [sp+102Ch] [bp-10h]
  void *all_created_runtime; // [sp+1030h] [bp-Ch]
  int v13; // [sp+1034h] [bp-8h]

  v8 = 0;
  all_created_runtime = get_all_created_runtime(&v8);
  v13 = a1;
  v9 = 0;
  v7 = -64;
  v6 = 255;
  v11 = 0;
  v10 = 0;
  while ( 1 )
  {
    v9 = check_temperature_base(v13, &v7, &v6);
    if ( v9 )
    {
      ++v11;
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "read temperature error");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
        176,
        "thread_monitor_temperature_in_startup_stage",
        43,
        1456,
        100,
        v5);
    }
    else
    {
      v11 = 0;
    }
    v1 = v7;
    if ( v6 >= v7 )
      v1 = v6;
    if ( *(_DWORD *)(*(_DWORD *)all_created_runtime + 400) >= v1 )
    {
      v10 = 0;
    }
    else
    {
      ++v10;
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "read temperature exceed limit!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
        176,
        "thread_monitor_temperature_in_startup_stage",
        43,
        1465,
        100,
        v5);
    }
    if ( v11 > 1 || v10 > 1 )
      fan_pwm_set_max();
    if ( !dword_1523F4 )
    {
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "warming up, min temp %d max temp %d", v7, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
        176,
        "thread_monitor_temperature_in_startup_stage",
        43,
        1475,
        40,
        v5);
    }
    dword_1523F4 = (dword_1523F4 + 1) % 10;
    if ( *(_BYTE *)(v13 + 128) )
      break;
    sleep(1u);
  }
  v2 = v13;
  *(_BYTE *)(v13 + 128) = 0;
  return v2;
}

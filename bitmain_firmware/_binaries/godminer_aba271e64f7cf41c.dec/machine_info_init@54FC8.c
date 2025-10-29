int machine_info_init()
{
  char v2[8]; // [sp+14h] [bp-1008h] BYREF
  int status; // [sp+1014h] [bp-8h]

  status = 0;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "platform_topol_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/machine_runtime_base.c",
    176,
    "machine_info_init",
    17,
    1083,
    20,
    v2);
  status = platform_topol_init();
  if ( status )
    exit(status);
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "check_machine_info");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/machine_runtime_base.c",
    176,
    "machine_info_init",
    17,
    1087,
    20,
    v2);
  status = sub_54F74();
  if ( status )
    return status;
  else
    return 0;
}

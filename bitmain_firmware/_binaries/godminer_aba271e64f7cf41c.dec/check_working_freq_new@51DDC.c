void __noreturn check_working_freq_new()
{
  char v0[8]; // [sp+1Ch] [bp-1008h] BYREF
  char v1; // [sp+101Fh] [bp-5h] BYREF

  v1 = 1;
  while ( 1 )
  {
    update_and_automatic_set_freq(&v1);
    if ( v1 != 1 )
    {
      V_LOCK();
      logfmt_raw(v0, 0x1000u, 0, "%s, read temp failed", "check_working_freq_new");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
        176,
        "check_working_freq_new",
        22,
        466,
        100,
        v0);
    }
    sleep(1u);
  }
}

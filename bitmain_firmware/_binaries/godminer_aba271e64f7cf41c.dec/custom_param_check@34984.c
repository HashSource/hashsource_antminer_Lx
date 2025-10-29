int custom_param_check()
{
  char v1[4]; // [sp+10h] [bp-1004h] BYREF

  if ( opt_algo == 12 || opt_algo == 8 )
  {
    if ( fan_pwm_fixed )
    {
      fan_pwm_fixed = 0;
      V_LOCK();
      logfmt_raw(
        v1,
        0x1000u,
        0,
        "fan_pwm_ctrl is not allowed. upgrade firmware without selecting \"Keep the Same Settings\" may resolve this warning");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/pool.c",
        144,
        "custom_param_check",
        18,
        678,
        40,
        v1);
    }
  }
  return 0;
}

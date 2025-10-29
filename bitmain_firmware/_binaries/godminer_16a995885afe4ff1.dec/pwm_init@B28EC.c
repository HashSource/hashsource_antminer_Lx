int __fastcall pwm_init(unsigned int a1, int a2)
{
  int result; // r0
  char v4[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited )
  {
    if ( a1 > 1 )
    {
      strcpy(v4, "bad param\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/device/hal/platform/7007/7007_pwm.c",
        179,
        "pwm_init",
        8,
        30,
        100,
        v5);
      return -3;
    }
    else
    {
      result = a1 + 1;
      dword_16C124[2 * a1] = a2;
      LOBYTE(dword_16C124[2 * a1 + 1]) = 1;
    }
  }
  else
  {
    strcpy(v4, "please init platform first!!\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/platform/7007/7007_pwm.c",
      179,
      "pwm_init",
      8,
      25,
      100,
      v5);
    return -2;
  }
  return result;
}

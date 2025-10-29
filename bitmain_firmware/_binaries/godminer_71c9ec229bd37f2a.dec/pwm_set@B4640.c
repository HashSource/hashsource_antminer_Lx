int __fastcall pwm_set(int a1, unsigned int a2)
{
  int v2; // r4
  unsigned int v4; // r5
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v6[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    strcpy(s, "bad param\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_pwm.c",
      164,
      "pwm_set",
      7,
      62,
      100,
      v6);
    return -3;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 == 1 )
    {
      if ( a2 >= 0x64 )
        a2 = 100;
      v4 = (unsigned __int16)(dword_16E150[0] * (100 - a2) / 0x64) | ((dword_16E150[0] * a2 / 0x64) << 16);
      fpga_write(132, v4);
      fpga_write(160, v4);
      return v2;
    }
    else
    {
      snprintf(s, 0x800u, "pwm type %d not supported\n", a1 - 1);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_pwm.c",
        164,
        "pwm_set",
        7,
        81,
        100,
        v6);
      return 0;
    }
  }
}

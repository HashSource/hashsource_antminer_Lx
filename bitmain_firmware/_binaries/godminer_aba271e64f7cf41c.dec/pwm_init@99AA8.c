int __fastcall pwm_init(unsigned int a1, int a2)
{
  char v4[2048]; // [sp+18h] [bp-1804h] BYREF
  char v5[4]; // [sp+818h] [bp-1004h] BYREF

  if ( platform_inited )
  {
    if ( a1 <= 1 )
    {
      *((_DWORD *)&unk_15F994 + 3 * a1) = a2;
      *((_BYTE *)&unk_15F994 + 12 * a1 + 8) = 1;
      return a1 + 1;
    }
    else
    {
      strcpy(v4, "bad param\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_pwm.c",
        185,
        "pwm_init",
        8,
        28,
        100,
        v5);
      return -3;
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
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_pwm.c",
      185,
      "pwm_init",
      8,
      23,
      100,
      v5);
    return -1;
  }
}

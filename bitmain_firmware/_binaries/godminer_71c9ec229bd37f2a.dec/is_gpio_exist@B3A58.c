int __fastcall is_gpio_exist(int a1)
{
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v4[2048]; // [sp+50h] [bp-1800h] BYREF
  char v5[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16E118) )
  {
    strcpy(v4, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_gpio.c",
      165,
      "is_gpio_exist",
      13,
      443,
      100,
      v5);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(s, 0) )
    {
      pthread_mutex_unlock(&stru_16E118);
      return 0;
    }
    else
    {
      snprintf(v4, 0x800u, "port %d already exported\n", a1);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_gpio.c",
        165,
        "is_gpio_exist",
        13,
        449,
        20,
        v5);
      pthread_mutex_unlock(&stru_16E118);
      return 1;
    }
  }
}

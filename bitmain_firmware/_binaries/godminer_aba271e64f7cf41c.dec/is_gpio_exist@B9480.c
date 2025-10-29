int __fastcall is_gpio_exist(int a1)
{
  char v4[2048]; // [sp+18h] [bp-1844h] BYREF
  char v5[4]; // [sp+818h] [bp-1044h] BYREF
  char s[64]; // [sp+1818h] [bp-44h] BYREF

  if ( pthread_mutex_lock(&stru_160528) )
  {
    strcpy(v4, "failed to api lock");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      186,
      "is_gpio_exist",
      13,
      411,
      100,
      v5);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(s, 0) )
    {
      pthread_mutex_unlock(&stru_160528);
      return 0;
    }
    else
    {
      snprintf(v4, 0x800u, "port %d already exported", a1);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        186,
        "is_gpio_exist",
        13,
        418,
        20,
        v5);
      pthread_mutex_unlock(&stru_160528);
      return 1;
    }
  }
}

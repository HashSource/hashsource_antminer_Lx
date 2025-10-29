int __fastcall gpio_write(int a1, char a2)
{
  char v6[2048]; // [sp+1Ch] [bp-1848h] BYREF
  char v7[8]; // [sp+81Ch] [bp-1048h] BYREF
  char s[64]; // [sp+181Ch] [bp-48h] BYREF
  int fd; // [sp+185Ch] [bp-8h]

  if ( pthread_mutex_lock(&stru_160528) )
  {
    strcpy(v6, "failed to api lock");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      186,
      "gpio_write",
      10,
      383,
      100,
      v7);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    fd = open(s, 1);
    if ( fd >= 0 )
    {
      if ( write(fd, &a01[a2 != 0], 1u) >= 0 )
      {
        close(fd);
        pthread_mutex_unlock(&stru_160528);
        return 0;
      }
      else
      {
        snprintf(v6, 0x800u, "Failed to write gpio[%d] value!", a1);
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          186,
          "gpio_write",
          10,
          396,
          100,
          v7);
        close(fd);
        pthread_mutex_unlock(&stru_160528);
        return -3;
      }
    }
    else
    {
      snprintf(v6, 0x800u, "Failed to open gpio[%d] value for writing!", a1);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        186,
        "gpio_write",
        10,
        390,
        100,
        v7);
      pthread_mutex_unlock(&stru_160528);
      return -2;
    }
  }
}

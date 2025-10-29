int __fastcall gpio_read(int a1, _BYTE *a2)
{
  char v6[2048]; // [sp+18h] [bp-184Ch] BYREF
  char v7[12]; // [sp+818h] [bp-104Ch] BYREF
  int buf; // [sp+1818h] [bp-4Ch] BYREF
  char s[64]; // [sp+181Ch] [bp-48h] BYREF
  int fd; // [sp+185Ch] [bp-8h]

  buf = 0;
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
      "gpio_read",
      9,
      343,
      100,
      v7);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    fd = open(s, 0);
    if ( fd >= 0 )
    {
      if ( read(fd, &buf, 4u) >= 0 )
      {
        close(fd);
        pthread_mutex_unlock(&stru_160528);
        *a2 = atoi((const char *)&buf);
        return 0;
      }
      else
      {
        strcpy(v6, "Failed to read value!");
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          186,
          "gpio_read",
          9,
          356,
          100,
          v7);
        close(fd);
        pthread_mutex_unlock(&stru_160528);
        return -3;
      }
    }
    else
    {
      snprintf(v6, 0x800u, "Failed to open gpio %d value for reading!", a1);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        186,
        "gpio_read",
        9,
        350,
        100,
        v7);
      pthread_mutex_unlock(&stru_160528);
      return -2;
    }
  }
}

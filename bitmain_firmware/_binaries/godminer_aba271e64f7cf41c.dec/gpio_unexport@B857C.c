int __fastcall gpio_unexport(int a1)
{
  char v4[2048]; // [sp+18h] [bp-184Ch] BYREF
  char v5[12]; // [sp+818h] [bp-104Ch] BYREF
  char s[64]; // [sp+1818h] [bp-4Ch] BYREF
  int fd; // [sp+1858h] [bp-Ch]
  size_t n; // [sp+185Ch] [bp-8h]

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
      "gpio_unexport",
      13,
      256,
      100,
      v5);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    fd = access(s, 0);
    if ( fd )
    {
      snprintf(v4, 0x800u, "port %d already unexported, ret = %d", a1, fd);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        186,
        "gpio_unexport",
        13,
        263,
        80,
        v5);
      pthread_mutex_unlock(&stru_160528);
      return 0;
    }
    else
    {
      fd = open("/sys/class/gpio/unexport", 1);
      if ( fd >= 0 )
      {
        n = snprintf(s, 0x40u, "%d", a1);
        if ( write(fd, s, n) >= 0 )
        {
          snprintf(v4, 0x800u, "unexport gpio %d success", a1);
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
            186,
            "gpio_unexport",
            13,
            283,
            20,
            v5);
          close(fd);
          pthread_mutex_unlock(&stru_160528);
          return 0;
        }
        else
        {
          snprintf(v4, 0x800u, "Failed to unexport gpio %d!", a1);
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
            186,
            "gpio_unexport",
            13,
            278,
            100,
            v5);
          close(fd);
          pthread_mutex_unlock(&stru_160528);
          return -2;
        }
      }
      else
      {
        strcpy(v4, "Failed to open unexport for writing!");
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          186,
          "gpio_unexport",
          13,
          271,
          100,
          v5);
        pthread_mutex_unlock(&stru_160528);
        return -2;
      }
    }
  }
}

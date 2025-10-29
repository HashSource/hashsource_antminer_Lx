int __fastcall gpio_write(int a1, int a2)
{
  int v4; // r0
  int v5; // r5
  char *v6; // r1
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  char v9[2048]; // [sp+50h] [bp-1804h] BYREF
  char v10[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_16E118) )
  {
    strcpy(v9, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_gpio.c",
      165,
      "gpio_write",
      10,
      415,
      100,
      v10);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v4 = open64(s);
    v5 = v4;
    if ( v4 < 0 )
    {
      strcpy(v9, "Failed to open gpio value for writing!\n");
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_gpio.c",
        165,
        "gpio_write",
        10,
        423,
        100,
        v10);
      pthread_mutex_unlock(&stru_16E118);
      return -2;
    }
    else
    {
      if ( a2 )
        v6 = "1";
      else
        v6 = "01";
      if ( write(v4, v6, 1u) < 0 )
      {
        strcpy(v9, "Failed to write value!\n");
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_gpio.c",
          165,
          "gpio_write",
          10,
          429,
          100,
          v10);
        close(v5);
        pthread_mutex_unlock(&stru_16E118);
        return -3;
      }
      else
      {
        close(v5);
        pthread_mutex_unlock(&stru_16E118);
        return 0;
      }
    }
  }
}

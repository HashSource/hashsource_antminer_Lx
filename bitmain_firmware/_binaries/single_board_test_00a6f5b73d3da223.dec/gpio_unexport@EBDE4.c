int __fastcall gpio_unexport(int a1)
{
  char v4[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v5[8]; // [sp+818h] [bp+808h] BYREF
  char v6[56]; // [sp+1818h] [bp+1808h] BYREF
  size_t v7; // [sp+1858h] [bp+1848h]
  int v8; // [sp+185Ch] [bp+184Ch]

  if ( pthread_mutex_lock(&stru_47B570) )
  {
    strcpy(v4, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
      94,
      "gpio_unexport",
      13,
      273,
      100,
      v5);
    return -1;
  }
  else
  {
    snprintf(v6, 0x40u, "/sys/class/gpio/gpio%d", a1);
    v8 = access(v6, 0);
    if ( v8 )
    {
      snprintf(v4, 0x800u, "port %d already unexported, ret = %d\n", a1, v8);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        94,
        "gpio_unexport",
        13,
        281,
        80,
        v5);
      pthread_mutex_unlock(&stru_47B570);
      return 0;
    }
    else
    {
      v8 = open("/sys/class/gpio/unexport", 1);
      if ( v8 >= 0 )
      {
        v7 = snprintf(v6, 0x40u, "%d", a1);
        if ( write(v8, v6, v7) >= 0 )
        {
          snprintf(v4, 0x800u, "unexport gpio %d success\n", a1);
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
            94,
            "gpio_unexport",
            13,
            304,
            20,
            v5);
          close(v8);
          pthread_mutex_unlock(&stru_47B570);
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
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
            94,
            "gpio_unexport",
            13,
            298,
            100,
            v5);
          close(v8);
          pthread_mutex_unlock(&stru_47B570);
          return -2;
        }
      }
      else
      {
        strcpy(v4, "Failed to open unexport for writing!\n");
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          94,
          "gpio_unexport",
          13,
          290,
          100,
          v5);
        pthread_mutex_unlock(&stru_47B570);
        return -2;
      }
    }
  }
}

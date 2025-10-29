int __fastcall gpio_direction(int a1, int a2)
{
  int v3; // r2
  size_t v4; // r3
  int v5; // r2
  int v6; // r2
  char v10[2048]; // [sp+1Ch] [bp+Ch] BYREF
  int v11; // [sp+81Ch] [bp+80Ch] BYREF
  char v12[52]; // [sp+181Ch] [bp+180Ch] BYREF
  int v13; // [sp+185Ch] [bp+184Ch]

  if ( pthread_mutex_lock(&stru_47B570) )
  {
    strcpy(v10, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(&v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
      94,
      "gpio_direction",
      14,
      327,
      100,
      &v11);
    return -1;
  }
  else
  {
    snprintf(v12, 0x40u, "/sys/class/gpio/gpio%d/direction", a1);
    v13 = open(v12, 1);
    if ( v13 >= 0 )
    {
      if ( a2 )
        v3 = 3;
      else
        v3 = 0;
      if ( a2 )
        v4 = 3;
      else
        v4 = 2;
      if ( write(v13, &aIn[v3], v4) >= 0 )
      {
        if ( a2 )
          v6 = 3;
        else
          v6 = 0;
        snprintf(v10, 0x800u, "set gpio %d direction %s success!\n", a1, &aIn[v6]);
        V_LOCK();
        logfmt_raw(&v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          94,
          "gpio_direction",
          14,
          350,
          20,
          &v11);
        close(v13);
        pthread_mutex_unlock(&stru_47B570);
        return 0;
      }
      else
      {
        if ( a2 )
          v5 = 3;
        else
          v5 = 0;
        snprintf(v10, 0x800u, "Failed to set gpio %d direction %s !\n", a1, &aIn[v5]);
        V_LOCK();
        logfmt_raw(&v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          94,
          "gpio_direction",
          14,
          343,
          100,
          &v11);
        close(v13);
        pthread_mutex_unlock(&stru_47B570);
        return -3;
      }
    }
    else
    {
      snprintf(v10, 0x800u, "Failed to open gpio %d direction for writing!\n", a1);
      V_LOCK();
      logfmt_raw(&v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        94,
        "gpio_direction",
        14,
        334,
        100,
        &v11);
      pthread_mutex_unlock(&stru_47B570);
      return -2;
    }
  }
}

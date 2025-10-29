int __fastcall gpio_write(int a1, char a2)
{
  char v6[2048]; // [sp+1Ch] [bp+Ch] BYREF
  int v7; // [sp+81Ch] [bp+80Ch] BYREF
  char v8[52]; // [sp+181Ch] [bp+180Ch] BYREF
  int v9; // [sp+185Ch] [bp+184Ch]

  if ( pthread_mutex_lock(&stru_47B570) )
  {
    strcpy(v6, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(&v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
      94,
      "gpio_write",
      10,
      415,
      100,
      &v7);
    return -1;
  }
  else
  {
    snprintf(v8, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v9 = open(v8, 1);
    if ( v9 >= 0 )
    {
      if ( write(v9, &a01[a2 != 0], 1u) >= 0 )
      {
        close(v9);
        pthread_mutex_unlock(&stru_47B570);
        return 0;
      }
      else
      {
        strcpy(v6, "Failed to write value!\n");
        V_LOCK();
        logfmt_raw(&v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          94,
          "gpio_write",
          10,
          429,
          100,
          &v7);
        close(v9);
        pthread_mutex_unlock(&stru_47B570);
        return -3;
      }
    }
    else
    {
      strcpy(v6, "Failed to open gpio value for writing!\n");
      V_LOCK();
      logfmt_raw(&v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        94,
        "gpio_write",
        10,
        423,
        100,
        &v7);
      pthread_mutex_unlock(&stru_47B570);
      return -2;
    }
  }
}

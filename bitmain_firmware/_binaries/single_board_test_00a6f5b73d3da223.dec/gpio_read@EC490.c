int __fastcall gpio_read(int a1, _BYTE *a2)
{
  char v6[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v7[8]; // [sp+818h] [bp+808h] BYREF
  int v8; // [sp+1818h] [bp+1808h] BYREF
  char v9[52]; // [sp+181Ch] [bp+180Ch] BYREF
  int v10; // [sp+185Ch] [bp+184Ch]

  v8 = 0;
  if ( pthread_mutex_lock(&stru_47B570) )
  {
    strcpy(v6, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
      94,
      "gpio_read",
      9,
      372,
      100,
      v7);
    return -1;
  }
  else
  {
    snprintf(v9, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v10 = open(v9, 0);
    if ( v10 >= 0 )
    {
      if ( read(v10, &v8, 4u) >= 0 )
      {
        close(v10);
        pthread_mutex_unlock(&stru_47B570);
        *a2 = atoi((const char *)&v8);
        return 0;
      }
      else
      {
        strcpy(v6, "Failed to read value!\n");
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          94,
          "gpio_read",
          9,
          387,
          100,
          v7);
        close(v10);
        pthread_mutex_unlock(&stru_47B570);
        return -3;
      }
    }
    else
    {
      snprintf(v6, 0x800u, "Failed to open gpio %d value for reading!\n", a1);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        94,
        "gpio_read",
        9,
        380,
        100,
        v7);
      pthread_mutex_unlock(&stru_47B570);
      return -2;
    }
  }
}

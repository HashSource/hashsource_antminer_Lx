int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v5; // [sp+14h] [bp+4h] BYREF
  char v6[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v7[8]; // [sp+818h] [bp+808h] BYREF
  _DWORD v8[2]; // [sp+1818h] [bp+1808h] BYREF

  v5 = a1;
  if ( a2 )
  {
    if ( pthread_mutex_lock(&stru_47B588) )
    {
      strcpy(v6, "fail to lock gpio ctrl mutex\n");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        94,
        "gpio_reg_callback",
        17,
        152,
        100,
        v7);
      return -1;
    }
    else
    {
      if ( exists_c_map((int *)dword_47B5A0, (int)&v5) )
      {
        snprintf(v6, 0x800u, "port %d already exist in callback map \n", v5);
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          94,
          "gpio_reg_callback",
          17,
          165,
          20,
          v7);
      }
      else
      {
        snprintf(v6, 0x800u, "add %d to callback map\n", v5);
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          94,
          "gpio_reg_callback",
          17,
          158,
          20,
          v7);
        v8[0] = a2;
        v8[1] = -1;
        insert_c_map((int *)dword_47B5A0, &v5, 4u, v8, 8u);
      }
      pthread_mutex_unlock(&stru_47B588);
      return 0;
    }
  }
  else
  {
    strcpy(v6, "bad param\n");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
      94,
      "gpio_reg_callback",
      17,
      147,
      100,
      v7);
    return -1;
  }
}

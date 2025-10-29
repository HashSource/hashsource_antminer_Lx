int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int v4; // [sp+14h] [bp+4h] BYREF
  char s[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v6[4096]; // [sp+818h] [bp+808h] BYREF

  v4 = a1;
  if ( a2 )
  {
    if ( pthread_mutex_lock(&stru_47B588) )
    {
      strcpy(s, "fail to lock gpio ctrl mutex\n");
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        94,
        "gpio_unreg_callback",
        19,
        189,
        100,
        v6);
      return -1;
    }
    else
    {
      if ( exists_c_map((int *)dword_47B5A0, (int)&v4) )
      {
        snprintf(s, 0x800u, "remove %d from callback list\n", v4);
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          94,
          "gpio_unreg_callback",
          19,
          195,
          20,
          v6);
        remove_c_map((int *)dword_47B5A0, (int)&v4);
      }
      else
      {
        strcpy(s, "callback function not registered before\n");
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          94,
          "gpio_unreg_callback",
          19,
          200,
          80,
          v6);
      }
      pthread_mutex_unlock(&stru_47B588);
      return 0;
    }
  }
  else
  {
    strcpy(s, "bad param\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
      94,
      "gpio_unreg_callback",
      19,
      183,
      100,
      v6);
    return -1;
  }
}

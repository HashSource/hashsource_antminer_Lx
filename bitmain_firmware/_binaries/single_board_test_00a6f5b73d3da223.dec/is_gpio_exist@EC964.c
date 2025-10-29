int __fastcall is_gpio_exist(int a1)
{
  char s[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v5[4088]; // [sp+818h] [bp+808h] BYREF
  char v6[64]; // [sp+1818h] [bp+1808h] BYREF

  if ( pthread_mutex_lock(&stru_47B570) )
  {
    strcpy(s, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
      94,
      "is_gpio_exist",
      13,
      443,
      100,
      v5);
    return -1;
  }
  else
  {
    snprintf(v6, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(v6, 0) )
    {
      pthread_mutex_unlock(&stru_47B570);
      return 0;
    }
    else
    {
      snprintf(s, 0x800u, "port %d already exported\n", a1);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        94,
        "is_gpio_exist",
        13,
        449,
        20,
        v5);
      pthread_mutex_unlock(&stru_47B570);
      return 1;
    }
  }
}

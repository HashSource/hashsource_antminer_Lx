int gpio_init()
{
  char v1[2048]; // [sp+10h] [bp+0h] BYREF
  _BYTE v2[4100]; // [sp+810h] [bp+800h] BYREF

  if ( dword_47B564 )
  {
    strcpy(v1, "gpio re init\n");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
      94,
      "gpio_init",
      9,
      98,
      80,
      v2);
  }
  else
  {
    pthread_mutex_init(&stru_47B588, 0);
    dword_47B5A0 = (int)new_c_map(962861, 0, 0);
    pthread_mutex_init(&stru_47B570, 0);
    dword_47B568 = 1;
    pthread_create((pthread_t *)&dword_47B56C, 0, (void *(*)(void *))sub_EB14C, 0);
    dword_47B564 = 1;
  }
  return 0;
}

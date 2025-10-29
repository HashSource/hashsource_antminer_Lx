int gpio_init()
{
  _DWORD v1[512]; // [sp+10h] [bp-1804h] BYREF
  char v2[4]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_16051C )
  {
    strcpy((char *)v1, "gpio re init");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      186,
      "gpio_init",
      9,
      92,
      80,
      v2,
      v1[0],
      v1[1],
      v1[2],
      v1[3]);
  }
  else
  {
    pthread_mutex_init(&stru_160540, 0);
    dword_160558 = (int)new_c_map(750904, 0, 0);
    pthread_mutex_init(&stru_160528, 0);
    dword_160520 = 1;
    pthread_create((pthread_t *)&dword_160524, 0, (void *(*)(void *))sub_B7570, 0);
    dword_16051C = 1;
  }
  return 0;
}

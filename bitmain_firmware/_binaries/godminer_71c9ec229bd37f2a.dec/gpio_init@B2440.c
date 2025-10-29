int gpio_init()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16E0F8 )
  {
    strcpy(v1, "gpio re init\n");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_gpio.c",
      165,
      "gpio_init",
      9,
      98,
      80,
      v2);
  }
  else
  {
    pthread_mutex_init(&stru_16E0FC, 0);
    dword_16E114 = (int)new_c_map((int)sub_B2430, 0, 0);
    pthread_mutex_init(&stru_16E118, 0);
    dword_16E130 = 1;
    pthread_create((pthread_t *)&dword_16E134, 0, (void *(*)(void *))sub_B35F0, 0);
    dword_16E0F8 = 1;
  }
  return 0;
}

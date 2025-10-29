int gpio_init()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16C0CC )
  {
    strcpy(v1, "gpio re init\n");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/platform/7007/7007_gpio.c",
      180,
      "gpio_init",
      9,
      98,
      80,
      v2);
  }
  else
  {
    pthread_mutex_init(&stru_16C0D0, 0);
    dword_16C0E8 = (int)new_c_map((int)sub_B08F0, 0, 0);
    pthread_mutex_init(&stru_16C0EC, 0);
    dword_16C104 = 1;
    pthread_create((pthread_t *)&dword_16C108, 0, (void *(*)(void *))sub_B1AB4, 0);
    dword_16C0CC = 1;
  }
  return 0;
}

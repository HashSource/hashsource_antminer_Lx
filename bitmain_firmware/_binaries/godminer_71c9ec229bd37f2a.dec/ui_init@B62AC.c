int ui_init()
{
  int v0; // r5
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16E494 )
    return 0;
  if ( gpio_init() )
  {
    v0 = -1;
    strcpy(v2, "gpio init failed\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_ui.c",
      163,
      "ui_init",
      7,
      152,
      100,
      v3);
    return v0;
  }
  gpio_export(941);
  gpio_export(942);
  gpio_export(921);
  gpio_export(943);
  gpio_reg_callback(921, (int)sub_B5EAC);
  gpio_reg_callback(943, (int)sub_B5EAC);
  pthread_mutex_init(&stru_16E464, 0);
  off_16E480 = 0;
  dword_16E484 = 0;
  dword_16E488 = 0;
  dword_16E48C = 0;
  dword_16E490 = 0;
  dword_16E47C = (int)new_c_map((int)sub_B5C18, 0, 0);
  dword_16E460[0] = 1;
  pthread_create((pthread_t *)&dword_16E498, 0, (void *(*)(void *))sub_B5C28, 0);
  dword_16E494 = 1;
  return 0;
}

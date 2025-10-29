int ui_init()
{
  int v0; // r5
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16B368 )
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
  gpio_reg_callback(921, (int)sub_B382C);
  gpio_reg_callback(943, (int)sub_B382C);
  pthread_mutex_init(&stru_16B338, 0);
  off_16B354 = 0;
  dword_16B358 = 0;
  dword_16B35C = 0;
  dword_16B360 = 0;
  dword_16B364 = 0;
  dword_16B350 = (int)new_c_map((int)sub_B3598, 0, 0);
  dword_16B334[0] = 1;
  pthread_create((pthread_t *)&dword_16B36C, 0, (void *(*)(void *))sub_B35A8, 0);
  dword_16B368 = 1;
  return 0;
}

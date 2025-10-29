int ui_init()
{
  int v0; // r5
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16C468 )
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
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/platform/7007/7007_ui.c",
      178,
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
  gpio_reg_callback(921, (int)sub_B4370);
  gpio_reg_callback(943, (int)sub_B4370);
  pthread_mutex_init(&stru_16C438, 0);
  off_16C454 = 0;
  dword_16C458 = 0;
  dword_16C45C = 0;
  dword_16C460 = 0;
  dword_16C464 = 0;
  dword_16C450 = (int)new_c_map((int)sub_B40DC, 0, 0);
  dword_16C434[0] = 1;
  pthread_create((pthread_t *)&dword_16C46C, 0, (void *(*)(void *))sub_B40EC, 0);
  dword_16C468 = 1;
  return 0;
}

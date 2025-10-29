int ui_init()
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  char v8[2048]; // [sp+14h] [bp+4h] BYREF
  int v9; // [sp+814h] [bp+804h] BYREF
  int i; // [sp+1814h] [bp+1804h]

  i = 0;
  if ( dword_47B344 )
    return 0;
  if ( gpio_init() )
  {
    strcpy(v8, "gpio init failed\n");
    V_LOCK();
    logfmt_raw(&v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
      92,
      "ui_init",
      7,
      152,
      100,
      &v9);
    return -1;
  }
  else
  {
    v1 = sub_E4DF4(1u);
    gpio_export(v1);
    v2 = sub_E4DF4(2u);
    gpio_export(v2);
    v3 = sub_E4DF4(0x100u);
    gpio_export(v3);
    v4 = sub_E4DF4(0x101u);
    gpio_export(v4);
    v5 = sub_E4DF4(0x100u);
    gpio_reg_callback(v5, 937617);
    v6 = sub_E4DF4(0x101u);
    gpio_reg_callback(v6, 937617);
    pthread_mutex_init(&stru_47B328, 0);
    for ( i = 0; i <= 4; ++i )
      dword_47B350[i] = 0;
    dword_47B340 = (int)new_c_map(937429, 0, 0);
    dword_47B348 = 1;
    pthread_create((pthread_t *)&dword_47B34C, 0, (void *(*)(void *))sub_E4CC8, 0);
    dword_47B344 = 1;
    return 0;
  }
}

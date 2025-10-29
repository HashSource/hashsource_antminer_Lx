int platform_init()
{
  char v2[2048]; // [sp+14h] [bp+4h] BYREF
  int v3; // [sp+814h] [bp+804h] BYREF
  int v4; // [sp+1814h] [bp+1804h] BYREF

  if ( platform_inited )
    return 0;
  strcpy(v2, "platform_init\n");
  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
    96,
    "platform_init",
    13,
    63,
    60,
    &v3);
  if ( fpga_init() )
  {
    strcpy(v2, "fpga init failed\n");
    V_LOCK();
    logfmt_raw(&v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
      96,
      "platform_init",
      13,
      67,
      100,
      &v3);
    return -1;
  }
  else if ( gpio_init() )
  {
    strcpy(v2, "gpio init failed\n");
    V_LOCK();
    logfmt_raw(&v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
      96,
      "platform_init",
      13,
      73,
      100,
      &v3);
    return -2;
  }
  else
  {
    memset(&unk_47B3B0, 0, 0x124u);
    v4 = 0;
    fpga_read(0, &v4);
    v4 |= 0x20000000u;
    snprintf(v2, 0x800u, "HARDWARE_VERSION = 0x%x\n", v4);
    V_LOCK();
    logfmt_raw(&v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
      96,
      "platform_init",
      13,
      86,
      40,
      &v3);
    fpga_write(0, v4);
    platform_inited = 1;
    fan_init();
    uart_init();
    return 0;
  }
}

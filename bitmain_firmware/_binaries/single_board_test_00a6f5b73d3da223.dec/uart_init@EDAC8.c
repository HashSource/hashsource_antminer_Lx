int uart_init()
{
  char v2[2048]; // [sp+10h] [bp+0h] BYREF
  _BYTE v3[4096]; // [sp+810h] [bp+800h] BYREF

  if ( platform_inited )
    return 0;
  strcpy(v2, "please init platform first!!\n");
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
    94,
    "uart_init",
    9,
    342,
    100,
    v3);
  return -1;
}

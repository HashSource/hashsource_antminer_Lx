int uart_init()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited )
    return 0;
  strcpy(v1, "please init platform first!!\n");
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/device/hal/platform/7007/7007_uart.c",
    180,
    "uart_init",
    9,
    342,
    100,
    v2);
  return -1;
}

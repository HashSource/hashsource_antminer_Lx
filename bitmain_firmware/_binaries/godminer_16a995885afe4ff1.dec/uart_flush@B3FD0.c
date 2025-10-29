int __fastcall uart_flush(int a1)
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v4[4100]; // [sp+810h] [bp-1004h] BYREF

  snprintf(s, 0x800u, "flush uart %d\n", a1);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/device/hal/platform/7007/7007_uart.c",
    180,
    "uart_flush",
    10,
    737,
    20,
    v4);
  clear_uart_rx_fifo(a1);
  usleep(0x2710u);
  sub_B324C(a1);
  return 0;
}

int __fastcall uart_flush(int a1)
{
  char s[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v4[4096]; // [sp+818h] [bp+808h] BYREF

  snprintf(s, 0x800u, "flush uart %d\n", a1);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
    94,
    "uart_flush",
    10,
    737,
    20,
    v4);
  clear_uart_rx_fifo(a1);
  usleep(0x2710u);
  sub_EE814(a1);
  return 0;
}

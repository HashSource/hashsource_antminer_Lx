int __fastcall uart_set_config(int a1, int a2, int *a3)
{
  char v8[4]; // [sp+24h] [bp+14h] BYREF
  int v9; // [sp+824h] [bp+814h] BYREF
  int v10; // [sp+1824h] [bp+1814h]

  v10 = -5;
  if ( !a3 )
    return -3;
  pthread_mutex_lock(&stru_47B5A4[a1]);
  if ( a2 )
  {
    snprintf(v8, 0x800u, "unknown set config type = %d\n", a2);
    V_LOCK();
    logfmt_raw(&v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
      94,
      "uart_set_config",
      15,
      576,
      80,
      &v9);
  }
  else
  {
    fpga_write(0x3Cu, *a3);
  }
  pthread_mutex_unlock(&stru_47B5A4[a1]);
  return v10;
}

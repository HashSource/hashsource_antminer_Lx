int __fastcall uart_get_config(int a1, int a2, _DWORD *a3, int a4)
{
  char v9[8]; // [sp+20h] [bp+10h] BYREF
  _BYTE v10[8]; // [sp+820h] [bp+810h] BYREF
  int v11; // [sp+1820h] [bp+1810h] BYREF
  int v12; // [sp+1824h] [bp+1814h]

  v12 = -5;
  if ( !a3 || a4 )
    return -3;
  pthread_mutex_lock(&stru_47B5A4[a1]);
  if ( a2 )
  {
    snprintf(v9, 0x800u, "unknown set config type = %d\n", a2);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
      94,
      "uart_get_config",
      15,
      600,
      80,
      v10);
  }
  else
  {
    v11 = 0;
    v12 = fpga_read(0x3Cu, &v11);
    *a3 = v11;
    MEMORY[0] = 4;
    snprintf(v9, 0x800u, "uart_get_config return %d\n", *a3);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
      94,
      "uart_get_config",
      15,
      596,
      40,
      v10);
  }
  pthread_mutex_unlock(&stru_47B5A4[a1]);
  return v12;
}

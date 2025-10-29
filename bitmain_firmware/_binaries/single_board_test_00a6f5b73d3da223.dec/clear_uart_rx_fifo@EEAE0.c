int __fastcall clear_uart_rx_fifo(int a1)
{
  char v3[12]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v4[12]; // [sp+81Ch] [bp+80Ch] BYREF
  void *v5; // [sp+181Ch] [bp+180Ch]
  size_t v6; // [sp+1820h] [bp+1810h]
  int v7; // [sp+1824h] [bp+1814h]

  v7 = 0;
  v5 = 0;
  pthread_mutex_lock(&stru_47B724[a1]);
  v6 = sub_ED388(a1);
  if ( !v6 )
    return pthread_mutex_unlock(&stru_47B724[a1]);
  v5 = malloc(v6);
  if ( v5 )
  {
    v7 = sub_ED668(a1, (int)v5, v6);
    if ( v7 == v6 )
    {
      free(v5);
      usleep(0x2710u);
      return pthread_mutex_unlock(&stru_47B724[a1]);
    }
    else
    {
      snprintf(v3, 0x800u, "%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n", "clear_uart_rx_fifo", a1, v6, v7);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
        94,
        "clear_uart_rx_fifo",
        18,
        718,
        100,
        v4);
      free(v5);
      v5 = 0;
      usleep(0x2710u);
      return pthread_mutex_unlock(&stru_47B724[a1]);
    }
  }
  else
  {
    snprintf(v3, 0x800u, "%s: uart%d malloc buffer error\n", "clear_uart_rx_fifo", a1);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
      94,
      "clear_uart_rx_fifo",
      18,
      709,
      100,
      v4);
    v5 = 0;
    usleep(0x7A120u);
    return pthread_mutex_unlock(&stru_47B724[a1]);
  }
}

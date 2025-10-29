int __fastcall sub_EE814(int a1)
{
  int v2; // [sp+14h] [bp+4h]
  char v3[24]; // [sp+18h] [bp+8h] BYREF
  _BYTE v4[24]; // [sp+818h] [bp+808h] BYREF
  int v5; // [sp+1818h] [bp+1808h] BYREF
  unsigned int v6; // [sp+181Ch] [bp+180Ch] BYREF
  int v7; // [sp+1820h] [bp+1810h] BYREF
  unsigned int v8; // [sp+1824h] [bp+1814h] BYREF
  unsigned int v9; // [sp+1828h] [bp+1818h] BYREF
  unsigned int i; // [sp+182Ch] [bp+181Ch]

  v2 = a1;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  v6 = 0;
  v5 = 0;
  i = 0;
  pthread_mutex_lock(&stru_47B5A4[a1]);
  if ( sub_ECC78(v2, &v5, &v9, &v8, &v7) )
  {
    snprintf(v3, 0x800u, "get_send_address_info error, chain_id = %d\n", v2);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
      94,
      "clear_uart_tx_fifo",
      18,
      660,
      100,
      v4);
    return pthread_mutex_unlock(&stru_47B5A4[v2]);
  }
  else
  {
    for ( i = 0; i <= 0x14; ++i )
    {
      fpga_read(v9, &v6);
      v6 = (unsigned __int8)(v6 >> v5);
      if ( v6 == 255 )
        return pthread_mutex_unlock(&stru_47B5A4[v2]);
      printf("%s: waiting fpga uart%d clear send fifo space ...\n", "clear_uart_tx_fifo", v2);
      fpga_write(v8, v6 | 0x80000000);
      usleep(0xBB8u);
    }
    snprintf(v3, 0x800u, "%s: uart%d always dose not has enough send fifo space, break\n", "clear_uart_tx_fifo", v2);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
      94,
      "clear_uart_tx_fifo",
      18,
      681,
      100,
      v4);
    return pthread_mutex_unlock(&stru_47B5A4[v2]);
  }
}

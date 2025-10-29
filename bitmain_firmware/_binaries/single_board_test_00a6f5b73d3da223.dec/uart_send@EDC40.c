size_t __fastcall uart_send(int a1, const void *a2, size_t a3)
{
  char v8[8]; // [sp+20h] [bp+10h] BYREF
  _BYTE v9[8]; // [sp+820h] [bp+810h] BYREF
  int v10; // [sp+1820h] [bp+1810h] BYREF
  size_t v11; // [sp+1824h] [bp+1814h] BYREF
  unsigned int v12; // [sp+1828h] [bp+1818h] BYREF
  unsigned int v13; // [sp+182Ch] [bp+181Ch] BYREF
  unsigned int v14; // [sp+1830h] [bp+1820h] BYREF
  _BYTE v15[256]; // [sp+1834h] [bp+1824h] BYREF
  size_t v16; // [sp+1934h] [bp+1924h]
  signed int v17; // [sp+1938h] [bp+1928h]
  int v18; // [sp+193Ch] [bp+192Ch]
  int v19; // [sp+1940h] [bp+1930h]
  signed int i; // [sp+1944h] [bp+1934h]

  v18 = 0;
  v17 = 0;
  i = 0;
  memset(v15, 0, sizeof(v15));
  v16 = a3;
  v19 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  pthread_mutex_lock(&stru_47B5A4[a1]);
  if ( sub_ECC78(a1, &v10, &v14, &v13, &v12) )
  {
    snprintf(v8, 0x800u, "get_send_address_info error, chain_id = %d\n", a1);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
      94,
      "uart_send",
      9,
      408,
      100,
      v9);
    pthread_mutex_unlock(&stru_47B5A4[a1]);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      fpga_read(v14, &v11);
      v11 = (unsigned __int8)(v11 >> v10);
      if ( v11 >= a3 )
        break;
      usleep(0);
    }
    fpga_read(v13, &v11);
    v11 = (unsigned __int8)(v11 >> v10);
    memcpy(v15, a2, a3);
    v17 = v16 >> 2;
    for ( i = 0; i < v17; ++i )
    {
      v19 = ((unsigned __int8)v15[4 * i + 2] << 8)
          | ((unsigned __int8)v15[4 * i] << 24)
          | ((unsigned __int8)v15[4 * i + 1] << 16)
          | (unsigned __int8)v15[4 * i + 3];
      fpga_write(v12, v19);
    }
    v17 = v16 & 3;
    if ( (v16 & 3) != 0 )
    {
      switch ( v17 )
      {
        case 2:
          v19 = ((unsigned __int8)v15[4 * i + 1] << 16) | ((unsigned __int8)v15[4 * i] << 24);
          break;
        case 3:
          v19 = ((unsigned __int8)v15[4 * i + 2] << 8)
              | ((unsigned __int8)v15[4 * i] << 24)
              | ((unsigned __int8)v15[4 * i + 1] << 16);
          break;
        case 1:
          v19 = (unsigned __int8)v15[4 * i] << 24;
          break;
        default:
          printf("%s: the uart%d send left data is 4*N length, error!!!\n", "uart_send", a1);
          break;
      }
      fpga_write(v12, v19);
    }
    fpga_write(v13, v16 | 0x80000000);
    pthread_mutex_unlock(&stru_47B5A4[a1]);
    return v16;
  }
}

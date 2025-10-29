int __fastcall sub_ED668(int a1, int a2, unsigned int a3)
{
  char v8[28]; // [sp+24h] [bp+14h] BYREF
  _BYTE v9[28]; // [sp+824h] [bp+814h] BYREF
  int v10; // [sp+1824h] [bp+1814h] BYREF
  unsigned int v11; // [sp+1828h] [bp+1818h] BYREF
  unsigned int v12; // [sp+182Ch] [bp+181Ch] BYREF
  unsigned int v13; // [sp+1830h] [bp+1820h]
  unsigned int v14; // [sp+1834h] [bp+1824h]
  int v15; // [sp+1838h] [bp+1828h]
  unsigned int i; // [sp+183Ch] [bp+182Ch]

  v12 = 0;
  v11 = 0;
  v14 = 0;
  v13 = 0;
  i = 0;
  v10 = 0;
  v15 = 0;
  if ( sub_ED0C8(a1, &v12, &v11) )
  {
    snprintf(v8, 0x800u, "get_read_address_info error, chain_id = %d\n", a1);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
      94,
      "read_uart_data_in_fpga",
      22,
      285,
      100,
      v9);
    return 0;
  }
  else
  {
    v14 = a3 & 0x3FF | 0x80000000;
    fpga_write(v12, v14);
    v13 = a3 >> 2;
    for ( i = 0; i < v13; ++i )
    {
      fpga_read(v11, &v10);
      *(_BYTE *)(a2 + 4 * i) = HIBYTE(v10);
      *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(v10);
      *(_BYTE *)(a2 + 4 * i + 2) = BYTE1(v10);
      *(_BYTE *)(a2 + 4 * i + 3) = v10;
    }
    v15 = 4 * v13;
    v13 = a3 & 3;
    if ( (a3 & 3) != 0 )
    {
      fpga_read(v11, &v10);
      switch ( v13 )
      {
        case 2u:
          *(_BYTE *)(a2 + 4 * i) = HIBYTE(v10);
          *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(v10);
          v15 += 2;
          break;
        case 3u:
          *(_BYTE *)(a2 + 4 * i) = HIBYTE(v10);
          *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(v10);
          *(_BYTE *)(a2 + 4 * i + 2) = BYTE1(v10);
          v15 += 3;
          break;
        case 1u:
          *(_BYTE *)(a2 + 4 * i) = HIBYTE(v10);
          ++v15;
          break;
        default:
          snprintf(v8, 0x800u, "%s: the uart%d left data is 4*N length, error!!!\n", "read_uart_data_in_fpga", a1);
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, v8);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_uart.c",
            94,
            "read_uart_data_in_fpga",
            22,
            331,
            100,
            v9);
          break;
      }
    }
    return v15;
  }
}

int __fastcall read_rx_debug_reg2(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  int v9; // [sp+1Ch] [bp+Ch] BYREF
  unsigned __int16 i; // [sp+101Eh] [bp+100Eh]

  V_LOCK();
  logfmt_raw(&v9, 0x1000u, 0, "%s...", "read_rx_debug_reg2");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "read_rx_debug_reg2",
    18,
    9237,
    60,
    &v9);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x16, 0);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x16, 8);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x16, 0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x1A);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x16, 0);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x16, 8);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x16, 0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x1A);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x16, 0);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x16, 8);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -9);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x16, 0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x1A);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, 0);
  }
  return 0;
}

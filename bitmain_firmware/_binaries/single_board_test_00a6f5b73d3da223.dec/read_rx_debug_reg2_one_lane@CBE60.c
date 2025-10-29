int __fastcall read_rx_debug_reg2_one_lane(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _BYTE v9[4100]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "%s...", "read_rx_debug_reg2_one_lane");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "read_rx_debug_reg2_one_lane",
    27,
    9268,
    60,
    v9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x16, 0);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x16, 8);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x16, 0);
  serdes_apb_read(a1, a2, a3, (a4 << 12) | 0x1A);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x16, 0);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x16, 8);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x16, 0);
  serdes_apb_read(a1, a2, a3, (a4 << 12) | 0x1A);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x16, 0);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x16, 8);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x16, 0);
  serdes_apb_read(a1, a2, a3, (a4 << 12) | 0x1A);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 0);
  return 0;
}

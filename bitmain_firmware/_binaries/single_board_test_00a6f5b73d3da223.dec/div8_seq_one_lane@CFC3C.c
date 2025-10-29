int __fastcall div8_seq_one_lane(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _BYTE v9[4100]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(
    v9,
    0x1000u,
    0,
    "%s chip_id %02x core_id %02x channel_id %02x",
    "div8_seq_one_lane",
    a2,
    (unsigned __int8)a3,
    a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "div8_seq_one_lane",
    17,
    9959,
    60,
    v9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 0xFFFF);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8B, -16777216);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -65536);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8C, 65280);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 0xFFFFF);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8C, -268435456);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -1048576);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8D, 1044495);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 0xFFFFFF);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8D, 0);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -16777216);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8E, 16711935);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 4095);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8A, 267386880);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -4096);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8B, 4080);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0);
  serdes_apb_write(a1, a2, a3, 0xA001u, 0);
  return 0;
}

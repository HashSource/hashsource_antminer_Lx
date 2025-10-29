int __fastcall div2_seq_one_lane(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _BYTE v9[4100]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(
    v9,
    0x1000u,
    0,
    "%s chip_id %02x core_id %02x channel_id %02x",
    "div2_seq_one_lane",
    a2,
    (unsigned __int8)a3,
    a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "div2_seq_one_lane",
    17,
    9907,
    60,
    v9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 0xFFFF);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8B, -859045888);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -65536);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8C, 52428);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 0xFFFFF);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8C, -859832320);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -1048576);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8D, 838860);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 0xFFFFFF);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8D, -872415232);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -16777216);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8E, 13421772);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 4095);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8A, -858996736);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -4096);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x8B, 3276);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0);
  serdes_apb_write(a1, a2, a3, 0xA001u, 0);
  return 0;
}

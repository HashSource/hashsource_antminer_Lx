int __fastcall SOC_28G_static_axlk_txdata_en(int a1, unsigned __int8 a2, char a3)
{
  _BYTE v7[4100]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "%s...", "SOC_28G_static_axlk_txdata_en");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "SOC_28G_static_axlk_txdata_en",
    29,
    7754,
    60,
    v7);
  serdes_apb_write(a1, a2, a3, 0xF001u, 0x7FFFFFFF);
  serdes_apb_write(a1, a2, a3, 0xF088u, 0x80000000);
  serdes_apb_write(a1, a2, a3, 0xF001u, 0x7FFFFFFF);
  serdes_apb_write(a1, a2, a3, 0xF0A1u, 0x80000000);
  serdes_apb_write(a1, a2, a3, 0xF001u, 0x7FFFFFFF);
  serdes_apb_write(a1, a2, a3, 0xF0A1u, 0);
  serdes_apb_write(a1, a2, a3, 0xF001u, 0x7FFFFFFF);
  serdes_apb_write(a1, a2, a3, 0xF0A1u, 0x80000000);
  return 0;
}

int __fastcall do_32G_stop_seq_all_phy(int a1, unsigned __int8 a2, char a3)
{
  _BYTE v7[4100]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "%s...", "do_32G_stop_seq_all_phy");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "do_32G_stop_seq_all_phy",
    23,
    8574,
    60,
    v7);
  serdes_apb_write(a1, a2, a3, 0x8001u, -3);
  serdes_apb_write(a1, a2, a3, 0x8050u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -257);
  serdes_apb_write(a1, a2, a3, 0x804Cu, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0);
  return 0;
}

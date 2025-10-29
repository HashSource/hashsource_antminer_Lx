int __fastcall do_32G_retry_seq_all_phy(int a1, unsigned __int8 a2, char a3)
{
  _BYTE v7[4100]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "%s...", "do_32G_retry_seq_all_phy");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "do_32G_retry_seq_all_phy",
    24,
    8587,
    60,
    v7);
  serdes_apb_write(a1, a2, a3, 0x8001u, -131073);
  serdes_apb_write(a1, a2, a3, 0x801Eu, 0x20000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -536870913);
  serdes_apb_write(a1, a2, a3, 0x801Cu, 0x20000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -131073);
  serdes_apb_write(a1, a2, a3, 0x801Eu, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -536870913);
  serdes_apb_write(a1, a2, a3, 0x801Cu, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -134217729);
  serdes_apb_write(a1, a2, a3, 0x801Du, 0x8000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -134217729);
  serdes_apb_write(a1, a2, a3, 0x801Du, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -8388609);
  serdes_apb_write(a1, a2, a3, 0x8049u, 0x800000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -33554433);
  serdes_apb_write(a1, a2, a3, 0x804Du, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -33554433);
  serdes_apb_write(a1, a2, a3, 0x804Du, 0x2000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -33554433);
  serdes_apb_write(a1, a2, a3, 0x804Du, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -268435457);
  serdes_apb_write(a1, a2, a3, 0x8049u, 0x10000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x804Du, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x804Du, 0x4000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x804Du, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -257);
  serdes_apb_write(a1, a2, a3, 0x804Cu, 256);
  serdes_apb_write(a1, a2, a3, 0x8001u, -3);
  serdes_apb_write(a1, a2, a3, 0x8050u, 2);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0);
  return 0;
}

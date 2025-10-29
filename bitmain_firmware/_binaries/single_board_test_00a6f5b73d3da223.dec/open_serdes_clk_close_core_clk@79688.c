int __fastcall open_serdes_clk_close_core_clk(int a1)
{
  _BYTE v3[4096]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "open_serdes_clk_close_core_clk");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "open_serdes_clk_close_core_clk",
    30,
    246,
    60,
    v3);
  sub_78860(a1, 22, -2147483642);
  usleep(0x2710u);
  return 0;
}

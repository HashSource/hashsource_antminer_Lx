int __fastcall set_pll_div(int a1)
{
  _BYTE v3[4096]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "set_pll_div");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "set_pll_div",
    11,
    253,
    60,
    v3);
  sub_78860(a1, 24, 131080);
  usleep(0x2710u);
  sub_78860(a1, 24, 131081);
  usleep(0x2710u);
  return 0;
}

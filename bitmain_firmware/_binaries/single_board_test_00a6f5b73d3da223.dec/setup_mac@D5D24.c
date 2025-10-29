int __fastcall setup_mac(int a1)
{
  _BYTE v3[4096]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "setup_mac");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "setup_mac",
    9,
    11510,
    60,
    v3);
  sub_788A8(a1, 159, -1);
  usleep(0x2710u);
  return 0;
}

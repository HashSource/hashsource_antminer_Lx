int __fastcall setup_count_sync(int a1, char a2)
{
  _BYTE v5[4096]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "setup_count_sync");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "setup_count_sync",
    16,
    348,
    60,
    v5);
  sub_789C4(a1, a2, 202, 0);
  sub_789C4(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_789C4(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  get_count_sync(a1, a2);
  return 0;
}

int __fastcall set_data_preemptive(int a1, int a2)
{
  _BYTE v5[4096]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "set_data_preemptive");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "set_data_preemptive",
    19,
    11739,
    60,
    v5);
  sub_788A8(a1, 204, a2);
  usleep(0x2710u);
  return 0;
}

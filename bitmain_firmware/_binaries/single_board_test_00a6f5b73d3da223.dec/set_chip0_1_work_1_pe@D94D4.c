int __fastcall set_chip0_1_work_1_pe(int a1)
{
  _BYTE v3[4096]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "set_chip0_1_work_1_pe");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "set_chip0_1_work_1_pe",
    21,
    12065,
    60,
    v3);
  sub_78900(a1, 0, 21, 0);
  usleep(0x2710u);
  sub_78900(a1, 0, 21, 1);
  usleep(0x2710u);
  return 0;
}

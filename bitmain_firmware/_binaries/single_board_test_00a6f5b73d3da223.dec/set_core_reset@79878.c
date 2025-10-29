int __fastcall set_core_reset(int a1)
{
  _BYTE v3[4096]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "set_core_reset");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "set_core_reset",
    14,
    269,
    60,
    v3);
  sub_78860(a1, 32, 9);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78860(a1, 32, 15);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_788A8(a1, 240, 0x80000000);
  usleep(0x2710u);
  return 0;
}

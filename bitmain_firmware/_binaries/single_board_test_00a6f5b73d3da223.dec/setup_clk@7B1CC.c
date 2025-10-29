int __fastcall setup_clk(int a1)
{
  _BYTE v3[4096]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "setup_clk");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "setup_clk",
    9,
    556,
    60,
    v3);
  sub_78860(a1, 32, 1);
  sub_78860(a1, 16, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78860(a1, 18, 4727297);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78860(a1, 20, 2105857);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78860(a1, 16, 7);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78860(a1, 32, 15);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78860(a1, 22, -2147483633);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78860(a1, 49, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  set_core_reset(a1);
  setup_ref_clk_termination(a1);
  return 0;
}

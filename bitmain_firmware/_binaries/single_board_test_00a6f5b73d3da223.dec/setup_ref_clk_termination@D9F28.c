int __fastcall setup_ref_clk_termination(int a1)
{
  _BYTE v3[4096]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "setup_ref_clk_termination");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "setup_ref_clk_termination",
    25,
    12406,
    60,
    v3);
  sub_788A8(a1, 81, 256);
  usleep(0x2710u);
  sub_789C4(a1, 1, 81, 138);
  usleep(0x2710u);
  sub_789C4(a1, 5, 81, 138);
  usleep(0x2710u);
  sub_789C4(a1, 9, 81, 138);
  usleep(0x2710u);
  sub_789C4(a1, 13, 81, 138);
  usleep(0x2710u);
  sub_789C4(a1, 2, 81, 6);
  usleep(0x2710u);
  sub_789C4(a1, 6, 81, 6);
  usleep(0x2710u);
  sub_789C4(a1, 10, 81, 6);
  usleep(0x2710u);
  sub_789C4(a1, 14, 81, 6);
  usleep(0x2710u);
  sub_788A8(a1, 84, 9586980);
  usleep(0x2710u);
  sub_788A8(a1, 92, 9586980);
  usleep(0x2710u);
  return 0;
}

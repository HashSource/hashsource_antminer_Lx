int __fastcall enable_one_lane(int a1, unsigned __int8 a2)
{
  _BYTE v5[4096]; // [sp+18h] [bp+8h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s lane %d...", "enable_one_lane", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "enable_one_lane",
    15,
    529,
    60,
    v5);
  sub_78960(a1, 0, 255, 197, 0);
  sub_789C4(a1, 0, 199, 0x7FFFF);
  sub_789C4(a1, 1, 199, 2097103);
  sub_789C4(a1, 2, 199, 0x7FFFF);
  sub_789C4(a1, 5, 199, 0x7FFFF);
  sub_789C4(a1, 6, 199, 0x7FFFF);
  sub_789C4(a1, 7, 199, 2097103);
  sub_789C4(a1, 15, 199, 0x7FFFF);
  sub_789C4(a1, 8, 199, 2097103);
  sub_789C4(a1, 0, 159, 29360576);
  sub_789C4(a1, 1, 159, 25297282);
  sub_789C4(a1, 2, 159, 29360576);
  sub_789C4(a1, 5, 159, 29360576);
  sub_789C4(a1, 6, 159, 29360576);
  sub_789C4(a1, 7, 159, 25297282);
  sub_789C4(a1, 15, 159, 29360576);
  sub_789C4(a1, 8, 159, 25297282);
  return 0;
}

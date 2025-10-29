int __fastcall set_initial_interval_time(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "set_initial_interval_time");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_initial_interval_time",
    25,
    258,
    20,
    v5);
  sub_5DDB0(a1, 59, a2);
  usleep(0x2710u);
  return 0;
}

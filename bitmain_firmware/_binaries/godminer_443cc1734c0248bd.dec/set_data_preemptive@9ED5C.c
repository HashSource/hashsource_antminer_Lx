int __fastcall set_data_preemptive(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "set_data_preemptive");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_data_preemptive",
    19,
    11688,
    20,
    v5);
  sub_5BD10(a1, 204, a2);
  usleep(0x2710u);
  return 0;
}

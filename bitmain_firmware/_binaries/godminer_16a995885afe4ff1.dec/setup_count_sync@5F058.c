int __fastcall setup_count_sync(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "setup_count_sync");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "setup_count_sync",
    16,
    319,
    20,
    v5);
  sub_5C8F0(a1, a2, 202, 0);
  sub_5C8F0(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_5C8F0(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  get_count_sync(a1, a2);
  return 0;
}

int __fastcall set_safe_mode(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "set_safe_mode");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "set_safe_mode",
    13,
    11681,
    20,
    v5);
  sub_5C898(a1, 158, a2);
  usleep(0x2710u);
  return 0;
}

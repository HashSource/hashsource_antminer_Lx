int dump_target_diff()
{
  int v0; // s0
  int v1; // s1
  int v3; // [sp+4h] [bp-1010h]
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s, Targetdiff: %f", "dump_target_diff", v3, v0, v1);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bu"
           "ild/godminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
           178,
           "dump_target_diff",
           16,
           19,
           20,
           v4);
}

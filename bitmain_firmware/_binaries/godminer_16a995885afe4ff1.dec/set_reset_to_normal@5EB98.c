int __fastcall set_reset_to_normal(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "set_reset_to_normal");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "set_reset_to_normal",
    19,
    265,
    20,
    v5);
  sub_5C898(a1, 198, a2);
  usleep(0x2710u);
  return 0;
}

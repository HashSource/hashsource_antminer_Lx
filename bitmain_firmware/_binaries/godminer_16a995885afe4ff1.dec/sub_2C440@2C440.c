int sub_2C440()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "Unable to set thread to low priority");
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bu"
           "ild/godminer-origin_master/god-miner.c",
           147,
           "set_lowprio",
           11,
           139,
           20,
           v1);
}

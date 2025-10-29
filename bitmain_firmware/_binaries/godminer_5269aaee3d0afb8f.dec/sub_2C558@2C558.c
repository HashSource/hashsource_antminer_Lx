int sub_2C558()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "Unable to set thread to low priority");
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/god-miner.c",
           132,
           "set_lowprio",
           11,
           141,
           20,
           v1);
}

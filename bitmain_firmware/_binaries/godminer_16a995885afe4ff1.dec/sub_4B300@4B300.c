int sub_4B300()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "bitmain_set_voltage failed");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/miner_util/power_api.c",
    158,
    "set_voltage_without_feedback",
    28,
    121,
    100,
    v1);
  return -1;
}

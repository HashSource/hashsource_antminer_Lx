int __fastcall set_voltage(int a1, int a2)
{
  char v4[4112]; // [sp+10h] [bp-1010h] BYREF

  if ( !a2 )
    return -1;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s to %d.", "set_voltage", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/miner_util/power_api.c",
    158,
    "set_voltage",
    11,
    283,
    60,
    v4);
  return sub_4B488(a1);
}

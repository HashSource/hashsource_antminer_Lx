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
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "set_voltage",
    11,
    274,
    60,
    v4);
  return sub_4AD10(a1);
}

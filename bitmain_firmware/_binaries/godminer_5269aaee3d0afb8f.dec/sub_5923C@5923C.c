int __fastcall sub_5923C(int a1)
{
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "Update parameter failed, freq:%f", *(float *)(a1 + 760));
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/backend_dash/backend_dash.c",
           156,
           "parameter_update_dash",
           21,
           815,
           60,
           v3);
}

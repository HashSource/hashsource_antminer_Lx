int sub_AE2D0()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  strcpy(v1, "Error: set_BC_write_command timeout!\n");
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, v1);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bu"
           "ild/godminer-origin_master/backend/device/hal/platform/7007/7007_common.c",
           182,
           "set_BC_write_command",
           20,
           782,
           100,
           v2);
}

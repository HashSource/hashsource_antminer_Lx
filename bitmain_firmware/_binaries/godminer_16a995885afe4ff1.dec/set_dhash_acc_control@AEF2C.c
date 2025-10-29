int __fastcall set_dhash_acc_control(int a1)
{
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  fpga_write(256, a1);
  snprintf(s, 0x800u, "set DHASH_ACC_CONTROL is 0x%x\n", a1);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bu"
           "ild/godminer-origin_master/backend/device/hal/platform/7007/7007_common.c",
           182,
           "set_dhash_acc_control",
           21,
           343,
           40,
           v4);
}

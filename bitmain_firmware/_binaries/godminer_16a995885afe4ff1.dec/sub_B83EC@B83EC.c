int sub_B83EC()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  strcpy(v1, "set DA conversion N failed\n");
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/device/hal/power/bitmain_power_APW9.c",
    181,
    "_bitmain_set_DA_conversion_N",
    28,
    359,
    100,
    v2);
  return -2147482880;
}

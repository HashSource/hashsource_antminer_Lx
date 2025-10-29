int __fastcall sub_ACEF0(unsigned int a1)
{
  float v1; // s0
  double v2; // d8
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = (double)a1 * 3.3 / (float)(v1 * 1024.0);
  snprintf(s, 0x800u, "v_an2 = %f", v2);
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "decode_an_voltage_buf",
    21,
    407,
    20,
    v5);
  snprintf(s, 0x800u, "v_10 = %f", v2 * 7.5999999);
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/drv_pic/pic_1704.c",
           158,
           "decode_an_voltage_buf",
           21,
           410,
           20,
           v5);
}

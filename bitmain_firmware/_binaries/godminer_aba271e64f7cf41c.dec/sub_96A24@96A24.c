__int64 __fastcall sub_96A24(unsigned int a1)
{
  float v1; // s0
  char v3[20]; // [sp+18h] [bp-1814h] BYREF
  char v4[20]; // [sp+818h] [bp-1014h] BYREF
  double v5; // [sp+1818h] [bp-14h]
  double v6; // [sp+1820h] [bp-Ch]

  v6 = (double)a1 * 3.3 / (float)(v1 * 1024.0);
  snprintf(v3, 0x800u, "v_an2 = %f", v6);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/drv_pic/pic_1704.c",
    175,
    "decode_an_voltage_buf",
    21,
    410,
    20,
    v4);
  v5 = v6 * 7.5999999;
  snprintf(v3, 0x800u, "v_10 = %f", v6 * 7.5999999);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godm"
           "iner-origin_godminer-branch1/backend/device/hal/drv_pic/pic_1704.c",
           175,
           "decode_an_voltage_buf",
           21,
           413,
           20,
           v4);
}

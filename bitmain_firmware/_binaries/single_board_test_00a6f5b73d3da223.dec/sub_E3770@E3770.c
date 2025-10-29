__int64 __fastcall sub_E3770(unsigned int a1)
{
  float v1; // s0
  char v3[16]; // [sp+18h] [bp+8h] BYREF
  double v4[513]; // [sp+818h] [bp+808h] BYREF
  double v5; // [sp+1820h] [bp+1810h]

  v5 = (double)a1 * 3.3 / (float)(v1 * 1024.0);
  snprintf(v3, 0x800u, "v_an2 = %f", v5);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
    87,
    "decode_an_voltage_buf",
    21,
    407,
    20,
    v4);
  v4[512] = v5 * 7.5999999;
  snprintf(v3, 0x800u, "v_10 = %f", v5 * 7.5999999);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
           87,
           "decode_an_voltage_buf",
           21,
           410,
           20,
           v4);
}

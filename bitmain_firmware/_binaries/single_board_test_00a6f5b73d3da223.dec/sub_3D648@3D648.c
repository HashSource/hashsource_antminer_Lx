__int64 __fastcall sub_3D648(int a1)
{
  __int64 v1; // d0
  int v3; // [sp+4h] [bp-Ch]
  _BYTE v5[8]; // [sp+18h] [bp+8h] BYREF
  __int64 v6; // [sp+1018h] [bp+1008h]

  pic1704_get_an_voltage1(a1);
  v6 = v1;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "read_feedback_voltage chain = %d, voltage = %f\n", a1, v3, v1);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
           72,
           "read_feedback_voltage",
           21,
           49,
           20,
           v5);
}

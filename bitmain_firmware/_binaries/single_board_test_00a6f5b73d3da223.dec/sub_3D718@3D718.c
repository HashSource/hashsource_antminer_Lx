__int64 sub_3D718()
{
  double v0; // d0
  _BYTE v2[28]; // [sp+14h] [bp+4h] BYREF
  int v3; // [sp+1014h] [bp+1004h] BYREF
  double v4; // [sp+1018h] [bp+1008h]
  _DWORD *all_created_runtime; // [sp+1020h] [bp+1010h]
  int i; // [sp+1024h] [bp+1014h]
  double v7; // [sp+1028h] [bp+1018h]

  v7 = 0.0;
  all_created_runtime = get_all_created_runtime(&v3);
  for ( i = 0; i < v3; ++i )
  {
    sub_3D648(*(_DWORD *)(all_created_runtime[i] + 140));
    v4 = v0;
    if ( v0 > 0.1 && (v7 > v4 || v7 < 0.1) )
      v7 = v4;
  }
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "the minimal voltage = %.2f", v7);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
           72,
           "get_minimal_feedback_voltage",
           28,
           65,
           20,
           v2);
}

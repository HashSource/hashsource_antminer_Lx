int __fastcall sub_3DAAC(unsigned int a1, unsigned int a2)
{
  double v2; // d0
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v7; // [sp+4h] [bp-Ch]
  unsigned int v9; // [sp+14h] [bp+4h]
  int v10; // [sp+1Ch] [bp+Ch] BYREF
  unsigned int v11; // [sp+101Ch] [bp+100Ch]

  v9 = a1;
  v11 = a1;
  V_LOCK();
  logfmt_raw(&v10, 0x1000u, 0, "step n from %d to %d", v9, a2);
  V_UNLOCK();
  zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c", 72, "stepN", 5, 99, 60, &v10);
  while ( a2 != v9 )
  {
    bitmain_convert_N_to_V();
    bitmain_convert_N_to_V();
    if ( fabs(v2 - v2) <= 0.5 )
      break;
    if ( v9 >= a2 )
    {
      v5 = a2 - v9;
      if ( (int)(a2 - v9) < 0 )
        v5 = v9 - a2;
      v4 = v5 / -2;
    }
    else
    {
      v3 = a2 - v9;
      if ( (int)(a2 - v9) < 0 )
        v3 = v9 - a2;
      v4 = v3 / 2;
    }
    v11 += v4;
    V_LOCK();
    bitmain_convert_N_to_V();
    logfmt_raw(&v10, 0x1000u, 0, "set N to %d, voltage = %.2f", v11, v7, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
      72,
      "stepN",
      5,
      103,
      60,
      &v10);
    bitmain_set_voltage_by_n(v11);
    v9 = v11;
  }
  if ( v9 != a2 )
  {
    V_LOCK();
    bitmain_convert_N_to_V();
    logfmt_raw(&v10, 0x1000u, 0, "final set N to %d, voltage = %.2f", a2, v7, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
      72,
      "stepN",
      5,
      110,
      60,
      &v10);
    bitmain_set_voltage_by_n(a2);
  }
  return 0;
}

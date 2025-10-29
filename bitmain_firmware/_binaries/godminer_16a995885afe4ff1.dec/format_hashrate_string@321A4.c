int __fastcall format_hashrate_string(const char *a1, char *a2)
{
  double v2; // d0
  double v5; // d8
  int v6; // r3
  double v7; // d8
  double v9; // d0
  char v10[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = v2;
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "format hashrate string %f %s", v2, a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/util.c",
    142,
    "format_hashrate_string",
    22,
    63,
    20,
    v10);
  if ( v2 < 10000.0 )
    return sprintf(a2, "%.2f %s/s", v2, a1);
  if ( v2 >= 10000000.0 )
  {
    if ( v2 >= 1.0e10 )
    {
      if ( v2 >= 1.0e13 )
        v6 = 84;
      else
        v6 = 71;
      if ( v2 >= 1.0e13 )
        v9 = 1.0e-12;
      else
        v9 = 0.000000001;
      v7 = v5 * v9;
    }
    else
    {
      v6 = 77;
      v7 = v2 * 0.000001;
    }
  }
  else
  {
    v6 = 75;
    v7 = v2 * 0.001;
  }
  return sprintf(a2, "%.2f %c%s/s", v7, v6, a1);
}

int __fastcall format_hashrate_double(const char *a1, double *a2, char *a3)
{
  double v3; // d0
  int v8; // r2
  double v9; // d9
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "format hashrate double %f %s", v3, a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/util.c",
    142,
    "format_hashrate_double",
    22,
    98,
    20,
    v10);
  if ( v3 >= 10000.0 )
  {
    if ( v3 >= 10000000.0 )
    {
      if ( v3 >= 1.0e10 )
      {
        if ( v3 < 1.0e13 )
          v8 = 71;
        else
          v8 = 84;
        if ( v3 < 1.0e13 )
          v9 = 0.000000001;
        else
          v9 = 1.0e-12;
        *a2 = v3 * v9;
      }
      else
      {
        v8 = 77;
        *a2 = v3 * 0.000001;
      }
    }
    else
    {
      v8 = 75;
      *a2 = v3 * 0.001;
    }
    return sprintf(a3, "%c%s/s", v8, a1);
  }
  else
  {
    *a2 = v3;
    return sprintf(a3, "%s/s", a1);
  }
}

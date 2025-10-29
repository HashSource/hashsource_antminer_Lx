int __fastcall format_hashrate_double(const char *a1, double *a2, char *a3)
{
  double v3; // d0
  char *v5; // [sp+14h] [bp+4h]
  double *v6; // [sp+18h] [bp+8h]
  const char *v7; // [sp+1Ch] [bp+Ch]
  double v8; // [sp+20h] [bp+10h]
  _BYTE v9[16]; // [sp+28h] [bp+18h] BYREF
  double v10; // [sp+1028h] [bp+1018h]
  unsigned __int8 v11; // [sp+1037h] [bp+1027h]

  v8 = v3;
  v7 = a1;
  v6 = a2;
  v5 = a3;
  v11 = 0;
  v10 = 0.0;
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "format hashrate double %f %s", v3, v7);
  V_UNLOCK();
  zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c", 56, "format_hashrate_double", 22, 98, 20, v9);
  if ( v3 >= 10000.0 )
  {
    if ( v8 >= 10000000.0 )
    {
      if ( v8 >= 1.0e10 )
      {
        if ( v8 >= 1.0e13 )
        {
          v11 = 84;
          v10 = 1.0e-12;
        }
        else
        {
          v11 = 71;
          v10 = 0.000000001;
        }
      }
      else
      {
        v11 = 77;
        v10 = 0.000001;
      }
    }
    else
    {
      v11 = 75;
      v10 = 0.001;
    }
  }
  else
  {
    v10 = 1.0;
  }
  *v6 = v8 * v10;
  if ( v11 )
    return sprintf(v5, "%c%s/s", v11, v7);
  else
    return sprintf(v5, "%s/s", v7);
}

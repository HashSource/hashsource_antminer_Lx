int __fastcall format_hashrate_string(const char *a1, char *a2)
{
  double v2; // d0
  double v5; // d8
  int v6; // r3
  _DWORD *v7; // r3
  int v8; // r1
  int v9; // r3
  double v10; // d8
  const char *v11; // r1
  const char *v13; // r1
  double v14; // d0
  char v15[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = v2;
  V_LOCK();
  LOWORD(v6) = 6448;
  HIWORD(v6) = (unsigned int)"est=%d" >> 16;
  logfmt_raw(v15, 0x1000u, 0, v6, v2, a1);
  V_UNLOCK();
  LOWORD(v7) = -14756;
  HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v8) = 6176;
  HIWORD(v8) = (unsigned int)"ate_interger, miner_hashrate[%d]: %d, miner_hashrate[%d]: %d" >> 16;
  zlog(*v7, v8, 127, "format_hashrate_string", 22, 63, 20, v15);
  if ( v2 < 10000.0 )
  {
    LOWORD(v13) = 6480;
    HIWORD(v13) = (unsigned int)"eal rate" >> 16;
    return sprintf(a2, v13, v2, a1);
  }
  else
  {
    if ( v2 >= 10000000.0 )
    {
      if ( v2 >= 1.0e10 )
      {
        if ( v2 >= 1.0e13 )
          v9 = 84;
        else
          v9 = 71;
        if ( v2 >= 1.0e13 )
          v14 = 1.0e-12;
        else
          v14 = 0.000000001;
        v10 = v5 * v14;
      }
      else
      {
        v9 = 77;
        v10 = v2 * 0.000001;
      }
    }
    else
    {
      v9 = 75;
      v10 = v2 * 0.001;
    }
    LOWORD(v11) = 6492;
    HIWORD(v11) = (unsigned int)"/max_rate" >> 16;
    return sprintf(a2, v11, v10, v9, a1);
  }
}

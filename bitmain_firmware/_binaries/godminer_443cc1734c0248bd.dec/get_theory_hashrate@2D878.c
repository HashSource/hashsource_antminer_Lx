int get_theory_hashrate()
{
  float v0; // s0
  int v1; // r4
  int v2; // r5
  char *all_created_runtime; // r0
  char *v4; // r7
  double v5; // d8
  char *v6; // r6
  int v7; // t1
  bool v8; // zf
  bool v9; // zf
  int v10; // r2
  _BYTE *v12; // r3
  double v13; // d7
  int v14; // [sp+4h] [bp-18h]
  int v15; // [sp+Ch] [bp-10h] BYREF
  double v16; // [sp+10h] [bp-Ch]

  v1 = 0;
  v2 = 0;
  v15 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v15);
  v4 = all_created_runtime;
  v5 = 0.0;
  if ( v15 > 0 )
  {
    v6 = all_created_runtime - 4;
    do
    {
      v7 = *((_DWORD *)v6 + 1);
      v6 += 4;
      ++v1;
      v2 |= (*(int (**)(void))(v7 + 88))();
      v5 = v5 + v16;
    }
    while ( v15 > v1 );
  }
  v8 = opt_algo == 3;
  if ( opt_algo != 3 )
    v8 = opt_algo == 0;
  if ( !v8 )
  {
    v9 = opt_algo == 6;
    if ( opt_algo != 6 )
      v9 = opt_algo == 1;
    v10 = v9;
    if ( !v9 )
    {
      if ( opt_algo == 2 )
        return (int)(v5 / 1000.0 / 1000.0 / 1000.0);
      if ( opt_algo != 7 )
      {
        if ( opt_algo != 5 )
          return v10;
        get_total_nonce_rate();
        return (int)(v0 * v5 / 1000.0 / 1000.0);
      }
      if ( !v2 )
      {
        freq_scan_status = 1;
        strcpy((char *)&search_failed_info, "unknown");
        v12 = *(_BYTE **)v4;
        if ( *(_BYTE *)(*(_DWORD *)v4 + 216) == 68 && v12[217] == 55 )
        {
          v13 = v5 / 1000.0 / 1000.0 / 1000.0;
          if ( v12[218] )
          {
            if ( v12[218] == 101 && !v12[219] )
            {
              if ( v13 >= 1170.0 )
                return 1157;
              if ( v13 >= 1125.0 && v13 < 1170.0 )
                return 1111;
              if ( v13 >= 1078.0 && v13 < 1125.0 )
                return 1065;
            }
          }
          else
          {
            if ( v13 >= 1291.0 )
              return 1286;
            if ( v13 >= 1240.0 && v13 < 1291.0 )
              return 1234;
            if ( v13 >= 1188.0 && v13 < 1240.0 )
              return 1183;
            if ( v13 >= 1136.0 && v13 < 1188.0 )
              return 1131;
          }
        }
      }
      sub_2D5F4();
      return v14;
    }
    return (int)(v5 / 1000.0 / 1000.0);
  }
  return (int)v5;
}

int get_miner_sale_hashrate()
{
  double v0; // d0
  int v1; // r0
  double v3; // d0
  unsigned int v5; // [sp+4h] [bp-68h] BYREF
  int v6; // [sp+8h] [bp-64h] BYREF
  char v7[12]; // [sp+Ch] [bp-60h] BYREF
  double v8; // [sp+18h] [bp-54h] BYREF
  double v9[2]; // [sp+20h] [bp-4Ch] BYREF
  int v10; // [sp+30h] [bp-3Ch]
  char *miner_6060info_status; // [sp+34h] [bp-38h]
  double v12; // [sp+38h] [bp-34h]
  double v13; // [sp+40h] [bp-2Ch]
  int v14; // [sp+48h] [bp-24h]
  _DWORD *all_created_runtime; // [sp+4Ch] [bp-20h]
  int k; // [sp+50h] [bp-1Ch]
  int j; // [sp+54h] [bp-18h]
  int i; // [sp+58h] [bp-14h]
  int v19; // [sp+5Ch] [bp-10h]
  double v20; // [sp+60h] [bp-Ch]

  v6 = 0;
  all_created_runtime = get_all_created_runtime(&v6);
  v14 = 0;
  v5 = 1;
  v19 = 0;
  get_miner_elapsed_time();
  v13 = v0;
  v12 = 0.0;
  miner_6060info_status = get_miner_6060info_status();
  v9[0] = 0.0;
  v20 = 0.0;
  for ( i = 0; i < v6; ++i )
  {
    v1 = (*(int (__fastcall **)(_DWORD, double *, unsigned int *))(all_created_runtime[i] + 140))(
           all_created_runtime[i],
           &v8,
           &v5);
    v19 |= v1;
    v20 = v20 + v8;
  }
  v12 = 0.0;
  if ( v13 - 0.0 >= 1.0 )
  {
    if ( v19 )
    {
      sub_311F4(2);
      strcpy((char *)&search_failed_info, "R:1");
    }
    if ( *miner_6060info_status )
    {
      sub_311F4(2);
      strcpy((char *)&search_failed_info, "P:1");
    }
    for ( j = 0; j <= 7; ++j )
    {
      if ( miner_6060info_status[16 * j + 48] )
      {
        sub_311F4(2);
        snprintf((char *)&search_failed_info, 0x100u, "F%d:1", j);
      }
    }
    for ( k = 0; k <= 15; ++k )
    {
      if ( miner_6060info_status[16 * k + 432] )
      {
        sub_311F4(2);
        snprintf((char *)&search_failed_info, 0x100u, "J%d:1", k);
      }
    }
    v10 = frontend_runtime_instance();
    v3 = v20;
    format_hashrate_double(*(const char **)(*(_DWORD *)(v10 + 72) + 16), v9, v7);
    v9[1] = v3;
    v14 = (int)v9[0];
    return sub_CC518((int)v9[0] * v5, v5);
  }
  else
  {
    sub_311F4(0);
    return v14;
  }
}

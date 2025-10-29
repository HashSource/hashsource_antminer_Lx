int get_theory_hashrate()
{
  double v0; // d0
  int v1; // r0
  char v4[12]; // [sp+0h] [bp-54h] BYREF
  int v5; // [sp+Ch] [bp-48h] BYREF
  double v6; // [sp+10h] [bp-44h] BYREF
  double v7; // [sp+18h] [bp-3Ch] BYREF
  int v8; // [sp+24h] [bp-30h]
  double v9; // [sp+28h] [bp-2Ch]
  double v10; // [sp+30h] [bp-24h]
  _DWORD *all_created_runtime; // [sp+38h] [bp-1Ch]
  int i; // [sp+3Ch] [bp-18h]
  int v13; // [sp+40h] [bp-14h]
  int v14; // [sp+44h] [bp-10h]
  double v15; // [sp+48h] [bp-Ch]

  v5 = 0;
  all_created_runtime = get_all_created_runtime(&v5);
  v13 = 0;
  get_miner_elapsed_time();
  v10 = v0;
  v9 = 0.0;
  v15 = 0.0;
  v7 = 0.0;
  for ( i = 0; i < v5; ++i )
  {
    v1 = (*(int (__fastcall **)(_DWORD, double *))(all_created_runtime[i] + 136))(all_created_runtime[i], &v6);
    v13 |= v1;
    v15 = v15 + v6;
  }
  v9 = 0.0;
  if ( v10 - 0.0 >= 1.0 )
  {
    v8 = frontend_runtime_instance();
    format_hashrate_double(*(const char **)(*(_DWORD *)(v8 + 72) + 16), &v7, v4);
    if ( v13 )
    {
      sub_311F4(2);
    }
    else
    {
      v14 = (int)v7;
      sub_311F4(1);
    }
    return v14;
  }
  else
  {
    sub_311F4(0);
    return (int)v7;
  }
}

int pcba_statistic_grin29_pattern_test_results()
{
  int i; // [sp+Ch] [bp+4h] BYREF
  double v2; // [sp+10h] [bp+8h]
  int v3; // [sp+1Ch] [bp+14h]
  int v4; // [sp+20h] [bp+18h]
  int v5; // [sp+24h] [bp+1Ch]
  int v6; // [sp+28h] [bp+20h]
  int v7; // [sp+2Ch] [bp+24h]
  int k; // [sp+30h] [bp+28h]
  int j; // [sp+34h] [bp+2Ch]

  i = 0;
  j = 0;
  k = 0;
  v5 = *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 8);
  v7 = 0;
  v6 = 0;
  for ( i = 0; *(_DWORD *)(g_config_info + 40) > i; ++i )
  {
    if ( pcba_is_grin29_asic_valid(&i) )
    {
      v4 = pcba_calc_grin29_core_num();
      for ( j = 0; j < v4; ++j )
      {
        for ( k = 0; *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 16) > k; ++k )
        {
          ++v6;
          v3 = 104
             * (k
              + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 16) * v4 * i
              + j * *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 16))
             + v5;
          if ( *(_DWORD *)(v3 + 100) )
            ++v7;
        }
      }
    }
  }
  v2 = (double)v7 / (double)v6;
  v2 = v2 * 100.0;
  if ( *(double *)*(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 36) <= v2 )
    return printf("Pattern Test Success %0.4f match nocnes %d total nonces %d\n", v2, v7, v6);
  else
    return printf("Pattern Test Failed %0.4f match nocnes %d total nonces %d\n", v2, v7, v6);
}

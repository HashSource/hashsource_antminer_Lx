int __fastcall calc_chip_temp_min_max_avg_ltc(int a1, _DWORD *a2, _DWORD *a3, int *a4, _DWORD *a5)
{
  int v5; // r3
  _DWORD *base; // [sp+14h] [bp-20h]
  int k; // [sp+1Ch] [bp-18h]
  int j; // [sp+20h] [bp-14h]
  int i; // [sp+24h] [bp-10h]
  int v16; // [sp+28h] [bp-Ch]
  signed int v17; // [sp+2Ch] [bp-8h]

  v17 = 0;
  v16 = 0;
  *a5 = 1;
  base = malloc(4 * *(_DWORD *)(a1 + 336));
  for ( i = 0; i < *(_DWORD *)(a1 + 336); ++i )
  {
    pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + 44 * i + 20));
    base[i] = *(_DWORD *)(*(_DWORD *)(a1 + 528) + 44 * i);
    pthread_mutex_unlock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + 44 * i + 20));
  }
  qsort(base, *(_DWORD *)(a1 + 336), 4u, (__compar_fn_t)cmpfunc_int);
  *a2 = -64;
  for ( j = 0; ; ++j )
  {
    v5 = *(_DWORD *)(a1 + 336) - 1;
    if ( v5 >= 5 )
      v5 = 5;
    if ( j >= v5 )
      break;
    if ( base[j] != -64 )
    {
      *a2 = base[j];
      break;
    }
  }
  *a3 = base[*(_DWORD *)(a1 + 336) - 1];
  if ( *a3 > *a2 + 55 )
    *a5 = 0;
  for ( k = 4; k < *(_DWORD *)(a1 + 336) - 4; ++k )
  {
    v16 += base[k];
    ++v17;
  }
  if ( v17 <= 0 )
    *a5 = 0;
  else
    *a4 = sub_CC518(v16, v17);
  free(base);
  if ( *a5 )
    return 4;
  else
    return 0;
}

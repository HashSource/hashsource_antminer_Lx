int __fastcall wait_x7_chip_setting_not_pending(int a1)
{
  int v1; // r2
  _DWORD *v4; // [sp+Ch] [bp-10h]

  if ( *((_BYTE *)&pending + 64 * *(_DWORD *)(a1 + 248) + 56) != 1 )
  {
    pthread_mutex_init((pthread_mutex_t *)((char *)&pending + 64 * *(_DWORD *)(a1 + 248) + 32), 0);
    *((_BYTE *)&pending + 64 * *(_DWORD *)(a1 + 248) + 56) = 1;
  }
  while ( 1 )
  {
    pthread_mutex_lock((pthread_mutex_t *)((char *)&pending + 64 * *(_DWORD *)(a1 + 248) + 32));
    if ( *((_BYTE *)&pending + 64 * *(_DWORD *)(a1 + 248)) != 1 )
      break;
    v1 = *(_DWORD *)(a1 + 248) << 6;
    v4 = (_DWORD *)((char *)&pending + v1 + 4);
    clock_gettime(1, (struct timespec *)((char *)&pending + v1 + 12));
    if ( vshld_n_s64(4 * (vshld_n_s64(v4[2] - *v4, 5u) - (v4[2] - *v4)) + v4[2] - *v4, 3u) + (v4[3] - v4[1]) / 1000000 >= *((_QWORD *)&pending + 8 * *(_DWORD *)(a1 + 248) + 3) )
      break;
    pthread_mutex_unlock((pthread_mutex_t *)((char *)&pending + 64 * *(_DWORD *)(a1 + 248) + 32));
    usleep(0x3E8u);
  }
  clock_gettime(1, (struct timespec *)((char *)&pending + 64 * *(_DWORD *)(a1 + 248) + 4));
  *((_QWORD *)&pending + 8 * *(_DWORD *)(a1 + 248) + 3) = 0;
  *((_BYTE *)&pending + 64 * *(_DWORD *)(a1 + 248)) = 0;
  return pthread_mutex_unlock((pthread_mutex_t *)((char *)&pending + 64 * *(_DWORD *)(a1 + 248) + 32));
}

int __fastcall set_x7_chip_setting_pending(int a1, int a2)
{
  if ( *((_BYTE *)&pending + 64 * *(_DWORD *)(a1 + 248) + 56) != 1 )
  {
    pthread_mutex_init((pthread_mutex_t *)((char *)&pending + 64 * *(_DWORD *)(a1 + 248) + 32), 0);
    *((_BYTE *)&pending + 64 * *(_DWORD *)(a1 + 248) + 56) = 1;
  }
  pthread_mutex_lock((pthread_mutex_t *)((char *)&pending + 64 * *(_DWORD *)(a1 + 248) + 32));
  clock_gettime(1, (struct timespec *)((char *)&pending + 64 * *(_DWORD *)(a1 + 248) + 4));
  *((_QWORD *)&pending + 8 * *(_DWORD *)(a1 + 248) + 3) = 1000 * a2;
  if ( *((_BYTE *)&pending + 64 * *(_DWORD *)(a1 + 248)) != 1 )
    *((_BYTE *)&pending + 64 * *(_DWORD *)(a1 + 248)) = 1;
  return pthread_mutex_unlock((pthread_mutex_t *)((char *)&pending + 64 * *(_DWORD *)(a1 + 248) + 32));
}

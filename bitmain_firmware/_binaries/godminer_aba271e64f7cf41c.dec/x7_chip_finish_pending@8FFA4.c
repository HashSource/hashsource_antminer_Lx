int __fastcall x7_chip_finish_pending(int a1)
{
  if ( *((_BYTE *)&pending + 64 * *(_DWORD *)(a1 + 248) + 56) != 1 )
  {
    pthread_mutex_init((pthread_mutex_t *)((char *)&pending + 64 * *(_DWORD *)(a1 + 248) + 32), 0);
    *((_BYTE *)&pending + 64 * *(_DWORD *)(a1 + 248) + 56) = 1;
  }
  pthread_mutex_lock((pthread_mutex_t *)((char *)&pending + 64 * *(_DWORD *)(a1 + 248) + 32));
  *((_QWORD *)&pending + 8 * *(_DWORD *)(a1 + 248) + 3) = 0;
  *((_BYTE *)&pending + 64 * *(_DWORD *)(a1 + 248)) = 0;
  return pthread_mutex_unlock((pthread_mutex_t *)((char *)&pending + 64 * *(_DWORD *)(a1 + 248) + 32));
}

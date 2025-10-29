int __fastcall backend_exit_x7(int a1)
{
  int (**v1)(); // r0
  void *thread_return; // [sp+8h] [bp-14h] BYREF
  void *ptr; // [sp+Ch] [bp-10h]
  int j; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  ptr = *(void **)(a1 + 1288);
  *(_BYTE *)(a1 + 257) = 0;
  *(_BYTE *)(a1 + 258) = 0;
  *(_BYTE *)(a1 + 256) = 0;
  (*(void (__fastcall **)(int))(a1 + 60))(a1);
  if ( *(_DWORD *)(a1 + 84) )
    (*(void (__fastcall **)(int))(a1 + 84))(a1);
  *(_BYTE *)(a1 + 1020) = 1;
  *((_BYTE *)ptr + 8) = 1;
  *((_BYTE *)ptr + 9) = 1;
  *(_BYTE *)(a1 + 1021) = 1;
  *(_BYTE *)(a1 + 1022) = 1;
  queue_force_wakeup(*(_DWORD *)(a1 + 860));
  queue_force_wakeup(*(_DWORD *)(a1 + 864));
  queue_force_wakeup(*(_DWORD *)(a1 + 868));
  for ( i = 0; i < *(_DWORD *)(a1 + 1000); ++i )
    queue_force_wakeup(*(_DWORD *)(a1 + 4 * (i + 218)));
  queue_force_wakeup(*(_DWORD *)(a1 + 856));
  pthread_join(*(_DWORD *)(a1 + 1012), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 1008), &thread_return);
  if ( *((_BYTE *)ptr + 10) )
  {
    pthread_join(*(_DWORD *)ptr, &thread_return);
    pthread_join(*((_DWORD *)ptr + 1), &thread_return);
  }
  pthread_join(*(_DWORD *)(a1 + 1016), &thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 1024));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 1048));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 1072));
  queue_free(*(_DWORD *)(a1 + 860));
  queue_free(*(_DWORD *)(a1 + 864));
  queue_free(*(_DWORD *)(a1 + 868));
  for ( j = 0; j < *(_DWORD *)(a1 + 1000); ++j )
    queue_free(*(_DWORD *)(a1 + 4 * (j + 218)));
  queue_free(*(_DWORD *)(a1 + 856));
  free(*(void **)(a1 + 492));
  free(*(void **)(a1 + 480));
  free(*(void **)(a1 + 488));
  free(*(void **)(a1 + 456));
  free(*(void **)(a1 + 484));
  if ( *(_DWORD *)(a1 + 848) )
    free(*(void **)(a1 + 516));
  *(_DWORD *)(a1 + 520) = 0;
  *(_DWORD *)(a1 + 428) = -1;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 1004) = 0;
  free(ptr);
  v1 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v1[7])(*(_DWORD *)(a1 + 248));
  return 0;
}

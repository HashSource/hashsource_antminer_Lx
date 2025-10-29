int __fastcall backend_init_base(int a1)
{
  int (**v1)(); // r0
  int (**v2)(); // r0
  int (**v3)(); // r0
  int j; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v1 = dev_ctrl();
  *(_DWORD *)(a1 + 252) = ((int (__fastcall *)(_DWORD))v1[12])(*(_DWORD *)(a1 + 248));
  v2 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v2[11])(*(_DWORD *)(a1 + 248));
  v3 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v3[1])(*(_DWORD *)(a1 + 248));
  *(_DWORD *)(a1 + 860) = queue_new(1, 0);
  *(_DWORD *)(a1 + 864) = queue_new(*(_DWORD *)(a1 + 832), 0);
  *(_DWORD *)(a1 + 868) = queue_new(1, 0);
  for ( i = 0; i < *(_DWORD *)(a1 + 1000); ++i )
    *(_DWORD *)(a1 + 4 * (i + 218)) = queue_new(1, 0);
  *(_DWORD *)(a1 + 856) = queue_new(*(_DWORD *)(a1 + 828), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 1024), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 1048), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 1072), 0);
  *(_DWORD *)(a1 + 492) = calloc(*(_DWORD *)(a1 + 336), 1u);
  *(_DWORD *)(a1 + 480) = calloc(*(_DWORD *)(a1 + 336), 4u);
  *(_DWORD *)(a1 + 488) = calloc(*(_DWORD *)(a1 + 336), 2 * *(_DWORD *)(a1 + 836));
  *(_DWORD *)(a1 + 456) = calloc(*(_DWORD *)(a1 + 336), 0x30u);
  *(_DWORD *)(a1 + 528) = calloc(*(_DWORD *)(a1 + 336), 0x2Cu);
  for ( j = 0; j < *(_DWORD *)(a1 + 336); ++j )
    pthread_mutex_init((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + 44 * j + 20), 0);
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 428) = -1;
  *(_BYTE *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 476) = 0;
  *(_DWORD *)(a1 + 496) = 0;
  *(_DWORD *)(a1 + 512) = 0;
  if ( *(_DWORD *)(a1 + 848) )
    *(_DWORD *)(a1 + 516) = calloc(*(_DWORD *)(a1 + 336), *(_DWORD *)(a1 + 848));
  *(_DWORD *)(a1 + 520) = 0;
  memset((void *)(a1 + 568), 0, 0x100u);
  *(_BYTE *)(a1 + 1020) = 0;
  *(_BYTE *)(a1 + 1021) = 0;
  *(_BYTE *)(a1 + 1022) = 0;
  if ( !*(_DWORD *)(a1 + 1004) )
    *(_DWORD *)(a1 + 1004) = a1;
  if ( *(_DWORD *)(a1 + 80) )
    (*(void (__fastcall **)(int))(a1 + 80))(a1);
  pthread_create((pthread_t *)(a1 + 1012), 0, (void *(*)(void *))get_response, (void *)a1);
  pthread_create((pthread_t *)(a1 + 1008), 0, (void *(*)(void *))scanhash, (void *)a1);
  pthread_create((pthread_t *)(a1 + 1016), 0, (void *(*)(void *))send_work, (void *)a1);
  *(_BYTE *)(a1 + 256) = 1;
  return 0;
}

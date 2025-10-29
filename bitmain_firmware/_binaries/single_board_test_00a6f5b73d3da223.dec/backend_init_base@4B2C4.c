int __fastcall backend_init_base(int a1)
{
  _UNKNOWN **v1; // r0
  _UNKNOWN **v2; // r0
  _UNKNOWN **v3; // r0
  _UNKNOWN **v4; // r0
  int v5; // r3

  v1 = dev_ctrl();
  *(_DWORD *)(a1 + 140) = ((int (__fastcall *)(_DWORD))v1[10])(*(_DWORD *)(a1 + 136));
  v2 = dev_ctrl();
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v2[6])(
    *(_DWORD *)(a1 + 136),
    *(_DWORD *)(a1 + 764),
    *(_DWORD *)(a1 + 776));
  v3 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v3[9])(*(_DWORD *)(a1 + 136));
  v4 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v4[1])(*(_DWORD *)(a1 + 136));
  *(_DWORD *)(a1 + 656) = queue_new(1, 0);
  *(_DWORD *)(a1 + 660) = queue_new(*(_DWORD *)(a1 + 632), 0);
  *(_DWORD *)(a1 + 664) = queue_new(1, 0);
  *(_DWORD *)(a1 + 652) = queue_new(*(_DWORD *)(a1 + 628), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 688), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 712), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 736), 0);
  *(_DWORD *)(a1 + 296) = calloc(*(_DWORD *)(a1 + 196), 1u);
  *(_DWORD *)(a1 + 288) = calloc(*(_DWORD *)(a1 + 196), 4u);
  *(_DWORD *)(a1 + 292) = calloc(*(_DWORD *)(a1 + 196), 2 * *(_DWORD *)(a1 + 636));
  v5 = *(_DWORD *)(a1 + 196) + 31;
  if ( v5 < 0 )
    v5 = *(_DWORD *)(a1 + 196) + 62;
  *(_DWORD *)(a1 + 300) = calloc(v5 >> 5, 4u);
  *(_DWORD *)(a1 + 264) = calloc(*(_DWORD *)(a1 + 196), 0x30u);
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 240) = -1;
  *(_BYTE *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 320) = 0;
  if ( *(_DWORD *)(a1 + 648) )
    *(_DWORD *)(a1 + 324) = calloc(*(_DWORD *)(a1 + 196), *(_DWORD *)(a1 + 648));
  *(_DWORD *)(a1 + 328) = 0;
  memset((void *)(a1 + 368), 0, 0x100u);
  *(_BYTE *)(a1 + 684) = 0;
  *(_BYTE *)(a1 + 685) = 0;
  *(_BYTE *)(a1 + 686) = 0;
  if ( !*(_DWORD *)(a1 + 668) )
    *(_DWORD *)(a1 + 668) = a1;
  if ( *(_DWORD *)(a1 + 68) )
    (*(void (__fastcall **)(int))(a1 + 68))(a1);
  pthread_create((pthread_t *)(a1 + 676), 0, (void *(*)(void *))get_response, (void *)a1);
  pthread_create((pthread_t *)(a1 + 672), 0, (void *(*)(void *))scanhash, (void *)a1);
  pthread_create((pthread_t *)(a1 + 680), 0, (void *(*)(void *))send_work, (void *)a1);
  *(_BYTE *)(a1 + 144) = 1;
  return 0;
}

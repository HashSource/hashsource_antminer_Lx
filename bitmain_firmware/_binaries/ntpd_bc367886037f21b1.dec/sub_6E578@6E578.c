int __fastcall sub_6E578(int a1)
{
  int v2; // r7
  int v3; // r5
  int v4; // r1
  int v5; // r11
  _BOOL4 v6; // r6
  sem_t *v8; // r0
  sem_t *v9; // r0
  sem_t *v10; // r0
  _BYTE buf[32]; // [sp+4h] [bp-28h] BYREF

  while ( read(*(_DWORD *)(a1 + 52), buf, 0x20u) == -1 && *_errno_location() == 4 )
    ;
  sub_6DCA8(*(sem_t **)(a1 + 4), 0);
  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 44);
  if ( v2 == v3 )
  {
    v5 = 0;
    sem_post(*(sem_t **)(a1 + 4));
  }
  else
  {
    do
    {
      sub_8B484(v3++, *(_DWORD *)(a1 + 36));
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 4 * v4);
      *(_DWORD *)(*(_DWORD *)(a1 + 32) + 4 * v4) = 0;
      v6 = v2 != v3;
      if ( v5 )
        v6 = 0;
    }
    while ( v6 );
    *(_DWORD *)(a1 + 44) = v3;
    sem_post(*(sem_t **)(a1 + 4));
    if ( v5 == -1 )
    {
      v8 = *(sem_t **)(a1 + 4);
      *(_DWORD *)(a1 + 8) = 0;
      if ( v8 )
        sem_destroy(v8);
      v9 = *(sem_t **)(a1 + 28);
      *(_DWORD *)(a1 + 4) = 0;
      if ( v9 )
        sem_destroy(v9);
      v10 = *(sem_t **)(a1 + 48);
      *(_DWORD *)(a1 + 28) = 0;
      if ( v10 )
        sem_destroy(v10);
      *(_DWORD *)(a1 + 48) = 0;
      v5 = 0;
      addremove_io_fd(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 60), 1);
      close(*(_DWORD *)(a1 + 56));
      close(*(_DWORD *)(a1 + 52));
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      *(_DWORD *)(a1 + 56) = -1;
      *(_DWORD *)(a1 + 52) = -1;
      *(_DWORD *)a1 = 1;
    }
  }
  return v5;
}

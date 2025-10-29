char *add_pool()
{
  char *v0; // r4
  int v1; // r6
  int v2; // r3
  void *v3; // r0
  _DWORD *v4; // r0
  int v5; // r2
  int v7; // r3
  _DWORD *v8; // r3
  int v9; // r1
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (char *)calloc(0x878u, 1u);
  if ( !v0 )
  {
    V_LOCK();
    LOWORD(v7) = 2104;
    HIWORD(v7) = (unsigned int)" \"mining.extranonce.subscribe\", \"params\": []}" >> 16;
    logfmt_raw(v10, 0x1000u, 0, v7);
    V_UNLOCK();
    LOWORD(v8) = -14756;
    HIWORD(v8) = (unsigned int)&unk_16E68C >> 16;
    LOWORD(v9) = 1840;
    HIWORD(v9) = (unsigned int)"\"params\": [\"ckbminer-v1.0.0\", null]}" >> 16;
    zlog(*v8, v9, 127, "add_pool", 8, 121, 100, v10);
    exit(1);
  }
  LOWORD(v1) = 21224;
  HIWORD(v1) = (unsigned int)&unk_167300 >> 16;
  v2 = *(_DWORD *)(v1 + 0x50);
  v3 = *(void **)(v1 + 0x54);
  *((_DWORD *)v0 + 1) = v2;
  *(_DWORD *)v0 = v2;
  v4 = realloc(v3, 4 * (v2 + 2));
  v5 = *(_DWORD *)(v1 + 0x50);
  *(_DWORD *)(v1 + 0x54) = v4;
  *(_DWORD *)(v1 + 0x50) = v5 + 1;
  v4[v5] = v0;
  *((_DWORD *)v0 + 8) = -1;
  *((_DWORD *)v0 + 10) = 0;
  v0[1816] = 0;
  v0[1824] = 0;
  *((_DWORD *)v0 + 479) = 0;
  *((_DWORD *)v0 + 481) = 0;
  v0[24] = 1;
  *((_QWORD *)v0 + 242) = 0;
  *((_DWORD *)v0 + 486) = 0;
  memset(v0 + 1852, 0, 0x40u);
  *((_QWORD *)v0 + 247) = 0;
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1760), 0);
  pthread_mutex_init((pthread_mutex_t *)v0 + 83, 0);
  pthread_condattr_init((pthread_condattr_t *)v0 + 504);
  pthread_condattr_setclock((pthread_condattr_t *)v0 + 504, 1);
  pthread_cond_init((pthread_cond_t *)(v0 + 2024), (const pthread_condattr_t *)v0 + 504);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 44), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1760), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1948), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1828), 0);
  v0[2072] = 1;
  v0[2084] = 0;
  *((_DWORD *)v0 + 519) = -1;
  return v0;
}

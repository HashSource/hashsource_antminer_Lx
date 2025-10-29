_DWORD *__fastcall pipe_new(int a1, int a2)
{
  unsigned int v3; // r3
  unsigned int v4; // r6
  char *v8; // [sp+Ch] [bp+Ch]
  size_t size; // [sp+10h] [bp+10h]
  _DWORD *ptr; // [sp+14h] [bp+14h]

  if ( !a1 )
    return 0;
  ptr = malloc(0xB8u);
  size = 32 * a1;
  v8 = (char *)malloc(32 * a1);
  if ( ptr && v8 )
  {
    if ( a2 )
    {
      v3 = 32 * a1;
      if ( size < a1 * (a2 + 1) )
        v3 = a1 * (a2 + 1);
      v4 = sub_FE530(v3);
    }
    else
    {
      v4 = -1;
    }
    memset(ptr, 0, 0xB8u);
    *ptr = a1;
    ptr[1] = size;
    ptr[2] = v4;
    ptr[3] = v8;
    ptr[4] = &v8[size];
    ptr[5] = v8;
    ptr[6] = &v8[a1];
    ptr[7] = 1;
    ptr[8] = 1;
    pthread_mutex_init((pthread_mutex_t *)(ptr + 9), 0);
    pthread_mutex_init((pthread_mutex_t *)(ptr + 15), 0);
    pthread_cond_init((pthread_cond_t *)(ptr + 22), 0);
    pthread_cond_init((pthread_cond_t *)(ptr + 34), 0);
    sub_FE590(ptr);
    return ptr;
  }
  else
  {
    free(ptr);
    free(v8);
    return 0;
  }
}

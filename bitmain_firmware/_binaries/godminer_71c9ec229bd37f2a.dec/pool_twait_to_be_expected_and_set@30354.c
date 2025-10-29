int __fastcall pool_twait_to_be_expected_and_set(int a1, _BYTE *a2, int a3, char a4, const struct timespec *a5)
{
  pthread_mutex_t *v5; // r4
  int v9; // r10
  int v10; // r11
  int v11; // r0
  int v13; // r11
  pthread_cond_t *v14; // r9
  int v15; // r0

  v5 = (pthread_mutex_t *)(a1 + 1992);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1992));
  if ( a5 )
  {
    LOWORD(v9) = 29440;
    while ( 2 )
    {
      v10 = 0;
      do
      {
        if ( (unsigned __int8)*a2 == a3 )
        {
          if ( v10 )
            goto LABEL_9;
          goto LABEL_8;
        }
        v11 = pthread_cond_timedwait((pthread_cond_t *)(a1 + 2024), v5, a5);
        v10 = v11;
        if ( v11 == 110 )
          goto LABEL_9;
      }
      while ( v11 );
      pthread_mutex_lock(&mutex);
      HIWORD(v9) = (unsigned int)&off_1652E8 >> 16;
      v13 = *(_DWORD *)(v9 + 0x1C);
      pthread_mutex_unlock(&mutex);
      if ( a1 == v13 )
        continue;
      break;
    }
    v10 = 1;
  }
  else
  {
    if ( (unsigned __int8)*a2 == a3 )
      goto LABEL_8;
    v14 = (pthread_cond_t *)(a1 + 2024);
    do
    {
      v15 = pthread_cond_wait(v14, v5);
      v10 = v15;
    }
    while ( (unsigned __int8)*a2 != a3 );
    if ( !v15 )
    {
LABEL_8:
      v10 = 0;
      *a2 = a4;
    }
  }
LABEL_9:
  pthread_mutex_unlock(v5);
  return v10;
}

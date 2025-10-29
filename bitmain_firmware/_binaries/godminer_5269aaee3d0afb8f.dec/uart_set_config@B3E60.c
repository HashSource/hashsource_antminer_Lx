int __fastcall uart_set_config(int a1, int a2, int *a3)
{
  pthread_mutex_t *v5; // r6
  const char *v7; // r2
  _DWORD *v8; // r3
  int v9; // r1
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v11[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !a3 )
    return -3;
  v5 = (pthread_mutex_t *)((char *)&unk_16C134 + 24 * a1);
  pthread_mutex_lock(v5);
  if ( a2 )
  {
    LOWORD(v7) = -3660;
    HIWORD(v7) = (unsigned int)"k wc %d:" >> 16;
    snprintf(s, 0x800u, v7, a2);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v8) = -14756;
    HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v9) = -4068;
    HIWORD(v9) = (unsigned int)&unk_13DA3C >> 16;
    zlog(*v8, v9, 165, "uart_set_config", 15, 576, 80, v11);
  }
  else
  {
    fpga_write(60, *a3);
  }
  pthread_mutex_unlock(v5);
  return -5;
}

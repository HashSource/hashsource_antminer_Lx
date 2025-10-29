int __fastcall uart_get_config(int a1, int a2, _DWORD *a3, int a4)
{
  _BOOL4 v4; // r3
  int v5; // r5
  pthread_mutex_t *v8; // r7
  const char *v9; // r2
  _DWORD *v10; // r3
  int v11; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v14[4100]; // [sp+810h] [bp-1004h] BYREF

  v4 = a4 != 0;
  if ( a3 )
    v5 = v4;
  else
    v5 = 1;
  if ( v5 )
    return -3;
  v8 = (pthread_mutex_t *)((char *)&unk_16C134 + 24 * a1);
  pthread_mutex_lock(v8);
  if ( !a2 )
  {
    *(_DWORD *)v14 = 0;
    fpga_read(60, v14);
    *a3 = *(_DWORD *)v14;
    MEMORY[0] = 0;
    __und(0);
  }
  LOWORD(v9) = -3660;
  HIWORD(v9) = (unsigned int)"k wc %d:" >> 16;
  snprintf(s, 0x800u, v9, a2);
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v10) = -14756;
  HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v11) = -4068;
  HIWORD(v11) = (unsigned int)&unk_13DA3C >> 16;
  zlog(*v10, v11, 165, "uart_get_config", 15, 600, 80, v14);
  pthread_mutex_unlock(v8);
  return -5;
}

unsigned int __fastcall close_pic(unsigned int result)
{
  unsigned int v1; // r5
  unsigned int v2; // r6
  int v3; // r4
  pthread_mutex_t *v4; // r0
  const char *v5; // r2
  _DWORD *v6; // r3
  int v7; // r1
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v9[4096]; // [sp+810h] [bp-1000h] BYREF

  v1 = result;
  if ( result > 0xF )
  {
    LOWORD(v5) = -8224;
    HIWORD(v5) = (unsigned int)"_core_mode_kda" >> 16;
    snprintf(s, 0x800u, v5, "close_pic", result);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v6) = -14756;
    HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v7) = -9036;
    HIWORD(v7) = (unsigned int)"et_KDA" >> 16;
    return zlog(*v6, v7, 158, "close_pic", 9, 762, 100, v9);
  }
  else
  {
    LOWORD(v3) = -11352;
    v2 = 8 * result;
    HIWORD(v3) = (unsigned int)&unk_16C2A0 >> 16;
    if ( *(_DWORD *)(v3 + 8 * result) || *(_DWORD *)(v3 + v2 + 4) )
    {
      pthread_mutex_lock(&i2c_mutex_all);
      iic_uninit(*(_DWORD *)(v3 + 8 * v1));
      LOWORD(v4) = -16568;
      HIWORD(v4) = (unsigned int)&unk_16AE48 >> 16;
      *(_DWORD *)(v3 + v2 + 4) = 0;
      return pthread_mutex_unlock(v4);
    }
  }
  return result;
}

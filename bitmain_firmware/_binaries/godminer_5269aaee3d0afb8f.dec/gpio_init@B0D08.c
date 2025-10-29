int gpio_init()
{
  void *(*v0)(void *); // r2
  int *v2; // r3
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int *v7; // r3
  int v8; // r0
  int v9; // r1
  _DWORD v10[3]; // [sp+10h] [bp-1800h] BYREF
  __int16 v11; // [sp+1Ch] [bp-17F4h]
  char v12[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16C0CC )
  {
    LOWORD(v2) = -6304;
    HIWORD(v2) = (unsigned int)"ed value %04x\n" >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v6 = v2[3];
    v10[0] = v3;
    v10[1] = v4;
    v10[2] = v5;
    v11 = v6;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v7) = -14756;
    HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
    v8 = *v7;
    LOWORD(v7) = -6476;
    LOWORD(v9) = -6288;
    HIWORD(v7) = (unsigned int)"ERO_COUNT_LTC %02x" >> 16;
    HIWORD(v9) = (unsigned int)"low power mode select!" >> 16;
    zlog(v8, v9, 165, v7, 9, 98, 80, v12);
  }
  else
  {
    pthread_mutex_init(&stru_16C0D0, 0);
    dword_16C0E8 = (int)new_c_map(724216, 0, 0);
    pthread_mutex_init(&stru_16C0EC, 0);
    LOWORD(v0) = 7864;
    HIWORD(v0) = (unsigned int)&loc_B0F70 >> 16;
    dword_16C104 = 1;
    pthread_create((pthread_t *)&dword_16C108, 0, v0, 0);
    dword_16C0CC = 1;
  }
  return 0;
}

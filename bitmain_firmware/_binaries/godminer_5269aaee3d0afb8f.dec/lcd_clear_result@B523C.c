int lcd_clear_result()
{
  int *v1; // r12
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r12
  _DWORD *v7; // r3
  int v8; // r1
  _DWORD v9[512]; // [sp+10h] [bp-1800h] BYREF
  char v10[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16C438) )
  {
    LOWORD(v1) = -5936;
    HIWORD(v1) = (unsigned int)"q_ltc" >> 16;
    v2 = *v1;
    v3 = v1[1];
    v4 = v1[2];
    v5 = v1[3];
    v6 = v1[4];
    v9[0] = v2;
    v9[1] = v3;
    v9[2] = v4;
    v9[3] = v5;
    v9[4] = v6;
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    LOWORD(v7) = -14756;
    HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v8) = -3320;
    HIWORD(v8) = (unsigned int)"ster/backend/device/hal/drv_pic/pic_1704.c" >> 16;
    return zlog(*v7, v8, 163, "lcd_clear_result", 16, 501, 100, v10);
  }
  else
  {
    if ( dword_163B90 > 0 )
      lcd_clear(dword_163B90);
    return pthread_mutex_unlock(&stru_16C438);
  }
}

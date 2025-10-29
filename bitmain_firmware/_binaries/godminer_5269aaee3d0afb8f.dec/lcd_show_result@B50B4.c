int __fastcall lcd_show_result(char a1, int a2, unsigned int a3)
{
  int v6; // r0
  int v7; // r4
  const char *v9; // r2
  _DWORD *v10; // r3
  int v11; // r1
  int *v12; // r12
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r12
  _DWORD *v18; // r3
  int v19; // r1
  _DWORD s[512]; // [sp+10h] [bp-1804h] BYREF
  char v21[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_16C438) )
  {
    LOWORD(v12) = -5936;
    HIWORD(v12) = (unsigned int)"q_ltc" >> 16;
    v13 = *v12;
    v14 = v12[1];
    v15 = v12[2];
    v16 = v12[3];
    v7 = -4;
    v17 = v12[4];
    s[0] = v13;
    s[1] = v14;
    s[2] = v15;
    s[3] = v16;
    s[4] = v17;
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v18) = -14756;
    HIWORD(v18) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v19) = -3320;
    HIWORD(v19) = (unsigned int)"ster/backend/device/hal/drv_pic/pic_1704.c" >> 16;
    zlog(*v18, v19, 163, "lcd_show_result", 15, 470, 100, v21);
  }
  else
  {
    v6 = dword_163B90;
    if ( dword_163B90 < 0 )
    {
      dword_163B90 = lcd_init((int)lcd_path);
      lcd_clear(dword_163B90);
      v6 = dword_163B90;
    }
    if ( v6 <= 0 )
    {
      LOWORD(v9) = -2920;
      HIWORD(v9) = (unsigned int)"fter program chain[%d]!" >> 16;
      snprintf((char *)s, 0x800u, v9, lcd_path);
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v10) = -14756;
      HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v11) = -3320;
      HIWORD(v11) = (unsigned int)"ster/backend/device/hal/drv_pic/pic_1704.c" >> 16;
      v7 = -1;
      zlog(*v10, v11, 163, "lcd_show_result", 15, 486, 100, v21);
    }
    else
    {
      v7 = lcd_write(v6, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_16C438);
  }
  return v7;
}

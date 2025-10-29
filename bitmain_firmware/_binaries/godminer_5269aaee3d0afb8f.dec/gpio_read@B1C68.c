int __fastcall gpio_read(int a1, _BYTE *a2)
{
  int v4; // r4
  const char *v5; // r2
  int v6; // r0
  int v7; // r5
  int *v9; // r12
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r12
  _DWORD *v15; // r3
  int v16; // r1
  const char *v17; // r2
  _DWORD *v18; // r3
  int v19; // r1
  int *v20; // lr
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  _DWORD *v26; // r3
  int v27; // r1
  int buf; // [sp+1Ch] [bp-1848h] BYREF
  char s[64]; // [sp+20h] [bp-1844h] BYREF
  int v30; // [sp+60h] [bp-1804h] BYREF
  int v31; // [sp+64h] [bp-1800h]
  int v32; // [sp+68h] [bp-17FCh]
  int v33; // [sp+6Ch] [bp-17F8h]
  int v34; // [sp+70h] [bp-17F4h]
  __int16 v35; // [sp+74h] [bp-17F0h]
  char v36; // [sp+76h] [bp-17EEh]
  char v37[4100]; // [sp+860h] [bp-1004h] BYREF

  buf = 0;
  v4 = pthread_mutex_lock(&stru_16C0EC);
  if ( v4 )
  {
    LOWORD(v9) = -5936;
    HIWORD(v9) = (unsigned int)"q_ltc" >> 16;
    v4 = -1;
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    v13 = v9[3];
    v14 = v9[4];
    v30 = v10;
    v31 = v11;
    v32 = v12;
    v33 = v13;
    v34 = v14;
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, &v30);
    V_UNLOCK();
    LOWORD(v15) = -14756;
    HIWORD(v15) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v16) = -6288;
    HIWORD(v16) = (unsigned int)"low power mode select!" >> 16;
    zlog(*v15, v16, 165, "gpio_read", 9, 372, 100, v37);
  }
  else
  {
    LOWORD(v5) = -5428;
    HIWORD(v5) = (unsigned int)"%d chip_no %d core %d " >> 16;
    snprintf(s, 0x40u, v5, a1);
    v6 = open64(s);
    v7 = v6;
    if ( v6 < 0 )
    {
      LOWORD(v17) = -5396;
      HIWORD(v17) = (unsigned int)" core %d get check bist results less than expect num(%d < %d)" >> 16;
      snprintf((char *)&v30, 0x800u, v17, a1);
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, &v30);
      V_UNLOCK();
      LOWORD(v18) = -14756;
      HIWORD(v18) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v19) = -6288;
      HIWORD(v19) = (unsigned int)"low power mode select!" >> 16;
      v4 = -2;
      zlog(*v18, v19, 165, "gpio_read", 9, 380, 100, v37);
      pthread_mutex_unlock(&stru_16C0EC);
    }
    else if ( read(v6, &buf, 4u) < 0 )
    {
      LOWORD(v20) = -5352;
      HIWORD(v20) = (unsigned int)"pect num(%d < %d)" >> 16;
      v21 = *v20;
      v22 = v20[1];
      v23 = v20[2];
      v24 = v20[3];
      v20 += 4;
      v30 = v21;
      v31 = v22;
      v32 = v23;
      v33 = v24;
      v25 = v20[1];
      v34 = *v20;
      v35 = v25;
      v36 = BYTE2(v25);
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, &v30);
      V_UNLOCK();
      LOWORD(v26) = -14756;
      HIWORD(v26) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v27) = -6288;
      HIWORD(v27) = (unsigned int)"low power mode select!" >> 16;
      v4 = -3;
      zlog(*v26, v27, 165, "gpio_read", 9, 387, 100, v37);
      close(v7);
      pthread_mutex_unlock(&stru_16C0EC);
    }
    else
    {
      close(v7);
      pthread_mutex_unlock(&stru_16C0EC);
      *a2 = strtol((const char *)&buf, 0, 10);
    }
  }
  return v4;
}

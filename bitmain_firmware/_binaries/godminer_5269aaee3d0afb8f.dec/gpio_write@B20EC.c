int __fastcall gpio_write(int a1, int a2)
{
  const char *v4; // r2
  int v5; // r0
  int v6; // r5
  char *v7; // r1
  int *v9; // r12
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r12
  _DWORD *v15; // r3
  int v16; // r1
  int *v17; // r12
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  _DWORD *v27; // r3
  int v28; // r1
  int *v29; // r12
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r1
  _DWORD *v35; // r3
  int v36; // r1
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  int v38; // [sp+50h] [bp-1804h] BYREF
  int v39; // [sp+54h] [bp-1800h]
  int v40; // [sp+58h] [bp-17FCh]
  int v41; // [sp+5Ch] [bp-17F8h]
  int v42; // [sp+60h] [bp-17F4h]
  int v43; // [sp+64h] [bp-17F0h]
  int v44; // [sp+68h] [bp-17ECh]
  int v45; // [sp+6Ch] [bp-17E8h]
  int v46; // [sp+70h] [bp-17E4h]
  int v47; // [sp+74h] [bp-17E0h]
  char v48[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_16C0EC) )
  {
    LOWORD(v9) = -5936;
    HIWORD(v9) = (unsigned int)"q_ltc" >> 16;
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    v13 = v9[3];
    v14 = v9[4];
    v38 = v10;
    v39 = v11;
    v40 = v12;
    v41 = v13;
    v42 = v14;
    V_LOCK();
    logfmt_raw(v48, 0x1000u, 0, &v38);
    V_UNLOCK();
    LOWORD(v15) = -14756;
    HIWORD(v15) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v16) = -6288;
    HIWORD(v16) = (unsigned int)"low power mode select!" >> 16;
    zlog(*v15, v16, 165, "gpio_write", 10, 415, 100, v48);
    return -1;
  }
  else
  {
    LOWORD(v4) = -5428;
    HIWORD(v4) = (unsigned int)"%d chip_no %d core %d " >> 16;
    snprintf(s, 0x40u, v4, a1);
    v5 = open64(s);
    v6 = v5;
    if ( v5 < 0 )
    {
      LOWORD(v17) = -5252;
      HIWORD(v17) = (unsigned int)"2x, all core" >> 16;
      v18 = *v17;
      v19 = v17[1];
      v20 = v17[2];
      v21 = v17[3];
      v17 += 4;
      v38 = v18;
      v39 = v19;
      v40 = v20;
      v41 = v21;
      v22 = *v17;
      v23 = v17[1];
      v24 = v17[2];
      v25 = v17[3];
      v17 += 4;
      v42 = v22;
      v43 = v23;
      v44 = v24;
      v45 = v25;
      v26 = v17[1];
      v46 = *v17;
      v47 = v26;
      V_LOCK();
      logfmt_raw(v48, 0x1000u, 0, &v38);
      V_UNLOCK();
      LOWORD(v27) = -14756;
      HIWORD(v27) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v28) = -6288;
      HIWORD(v28) = (unsigned int)"low power mode select!" >> 16;
      zlog(*v27, v28, 165, "gpio_write", 10, 423, 100, v48);
      pthread_mutex_unlock(&stru_16C0EC);
      return -2;
    }
    else
    {
      if ( a2 )
        v7 = "1";
      else
        v7 = "01";
      if ( write(v5, v7, 1u) < 0 )
      {
        LOWORD(v29) = -5212;
        HIWORD(v29) = (unsigned int)"hip_addr %02x reg:%02x, core_id:%d" >> 16;
        v30 = *v29;
        v31 = v29[1];
        v32 = v29[2];
        v33 = v29[3];
        v29 += 4;
        v38 = v30;
        v39 = v31;
        v40 = v32;
        v41 = v33;
        v34 = v29[1];
        v42 = *v29;
        v43 = v34;
        V_LOCK();
        logfmt_raw(v48, 0x1000u, 0, &v38);
        V_UNLOCK();
        LOWORD(v35) = -14756;
        HIWORD(v35) = (unsigned int)&unk_16B55C >> 16;
        LOWORD(v36) = -6288;
        HIWORD(v36) = (unsigned int)"low power mode select!" >> 16;
        zlog(*v35, v36, 165, "gpio_write", 10, 429, 100, v48);
        close(v6);
        pthread_mutex_unlock(&stru_16C0EC);
        return -3;
      }
      else
      {
        close(v6);
        pthread_mutex_unlock(&stru_16C0EC);
        return 0;
      }
    }
  }
}

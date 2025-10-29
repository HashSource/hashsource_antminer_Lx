int __fastcall iic_uninit(int a1)
{
  pthread_mutex_t *v2; // r0
  int *v4; // r12
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r12
  _DWORD *v10; // r3
  int v11; // r1
  _DWORD v12[512]; // [sp+10h] [bp-1800h] BYREF
  char v13[4096]; // [sp+810h] [bp-1000h] BYREF

  LOWORD(v2) = -16116;
  HIWORD(v2) = (unsigned int)&unk_16B00C >> 16;
  if ( pthread_mutex_lock(v2) )
  {
    LOWORD(v4) = -4784;
    HIWORD(v4) = (unsigned int)"setup_all_chip_vbk" >> 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v8 = v4[3];
    v9 = v4[4];
    v12[0] = v5;
    v12[1] = v6;
    v12[2] = v7;
    v12[3] = v8;
    v12[4] = v9;
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    LOWORD(v10) = -14756;
    HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v11) = -5088;
    HIWORD(v11) = (unsigned int)"ing_software_reset_VBK" >> 16;
    return zlog(*v10, v11, 164, "iic_uninit", 10, 64, 100, v13);
  }
  else
  {
    i2c_uninit(a1);
    return pthread_mutex_unlock(&stru_16C10C);
  }
}

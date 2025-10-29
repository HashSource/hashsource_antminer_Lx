int __fastcall iic_write(int a1, int a2, int a3)
{
  pthread_mutex_t *v4; // r0
  int v7; // r4
  int *v9; // r12
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r12
  _DWORD *v15; // r3
  int v16; // r1
  _DWORD v17[512]; // [sp+10h] [bp-1800h] BYREF
  char v18[4096]; // [sp+810h] [bp-1000h] BYREF

  LOWORD(v4) = -16116;
  HIWORD(v4) = (unsigned int)&unk_16B00C >> 16;
  if ( pthread_mutex_lock(v4) )
  {
    LOWORD(v9) = -4784;
    HIWORD(v9) = (unsigned int)"setup_all_chip_vbk" >> 16;
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    v13 = v9[3];
    v7 = -4;
    v14 = v9[4];
    v17[0] = v10;
    v17[1] = v11;
    v17[2] = v12;
    v17[3] = v13;
    v17[4] = v14;
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, v17);
    V_UNLOCK();
    LOWORD(v15) = -14756;
    HIWORD(v15) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v16) = -5088;
    HIWORD(v16) = (unsigned int)"ing_software_reset_VBK" >> 16;
    zlog(*v15, v16, 164, "iic_write", 9, 103, 100, v18);
  }
  else
  {
    v7 = i2c_write(a1, a2, a3);
    pthread_mutex_unlock(&stru_16C10C);
  }
  return v7;
}

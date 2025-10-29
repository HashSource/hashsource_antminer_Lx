int __fastcall iic_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  pthread_mutex_t *v6; // r0
  int v10; // r4
  int *v12; // r12
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r12
  _DWORD *v18; // r3
  int v19; // r1
  _DWORD v20[512]; // [sp+10h] [bp-1804h] BYREF
  char v21[4080]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v6) = -16116;
  HIWORD(v6) = (unsigned int)&unk_16B00C >> 16;
  if ( pthread_mutex_lock(v6) )
  {
    LOWORD(v12) = -4784;
    HIWORD(v12) = (unsigned int)"setup_all_chip_vbk" >> 16;
    v13 = *v12;
    v14 = v12[1];
    v15 = v12[2];
    v16 = v12[3];
    v10 = -4;
    v17 = v12[4];
    v20[0] = v13;
    v20[1] = v14;
    v20[2] = v15;
    v20[3] = v16;
    v20[4] = v17;
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, v20);
    V_UNLOCK();
    LOWORD(v18) = -14756;
    HIWORD(v18) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v19) = -5088;
    HIWORD(v19) = (unsigned int)"ing_software_reset_VBK" >> 16;
    zlog(*v18, v19, 164, "iic_write_reg", 13, 146, 100, v21);
  }
  else
  {
    v10 = i2c_write_reg(a1, a2, a3, a4, a5);
    pthread_mutex_unlock(&stru_16C10C);
  }
  return v10;
}

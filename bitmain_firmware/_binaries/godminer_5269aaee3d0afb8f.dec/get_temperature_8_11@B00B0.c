int get_temperature_8_11()
{
  int *v0; // r3
  int v1; // r4
  int *v3; // r12
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // [sp+14h] [bp-1804h] BYREF
  _DWORD v12[5]; // [sp+18h] [bp-1800h] BYREF
  char v13; // [sp+2Ch] [bp-17ECh]
  char v14[4096]; // [sp+818h] [bp-1000h] BYREF

  LOWORD(v0) = -16540;
  HIWORD(v0) = (unsigned int)&unk_16AE64 >> 16;
  v1 = *v0;
  v11 = 0;
  if ( v1 )
  {
    fpga_read(40, &v11);
    return v11;
  }
  else
  {
    LOWORD(v3) = -7460;
    HIWORD(v3) = (unsigned int)off_13CCFC >> 16;
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    v3 += 4;
    v12[0] = v4;
    v12[1] = v5;
    v12[2] = v6;
    v12[3] = v7;
    v8 = v3[1];
    v12[4] = *v3;
    v13 = v8;
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, v12);
    V_UNLOCK();
    LOWORD(v9) = -14756;
    HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v10) = -7736;
    HIWORD(v10) = (unsigned int)"ing_get_addr_LTC" >> 16;
    zlog(*v9, v10, 167, "get_temperature_8_11", 20, 971, 100, v14);
    return 0;
  }
}

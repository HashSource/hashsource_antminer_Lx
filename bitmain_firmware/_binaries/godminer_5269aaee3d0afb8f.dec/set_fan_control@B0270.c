int __fastcall set_fan_control(int a1)
{
  int *v1; // r3
  int v2; // r4
  int *v4; // r12
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  _DWORD *v10; // r3
  int v11; // r1
  int v12; // [sp+14h] [bp-1804h] BYREF
  _DWORD v13[5]; // [sp+18h] [bp-1800h] BYREF
  char v14; // [sp+2Ch] [bp-17ECh]
  char v15[4096]; // [sp+818h] [bp-1000h] BYREF

  LOWORD(v1) = -16540;
  HIWORD(v1) = (unsigned int)&unk_16AE64 >> 16;
  v2 = *v1;
  v12 = 0;
  if ( v2 )
  {
    fpga_write(132, a1);
    return fpga_read(132, &v12);
  }
  else
  {
    LOWORD(v4) = -7460;
    HIWORD(v4) = (unsigned int)off_13CCFC >> 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v8 = v4[3];
    v4 += 4;
    v13[0] = v5;
    v13[1] = v6;
    v13[2] = v7;
    v13[3] = v8;
    v9 = v4[1];
    v13[4] = *v4;
    v14 = v9;
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, v13);
    V_UNLOCK();
    LOWORD(v10) = -14756;
    HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v11) = -7736;
    HIWORD(v11) = (unsigned int)"ing_get_addr_LTC" >> 16;
    return zlog(*v10, v11, 167, "set_fan_control", 15, 1001, 100, v15);
  }
}

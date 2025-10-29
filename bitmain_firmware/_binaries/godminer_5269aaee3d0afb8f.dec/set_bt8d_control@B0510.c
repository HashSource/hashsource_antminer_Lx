int __fastcall set_bt8d_control(int a1)
{
  _DWORD *v1; // r3
  int *v3; // r12
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  _DWORD *v9; // r3
  int v10; // r1
  _DWORD v11[5]; // [sp+10h] [bp-1804h] BYREF
  char v12; // [sp+24h] [bp-17F0h]
  char v13[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v1) = -16540;
  HIWORD(v1) = (unsigned int)&unk_16AE64 >> 16;
  if ( *v1 )
    return fpga_write(60, a1);
  LOWORD(v3) = -7460;
  HIWORD(v3) = (unsigned int)off_13CCFC >> 16;
  v4 = *v3;
  v5 = v3[1];
  v6 = v3[2];
  v7 = v3[3];
  v3 += 4;
  v11[0] = v4;
  v11[1] = v5;
  v11[2] = v6;
  v11[3] = v7;
  v8 = v3[1];
  v11[4] = *v3;
  v12 = v8;
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, v11);
  V_UNLOCK();
  LOWORD(v9) = -14756;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v10) = -7736;
  HIWORD(v10) = (unsigned int)"ing_get_addr_LTC" >> 16;
  return zlog(*v9, v10, 167, "set_bt8d_control", 16, 1042, 100, v13);
}

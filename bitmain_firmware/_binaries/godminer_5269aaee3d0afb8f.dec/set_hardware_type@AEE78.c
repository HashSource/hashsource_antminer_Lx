int __fastcall set_hardware_type(int a1)
{
  int *v1; // r3
  int v2; // r5
  int v4; // r1
  int *v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  _DWORD *v12; // r3
  int v13; // r1
  int v14; // [sp+14h] [bp-1808h] BYREF
  _DWORD v15[5]; // [sp+18h] [bp-1804h] BYREF
  char v16; // [sp+2Ch] [bp-17F0h]
  char v17[4100]; // [sp+818h] [bp-1004h] BYREF

  LOWORD(v1) = -16540;
  HIWORD(v1) = (unsigned int)&unk_16AE64 >> 16;
  v2 = *v1;
  v14 = 0;
  if ( v2 )
  {
    fpga_read(0, &v14);
    v4 = v14;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v4 = v14 | 0x80000000;
        v14 |= 0x80000000;
      }
    }
    else
    {
      v4 = v14 & 0x7FFFFFFF;
      v14 &= ~0x80000000;
    }
    fpga_write(0, v4);
    return 0;
  }
  else
  {
    LOWORD(v6) = -7460;
    HIWORD(v6) = (unsigned int)off_13CCFC >> 16;
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = v6[3];
    v6 += 4;
    v15[0] = v7;
    v15[1] = v8;
    v15[2] = v9;
    v15[3] = v10;
    v11 = v6[1];
    v15[4] = *v6;
    v16 = v11;
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, v15);
    V_UNLOCK();
    LOWORD(v12) = -14756;
    HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v13) = -7736;
    HIWORD(v13) = (unsigned int)"ing_get_addr_LTC" >> 16;
    zlog(*v12, v13, 167, "set_hardware_type", 17, 257, 100, v17);
    return -2;
  }
}

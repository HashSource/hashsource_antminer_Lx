int fan_init()
{
  _DWORD *v0; // r3
  int *v2; // lr
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int *v10; // r3
  int v11; // r0
  int v12; // r1
  _DWORD v13[7]; // [sp+10h] [bp-1804h] BYREF
  __int16 v14; // [sp+2Ch] [bp-17E8h]
  char v15[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v0) = -16540;
  HIWORD(v0) = (unsigned int)&unk_16AE64 >> 16;
  if ( *v0 )
    return 0;
  LOWORD(v2) = -7308;
  HIWORD(v2) = (unsigned int)&unk_13CD94 >> 16;
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  v2 += 4;
  v13[0] = v3;
  v13[1] = v4;
  v13[2] = v5;
  v13[3] = v6;
  v7 = v2[1];
  v8 = v2[2];
  v9 = v2[3];
  v13[4] = *v2;
  v13[5] = v7;
  v13[6] = v8;
  v14 = v9;
  V_LOCK();
  logfmt_raw(v15, 0x1000u, 0, v13);
  V_UNLOCK();
  LOWORD(v10) = -14756;
  HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
  v11 = *v10;
  LOWORD(v10) = -7344;
  LOWORD(v12) = -7276;
  HIWORD(v10) = (unsigned int)&unk_13CD70 >> 16;
  HIWORD(v12) = (unsigned int)&unk_13CDB4 >> 16;
  zlog(v11, v12, 164, v10, 8, 25, 100, v15);
  return -1;
}

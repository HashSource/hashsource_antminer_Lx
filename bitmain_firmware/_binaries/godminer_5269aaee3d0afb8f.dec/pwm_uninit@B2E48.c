int __fastcall pwm_uninit(int a1)
{
  int v1; // r3
  int result; // r0
  int *v3; // r2
  int v4; // r0
  int v5; // r1
  int v6; // r2
  _DWORD *v7; // r3
  int v8; // r1
  _DWORD v9[2]; // [sp+10h] [bp-1808h] BYREF
  __int16 v10; // [sp+18h] [bp-1800h]
  char v11; // [sp+1Ah] [bp-17FEh]
  char v12[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( a1 > 2 )
  {
    LOWORD(v3) = -6120;
    HIWORD(v3) = (unsigned int)"tmp/release/build/godminer-origin_master/backend/backend_ltc/chip_reg_io_ltc.c" >> 16;
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v9[0] = v4;
    v9[1] = v5;
    v10 = v6;
    v11 = BYTE2(v6);
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v9);
    V_UNLOCK();
    LOWORD(v7) = -14756;
    HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v8) = -4724;
    HIWORD(v8) = (unsigned int)algn_13D7AC >> 16;
    return zlog(*v7, v8, 164, "pwm_uninit", 10, 41, 100, v12);
  }
  else
  {
    LOWORD(v1) = -16092;
    result = a1 - 1;
    HIWORD(v1) = (unsigned int)&unk_16B024 >> 16;
    *(_DWORD *)(v1 + 8 * result) = 0;
    *(_BYTE *)(v1 + 8 * result + 4) = 0;
  }
  return result;
}

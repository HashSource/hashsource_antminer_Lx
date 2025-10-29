int __fastcall system_info_init(unsigned int a1)
{
  int v1; // r6
  int v2; // r8
  unsigned int v3; // r4
  char v5; // r0
  int v6; // r3
  _DWORD *v7; // r3
  int v8; // r1
  int v10; // r3
  _DWORD *v11; // r3
  int v12; // r1
  char v13[4096]; // [sp+18h] [bp-1000h] BYREF

  LOWORD(v1) = 3804;
  HIWORD(v1) = (unsigned int)"ster/frontend/frontend_dcr/frontend_dcr.c" >> 16;
  v2 = *(_DWORD *)(v1 + 4 * a1);
  if ( a1 > 0xB )
  {
    V_LOCK();
    LOWORD(v10) = 4580;
    HIWORD(v10) = (unsigned int)"d/frontend_eth/frontend_eth.c" >> 16;
    logfmt_raw(v13, 0x1000u, 0, v10, v1 + 52, v2);
    V_UNLOCK();
    LOWORD(v11) = -14756;
    HIWORD(v11) = (unsigned int)&unk_16E68C >> 16;
    LOWORD(v12) = 4600;
    HIWORD(v12) = (unsigned int)"end_eth.c" >> 16;
    zlog(*v11, v12, 134, v1 + 72, 16, 13, 100, v13);
    return -1;
  }
  else
  {
    v3 = v1 + 92 + 76 * a1;
    if ( a1 - 5 > 2 )
      v5 = 10;
    else
      v5 = 4;
    set_pic_device_high(v5);
    V_LOCK();
    LOWORD(v6) = 4736;
    HIWORD(v6) = (unsigned int)"\n" >> 16;
    logfmt_raw(v13, 0x1000u, 0, v6, v2, *(_DWORD *)(v1 + 76 * a1 + 132));
    V_UNLOCK();
    LOWORD(v7) = -14756;
    HIWORD(v7) = (unsigned int)&unk_16E68C >> 16;
    LOWORD(v8) = 4600;
    HIWORD(v8) = (unsigned int)"end_eth.c" >> 16;
    zlog(*v7, v8, 134, "system_info_init", 16, 24, 60, v13);
    power_info_init(
      *(_DWORD *)(v3 + 4),
      *(_DWORD *)(v3 + 8),
      *(_DWORD *)(v3 + 12),
      *(_DWORD *)(v3 + 16),
      *(_DWORD *)(v3 + 20),
      *(_DWORD *)(v3 + 24),
      *(_DWORD *)(v3 + 28));
    fan_info_init();
    fan_control_info_init(
      *(_DWORD *)(v3 + 40),
      *(_DWORD *)(v3 + 44),
      *(_DWORD *)(v3 + 48),
      *(_DWORD *)(v3 + 52),
      *(_DWORD *)(v3 + 56),
      *(_DWORD *)(v3 + 60),
      *(float *)(v3 + 64),
      *(_DWORD *)(v3 + 68),
      *(_DWORD *)(v3 + 72));
    return 0;
  }
}

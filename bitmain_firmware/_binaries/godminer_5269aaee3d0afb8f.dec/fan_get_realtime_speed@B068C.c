int __fastcall fan_get_realtime_speed(int a1)
{
  _DWORD *v1; // r8
  const char *v2; // r7
  int v3; // r6
  int v5; // r5
  unsigned int v7; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v9[4096]; // [sp+818h] [bp-1000h] BYREF

  LOWORD(v1) = -14756;
  LOWORD(v2) = -7108;
  LOWORD(v3) = -7276;
  v5 = 8;
  v7 = 0;
  while ( 1 )
  {
    fpga_read(4, &v7);
    HIWORD(v2) = (unsigned int)&unk_13CE5C >> 16;
    snprintf(s, 0x800u, v2, v7);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, s);
    V_UNLOCK();
    HIWORD(v1) = (unsigned int)&unk_16B55C >> 16;
    HIWORD(v3) = (unsigned int)&unk_13CDB4 >> 16;
    zlog(*v1, v3, 164, "fan_get_realtime_speed", 22, 56, 20, v9);
    if ( ((v7 >> 8) & 7) == a1 )
      break;
    usleep(0x2710u);
    if ( !--v5 )
      return -1;
  }
  return 120 * (unsigned __int8)v7;
}

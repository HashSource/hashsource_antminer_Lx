int __fastcall chip_setting_nonce_len_kda(int a1)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  _DWORD v6[4]; // [sp+10h] [bp-1010h] BYREF
  char v7[4096]; // [sp+20h] [bp-1000h] BYREF

  v6[0] = 4;
  v6[2] = 5505025;
  v6[3] = 0;
  v6[1] = 0;
  V_LOCK();
  LOWORD(v2) = -13548;
  HIWORD(v2) = (unsigned int)off_13B59C >> 16;
  logfmt_raw(v7, 0x1000u, 0, v2, 4);
  V_UNLOCK();
  LOWORD(v3) = -14756;
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v4) = -13708;
  HIWORD(v4) = (unsigned int)"check_nonce_grin29" >> 16;
  zlog(*v3, v4, 159, "chip_setting_nonce_len_kda", 26, 134, 60, v7);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v6);
}

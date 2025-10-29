int __fastcall set_dhash_acc_control(int a1)
{
  const char *v2; // r2
  _DWORD *v3; // r3
  int v4; // r1
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v7[4096]; // [sp+810h] [bp-1000h] BYREF

  fpga_write(256, a1);
  LOWORD(v2) = -7436;
  HIWORD(v2) = (unsigned int)off_13CD14 >> 16;
  snprintf(s, 0x800u, v2, a1);
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v3) = -14756;
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v4) = -7736;
  HIWORD(v4) = (unsigned int)"ing_get_addr_LTC" >> 16;
  return zlog(*v3, v4, 167, "set_dhash_acc_control", 21, 343, 40, v7);
}

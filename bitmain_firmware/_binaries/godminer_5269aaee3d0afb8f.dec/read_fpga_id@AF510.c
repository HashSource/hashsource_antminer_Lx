int __fastcall read_fpga_id(char *a1)
{
  const char *v2; // r1
  const char *v3; // r2
  _DWORD *v4; // r3
  int v5; // r1
  int v7; // [sp+10h] [bp-1808h] BYREF
  int v8; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v10[4096]; // [sp+818h] [bp-1000h] BYREF

  v7 = 0;
  v8 = 0;
  fpga_read(240, &v7);
  fpga_read(244, &v8);
  LOWORD(v2) = -7364;
  HIWORD(v2) = (unsigned int)&unk_13CD5C >> 16;
  sprintf(a1, v2, v8, v7);
  LOWORD(v3) = -7352;
  HIWORD(v3) = (unsigned int)&unk_13CD68 >> 16;
  snprintf(s, 0x800u, v3, v7, v8);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v4) = -14756;
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v5) = -7736;
  HIWORD(v5) = (unsigned int)"ing_get_addr_LTC" >> 16;
  return zlog(*v4, v5, 167, "read_fpga_id", 12, 379, 100, v10);
}

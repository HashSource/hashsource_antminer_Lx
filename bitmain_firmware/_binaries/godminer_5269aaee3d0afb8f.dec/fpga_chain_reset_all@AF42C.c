int fpga_chain_reset_all()
{
  const char *v0; // r2
  _DWORD *v1; // r3
  int v2; // r1
  unsigned int v4; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v6[4100]; // [sp+818h] [bp-1004h] BYREF

  v4 = 0;
  fpga_read(52, &v4);
  fpga_write(52, ~(~HIWORD(v4) << 16));
  sleep(3u);
  fpga_read(52, &v4);
  fpga_write(52, HIWORD(v4) << 16);
  sleep(1u);
  LOWORD(v0) = -7404;
  HIWORD(v0) = (unsigned int)&unk_13CD34 >> 16;
  snprintf(s, 0x800u, v0, v4);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v1) = -14756;
  HIWORD(v1) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v2) = -7736;
  HIWORD(v2) = (unsigned int)"ing_get_addr_LTC" >> 16;
  return zlog(*v1, v2, 167, "fpga_chain_reset_all", 20, 369, 20, v6);
}

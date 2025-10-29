int __fastcall global_idx_init_dash(int a1)
{
  void *v2; // r0
  void *v3; // r5
  int v4; // r3
  int *v5; // r3
  int v6; // r0
  int v7; // r1
  char v9[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = calloc(0x5808u, 1u);
  *(_DWORD *)(a1 + 624) = v2;
  v3 = v2;
  V_LOCK();
  LOWORD(v4) = 26672;
  HIWORD(v4) = (unsigned int)"chip baud detected as %d" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v4, v3);
  V_UNLOCK();
  LOWORD(v5) = -14756;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  v6 = *v5;
  LOWORD(v7) = 32360;
  LOWORD(v5) = 30944;
  HIWORD(v5) = (unsigned int)"ildroot/tmp/release/build/godminer-origin_master/backend/chip_reg_io_interface.c" >> 16;
  HIWORD(v7) = (unsigned int)"software_reset %s %02x" >> 16;
  zlog(v6, v7, 156, v5, 20, 59, 20, v9);
  return 0;
}

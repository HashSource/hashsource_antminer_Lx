__int64 __fastcall read_fpga_id(char *a1)
{
  char v3[8]; // [sp+18h] [bp+8h] BYREF
  _BYTE v4[8]; // [sp+818h] [bp+808h] BYREF
  int v5; // [sp+1818h] [bp+1808h] BYREF
  int v6; // [sp+181Ch] [bp+180Ch] BYREF

  v6 = 0;
  v5 = 0;
  fpga_read(0xF0u, &v6);
  fpga_read(0xF4u, &v5);
  sprintf(a1, "%08x%08x", v5, v6);
  snprintf(v3, 0x800u, "\n%x %x\n", v6, v5);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
           96,
           "read_fpga_id",
           12,
           379,
           100,
           v4);
}

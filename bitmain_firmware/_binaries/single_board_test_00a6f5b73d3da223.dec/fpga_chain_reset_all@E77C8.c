__int64 fpga_chain_reset_all()
{
  char v1[4]; // [sp+14h] [bp+4h] BYREF
  int v2; // [sp+814h] [bp+804h] BYREF
  unsigned int v3; // [sp+1814h] [bp+1804h] BYREF

  v3 = 0;
  fpga_read(0x34u, &v3);
  fpga_write(0x34u, ~(~HIWORD(v3) << 16));
  sleep(3u);
  fpga_read(0x34u, &v3);
  fpga_write(0x34u, HIWORD(v3) << 16);
  sleep(1u);
  snprintf(v1, 0x800u, "fpga fpga_chain_reset_all success 0x%x\n", v3);
  V_LOCK();
  logfmt_raw(&v2, 0x1000u, 0, v1);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
           96,
           "fpga_chain_reset_all",
           20,
           369,
           20,
           &v2);
}

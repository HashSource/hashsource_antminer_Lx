void fpga_uninit()
{
  char v0[2048]; // [sp+14h] [bp+4h] BYREF
  int v1; // [sp+814h] [bp+804h] BYREF
  int v2; // [sp+1814h] [bp+1804h]

  if ( dword_47B314 )
  {
    v2 = munmap((void *)dword_47B31C, 0x1200u);
    if ( v2 < 0 )
    {
      strcpy(v0, "munmap axi_fpga_addr_hal failed!\n");
      V_LOCK();
      logfmt_raw(&v1, 0x1000u, 0, v0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_fpga.c",
        94,
        "fpga_uninit",
        11,
        95,
        100,
        &v1);
    }
    v2 = munmap((void *)dword_47B324, 0x1000000u);
    if ( v2 < 0 )
    {
      strcpy(v0, "munmap fpga_mem_addr_hal failed!\n");
      V_LOCK();
      logfmt_raw(&v1, 0x1000u, 0, v0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_fpga.c",
        94,
        "fpga_uninit",
        11,
        101,
        100,
        &v1);
    }
    dword_47B314 = 0;
    close(dword_47B318);
  }
}

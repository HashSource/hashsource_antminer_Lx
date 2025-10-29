int fpga_init()
{
  char v2[2048]; // [sp+10h] [bp+0h] BYREF
  _BYTE v3[4096]; // [sp+810h] [bp+800h] BYREF

  if ( dword_47B314 )
    return 0;
  dword_47B318 = open("/dev/axi_fpga_dev", 2);
  if ( dword_47B318 >= 0 )
  {
    dword_47B31C = (int)mmap(0, 0x1200u, 3, 1, dword_47B318, 0);
    if ( dword_47B31C )
    {
      snprintf(v2, 0x800u, "fpga_init success. axi_fpga_addr_hal = 0x%x\n", dword_47B31C);
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_fpga.c",
        94,
        "fpga_init",
        9,
        59,
        20,
        v3);
      dword_47B320 = open("/dev/fpga_mem", 2);
      if ( dword_47B320 >= 0 )
      {
        dword_47B324 = (int)mmap(0, 0x1000000u, 3, 1, dword_47B320, 0);
        if ( dword_47B324 )
        {
          snprintf(v2, 0x800u, "mmap fpga_mem_addr_hal = 0x%x\n", dword_47B324);
          V_LOCK();
          logfmt_raw(v3, 0x1000u, 0, v2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_fpga.c",
            94,
            "fpga_init",
            9,
            76,
            40,
            v3);
          dword_47B314 = 1;
          return 0;
        }
        else
        {
          snprintf(v2, 0x800u, "mmap fpga_mem_addr_hal failed. fpga_mem_addr_hal = 0x%x\n", 0);
          V_LOCK();
          logfmt_raw(v3, 0x1000u, 0, v2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_fpga.c",
            94,
            "fpga_init",
            9,
            73,
            100,
            v3);
          return -1;
        }
      }
      else
      {
        snprintf(v2, 0x800u, "/dev/fpga_mem open failed. fd_fpga_mem_hal = %d\n", dword_47B320);
        V_LOCK();
        logfmt_raw(v3, 0x1000u, 0, v2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_fpga.c",
          94,
          "fpga_init",
          9,
          64,
          100,
          v3);
        perror("open");
        return -1;
      }
    }
    else
    {
      snprintf(v2, 0x800u, "mmap axi_fpga_addr_hal failed. axi_fpga_addr_hal = 0x%x\n", 0);
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_fpga.c",
        94,
        "fpga_init",
        9,
        53,
        100,
        v3);
      close(dword_47B318);
      return -2;
    }
  }
  else
  {
    snprintf(v2, 0x800u, "/dev/axi_fpga_dev open failed. fd = %d\n", dword_47B318);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_fpga.c",
      94,
      "fpga_init",
      9,
      45,
      100,
      v3);
    return -1;
  }
}

int fpga_init()
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16AFBC )
    return 0;
  dword_16AFC0 = open64("/dev/axi_fpga_dev");
  if ( dword_16AFC0 < 0 )
  {
    snprintf(s, 0x800u, "/dev/axi_fpga_dev open failed. fd = %d\n", dword_16AFC0);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_fpga.c",
      165,
      "fpga_init",
      9,
      45,
      100,
      v5);
    return -1;
  }
  else
  {
    v1 = mmap64(0, 4608, 3, 1, dword_16AFC0);
    dword_16AFC4 = v1;
    if ( v1 )
    {
      snprintf(s, 0x800u, "fpga_init success. axi_fpga_addr_hal = 0x%x\n", v1);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_fpga.c",
        165,
        "fpga_init",
        9,
        59,
        20,
        v5);
      v2 = open64("/dev/fpga_mem");
      if ( v2 < 0 )
      {
        snprintf(s, 0x800u, "/dev/fpga_mem open failed. fd_fpga_mem_hal = %d\n", v2);
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_fpga.c",
          165,
          "fpga_init",
          9,
          64,
          100,
          v5);
        perror("open");
        return -1;
      }
      else
      {
        v3 = mmap64(0, 0x1000000, 3, 1, v2);
        dword_16AFC8 = v3;
        if ( v3 )
        {
          snprintf(s, 0x800u, "mmap fpga_mem_addr_hal = 0x%x\n", v3);
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_fpga.c",
            165,
            "fpga_init",
            9,
            76,
            40,
            v5);
          dword_16AFBC = 1;
          return 0;
        }
        else
        {
          snprintf(s, 0x800u, "mmap fpga_mem_addr_hal failed. fpga_mem_addr_hal = 0x%x\n", 0);
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_fpga.c",
            165,
            "fpga_init",
            9,
            73,
            100,
            v5);
          return -1;
        }
      }
    }
    else
    {
      snprintf(s, 0x800u, "mmap axi_fpga_addr_hal failed. axi_fpga_addr_hal = 0x%x\n", 0);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_fpga.c",
        165,
        "fpga_init",
        9,
        53,
        100,
        v5);
      close(dword_16AFC0);
      return -2;
    }
  }
}

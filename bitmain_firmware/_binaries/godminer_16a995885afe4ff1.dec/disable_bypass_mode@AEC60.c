int disable_bypass_mode()
{
  int v1; // [sp+14h] [bp-1808h] BYREF
  char v2[2040]; // [sp+18h] [bp-1804h] BYREF
  char v3[4100]; // [sp+818h] [bp-1004h] BYREF

  v1 = 0;
  if ( platform_inited )
  {
    fpga_read(0, &v1);
    v1 &= ~0x20000000u;
    fpga_write(0, v1);
    return 0;
  }
  else
  {
    strcpy(v2, "platform not inited\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/platform/7007/7007_common.c",
      182,
      "disable_bypass_mode",
      19,
      294,
      100,
      v3);
    return -2;
  }
}

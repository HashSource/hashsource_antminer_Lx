unsigned int is_bypass_mode_enable()
{
  unsigned int v1; // [sp+14h] [bp-1804h] BYREF
  char v2[2040]; // [sp+18h] [bp-1800h] BYREF
  char v3[4096]; // [sp+818h] [bp-1000h] BYREF

  v1 = 0;
  if ( platform_inited )
  {
    fpga_read(0, &v1);
    return (v1 >> 29) & 1;
  }
  else
  {
    strcpy(v2, "platform not inited\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_common.c",
      167,
      "is_bypass_mode_enable",
      21,
      308,
      100,
      v3);
    return 0;
  }
}

int get_hardware_type()
{
  char v2[2048]; // [sp+14h] [bp+4h] BYREF
  int v3; // [sp+814h] [bp+804h] BYREF
  int v4; // [sp+1814h] [bp+1804h] BYREF

  v4 = 0;
  if ( platform_inited )
  {
    fpga_read(0, &v4);
    return v4 < 0;
  }
  else
  {
    strcpy(v2, "platform not inited\n");
    V_LOCK();
    logfmt_raw(&v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
      96,
      "get_hardware_type",
      17,
      240,
      100,
      &v3);
    return 2;
  }
}

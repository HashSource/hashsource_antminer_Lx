int __fastcall set_hardware_type(int a1)
{
  char v4[2048]; // [sp+1Ch] [bp+Ch] BYREF
  int v5; // [sp+81Ch] [bp+80Ch] BYREF
  int v6; // [sp+181Ch] [bp+180Ch] BYREF

  v6 = 0;
  if ( platform_inited )
  {
    fpga_read(0, &v6);
    if ( a1 )
    {
      if ( a1 == 1 )
        v6 |= 0x80000000;
    }
    else
    {
      v6 &= ~0x80000000;
    }
    fpga_write(0, v6);
    return 0;
  }
  else
  {
    strcpy(v4, "platform not inited\n");
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
      96,
      "set_hardware_type",
      17,
      257,
      100,
      &v5);
    return -2;
  }
}

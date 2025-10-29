int __fastcall set_fan_control(int a1)
{
  char v2[2048]; // [sp+1Ch] [bp+Ch] BYREF
  int v3; // [sp+81Ch] [bp+80Ch] BYREF
  int v4; // [sp+181Ch] [bp+180Ch] BYREF

  v4 = 0;
  if ( platform_inited )
  {
    fpga_write(0x84u, a1);
    return fpga_read(0x84u, &v4);
  }
  else
  {
    strcpy(v2, "platform not inited\n");
    V_LOCK();
    logfmt_raw(&v3, 0x1000u, 0, v2);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
             96,
             "set_fan_control",
             15,
             1001,
             100,
             &v3);
  }
}

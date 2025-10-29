int __fastcall set_bt8d_control(int a1)
{
  char v2[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v3[4096]; // [sp+818h] [bp+808h] BYREF

  if ( platform_inited )
    return fpga_write(0x3Cu, a1);
  strcpy(v2, "platform not inited\n");
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, v2);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
           96,
           "set_bt8d_control",
           16,
           1042,
           100,
           v3);
}

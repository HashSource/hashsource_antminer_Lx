int __fastcall sub_E80B4(int a1)
{
  int result; // r0
  char v3[2048]; // [sp+1Ch] [bp+Ch] BYREF
  int v4; // [sp+81Ch] [bp+80Ch] BYREF
  int v5; // [sp+181Ch] [bp+180Ch]

  v5 = 0;
  fpga_write(0xC0u, a1);
  if ( a1 >= 0 )
    return sub_E8098();
  while ( 1 )
  {
    result = sub_E8098();
    if ( result >= 0 )
      break;
    usleep(0x3E8u);
    if ( (unsigned int)++v5 > 0xBB8 )
    {
      strcpy(v3, "Error: set_BC_write_command timeout!\n");
      V_LOCK();
      logfmt_raw(&v4, 0x1000u, 0, v3);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
               96,
               "set_BC_write_command",
               20,
               782,
               100,
               &v4);
    }
  }
  return result;
}

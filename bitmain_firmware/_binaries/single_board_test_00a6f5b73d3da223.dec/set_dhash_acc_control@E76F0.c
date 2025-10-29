__int64 __fastcall set_dhash_acc_control(int a1)
{
  char s[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v4[4096]; // [sp+818h] [bp+808h] BYREF

  fpga_write(0x100u, a1);
  snprintf(s, 0x800u, "set DHASH_ACC_CONTROL is 0x%x\n", a1);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_common.c",
           96,
           "set_dhash_acc_control",
           21,
           343,
           40,
           v4);
}

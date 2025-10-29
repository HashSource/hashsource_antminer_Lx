int __fastcall fan_get_realtime_speed(int a1)
{
  char v4[8]; // [sp+18h] [bp+8h] BYREF
  _BYTE v5[8]; // [sp+818h] [bp+808h] BYREF
  unsigned int v6; // [sp+1818h] [bp+1808h] BYREF
  int i; // [sp+181Ch] [bp+180Ch]

  v6 = 0;
  for ( i = 0; i <= 7; ++i )
  {
    fpga_read(4u, &v6);
    snprintf(v4, 0x800u, "FAN_SPEED fpga value = 0x%x\n", v6);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_fan.c",
      93,
      "fan_get_realtime_speed",
      22,
      56,
      20,
      v5);
    if ( ((v6 >> 8) & 7) == a1 )
      return 120 * (unsigned __int8)v6;
    usleep(0x2710u);
  }
  return -1;
}

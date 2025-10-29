bool __fastcall sub_E35A0(unsigned __int8 *a1)
{
  unsigned __int8 *v2; // r2
  unsigned __int8 *v4; // [sp+14h] [bp+4h]
  char v5[16]; // [sp+18h] [bp+8h] BYREF
  _BYTE v6[16]; // [sp+818h] [bp+808h] BYREF
  int v7; // [sp+1818h] [bp+1808h]
  unsigned __int16 v8; // [sp+181Eh] [bp+180Eh]
  unsigned int i; // [sp+1820h] [bp+1810h]
  unsigned __int16 v10; // [sp+1826h] [bp+1816h]

  v4 = a1;
  v10 = 0;
  v8 = 0;
  v7 = 0;
  i = 0;
  if ( !a1 || *a1 <= 3u )
    return 0;
  v7 = *a1;
  for ( i = 0; v7 - 2 > i; ++i )
  {
    v2 = v4++;
    v10 += *v2;
  }
  v8 = *v4 << 8;
  v8 |= v4[1];
  snprintf(v5, 0x800u, "sum1,sum2 = %d,%d", v10, v8);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, v5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
    87,
    "check_pic_crc",
    13,
    397,
    20,
    v6);
  return v10 == v8;
}

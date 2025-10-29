int __fastcall sub_EEEF8(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int a3)
{
  char v7[2048]; // [sp+24h] [bp+14h] BYREF
  _BYTE v8[12]; // [sp+824h] [bp+814h] BYREF
  unsigned __int16 v9; // [sp+1824h] [bp+1814h]
  unsigned __int16 v10; // [sp+1826h] [bp+1816h]
  int v11; // [sp+1828h] [bp+1818h]
  unsigned int i; // [sp+182Ch] [bp+181Ch]

  i = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  if ( !a1 || !a2 || !a3 )
    return -2147482879;
  i = 2;
  v10 = 0;
  while ( a3 - 2 > i )
    v10 += a2[i++];
  v9 = a2[a3 - 2] + (a2[a3 - 1] << 8);
  if ( v10 == v9 )
  {
    if ( *a1 != *a2 || a1[1] != a2[1] || a1[3] != a2[3] || a2[2] + 2 != a3 )
    {
      strcpy(v7, "power reply the bad data\n");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
        95,
        "check_read_back_data",
        20,
        94,
        100,
        v8);
      v11 = -2147482880;
    }
  }
  else
  {
    snprintf(v7, 0x800u, "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n", v10, v9);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      95,
      "check_read_back_data",
      20,
      88,
      100,
      v8);
    v11 = -2147482880;
  }
  if ( v11 )
  {
    for ( i = 0; i < a3; ++i )
    {
      snprintf(v7, 0x800u, "read_back_data[%d] = 0x%02x", i, a2[i]);
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
        95,
        "check_read_back_data",
        20,
        100,
        100,
        v8);
    }
  }
  return v11;
}

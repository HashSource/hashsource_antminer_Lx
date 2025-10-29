int bitmain_set_voltage()
{
  char v2[8]; // [sp+18h] [bp+8h] BYREF
  _BYTE v3[8]; // [sp+818h] [bp+808h] BYREF
  unsigned int v4; // [sp+1818h] [bp+1808h]
  int v5; // [sp+181Ch] [bp+180Ch]

  v5 = 0;
  v4 = 0;
  if ( dword_47B8C4 || (v5 = bitmain_power_open(), v5 >= 0) )
  {
    v4 = bitmain_convert_V_to_N();
    if ( v4 < 0x100 )
      return sub_EFC70(dword_47B8C0, v4);
    else
      return -2147482879;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      95,
      "bitmain_set_voltage",
      19,
      479,
      100,
      v3);
    return v5;
  }
}

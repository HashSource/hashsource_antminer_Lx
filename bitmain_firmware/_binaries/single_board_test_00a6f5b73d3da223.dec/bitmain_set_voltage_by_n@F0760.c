int __fastcall bitmain_set_voltage_by_n(unsigned __int8 a1)
{
  char v4[4]; // [sp+1Ch] [bp+Ch] BYREF
  int v5; // [sp+81Ch] [bp+80Ch] BYREF
  int v6; // [sp+181Ch] [bp+180Ch]

  v6 = 0;
  if ( dword_47B8C4 )
    return sub_EFC70(dword_47B8C0, a1);
  v6 = bitmain_power_open();
  if ( v6 >= 0 )
    return sub_EFC70(dword_47B8C0, a1);
  snprintf(v4, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage_by_n");
  V_LOCK();
  logfmt_raw(&v5, 0x1000u, 0, v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
    95,
    "bitmain_set_voltage_by_n",
    24,
    493,
    100,
    &v5);
  return v6;
}

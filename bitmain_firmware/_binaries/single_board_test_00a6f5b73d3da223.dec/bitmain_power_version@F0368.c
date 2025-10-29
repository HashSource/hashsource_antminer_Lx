int bitmain_power_version()
{
  char v2[4]; // [sp+14h] [bp+4h] BYREF
  int v3; // [sp+814h] [bp+804h] BYREF
  int v4; // [sp+1814h] [bp+1804h]

  v4 = 0;
  if ( dword_47B8C4 || (v4 = bitmain_power_open(), v4 >= 0) )
  {
    v4 = sub_EFF44(dword_47B8C0);
    if ( v4 > 0 )
      dword_47B8C8 = v4;
    return v4;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_version");
    V_LOCK();
    logfmt_raw(&v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      95,
      "bitmain_power_version",
      21,
      452,
      100,
      &v3);
    return v4;
  }
}

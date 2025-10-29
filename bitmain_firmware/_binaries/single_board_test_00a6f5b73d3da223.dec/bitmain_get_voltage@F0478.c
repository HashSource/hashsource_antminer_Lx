void bitmain_get_voltage()
{
  char v0[2048]; // [sp+14h] [bp+4h] BYREF
  int v1; // [sp+814h] [bp+804h] BYREF
  int v2; // [sp+1814h] [bp+1804h]

  v2 = 0;
  if ( dword_47B8C4 || (v2 = bitmain_power_open(), v2 >= 0) )
  {
    v2 = sub_EFA14(dword_47B8C0);
    if ( v2 >= 0 )
    {
      bitmain_convert_N_to_V();
    }
    else
    {
      strcpy(v0, "can nont get voltage\n");
      V_LOCK();
      logfmt_raw(&v1, 0x1000u, 0, v0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
        95,
        "bitmain_get_voltage",
        19,
        467,
        100,
        &v1);
    }
  }
  else
  {
    snprintf(v0, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_voltage");
    V_LOCK();
    logfmt_raw(&v1, 0x1000u, 0, v0);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      95,
      "bitmain_get_voltage",
      19,
      463,
      100,
      &v1);
  }
}

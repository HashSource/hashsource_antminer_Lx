int bitmain_set_voltage()
{
  int v0; // r5
  unsigned int v1; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16B454 || (v0 = sub_B79C4(), v0 >= 0) )
  {
    v1 = bitmain_convert_V_to_N();
    if ( v1 > 0xFF )
      return -2147482879;
    else
      return sub_B76A8(dword_16B450, (unsigned __int8)v1);
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "bitmain_set_voltage",
      19,
      479,
      100,
      v4);
  }
  return v0;
}

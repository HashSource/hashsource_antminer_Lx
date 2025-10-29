int bitmain_set_voltage()
{
  int v0; // r5
  unsigned int v1; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16C554 || (v0 = sub_B87A4(), v0 >= 0) )
  {
    v1 = bitmain_convert_V_to_N();
    if ( v1 > 0xFF )
      return -2147482879;
    else
      return sub_B8488(dword_16C550, (unsigned __int8)v1);
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/power/bitmain_power_APW9.c",
      181,
      "bitmain_set_voltage",
      19,
      481,
      100,
      v4);
  }
  return v0;
}

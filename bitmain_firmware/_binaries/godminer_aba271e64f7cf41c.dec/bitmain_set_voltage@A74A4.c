int bitmain_set_voltage()
{
  int v0; // s0
  int v1; // s1
  char v4[12]; // [sp+18h] [bp-180Ch] BYREF
  char v5[12]; // [sp+818h] [bp-100Ch] BYREF
  int v6; // [sp+1818h] [bp-Ch]
  unsigned int v7; // [sp+181Ch] [bp-8h]

  v6 = 0;
  v7 = 0;
  if ( dword_15FAD4 || (v6 = bitmain_power_open(), v6 >= 0) )
  {
    v7 = bitmain_convert_V_to_N();
    if ( v7 < 0x100 )
      return sub_A53FC(dword_15FAD0, v7);
    else
      return -2147482879;
  }
  else
  {
    snprintf(v4, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_voltage");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "bitmain_set_voltage",
      19,
      780,
      100,
      v5,
      v0,
      v1);
    return v6;
  }
}

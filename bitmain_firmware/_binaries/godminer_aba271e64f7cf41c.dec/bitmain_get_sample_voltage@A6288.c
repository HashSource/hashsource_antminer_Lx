void bitmain_get_sample_voltage()
{
  char v0[2048]; // [sp+14h] [bp-1808h] BYREF
  char v1[8]; // [sp+814h] [bp-1008h] BYREF
  int v2; // [sp+1814h] [bp-8h]

  v2 = 0;
  if ( dword_15FAD4 || (v2 = bitmain_power_open(), v2 >= 0) )
  {
    v2 = sub_A57D4(dword_15FAD0);
    if ( v2 >= 0 )
    {
      sub_A618C();
    }
    else
    {
      strcpy(v0, "can not get sample voltage");
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, v0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "bitmain_get_sample_voltage",
        26,
        596,
        100,
        v1);
    }
  }
  else
  {
    snprintf(v0, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_sample_voltage");
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, v0);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "bitmain_get_sample_voltage",
      26,
      592,
      100,
      v1);
  }
}

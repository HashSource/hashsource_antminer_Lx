int bitmain_power_fw_version()
{
  char v2[8]; // [sp+14h] [bp-1808h] BYREF
  char v3[8]; // [sp+814h] [bp-1008h] BYREF
  int v4; // [sp+1814h] [bp-8h]

  v4 = 0;
  if ( dword_15FAD4 || (v4 = bitmain_power_open(), v4 >= 0) )
  {
    dword_15FADC = sub_A4A58(dword_15FAD0);
    return dword_15FADC;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_fw_version");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "bitmain_power_fw_version",
      24,
      742,
      100,
      v3);
    return v4;
  }
}

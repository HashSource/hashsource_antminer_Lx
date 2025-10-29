int __fastcall bitmain_set_watchdog(char a1)
{
  char v4[2048]; // [sp+1Ch] [bp-1808h] BYREF
  char v5[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v6; // [sp+181Ch] [bp-8h]

  v6 = 0;
  if ( dword_15FAD4 || (v6 = bitmain_power_open(), v6 >= 0) )
  {
    if ( a1 == 1 )
      v6 = sub_A5AF0(dword_15FAD0, 1u);
    else
      v6 = sub_A5AF0(dword_15FAD0, 0);
    if ( v6 < 0 )
    {
      strcpy(v4, "can nont set power watchdog");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "bitmain_set_watchdog",
        20,
        673,
        100,
        v5);
    }
    return v6;
  }
  else
  {
    snprintf(v4, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_watchdog");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "bitmain_set_watchdog",
      20,
      661,
      100,
      v5);
    return v6;
  }
}

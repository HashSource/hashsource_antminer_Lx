int __fastcall fan_get_realtime_speed(unsigned int a1)
{
  char v3[8]; // [sp+1Ch] [bp-1808h] BYREF
  char v4[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v5; // [sp+181Ch] [bp-8h]

  v5 = 0;
  if ( a1 > 7 )
  {
    snprintf(v3, 0x800u, "bad fan id = %d\n", a1);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_fan.c",
      185,
      "fan_get_realtime_speed",
      22,
      128,
      100,
      v4);
  }
  return dword_1505A8[a1];
}

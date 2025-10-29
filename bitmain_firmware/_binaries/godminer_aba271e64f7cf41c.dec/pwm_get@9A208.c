int __fastcall pwm_get(int a1, _DWORD *a2)
{
  char v4[2048]; // [sp+1Ch] [bp-1808h] BYREF
  char v5[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v6; // [sp+181Ch] [bp-8h]

  v6 = -5;
  if ( a1 - 1 <= 1 )
  {
    if ( a1 == 1 )
    {
      *a2 = dword_15F998;
      snprintf(v4, 0x800u, "val of fpga = 0x%x\n", *a2);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_pwm.c",
        185,
        "pwm_get",
        7,
        113,
        20,
        v5);
    }
    return v6;
  }
  else
  {
    strcpy(v4, "bad param\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_pwm.c",
      185,
      "pwm_get",
      7,
      106,
      100,
      v5);
    return -3;
  }
}

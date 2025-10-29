int __fastcall pwm_set(int a1, unsigned int a2)
{
  int v3; // r3
  unsigned int v5; // [sp+10h] [bp-1894h]
  char v6[2048]; // [sp+1Ch] [bp-1888h] BYREF
  char v7[8]; // [sp+81Ch] [bp-1088h] BYREF
  char s[128]; // [sp+181Ch] [bp-88h] BYREF
  int v9; // [sp+189Ch] [bp-8h]

  v9 = -5;
  if ( a1 - 1 <= 1 )
  {
    if ( a1 == 1 )
    {
      v3 = a2;
      if ( a2 >= 0x64 )
        v3 = 100;
      dword_15F998 = v3;
      v5 = (int)"time" * v3 / 0x64u;
      sprintf(s, "echo 0 > %s/enable", "/sys/class/pwm/pwmchip8/pwm0");
      system(s);
      sprintf(s, "echo %u > %s/period", "time", "/sys/class/pwm/pwmchip8/pwm0");
      system(s);
      sprintf(s, "echo %u > %s/duty_cycle", v5, "/sys/class/pwm/pwmchip8/pwm0");
      system(s);
      sprintf(s, "echo 1 > %s/enable", "/sys/class/pwm/pwmchip8/pwm0");
      system(s);
      sprintf(s, "echo 0 > %s/enable", "/sys/class/pwm/pwmchip8/pwm1");
      system(s);
      sprintf(s, "echo %u > %s/period", "time", "/sys/class/pwm/pwmchip8/pwm1");
      system(s);
      sprintf(s, "echo %u > %s/duty_cycle", v5, "/sys/class/pwm/pwmchip8/pwm1");
      system(s);
      sprintf(s, "echo 1 > %s/enable", "/sys/class/pwm/pwmchip8/pwm1");
      system(s);
      return 0;
    }
    else
    {
      snprintf(v6, 0x800u, "pwm type %d not supported\n", a1 - 1);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_pwm.c",
        185,
        "pwm_set",
        7,
        88,
        100,
        v7);
    }
    return v9;
  }
  else
  {
    strcpy(v6, "bad param\n");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_pwm.c",
      185,
      "pwm_set",
      7,
      59,
      100,
      v7);
    return -3;
  }
}

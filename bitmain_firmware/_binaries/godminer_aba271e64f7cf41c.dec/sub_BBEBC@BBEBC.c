void sub_BBEBC()
{
  char v0[2048]; // [sp+14h] [bp-1810h] BYREF
  char v1[16]; // [sp+814h] [bp-1010h] BYREF
  int buf; // [sp+1814h] [bp-10h] BYREF
  char v3; // [sp+1818h] [bp-Ch]
  ssize_t v4; // [sp+181Ch] [bp-8h]

  if ( dword_16057C )
  {
    buf = 28265;
    v3 = 0;
    v4 = write(dword_150C28, &buf, 2u);
    if ( v4 != 2 )
    {
      strcpy(v0, "write in");
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, v0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        189,
        "set_sda_in",
        10,
        207,
        40,
        v1);
    }
    close(dword_150C24);
    dword_150C24 = -1;
    dword_150C24 = open("/sys/class/gpio/gpio461/value", 0);
    if ( dword_150C24 < 0 )
    {
      strcpy(v0, "open gpio461 failed");
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, v0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        189,
        "set_sda_in",
        10,
        215,
        40,
        v1);
    }
    dword_16057C = 0;
  }
}

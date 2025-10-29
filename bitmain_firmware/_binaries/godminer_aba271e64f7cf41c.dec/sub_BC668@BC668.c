int __fastcall sub_BC668(char a1)
{
  char v4[2048]; // [sp+1Ch] [bp-1808h] BYREF
  char v5[8]; // [sp+81Ch] [bp-1008h] BYREF
  char v6; // [sp+181Dh] [bp-7h]
  unsigned __int8 v7; // [sp+181Eh] [bp-6h]
  unsigned __int8 i; // [sp+181Fh] [bp-5h]

  v7 = 0;
  sub_BBEBC();
  for ( i = 0x80; i; i >>= 1 )
  {
    sub_BB194();
    sub_BAE88();
    close(dword_150C24);
    dword_150C24 = open("/sys/class/gpio/gpio461/value", 0);
    if ( dword_150C24 < 0 )
    {
      strcpy(v4, "open gpio461 failed");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        189,
        "i2c_recv_data",
        13,
        380,
        40,
        v5);
      sub_BB098();
      sub_BAE88();
      return 255;
    }
    v6 = sub_BB290();
    if ( v6 == 1 )
    {
      v7 |= i;
    }
    else if ( v6 == -1 )
    {
      sub_BB098();
      sub_BAE88();
      strcpy(v4, "read GPIO461 error");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        189,
        "i2c_recv_data",
        13,
        395,
        40,
        v5);
      return 255;
    }
    sub_BB098();
    sub_BAE88();
  }
  sub_BC480(a1);
  return v7;
}

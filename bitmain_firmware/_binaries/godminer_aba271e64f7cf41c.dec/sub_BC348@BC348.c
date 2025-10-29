int sub_BC348()
{
  char v2[8]; // [sp+14h] [bp-1808h] BYREF
  char v3[8]; // [sp+814h] [bp-1008h] BYREF
  char v4; // [sp+1816h] [bp-6h]
  char v5; // [sp+1817h] [bp-5h]

  v4 = 0;
  sub_BB194();
  sub_BAE88();
  sub_BBEBC();
  while ( 1 )
  {
    v5 = sub_BB290();
    if ( !v5 )
      break;
    if ( v5 == -1 )
    {
      snprintf(v2, 0x800u, "%s:%d ack error", "i2c_check_ack", 293);
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        189,
        "i2c_check_ack",
        13,
        293,
        40,
        v3);
      sub_BB098();
      sub_BAE88();
      return 0;
    }
    ++v4;
    sub_BB098();
    sub_BAE88();
    sub_BB194();
    sub_BAE88();
  }
  sub_BB098();
  sub_BAE88();
  return 1;
}

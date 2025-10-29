int sub_BB290()
{
  char v2[12]; // [sp+10h] [bp-180Ch] BYREF
  char v3[12]; // [sp+810h] [bp-100Ch] BYREF
  char buf; // [sp+1813h] [bp-9h] BYREF
  ssize_t v5; // [sp+1814h] [bp-8h]

  v5 = read(dword_150C24, &buf, 1u);
  if ( v5 == 1 )
    return buf != 48;
  snprintf(v2, 0x800u, "error! read SDA return %d", v5);
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
    189,
    "sda_status",
    10,
    85,
    40,
    v3);
  return -1;
}

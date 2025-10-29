ssize_t sub_BB194()
{
  ssize_t result; // r0
  _DWORD v1[512]; // [sp+10h] [bp-180Ch] BYREF
  char v2[12]; // [sp+810h] [bp-100Ch] BYREF
  char buf; // [sp+1813h] [bp-9h] BYREF
  ssize_t v4; // [sp+1814h] [bp-8h]

  buf = 48;
  result = write(dword_150C20, &buf, 1u);
  v4 = result;
  if ( result != 1 )
  {
    strcpy((char *)v1, "error! write SCL low");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
             189,
             "scl_low",
             7,
             75,
             40,
             v2,
             v1[0],
             v1[1],
             v1[2],
             v1[3],
             v1[4],
             v1[5]);
  }
  return result;
}

int sub_B8BAC()
{
  int v0; // r5
  int v1; // r0
  _DWORD v3[2]; // [sp+10h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v5[4096]; // [sp+818h] [bp-1000h] BYREF

  v3[1] = "s_initial_seq_2_by_vendor";
  v3[0] = 0;
  pthread_mutex_lock((pthread_mutex_t *)&power_mutex);
  v0 = iic_init((int)v3);
  pthread_mutex_unlock((pthread_mutex_t *)&power_mutex);
  if ( v0 < 0 )
    return v0;
  dword_16C550 = v0;
  dword_16C554 = 1;
  memset(byte_16C560, 0, 0x68u);
  v1 = bitmain_power_version();
  v0 = v1;
  if ( v1 >= 0 )
  {
    dword_16C558 = v1;
    snprintf(s, 0x800u, "power open power_version = 0x%x", v1);
    V_LOCK();
    v0 = 0;
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "bitmain_power_open",
      18,
      418,
      40,
      v5);
    return v0;
  }
  strcpy(s, "power open power_version < 0 will close power\n");
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/power/bitmain_power_APW9.c",
    166,
    "bitmain_power_open",
    18,
    413,
    40,
    v5);
  if ( dword_16C550 && dword_16C554 )
    return v0;
  sub_B8900();
  return v0;
}

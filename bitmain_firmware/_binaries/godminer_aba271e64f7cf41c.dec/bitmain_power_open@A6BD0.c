int bitmain_power_open()
{
  _DWORD v2[512]; // [sp+10h] [bp-1814h] BYREF
  char v3[20]; // [sp+810h] [bp-1014h] BYREF
  int v4; // [sp+1810h] [bp-14h] BYREF
  __int16 v5; // [sp+1814h] [bp-10h]
  char v6; // [sp+1816h] [bp-Eh]
  char v7; // [sp+1817h] [bp-Dh]
  int v8; // [sp+1818h] [bp-Ch]
  int v9; // [sp+181Ch] [bp-8h]

  v9 = 0;
  v8 = 0;
  if ( dword_15FAD0 && dword_15FAD4 )
    return dword_15FAD0;
  v4 = 0;
  v5 = 1;
  v6 = 2;
  v7 = 0;
  pthread_mutex_lock(&power_mutex);
  v9 = iic_init((int)&v4);
  pthread_mutex_unlock(&power_mutex);
  if ( v9 < 0 )
    return v9;
  dword_15FAD0 = v9;
  dword_15FAD4 = 1;
  memset(dword_15FAE8, 0, 0xC0u);
  sleep(2u);
  v9 = bitmain_power_version();
  if ( v9 >= 0 )
  {
    dword_15FAD8 = v9;
    snprintf((char *)v2, 0x800u, "power open power_version = 0x%x", v9);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "bitmain_power_open",
      18,
      711,
      40,
      v3);
    if ( dword_15FAD8 == 193 || dword_15FAD8 == 194 )
    {
      v8 = sub_A4A58(dword_15FAD0);
      snprintf((char *)v2, 0x800u, "power fw_version = 0x%x", v8);
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "bitmain_power_open",
        18,
        715,
        40,
        v3);
      dword_15FADC = v8;
    }
    return 0;
  }
  else
  {
    strcpy((char *)v2, "power open power_version < 0 will close power");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "bitmain_power_open",
      18,
      706,
      40,
      v3,
      v2[0],
      v2[1],
      v2[2],
      v2[3],
      v2[4],
      v2[5],
      v2[6],
      v2[7],
      v2[8],
      v2[9],
      v2[10],
      v2[11]);
    bitmain_power_close();
    return v9;
  }
}

int __fastcall i2c_uninit(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5
  int result; // r0
  int v4; // [sp+14h] [bp-7FCh] BYREF
  char s[2048]; // [sp+18h] [bp-7F8h] BYREF
  char v6[4100]; // [sp+818h] [bp+8h] BYREF

  v4 = a1;
  v1 = pthread_mutex_lock(&stru_16B4D4);
  if ( v1 )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/device/hal/platform/7007/7007_i2c.c",
             164,
             "i2c_uninit",
             10,
             59,
             100,
             v6);
  }
  else
  {
    if ( exists_c_map((int *)dword_16B4D0, (int)&v4) == (int *)1 )
    {
      snprintf(s, 0x800u, "remove %d from callback list\n", v4);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_uninit",
        10,
        63,
        20,
        v6);
      remove_c_map((int *)dword_16B4D0, (int)&v4);
    }
    else
    {
      snprintf(s, 0x800u, "ctx(%d) is not inited\n", v4);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_uninit",
        10,
        66,
        80,
        v6);
    }
    v2 = new_iterator_c_map(dword_16B4D0);
    if ( ((int (*)(void))*v2)() )
    {
      do
        ++v1;
      while ( ((int (__fastcall *)(_DWORD *))*v2)(v2) );
      delete_iterator_c_map(v2);
      pthread_mutex_unlock(&stru_16B4D4);
      snprintf(s, 0x800u, "still have %d nodes\n", v1);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
               164,
               "i2c_uninit",
               10,
               82,
               20,
               v6);
    }
    else
    {
      delete_iterator_c_map(v2);
      pthread_mutex_unlock(&stru_16B4D4);
      strcpy(s, "all i2c uninited\n");
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_uninit",
        10,
        77,
        20,
        v6);
      dword_16B4CC = 0;
      result = delete_c_map((void (__fastcall ***)(_DWORD))dword_16B4D0);
      dword_16B4D0 = 0;
    }
  }
  return result;
}

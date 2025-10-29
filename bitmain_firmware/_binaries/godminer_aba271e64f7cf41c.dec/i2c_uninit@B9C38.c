int __fastcall i2c_uninit(int a1)
{
  _DWORD v2[2]; // [sp+14h] [bp-1828h] BYREF
  char v3[32]; // [sp+1Ch] [bp-1820h] BYREF
  char v4[32]; // [sp+81Ch] [bp-1020h] BYREF
  void *v5; // [sp+181Ch] [bp-20h] BYREF
  void *ptr; // [sp+1820h] [bp-1Ch]
  _DWORD *v7; // [sp+1824h] [bp-18h]
  const char *v8; // [sp+1828h] [bp-14h]
  int i; // [sp+182Ch] [bp-10h]
  int v10; // [sp+1830h] [bp-Ch]
  int v11; // [sp+1834h] [bp-8h]

  v2[0] = a1;
  v10 = 0;
  v11 = 1;
  v5 = 0;
  if ( pthread_mutex_lock(&stru_16055C) )
  {
    strcpy(v3, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
             185,
             "i2c_uninit",
             10,
             102,
             100,
             v4);
  }
  else
  {
    if ( find_c_map((int *)dword_160574, (int)v2, &v5) == 1 )
    {
      v8 = (const char *)v5;
      remove_c_map((int *)dword_160574, (int)v2);
      v7 = new_iterator_c_map(dword_160574);
      for ( i = ((int (__fastcall *)(_DWORD *))*v7)(v7); i; i = ((int (__fastcall *)(_DWORD *))*v7)(v7) )
      {
        ptr = (void *)((int (__fastcall *)(int))v7[2])(i);
        if ( !strncmp(v8 + 12, (const char *)ptr + 12, 0x100u) )
        {
          snprintf(v3, 0x800u, "%s still open for %d\n", v8 + 12, *(_DWORD *)ptr);
          V_LOCK();
          logfmt_raw(v4, 0x1000u, 0, v3);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
            185,
            "i2c_uninit",
            10,
            119,
            20,
            v4);
          v11 = 0;
          free(ptr);
          break;
        }
        free(ptr);
      }
      delete_iterator_c_map(v7);
    }
    else
    {
      v11 = 0;
      snprintf(v3, 0x800u, "ctx(%d) not inited\n", v2[0]);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        185,
        "i2c_uninit",
        10,
        132,
        80,
        v4);
    }
    if ( v11 )
      close(*((_DWORD *)v5 + 1));
    if ( v5 )
      free(v5);
    return pthread_mutex_unlock(&stru_16055C);
  }
}

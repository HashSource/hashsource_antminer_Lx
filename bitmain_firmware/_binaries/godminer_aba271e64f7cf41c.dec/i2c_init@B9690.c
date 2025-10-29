int __fastcall i2c_init(const char *a1)
{
  char v4[28]; // [sp+18h] [bp-181Ch] BYREF
  _DWORD v5[1024]; // [sp+818h] [bp-101Ch] BYREF
  int v6; // [sp+1818h] [bp-1Ch]
  void *ptr; // [sp+181Ch] [bp-18h]
  _DWORD *v8; // [sp+1820h] [bp-14h]
  int i; // [sp+1824h] [bp-10h]
  int v10; // [sp+1828h] [bp-Ch]
  int v11; // [sp+182Ch] [bp-8h]

  v11 = -1;
  v10 = 1;
  if ( !pthread_mutex_lock(&stru_16055C) )
  {
    if ( !dword_160578 )
    {
      strcpy(v4, "init i2c map\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        185,
        "i2c_init",
        8,
        51,
        20,
        (const char *)v5);
      dword_160574 = (int)new_c_map(759384, 0, 0);
    }
    v8 = new_iterator_c_map(dword_160574);
    for ( i = ((int (__fastcall *)(_DWORD *))*v8)(v8); i; i = ((int (__fastcall *)(_DWORD *))*v8)(v8) )
    {
      ptr = (void *)((int (__fastcall *)(int))v8[2])(i);
      if ( !strncmp(a1, (const char *)ptr + 12, 0x100u) )
      {
        snprintf(v4, 0x800u, "%s has already opened\n", a1);
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
          185,
          "i2c_init",
          8,
          62,
          20,
          (const char *)v5);
        memset(v5, 0, 0x10Cu);
        v5[0] = ++dword_160578;
        v5[1] = *((_DWORD *)ptr + 1);
        strncpy((char *)&v5[3], a1, 0x100u);
        insert_c_map((int *)dword_160574, &dword_160578, 4u, v5, 0x10Cu);
        v10 = 0;
        free(ptr);
        break;
      }
      free(ptr);
    }
    delete_iterator_c_map(v8);
    if ( v10 )
    {
      v6 = open(a1, 2050);
      if ( v6 < 0 )
      {
        snprintf(v4, 0x800u, "failed to open %s\n", a1);
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
          185,
          "i2c_init",
          8,
          80,
          100,
          (const char *)v5);
        pthread_mutex_unlock(&stru_16055C);
        return -1;
      }
      memset(v5, 0, 0x10Cu);
      v5[0] = ++dword_160578;
      v5[1] = v6;
      strncpy((char *)&v5[3], a1, 0x100u);
      insert_c_map((int *)dword_160574, &dword_160578, 4u, v5, 0x10Cu);
    }
    pthread_mutex_unlock(&stru_16055C);
    return dword_160578;
  }
  strcpy(v4, "failed to i2c lock\n");
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
    185,
    "i2c_init",
    8,
    45,
    100,
    (const char *)v5);
  return -4;
}

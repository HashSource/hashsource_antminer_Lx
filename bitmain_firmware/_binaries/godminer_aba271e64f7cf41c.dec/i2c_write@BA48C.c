int __fastcall i2c_write(int a1, int a2, unsigned int a3)
{
  int v7; // [sp+1Ch] [bp-1818h] BYREF
  char v8[20]; // [sp+20h] [bp-1814h] BYREF
  char v9[20]; // [sp+820h] [bp-1014h] BYREF
  void *ptr; // [sp+1820h] [bp-14h] BYREF
  unsigned int i; // [sp+1824h] [bp-10h]
  int v12; // [sp+1828h] [bp-Ch]
  const char *v13; // [sp+182Ch] [bp-8h]

  v7 = a1;
  i = 0;
  if ( pthread_mutex_lock(&stru_16055C) )
  {
    strcpy(v8, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      185,
      "i2c_write",
      9,
      211,
      100,
      v9);
    return -1;
  }
  else
  {
    v12 = 0;
    if ( find_c_map((int *)dword_160574, (int)&v7, &ptr) == 1 )
    {
      v13 = (const char *)ptr;
      snprintf(v8, 0x800u, "i2c write path = %s, addr = %d\n", (const char *)ptr + 12, *((_DWORD *)ptr + 2));
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        185,
        "i2c_write",
        9,
        219,
        20,
        v9);
      if ( ioctl(*((_DWORD *)v13 + 1), 0x703u, *((_DWORD *)v13 + 2) >> 1) >= 0 )
      {
        for ( i = 0; i < a3; ++i )
        {
          if ( write(*((_DWORD *)v13 + 1), (const void *)(a2 + i), 1u) != 1 )
          {
            snprintf(v8, 0x800u, "fail to write %d:%d\n", i, a3);
            V_LOCK();
            logfmt_raw(v9, 0x1000u, 0, v8);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
              185,
              "i2c_write",
              9,
              232,
              100,
              v9);
          }
        }
        free(ptr);
        usleep(0x2710u);
        pthread_mutex_unlock(&stru_16055C);
        return a3;
      }
      else
      {
        snprintf(v8, 0x800u, "write io ctrl for path = %s, addr = %d failed\n", v13 + 12, *((_DWORD *)v13 + 2));
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
          185,
          "i2c_write",
          9,
          222,
          100,
          v9);
        free(ptr);
        pthread_mutex_unlock(&stru_16055C);
        return -3;
      }
    }
    else
    {
      snprintf(v8, 0x800u, "ctx %d not inited\n", v7);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        185,
        "i2c_write",
        9,
        239,
        100,
        v9);
      pthread_mutex_unlock(&stru_16055C);
      return -4;
    }
  }
}

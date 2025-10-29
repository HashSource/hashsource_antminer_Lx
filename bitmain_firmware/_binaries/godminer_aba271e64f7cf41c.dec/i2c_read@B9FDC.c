int __fastcall i2c_read(int a1, void *a2, size_t a3)
{
  int v7; // [sp+1Ch] [bp-1818h] BYREF
  char v8[20]; // [sp+20h] [bp-1814h] BYREF
  char v9[20]; // [sp+820h] [bp-1014h] BYREF
  void *ptr; // [sp+1820h] [bp-14h] BYREF
  int v11; // [sp+1824h] [bp-10h]
  int v12; // [sp+1828h] [bp-Ch]
  const char *v13; // [sp+182Ch] [bp-8h]

  v7 = a1;
  v11 = 0;
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
      "i2c_read",
      8,
      159,
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
      snprintf(v8, 0x800u, "i2c read path = %s, addr = %d\n", (const char *)ptr + 12, *((_DWORD *)ptr + 2) >> 1);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        185,
        "i2c_read",
        8,
        167,
        20,
        v9);
      if ( ioctl(*((_DWORD *)v13 + 1), 0x703u, *((_DWORD *)v13 + 2) >> 1) >= 0 )
      {
        if ( a3 != read(*((_DWORD *)v13 + 1), a2, a3) )
        {
          snprintf(v8, 0x800u, "fail to read %d\n", a3);
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, v8);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
            185,
            "i2c_read",
            8,
            181,
            100,
            v9);
        }
        free(ptr);
        pthread_mutex_unlock(&stru_16055C);
        return v11;
      }
      else
      {
        snprintf(v8, 0x800u, "read io ctrl for path = %s, addr = %d failed\n", v13 + 12, *((_DWORD *)v13 + 2));
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
          185,
          "i2c_read",
          8,
          170,
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
        "i2c_read",
        8,
        188,
        100,
        v9);
      pthread_mutex_unlock(&stru_16055C);
      return -4;
    }
  }
}

size_t __fastcall iic_write_reg(int a1, _BYTE *a2, int a3, const void *a4, size_t n)
{
  char v11[2048]; // [sp+24h] [bp-1810h] BYREF
  char v12[16]; // [sp+824h] [bp-1010h] BYREF
  void *ptr; // [sp+1824h] [bp-10h]

  ptr = 0;
  if ( pthread_mutex_lock(&stru_15F97C) )
  {
    strcpy(v11, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
      185,
      "iic_write_reg",
      13,
      201,
      100,
      v12);
    return -4;
  }
  else if ( a3 == 1 )
  {
    if ( a4 && n )
    {
      ptr = malloc(n + 1);
      *(_BYTE *)ptr = *a2;
      memcpy((char *)ptr + 1, a4, n);
      if ( n + 1 != i2c_write(a1, (int)ptr, n + 1) )
      {
        strcpy(v11, "failed to write i2c reg\n");
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
          185,
          "iic_write_reg",
          13,
          221,
          100,
          v12);
      }
      if ( ptr )
        free(ptr);
      pthread_mutex_unlock(&stru_15F97C);
      return n;
    }
    else
    {
      strcpy(v11, "bad register data size\n");
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
        185,
        "iic_write_reg",
        13,
        212,
        80,
        v12);
      return -1;
    }
  }
  else
  {
    strcpy(v11, "bad register bytes\n");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
      185,
      "iic_write_reg",
      13,
      207,
      80,
      v12);
    return -1;
  }
}

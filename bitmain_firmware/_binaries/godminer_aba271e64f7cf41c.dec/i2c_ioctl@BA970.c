int __fastcall i2c_ioctl(int a1, __int16 a2, int a3)
{
  char v8[20]; // [sp+20h] [bp-1814h] BYREF
  char v9[20]; // [sp+820h] [bp-1014h] BYREF
  void *ptr; // [sp+1820h] [bp-14h]
  int v11; // [sp+1824h] [bp-10h]
  int i; // [sp+1828h] [bp-Ch]
  _DWORD *v13; // [sp+182Ch] [bp-8h]

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
      "i2c_ioctl",
      9,
      261,
      100,
      v9);
    return -4;
  }
  else
  {
    v13 = new_iterator_c_map(dword_160574);
    for ( i = ((int (__fastcall *)(_DWORD *))*v13)(v13); i; i = ((int (__fastcall *)(_DWORD *))*v13)(v13) )
    {
      v11 = v13[5];
      if ( ***(_DWORD ***)(v11 + 16) == a1 )
      {
        ptr = (void *)((int (__fastcall *)(int))v13[2])(i);
        if ( a2 == 1795 )
        {
          *((_DWORD *)ptr + 2) = a3;
          ((void (__fastcall *)(_DWORD *, void *, int))v13[1])(v13, ptr, 268);
          snprintf(v8, 0x800u, "update the slave address to %d\n", a3);
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, v8);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
            185,
            "i2c_ioctl",
            9,
            277,
            20,
            v9);
          free(ptr);
        }
        break;
      }
    }
    delete_iterator_c_map(v13);
    pthread_mutex_unlock(&stru_16055C);
    return 0;
  }
}

int __fastcall i2c_uninit(int a1)
{
  int v1; // r6
  int v2; // r4
  _DWORD *v3; // r8
  int (**v4)(void); // r5
  int result; // r0
  int *v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r12
  _DWORD *v12; // r3
  void (__fastcall ***v13)(_DWORD); // r0
  const char *v14; // r2
  int v15; // [sp+14h] [bp-7FCh] BYREF
  _BYTE s[2040]; // [sp+18h] [bp-7F8h] BYREF
  char v17[4100]; // [sp+818h] [bp+8h] BYREF

  LOWORD(v1) = -14900;
  HIWORD(v1) = (unsigned int)&unk_16B4CC >> 16;
  v15 = a1;
  v2 = pthread_mutex_lock((pthread_mutex_t *)(v1 + 8));
  if ( v2 )
  {
    LOWORD(v6) = -4784;
    HIWORD(v6) = (unsigned int)"setup_all_chip_vbk" >> 16;
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = v6[3];
    v11 = v6[4];
    *(_DWORD *)s = v7;
    *(_DWORD *)&s[4] = v8;
    *(_DWORD *)&s[8] = v9;
    *(_DWORD *)&s[12] = v10;
    *(_DWORD *)&s[16] = v11;
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v12) = -14756;
    HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
    return zlog(
             *v12,
             "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/device/hal/platform/7007/7007_i2c.c",
             164,
             "i2c_uninit",
             10,
             59,
             100,
             v17);
  }
  else
  {
    if ( exists_c_map(*(int **)(v1 + 4), (int)&v15) == (int *)1 )
    {
      LOWORD(v14) = -6012;
      HIWORD(v14) = (unsigned int)"ltc" >> 16;
      LOWORD(v3) = -14756;
      snprintf(s, 0x800u, v14, v15);
      V_LOCK();
      logfmt_raw(v17, 0x1000u, 0, s);
      HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
      V_UNLOCK();
      zlog(
        *v3,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_uninit",
        10,
        63,
        20,
        v17);
      remove_c_map(*(int **)(v1 + 4), (int)&v15);
    }
    else
    {
      LOWORD(v3) = -14756;
      snprintf(s, 0x800u, "ctx(%d) is not inited\n", v15);
      V_LOCK();
      logfmt_raw(v17, 0x1000u, 0, s);
      HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
      V_UNLOCK();
      zlog(
        *v3,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_uninit",
        10,
        66,
        80,
        v17);
    }
    v4 = (int (**)(void))new_iterator_c_map(*(_DWORD *)(v1 + 4));
    if ( (*v4)() )
    {
      do
        ++v2;
      while ( ((int (__fastcall *)(int (**)(void)))*v4)(v4) );
      delete_iterator_c_map(v4);
      pthread_mutex_unlock(&stru_16C5D4);
      snprintf(s, 0x800u, "still have %d nodes\n", v2);
      V_LOCK();
      logfmt_raw(v17, 0x1000u, 0, s);
      V_UNLOCK();
      return zlog(
               *v3,
               "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
               164,
               "i2c_uninit",
               10,
               82,
               20,
               v17);
    }
    else
    {
      delete_iterator_c_map(v4);
      pthread_mutex_unlock(&stru_16C5D4);
      strcpy(s, "all i2c uninited\n");
      V_LOCK();
      logfmt_raw(v17, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        *v3,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_uninit",
        10,
        77,
        20,
        v17);
      v13 = *(void (__fastcall ****)(_DWORD))(v1 + 4);
      *(_DWORD *)v1 = 0;
      result = delete_c_map(v13);
      *(_DWORD *)(v1 + 4) = 0;
    }
  }
  return result;
}

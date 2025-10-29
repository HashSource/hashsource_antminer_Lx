int __fastcall i2c_ioctl(int a1, int a2, int a3)
{
  int v3; // r4
  _DWORD *v7; // r4
  int *v8; // r0
  int *v9; // r8
  int v10; // r2
  void (__fastcall *v11)(_DWORD *, _DWORD *, int); // r3
  _DWORD *v12; // r3
  int *v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r12
  _DWORD *v20; // r3
  _DWORD v21[2]; // [sp+10h] [bp-1808h] BYREF
  _DWORD s[510]; // [sp+18h] [bp-1800h] BYREF
  char v23[4096]; // [sp+818h] [bp-1000h] BYREF

  LOWORD(v3) = -14900;
  HIWORD(v3) = (unsigned int)&unk_16B4CC >> 16;
  if ( pthread_mutex_lock((pthread_mutex_t *)(v3 + 8)) )
  {
    LOWORD(v14) = -4784;
    HIWORD(v14) = (unsigned int)"setup_all_chip_vbk" >> 16;
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    v18 = v14[3];
    v19 = v14[4];
    s[0] = v15;
    s[1] = v16;
    s[2] = v17;
    s[3] = v18;
    s[4] = v19;
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v20) = -14756;
    HIWORD(v20) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v20,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_ioctl",
      9,
      333,
      100,
      v23);
    return -4;
  }
  else
  {
    v7 = new_iterator_c_map(*(_DWORD *)(v3 + 4));
    if ( ((int (*)(void))*v7)() )
    {
      while ( ***(_DWORD ***)(v7[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v7)(v7) )
          goto LABEL_8;
      }
      v8 = (int *)((int (*)(void))v7[2])();
      v9 = v8;
      if ( a2 == 1795 )
      {
        v10 = *v8;
        v11 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v7[1];
        v21[1] = a3;
        v21[0] = v10;
        v11(v7, v21, 8);
        snprintf((char *)s, 0x800u, "update the slave address to %d\n", a3);
        V_LOCK();
        logfmt_raw(v23, 0x1000u, 0, s);
        V_UNLOCK();
        LOWORD(v12) = -14756;
        HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
        zlog(
          *v12,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_ioctl",
          9,
          347,
          20,
          v23);
        free(v9);
      }
    }
LABEL_8:
    delete_iterator_c_map(v7);
    pthread_mutex_unlock(&stru_16C5D4);
    return 0;
  }
}

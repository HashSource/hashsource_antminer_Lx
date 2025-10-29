int __fastcall i2c_select(int a1, int a2)
{
  int v2; // r4
  _DWORD *v5; // r4
  _DWORD *v6; // r7
  void (__fastcall *v7)(_DWORD *, _DWORD *, int); // r3
  int v8; // r2
  _DWORD *v9; // r3
  int *v11; // r12
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r12
  _DWORD *v17; // r3
  _DWORD v18[2]; // [sp+10h] [bp-180Ch] BYREF
  _DWORD s[510]; // [sp+18h] [bp-1804h] BYREF
  char v20[4100]; // [sp+818h] [bp-1004h] BYREF

  LOWORD(v2) = -14900;
  HIWORD(v2) = (unsigned int)&unk_16B4CC >> 16;
  if ( pthread_mutex_lock((pthread_mutex_t *)(v2 + 8)) )
  {
    LOWORD(v11) = -4784;
    HIWORD(v11) = (unsigned int)"setup_all_chip_vbk" >> 16;
    v12 = *v11;
    v13 = v11[1];
    v14 = v11[2];
    v15 = v11[3];
    v16 = v11[4];
    s[0] = v12;
    s[1] = v13;
    s[2] = v14;
    s[3] = v15;
    s[4] = v16;
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v17) = -14756;
    HIWORD(v17) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v17,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_select",
      10,
      366,
      100,
      v20);
    return -4;
  }
  else
  {
    v5 = new_iterator_c_map(*(_DWORD *)(v2 + 4));
    if ( ((int (*)(void))*v5)() )
    {
      while ( ***(_DWORD ***)(v5[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v5)(v5) )
          goto LABEL_7;
      }
      v6 = (_DWORD *)((int (*)(void))v5[2])();
      v7 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v5[1];
      v8 = v6[1];
      v18[0] = a2;
      v18[1] = v8;
      v7(v5, v18, 8);
      snprintf((char *)s, 0x800u, "update the master address to %d\n", a2);
      V_LOCK();
      logfmt_raw(v20, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v9) = -14756;
      HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
      zlog(
        *v9,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_select",
        10,
        377,
        20,
        v20);
      free(v6);
    }
LABEL_7:
    delete_iterator_c_map(v5);
    pthread_mutex_unlock(&stru_16C5D4);
    return 0;
  }
}

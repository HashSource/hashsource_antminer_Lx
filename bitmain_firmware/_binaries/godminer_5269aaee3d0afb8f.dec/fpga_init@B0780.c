int fpga_init()
{
  int v1; // r0
  int v2; // r0
  const char *v3; // r2
  _DWORD *v4; // r7
  int v5; // r3
  int v6; // r1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  const char *v10; // r2
  int v11; // r3
  int v12; // r1
  const char *v13; // r2
  int *v14; // r3
  int v15; // r0
  int v16; // r1
  const char *v17; // r2
  int v18; // r3
  int v19; // r1
  const char *v20; // r2
  int *v21; // r3
  int v22; // r0
  int v23; // r1
  const char *v24; // r2
  int v25; // r3
  int v26; // r1
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v28[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16C0BC )
    return 0;
  LOWORD(v1) = -7052;
  HIWORD(v1) = (unsigned int)&unk_13CE94 >> 16;
  dword_16C0C0 = open64(v1);
  if ( dword_16C0C0 < 0 )
  {
    LOWORD(v13) = -7032;
    HIWORD(v13) = (unsigned int)&unk_13CEA8 >> 16;
    snprintf(s, 0x800u, v13, dword_16C0C0);
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v14) = -14756;
    HIWORD(v14) = (unsigned int)&unk_16B55C >> 16;
    v15 = *v14;
    LOWORD(v14) = -7076;
    LOWORD(v16) = -6992;
    HIWORD(v14) = (unsigned int)&unk_13CE7C >> 16;
    HIWORD(v16) = (unsigned int)&unk_13CED0 >> 16;
    zlog(v15, v16, 165, v14, 9, 45, 100, v28);
    return -1;
  }
  else
  {
    v2 = mmap64(0, 4608, 3, 1, dword_16C0C0);
    dword_16C0C4 = v2;
    if ( v2 )
    {
      LOWORD(v3) = -6764;
      HIWORD(v3) = (unsigned int)&unk_13CFB4 >> 16;
      snprintf(s, 0x800u, v3, v2);
      LOWORD(v4) = -14756;
      V_LOCK();
      logfmt_raw(v28, 0x1000u, 0, s);
      HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
      V_UNLOCK();
      LOWORD(v5) = -7076;
      LOWORD(v6) = -6992;
      HIWORD(v5) = (unsigned int)&unk_13CE7C >> 16;
      HIWORD(v6) = (unsigned int)&unk_13CED0 >> 16;
      zlog(*v4, v6, 165, v5, 9, 59, 20, v28);
      LOWORD(v7) = -6716;
      HIWORD(v7) = (unsigned int)"enkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ltc/backend_ltc.c" >> 16;
      v8 = open64(v7);
      if ( v8 < 0 )
      {
        LOWORD(v17) = -6700;
        HIWORD(v17) = (unsigned int)"orkspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ltc/backend_ltc.c" >> 16;
        snprintf(s, 0x800u, v17, v8);
        V_LOCK();
        logfmt_raw(v28, 0x1000u, 0, s);
        V_UNLOCK();
        LOWORD(v18) = -7076;
        LOWORD(v19) = -6992;
        HIWORD(v18) = (unsigned int)&unk_13CE7C >> 16;
        HIWORD(v19) = (unsigned int)&unk_13CED0 >> 16;
        zlog(*v4, v19, 165, v18, 9, 64, 100, v28);
        perror("open");
        return -1;
      }
      else
      {
        v9 = mmap64(0, 0x1000000, 3, 1, v8);
        dword_16C0C8 = v9;
        if ( v9 )
        {
          LOWORD(v10) = -6580;
          HIWORD(v10) = (unsigned int)"_ltc.c" >> 16;
          snprintf(s, 0x800u, v10, v9);
          V_LOCK();
          logfmt_raw(v28, 0x1000u, 0, s);
          V_UNLOCK();
          LOWORD(v11) = -7076;
          LOWORD(v12) = -6992;
          HIWORD(v11) = (unsigned int)&unk_13CE7C >> 16;
          HIWORD(v12) = (unsigned int)&unk_13CED0 >> 16;
          zlog(*v4, v12, 165, v11, 9, 76, 40, v28);
          dword_16C0BC = 1;
          return 0;
        }
        else
        {
          LOWORD(v24) = -6640;
          HIWORD(v24) = (unsigned int)"ase/build/godminer-origin_master/backend/backend_ltc/backend_ltc.c" >> 16;
          snprintf(s, 0x800u, v24, 0);
          V_LOCK();
          logfmt_raw(v28, 0x1000u, 0, s);
          V_UNLOCK();
          LOWORD(v25) = -7076;
          LOWORD(v26) = -6992;
          HIWORD(v25) = (unsigned int)&unk_13CE7C >> 16;
          HIWORD(v26) = (unsigned int)&unk_13CED0 >> 16;
          zlog(*v4, v26, 165, v25, 9, 73, 100, v28);
          return -1;
        }
      }
    }
    else
    {
      LOWORD(v20) = -6824;
      HIWORD(v20) = (unsigned int)&unk_13CF78 >> 16;
      snprintf(s, 0x800u, v20, 0);
      V_LOCK();
      logfmt_raw(v28, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v21) = -14756;
      HIWORD(v21) = (unsigned int)&unk_16B55C >> 16;
      v22 = *v21;
      LOWORD(v21) = -7076;
      LOWORD(v23) = -6992;
      HIWORD(v21) = (unsigned int)&unk_13CE7C >> 16;
      HIWORD(v23) = (unsigned int)&unk_13CED0 >> 16;
      zlog(v22, v23, 165, v21, 9, 53, 100, v28);
      close(dword_16C0C0);
      return -2;
    }
  }
}

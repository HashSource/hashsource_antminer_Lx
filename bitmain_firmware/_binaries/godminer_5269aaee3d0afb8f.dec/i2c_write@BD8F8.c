int __fastcall i2c_write(int a1, int a2, int a3)
{
  int v3; // r4
  int *v6; // r0
  _DWORD *v7; // r6
  _DWORD *v8; // r9
  int v9; // r7
  int v10; // r5
  int v11; // r7
  int v12; // t1
  int v13; // r4
  _DWORD *v15; // r3
  int *v16; // r12
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r12
  _DWORD *v22; // r3
  int v23; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  _DWORD s[512]; // [sp+20h] [bp-1804h] BYREF
  char v26[4100]; // [sp+820h] [bp-1004h] BYREF

  LOWORD(v3) = -14900;
  HIWORD(v3) = (unsigned int)&unk_16B4CC >> 16;
  v23 = a1;
  if ( pthread_mutex_lock((pthread_mutex_t *)(v3 + 8)) )
  {
    LOWORD(v16) = -4784;
    HIWORD(v16) = (unsigned int)"setup_all_chip_vbk" >> 16;
    v17 = *v16;
    v18 = v16[1];
    v19 = v16[2];
    v20 = v16[3];
    v21 = v16[4];
    s[0] = v17;
    s[1] = v18;
    s[2] = v19;
    s[3] = v20;
    s[4] = v21;
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v22) = -14756;
    HIWORD(v22) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v22,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_write",
      9,
      180,
      100,
      v26);
    return -1;
  }
  else
  {
    v6 = *(int **)(v3 + 4);
    ptr = 0;
    if ( find_c_map(v6, (int)&v23, &ptr) == 1 )
    {
      v7 = ptr;
      LOWORD(v8) = -14756;
      HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
      snprintf((char *)s, 0x800u, "i2c read master = %d, slave = %d\n", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        *v8,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_write",
        9,
        187,
        20,
        v26);
      if ( a3 )
      {
        v9 = a2 + a3;
        v10 = a2 - 1;
        v11 = v9 - 1;
        while ( 1 )
        {
          v12 = *(unsigned __int8 *)++v10;
          v13 = v12 | (v7[1] >> 4 << 20) | (*v7 << 26) | (v7[1] << 15) & 0x70000;
          if ( !sub_BD07C() )
            break;
          fpga_write(48, v13);
          if ( v11 == v10 )
            goto LABEL_8;
        }
        free(ptr);
        strcpy((char *)s, "iic not ready 4 write\n");
        V_LOCK();
        logfmt_raw(v26, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          *v8,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_write",
          9,
          194,
          100,
          v26);
        pthread_mutex_unlock(&stru_16C5D4);
        return -2;
      }
      else
      {
LABEL_8:
        free(ptr);
        pthread_mutex_unlock(&stru_16C5D4);
        return a3;
      }
    }
    else
    {
      snprintf((char *)s, 0x800u, "ctx %d not inited\n", v23);
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v15) = -14756;
      HIWORD(v15) = (unsigned int)&unk_16B55C >> 16;
      zlog(
        *v15,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_write",
        9,
        203,
        100,
        v26);
      pthread_mutex_unlock((pthread_mutex_t *)(v3 + 8));
      return -2;
    }
  }
}

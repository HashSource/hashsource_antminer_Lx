int __fastcall i2c_read(int a1, _BYTE *a2, int a3)
{
  int v3; // r5
  int *v6; // r0
  _DWORD *v7; // r9
  _DWORD *v8; // r8
  int v9; // r5
  _BYTE *v10; // r10
  _BYTE *v11; // r0
  _DWORD *v13; // r3
  int *v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r12
  _DWORD *v20; // r3
  int v21; // [sp+14h] [bp-180Ch] BYREF
  _DWORD *v22; // [sp+1Ch] [bp-1804h] BYREF
  _DWORD s[512]; // [sp+20h] [bp-1800h] BYREF
  char v24[4096]; // [sp+820h] [bp-1000h] BYREF

  LOWORD(v3) = -14900;
  HIWORD(v3) = (unsigned int)&unk_16B4CC >> 16;
  v21 = a1;
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
    logfmt_raw(v24, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v20) = -14756;
    HIWORD(v20) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v20,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_read",
      8,
      127,
      100,
      v24);
    return -1;
  }
  else
  {
    v6 = *(int **)(v3 + 4);
    v22 = 0;
    if ( find_c_map(v6, (int)&v21, &v22) == 1 )
    {
      v7 = v22;
      LOWORD(v8) = -14756;
      HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
      snprintf((char *)s, 0x800u, "i2c read master = %d, slave = %d\n", *v22, v22[1]);
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        *v8,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_read",
        8,
        134,
        20,
        v24);
      v9 = (*v7 << 26) | 0x2000000 | (v7[1] >> 4 << 20) | (v7[1] << 15) & 0x70000;
      if ( a3 )
      {
        v10 = &a2[a3];
        while ( 1 )
        {
          if ( !sub_BD07C() )
          {
            free(v22);
            strcpy((char *)s, "iic not ready 4 read1\n");
            V_LOCK();
            logfmt_raw(v24, 0x1000u, 0, s);
            V_UNLOCK();
            zlog(
              *v8,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
              164,
              "i2c_read",
              8,
              141,
              100,
              v24);
            pthread_mutex_unlock(&stru_16C5D4);
            return -2;
          }
          fpga_write(48, v9);
          v11 = a2++;
          if ( !sub_BD0D8(v11) )
            break;
          if ( a2 == v10 )
            goto LABEL_9;
        }
        free(v22);
        strcpy((char *)s, "iic not ready 4 read2\n");
        V_LOCK();
        logfmt_raw(v24, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          *v8,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_read",
          8,
          152,
          100,
          v24);
        pthread_mutex_unlock(&stru_16C5D4);
        return -3;
      }
      else
      {
LABEL_9:
        free(v22);
        pthread_mutex_unlock(&stru_16C5D4);
        return a3;
      }
    }
    else
    {
      snprintf((char *)s, 0x800u, "ctx %d not inited\n", v21);
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v13) = -14756;
      HIWORD(v13) = (unsigned int)&unk_16B55C >> 16;
      zlog(
        *v13,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_read",
        8,
        159,
        100,
        v24);
      pthread_mutex_unlock((pthread_mutex_t *)(v3 + 8));
      return -2;
    }
  }
}

int __fastcall i2c_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int v7; // r4
  int v8; // r10
  int *v9; // r0
  _DWORD *v10; // r5
  _DWORD *v11; // r9
  int v12; // r6
  int v13; // t1
  int v14; // r2
  int v15; // r4
  _DWORD *v17; // r3
  _DWORD *v18; // r3
  int *v19; // r12
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r12
  _DWORD *v25; // r3
  int v26; // [sp+14h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  _DWORD s[512]; // [sp+20h] [bp-1800h] BYREF
  char v29[4096]; // [sp+820h] [bp-1000h] BYREF

  v26 = a1;
  if ( a3 == 1 )
  {
    LOWORD(v7) = -14900;
    HIWORD(v7) = (unsigned int)&unk_16B4CC >> 16;
    v8 = pthread_mutex_lock((pthread_mutex_t *)(v7 + 8));
    if ( v8 )
    {
      LOWORD(v19) = -4784;
      HIWORD(v19) = (unsigned int)"setup_all_chip_vbk" >> 16;
      v20 = *v19;
      v21 = v19[1];
      v22 = v19[2];
      v23 = v19[3];
      v24 = v19[4];
      s[0] = v20;
      s[1] = v21;
      s[2] = v22;
      s[3] = v23;
      s[4] = v24;
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v25) = -14756;
      HIWORD(v25) = (unsigned int)&unk_16B55C >> 16;
      zlog(
        *v25,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_write_reg",
        13,
        288,
        100,
        v29);
      return -1;
    }
    else
    {
      v9 = *(int **)(v7 + 4);
      ptr = 0;
      if ( find_c_map(v9, (int)&v26, &ptr) == 1 )
      {
        v10 = ptr;
        LOWORD(v11) = -14756;
        HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
        snprintf((char *)s, 0x800u, "i2c read master = %d, slave = %d\n", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
        V_LOCK();
        logfmt_raw(v29, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          *v11,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_write_reg",
          13,
          295,
          20,
          v29);
        if ( a5 )
        {
          v12 = a4 - 1;
          while ( 1 )
          {
            v13 = *(unsigned __int8 *)++v12;
            v14 = *a2 + v8++;
            v15 = (*v10 << 26) | 0x1000000 | (v10[1] >> 4 << 20) | v13 | (v10[1] << 15) & 0x70000 | (v14 << 8);
            if ( !sub_BD07C() )
              break;
            fpga_write(48, v15);
            if ( a5 == v8 )
              goto LABEL_9;
          }
          strcpy((char *)s, "iic not ready 4 write\n");
          V_LOCK();
          logfmt_raw(v29, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            *v11,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_write_reg",
            13,
            303,
            100,
            v29);
          free(ptr);
          pthread_mutex_unlock(&stru_16C5D4);
          return -2;
        }
        else
        {
LABEL_9:
          free(ptr);
          pthread_mutex_unlock(&stru_16C5D4);
          return a5;
        }
      }
      else
      {
        snprintf((char *)s, 0x800u, "ctx %d not inited\n", v26);
        V_LOCK();
        logfmt_raw(v29, 0x1000u, 0, s);
        V_UNLOCK();
        LOWORD(v18) = -14756;
        HIWORD(v18) = (unsigned int)&unk_16B55C >> 16;
        zlog(
          *v18,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_write_reg",
          13,
          313,
          100,
          v29);
        pthread_mutex_unlock((pthread_mutex_t *)(v7 + 8));
        return -2;
      }
    }
  }
  else
  {
    strcpy((char *)s, "more than one byte reg address is not supported\n");
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v17) = -14756;
    HIWORD(v17) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v17,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_write_reg",
      13,
      284,
      100,
      v29);
    return -3;
  }
}

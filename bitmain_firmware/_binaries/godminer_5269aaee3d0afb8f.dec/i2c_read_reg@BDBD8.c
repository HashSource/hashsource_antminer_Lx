int __fastcall i2c_read_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int v7; // r4
  int v8; // r5
  int *v9; // r0
  _DWORD *v10; // r6
  _DWORD *v11; // r11
  _BYTE *v12; // r0
  int v13; // r4
  _DWORD *v15; // r3
  _DWORD *v16; // r3
  int *v17; // r12
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r12
  _DWORD *v23; // r3
  int v24; // [sp+14h] [bp-1810h] BYREF
  _DWORD *v25; // [sp+1Ch] [bp-1808h] BYREF
  _DWORD s[512]; // [sp+20h] [bp-1804h] BYREF
  char var1004[4128]; // [sp+820h] [bp-1004h] BYREF

  v24 = a1;
  if ( a3 == 1 )
  {
    LOWORD(v7) = -14900;
    HIWORD(v7) = (unsigned int)&unk_16B4CC >> 16;
    v8 = pthread_mutex_lock((pthread_mutex_t *)(v7 + 8));
    if ( v8 )
    {
      LOWORD(v17) = -4784;
      HIWORD(v17) = (unsigned int)"setup_all_chip_vbk" >> 16;
      v18 = *v17;
      v19 = v17[1];
      v20 = v17[2];
      v21 = v17[3];
      v22 = v17[4];
      s[0] = v18;
      s[1] = v19;
      s[2] = v20;
      s[3] = v21;
      s[4] = v22;
      V_LOCK();
      logfmt_raw(var1004, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v23) = -14756;
      HIWORD(v23) = (unsigned int)&unk_16B55C >> 16;
      zlog(
        *v23,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_read_reg",
        12,
        229,
        100,
        var1004);
      return -1;
    }
    else
    {
      v9 = *(int **)(v7 + 4);
      v25 = 0;
      if ( find_c_map(v9, (int)&v24, &v25) == 1 )
      {
        v10 = v25;
        LOWORD(v11) = -14756;
        HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
        snprintf((char *)s, 0x800u, "i2c read master = %d, slave = %d\n", *v25, v25[1]);
        V_LOCK();
        logfmt_raw(var1004, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          *v11,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_read_reg",
          12,
          236,
          20,
          var1004);
        if ( a5 )
        {
          while ( 1 )
          {
            v13 = (*v10 << 26) | 0x3000000 | (v10[1] >> 4 << 20) | (v10[1] << 15) & 0x70000 | ((*a2 + v8) << 8);
            if ( !sub_BD07C() )
            {
              strcpy((char *)s, "iic not ready 4 read1\n");
              V_LOCK();
              logfmt_raw(var1004, 0x1000u, 0, s);
              V_UNLOCK();
              zlog(
                *v11,
                "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                164,
                "i2c_read_reg",
                12,
                243,
                100,
                var1004);
              free(v25);
              pthread_mutex_unlock(&stru_16C5D4);
              return -2;
            }
            fpga_write(48, v13);
            v12 = (_BYTE *)(a4 + v8++);
            if ( !sub_BD0D8(v12) )
              break;
            if ( a5 == v8 )
              goto LABEL_10;
          }
          strcpy((char *)s, "iic failed to read data\n");
          V_LOCK();
          logfmt_raw(var1004, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            *v11,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_read_reg",
            12,
            254,
            100,
            var1004);
          free(v25);
          pthread_mutex_unlock(&stru_16C5D4);
          return -3;
        }
        else
        {
LABEL_10:
          free(v25);
          pthread_mutex_unlock(&stru_16C5D4);
          return a5;
        }
      }
      else
      {
        snprintf((char *)s, 0x800u, "ctx %d not inited\n", v24);
        V_LOCK();
        logfmt_raw(var1004, 0x1000u, 0, s);
        V_UNLOCK();
        LOWORD(v16) = -14756;
        HIWORD(v16) = (unsigned int)&unk_16B55C >> 16;
        zlog(
          *v16,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_read_reg",
          12,
          262,
          100,
          var1004);
        pthread_mutex_unlock((pthread_mutex_t *)(v7 + 8));
        return -2;
      }
    }
  }
  else
  {
    strcpy((char *)s, "more than one byte reg address is not supported\n");
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v15) = -14756;
    HIWORD(v15) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v15,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_read_reg",
      12,
      225,
      100,
      var1004);
    return -3;
  }
}

int __fastcall i2c_read_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int v7; // r5
  _DWORD *v8; // r6
  _BYTE *v9; // r0
  int v10; // r4
  int v12; // [sp+14h] [bp-1810h] BYREF
  _DWORD *v13; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char var1004[4128]; // [sp+820h] [bp-1004h] BYREF

  v12 = a1;
  if ( a3 == 1 )
  {
    v7 = pthread_mutex_lock(&stru_16B4D4);
    if ( v7 )
    {
      strcpy(s, "failed to i2c lock\n");
      V_LOCK();
      logfmt_raw(var1004, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
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
      v13 = 0;
      if ( find_c_map((int *)dword_16B4D0, (int)&v12, &v13) == 1 )
      {
        v8 = v13;
        snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v13, v13[1]);
        V_LOCK();
        logfmt_raw(var1004, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
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
            v10 = (*v8 << 26) | 0x3000000 | (v8[1] >> 4 << 20) | (v8[1] << 15) & 0x70000 | ((*a2 + v7) << 8);
            if ( !sub_BBE5C() )
            {
              strcpy(s, "iic not ready 4 read1\n");
              V_LOCK();
              logfmt_raw(var1004, 0x1000u, 0, s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                164,
                "i2c_read_reg",
                12,
                243,
                100,
                var1004);
              free(v13);
              pthread_mutex_unlock(&stru_16B4D4);
              return -2;
            }
            fpga_write(48, v10);
            v9 = (_BYTE *)(a4 + v7++);
            if ( !sub_BBEB8(v9) )
              break;
            if ( a5 == v7 )
              goto LABEL_10;
          }
          strcpy(s, "iic failed to read data\n");
          V_LOCK();
          logfmt_raw(var1004, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_read_reg",
            12,
            254,
            100,
            var1004);
          free(v13);
          pthread_mutex_unlock(&stru_16B4D4);
          return -3;
        }
        else
        {
LABEL_10:
          free(v13);
          pthread_mutex_unlock(&stru_16B4D4);
          return a5;
        }
      }
      else
      {
        snprintf(s, 0x800u, "ctx %d not inited\n", v12);
        V_LOCK();
        logfmt_raw(var1004, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_read_reg",
          12,
          262,
          100,
          var1004);
        pthread_mutex_unlock(&stru_16B4D4);
        return -2;
      }
    }
  }
  else
  {
    strcpy(s, "more than one byte reg address is not supported\n");
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
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

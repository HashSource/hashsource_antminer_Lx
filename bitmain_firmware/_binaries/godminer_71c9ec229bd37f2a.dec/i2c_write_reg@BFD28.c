int __fastcall i2c_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int v7; // r10
  _DWORD *v8; // r5
  int v9; // r6
  int v10; // t1
  int v11; // r2
  int v12; // r4
  int v14; // [sp+14h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v17[4096]; // [sp+820h] [bp-1000h] BYREF

  v14 = a1;
  if ( a3 == 1 )
  {
    v7 = pthread_mutex_lock(&stru_16E604);
    if ( v7 )
    {
      strcpy(s, "failed to i2c lock\n");
      V_LOCK();
      logfmt_raw(v17, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_write_reg",
        13,
        288,
        100,
        v17);
      return -1;
    }
    else
    {
      ptr = 0;
      if ( find_c_map((int *)dword_16E600, (int)&v14, &ptr) == 1 )
      {
        v8 = ptr;
        snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
        V_LOCK();
        logfmt_raw(v17, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_write_reg",
          13,
          295,
          20,
          v17);
        if ( a5 )
        {
          v9 = a4 - 1;
          while ( 1 )
          {
            v10 = *(unsigned __int8 *)++v9;
            v11 = *a2 + v7++;
            v12 = (*v8 << 26) | 0x1000000 | (v8[1] >> 4 << 20) | v10 | (v8[1] << 15) & 0x70000 | (v11 << 8);
            if ( !sub_BEDAC() )
              break;
            fpga_write(48, v12);
            if ( a5 == v7 )
              goto LABEL_9;
          }
          strcpy(s, "iic not ready 4 write\n");
          V_LOCK();
          logfmt_raw(v17, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_write_reg",
            13,
            303,
            100,
            v17);
          free(ptr);
          pthread_mutex_unlock(&stru_16E604);
          return -2;
        }
        else
        {
LABEL_9:
          free(ptr);
          pthread_mutex_unlock(&stru_16E604);
          return a5;
        }
      }
      else
      {
        snprintf(s, 0x800u, "ctx %d not inited\n", v14);
        V_LOCK();
        logfmt_raw(v17, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_write_reg",
          13,
          313,
          100,
          v17);
        pthread_mutex_unlock(&stru_16E604);
        return -2;
      }
    }
  }
  else
  {
    strcpy(s, "more than one byte reg address is not supported\n");
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_write_reg",
      13,
      284,
      100,
      v17);
    return -3;
  }
}

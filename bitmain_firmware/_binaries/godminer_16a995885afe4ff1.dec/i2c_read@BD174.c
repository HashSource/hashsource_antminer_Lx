int __fastcall i2c_read(int a1, _BYTE *a2, int a3)
{
  _DWORD *v5; // r9
  int v6; // r5
  _BYTE *v7; // r10
  _BYTE *v8; // r0
  int v10; // [sp+14h] [bp-180Ch] BYREF
  _DWORD *v11; // [sp+1Ch] [bp-1804h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v13[4096]; // [sp+820h] [bp-1000h] BYREF

  v10 = a1;
  if ( pthread_mutex_lock(&stru_16C5D4) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
      179,
      "i2c_read",
      8,
      127,
      100,
      v13);
    return -1;
  }
  else
  {
    v11 = 0;
    if ( find_c_map((int *)dword_16C5D0, (int)&v10, &v11) == 1 )
    {
      v5 = v11;
      snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v11, v11[1]);
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
        179,
        "i2c_read",
        8,
        134,
        20,
        v13);
      v6 = (*v5 << 26) | 0x2000000 | (v5[1] >> 4 << 20) | (v5[1] << 15) & 0x70000;
      if ( a3 )
      {
        v7 = &a2[a3];
        while ( 1 )
        {
          if ( !sub_BCC74() )
          {
            free(v11);
            strcpy(s, "iic not ready 4 read1\n");
            V_LOCK();
            logfmt_raw(v13, 0x1000u, 0, s);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release"
              "/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
              179,
              "i2c_read",
              8,
              141,
              100,
              v13);
            pthread_mutex_unlock(&stru_16C5D4);
            return -2;
          }
          fpga_write(48, v6);
          v8 = a2++;
          if ( !sub_BCCD0(v8) )
            break;
          if ( a2 == v7 )
            goto LABEL_9;
        }
        free(v11);
        strcpy(s, "iic not ready 4 read2\n");
        V_LOCK();
        logfmt_raw(v13, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
          179,
          "i2c_read",
          8,
          152,
          100,
          v13);
        pthread_mutex_unlock(&stru_16C5D4);
        return -3;
      }
      else
      {
LABEL_9:
        free(v11);
        pthread_mutex_unlock(&stru_16C5D4);
        return a3;
      }
    }
    else
    {
      snprintf(s, 0x800u, "ctx %d not inited\n", v10);
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
        179,
        "i2c_read",
        8,
        159,
        100,
        v13);
      pthread_mutex_unlock(&stru_16C5D4);
      return -2;
    }
  }
}

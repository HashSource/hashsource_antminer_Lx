int __fastcall i2c_read(int a1, int a2, unsigned int a3)
{
  int v7; // [sp+1Ch] [bp+Ch] BYREF
  char v8[2048]; // [sp+20h] [bp+10h] BYREF
  _BYTE v9[16]; // [sp+820h] [bp+810h] BYREF
  _DWORD *v10; // [sp+1820h] [bp+1810h] BYREF
  _DWORD *v11; // [sp+1824h] [bp+1814h]
  int v12; // [sp+1828h] [bp+1818h]
  unsigned int i; // [sp+182Ch] [bp+181Ch]

  v7 = a1;
  i = 0;
  if ( pthread_mutex_lock(&stru_47B544) )
  {
    strcpy(v8, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      93,
      "i2c_read",
      8,
      127,
      100,
      v9);
    return -1;
  }
  else
  {
    v12 = 0;
    v10 = 0;
    if ( find_c_map((int *)dword_47B55C, (int)&v7, (void **)&v10) == 1 )
    {
      v11 = v10;
      snprintf(v8, 0x800u, "i2c read master = %d, slave = %d\n", *v10, v10[1]);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
        93,
        "i2c_read",
        8,
        134,
        20,
        v9);
      v12 = (((v11[1] >> 1) & 7) << 16) | (*v11 << 26) | (v11[1] >> 4 << 20) | 0x2000000;
      for ( i = 0; i < a3; ++i )
      {
        if ( !sub_E9B58() )
        {
          free(v10);
          strcpy(v8, "iic not ready 4 read1\n");
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, v8);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            93,
            "i2c_read",
            8,
            141,
            100,
            v9);
          pthread_mutex_unlock(&stru_47B544);
          return -2;
        }
        fpga_write(0x30u, v12);
        if ( !sub_E9B9C((_BYTE *)(i + a2)) )
        {
          free(v10);
          strcpy(v8, "iic not ready 4 read2\n");
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, v8);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            93,
            "i2c_read",
            8,
            152,
            100,
            v9);
          pthread_mutex_unlock(&stru_47B544);
          return -3;
        }
      }
      free(v10);
      pthread_mutex_unlock(&stru_47B544);
      return a3;
    }
    else
    {
      snprintf(v8, 0x800u, "ctx %d not inited\n", v7);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
        93,
        "i2c_read",
        8,
        159,
        100,
        v9);
      pthread_mutex_unlock(&stru_47B544);
      return -2;
    }
  }
}

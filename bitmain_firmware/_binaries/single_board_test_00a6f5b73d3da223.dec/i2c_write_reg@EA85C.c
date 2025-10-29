int __fastcall i2c_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5)
{
  int v9; // [sp+1Ch] [bp+Ch] BYREF
  char v10[2048]; // [sp+20h] [bp+10h] BYREF
  _BYTE v11[16]; // [sp+820h] [bp+810h] BYREF
  _DWORD *v12; // [sp+1820h] [bp+1810h] BYREF
  _DWORD *v13; // [sp+1824h] [bp+1814h]
  unsigned int v14; // [sp+1828h] [bp+1818h]
  unsigned int i; // [sp+182Ch] [bp+181Ch]

  v9 = a1;
  i = 0;
  if ( a3 == 1 )
  {
    if ( pthread_mutex_lock(&stru_47B544) )
    {
      strcpy(v10, "failed to i2c lock\n");
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
        93,
        "i2c_write_reg",
        13,
        288,
        100,
        v11);
      return -1;
    }
    else
    {
      v14 = 0;
      v12 = 0;
      if ( find_c_map((int *)dword_47B55C, (int)&v9, (void **)&v12) == 1 )
      {
        v13 = v12;
        snprintf(v10, 0x800u, "i2c read master = %d, slave = %d\n", *v12, v12[1]);
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
          93,
          "i2c_write_reg",
          13,
          295,
          20,
          v11);
        for ( i = 0; i < a5; ++i )
        {
          v14 = ((i + *a2) << 8)
              | (*v13 << 26)
              | (v13[1] >> 4 << 20)
              | (((v13[1] >> 1) & 7) << 16)
              | *(unsigned __int8 *)(i + a4)
              | 0x1000000;
          if ( !sub_E9B58() )
          {
            strcpy(v10, "iic not ready 4 write\n");
            V_LOCK();
            logfmt_raw(v11, 0x1000u, 0, v10);
            V_UNLOCK();
            zlog(
              g_zc,
              "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
              93,
              "i2c_write_reg",
              13,
              303,
              100,
              v11);
            free(v12);
            pthread_mutex_unlock(&stru_47B544);
            return -2;
          }
          fpga_write(0x30u, v14);
        }
        free(v12);
        pthread_mutex_unlock(&stru_47B544);
        return a5;
      }
      else
      {
        snprintf(v10, 0x800u, "ctx %d not inited\n", v9);
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
          93,
          "i2c_write_reg",
          13,
          313,
          100,
          v11);
        pthread_mutex_unlock(&stru_47B544);
        return -2;
      }
    }
  }
  else
  {
    strcpy(v10, "more than one byte reg address is not supported\n");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      93,
      "i2c_write_reg",
      13,
      284,
      100,
      v11);
    return -3;
  }
}

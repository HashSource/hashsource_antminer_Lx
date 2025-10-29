int __fastcall iic_init(int a1)
{
  char v4[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v5[8]; // [sp+818h] [bp+808h] BYREF
  int v6; // [sp+1818h] [bp+1808h]
  int v7; // [sp+181Ch] [bp+180Ch]

  v7 = -1;
  v6 = 0;
  if ( pthread_mutex_lock(&stru_47B364) )
  {
    strcpy(v4, "failed to iic lock\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_iic.c",
      93,
      "iic_init",
      8,
      20,
      100,
      v5);
    return -4;
  }
  else
  {
    if ( a1 )
    {
      v6 = i2c_init();
      if ( v6 >= 0 )
      {
        snprintf(
          v4,
          0x800u,
          "i2c chain = %d, master = 0x%x, slave high= 0x%x, slave low = 0x%x\n",
          *(_DWORD *)a1,
          *(unsigned __int16 *)(a1 + 4),
          *(unsigned __int8 *)(a1 + 6),
          *(unsigned __int8 *)(a1 + 7));
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_iic.c",
          93,
          "iic_init",
          8,
          36,
          20,
          v5);
        if ( i2c_select(v6, *(unsigned __int16 *)(a1 + 4)) )
        {
          strcpy(v4, "failed to i2c_select\n");
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_iic.c",
            93,
            "iic_init",
            8,
            38,
            100,
            v5);
          v7 = -1;
        }
        else
        {
          if ( !i2c_ioctl(v6, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
          {
            pthread_mutex_unlock(&stru_47B364);
            return v6;
          }
          strcpy(v4, "failed to i2c_ioctl\n");
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_iic.c",
            93,
            "iic_init",
            8,
            43,
            100,
            v5);
          v7 = -1;
        }
      }
      else
      {
        strcpy(v4, "failed to i2c_init\n");
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_iic.c",
          93,
          "iic_init",
          8,
          32,
          100,
          v5);
        v7 = -1;
      }
    }
    else
    {
      strcpy(v4, "bad param\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_iic.c",
        93,
        "iic_init",
        8,
        26,
        100,
        v5);
      v7 = -3;
    }
    if ( v6 > 0 )
      i2c_uninit(v6);
    pthread_mutex_unlock(&stru_47B364);
    return v7;
  }
}

int __fastcall i2c_uninit(int a1)
{
  int result; // r0
  _DWORD v2[2]; // [sp+14h] [bp+4h] BYREF
  char v3[2048]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v4[12]; // [sp+81Ch] [bp+80Ch] BYREF
  _DWORD *v5; // [sp+181Ch] [bp+180Ch]
  int i; // [sp+1820h] [bp+1810h]
  int v7; // [sp+1824h] [bp+1814h]

  v2[0] = a1;
  v7 = 0;
  if ( pthread_mutex_lock(&stru_47B544) )
  {
    strcpy(v3, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
             93,
             "i2c_uninit",
             10,
             59,
             100,
             v4);
  }
  else
  {
    if ( exists_c_map((int *)dword_47B55C, (int)v2) )
    {
      snprintf(v3, 0x800u, "remove %d from callback list\n", v2[0]);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
        93,
        "i2c_uninit",
        10,
        63,
        20,
        v4);
      remove_c_map((int *)dword_47B55C, (int)v2);
    }
    else
    {
      snprintf(v3, 0x800u, "ctx(%d) is not inited\n", v2[0]);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
        93,
        "i2c_uninit",
        10,
        66,
        80,
        v4);
    }
    v5 = new_iterator_c_map(dword_47B55C);
    for ( i = ((int (__fastcall *)(_DWORD *))*v5)(v5); i; i = ((int (__fastcall *)(_DWORD *))*v5)(v5) )
      ++v7;
    delete_iterator_c_map(v5);
    pthread_mutex_unlock(&stru_47B544);
    if ( v7 )
    {
      snprintf(v3, 0x800u, "still have %d nodes\n", v7);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
               93,
               "i2c_uninit",
               10,
               82,
               20,
               v4);
    }
    else
    {
      strcpy(v3, "all i2c uninited\n");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
        93,
        "i2c_uninit",
        10,
        77,
        20,
        v4);
      dword_47B560 = 0;
      result = delete_c_map((void ***)dword_47B55C);
      dword_47B55C = 0;
    }
  }
  return result;
}

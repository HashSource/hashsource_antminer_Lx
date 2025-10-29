int i2c_init()
{
  char v2[2048]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v3[12]; // [sp+81Ch] [bp+80Ch] BYREF
  _DWORD v4[2]; // [sp+181Ch] [bp+180Ch] BYREF
  int v5; // [sp+1824h] [bp+1814h] BYREF

  v5 = -1;
  if ( platform_inited )
  {
    if ( !dword_47B560 )
    {
      dword_47B55C = (int)new_c_map(956005, 0, 0);
      pthread_mutex_init(&stru_47B544, 0);
    }
    v5 = ++dword_47B560;
    v4[0] = 0;
    v4[1] = 0;
    insert_c_map((int *)dword_47B55C, &v5, 4u, v4, 8u);
    return v5;
  }
  else
  {
    strcpy(v2, "please init platform first!!\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      93,
      "i2c_init",
      8,
      38,
      100,
      v3);
    return -2;
  }
}

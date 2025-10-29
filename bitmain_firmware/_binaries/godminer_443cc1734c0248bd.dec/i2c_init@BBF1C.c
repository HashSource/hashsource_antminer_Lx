int i2c_init()
{
  int v0; // r4
  int *v1; // r6
  int v3; // [sp+14h] [bp-1804h] BYREF
  char v4[2040]; // [sp+18h] [bp-1800h] BYREF
  _DWORD v5[1024]; // [sp+818h] [bp-1000h] BYREF

  v3 = -1;
  if ( platform_inited )
  {
    v0 = dword_16B4CC;
    if ( dword_16B4CC )
    {
      v1 = (int *)dword_16B4D0;
    }
    else
    {
      v1 = new_c_map((int)sub_BBE4C, 0, 0);
      dword_16B4D0 = (int)v1;
      pthread_mutex_init(&stru_16B4D4, 0);
      v0 = dword_16B4CC;
    }
    dword_16B4CC = v0 + 1;
    v3 = v0 + 1;
    v5[0] = 0;
    v5[1] = 0;
    insert_c_map(v1, &v3, 4u, v5, 8u);
    return v3;
  }
  else
  {
    strcpy(v4, "please init platform first!!\n");
    V_LOCK();
    logfmt_raw((char *)v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_init",
      8,
      38,
      100,
      v5);
    return -2;
  }
}

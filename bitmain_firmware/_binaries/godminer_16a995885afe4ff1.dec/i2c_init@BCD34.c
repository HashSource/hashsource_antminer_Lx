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
    v0 = dword_16C5CC;
    if ( dword_16C5CC )
    {
      v1 = (int *)dword_16C5D0;
    }
    else
    {
      v1 = new_c_map((int)sub_BCC64, 0, 0);
      dword_16C5D0 = (int)v1;
      pthread_mutex_init(&stru_16C5D4, 0);
      v0 = dword_16C5CC;
    }
    dword_16C5CC = v0 + 1;
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
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
      179,
      "i2c_init",
      8,
      38,
      100,
      v5);
    return -2;
  }
}

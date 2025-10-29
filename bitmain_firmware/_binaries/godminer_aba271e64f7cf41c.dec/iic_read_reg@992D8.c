int __fastcall iic_read_reg(int a1, _BYTE *a2, unsigned int a3, int a4, unsigned int a5)
{
  char v11[2048]; // [sp+24h] [bp-1810h] BYREF
  char v12[16]; // [sp+824h] [bp-1010h] BYREF
  char v13; // [sp+1827h] [bp-Dh] BYREF
  int v14; // [sp+1828h] [bp-Ch]
  unsigned int i; // [sp+182Ch] [bp-8h]

  if ( pthread_mutex_lock(&stru_15F97C) )
  {
    strcpy(v11, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
      185,
      "iic_read_reg",
      12,
      164,
      100,
      v12,
      a4);
    return -4;
  }
  else
  {
    v14 = 0;
    for ( i = 0; i < a5; ++i )
    {
      v13 = *a2 + i;
      v14 = i2c_write(a1, (int)&v13, a3);
      if ( a3 == v14 )
      {
        v14 = i2c_read(a1, (void *)(a4 + i), a3);
      }
      else
      {
        strcpy(v11, "failed to write i2c reg\n");
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
          185,
          "iic_read_reg",
          12,
          175,
          100,
          v12);
      }
    }
    pthread_mutex_unlock(&stru_15F97C);
    return a5;
  }
}

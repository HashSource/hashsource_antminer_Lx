int __fastcall iic_read(int a1, void *a2, size_t a3)
{
  int v6; // [sp+14h] [bp-1810h]
  char v9[2048]; // [sp+20h] [bp-1804h] BYREF
  char v10[4]; // [sp+820h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_15F97C) )
  {
    strcpy(v9, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
      185,
      "iic_read",
      8,
      121,
      100,
      v10);
    return -4;
  }
  else
  {
    v6 = i2c_read(a1, a2, a3);
    pthread_mutex_unlock(&stru_15F97C);
    return v6;
  }
}

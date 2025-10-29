int __fastcall i2c_get_fd_from_ctx(int a1)
{
  int v3; // [sp+14h] [bp-1810h] BYREF
  char v4[2048]; // [sp+18h] [bp-180Ch] BYREF
  char v5[12]; // [sp+818h] [bp-100Ch] BYREF
  void *ptr; // [sp+1818h] [bp-Ch] BYREF
  int v7; // [sp+181Ch] [bp-8h]

  v3 = a1;
  v7 = -1;
  if ( pthread_mutex_lock(&stru_16055C) )
  {
    strcpy(v4, "failed to get i2c lock");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      185,
      "i2c_get_fd_from_ctx",
      19,
      299,
      100,
      v5);
    return -4;
  }
  else if ( find_c_map((int *)dword_160574, (int)&v3, &ptr) )
  {
    snprintf(
      v4,
      0x800u,
      "i2c dev = %s, addr = 0x%x, fd = %d",
      (const char *)ptr + 12,
      *((_DWORD *)ptr + 2),
      *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      185,
      "i2c_get_fd_from_ctx",
      19,
      310,
      20,
      v5);
    pthread_mutex_unlock(&stru_16055C);
    v7 = *((_DWORD *)ptr + 1);
    free(ptr);
    return v7;
  }
  else
  {
    pthread_mutex_unlock(&stru_16055C);
    return -2;
  }
}

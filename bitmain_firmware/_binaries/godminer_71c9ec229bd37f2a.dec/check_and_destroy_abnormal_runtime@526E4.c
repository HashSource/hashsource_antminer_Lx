int check_and_destroy_abnormal_runtime()
{
  int v0; // r6
  int v1; // r5
  void **v2; // r4
  _DWORD *v3; // r3
  _DWORD *v4; // t1
  int *v5; // r3
  _DWORD *v6; // r2
  int v7; // t1
  _DWORD s[256]; // [sp+10h] [bp-1404h] BYREF
  char v10[4100]; // [sp+410h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  pthread_mutex_lock(&stru_16C728);
  if ( dword_16C740 > 0 )
  {
    v1 = 0;
    v0 = 0;
    v2 = (void **)&dword_16C740;
    do
    {
      v4 = v2[1];
      ++v2;
      v3 = v4;
      if ( v4[61] == v4[51] )
      {
        s[v0++] = v3;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "chain %d runtime check asic number error, destroy it!", *((_DWORD *)*v2 + 37));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_interface.c",
          148,
          "check_and_destroy_abnormal_runtime",
          34,
          143,
          80,
          v10);
        (*((void (**)(void))*v2 + 2))();
        (*((void (**)(void))*v2 + 4))();
        free(*v2);
        *v2 = 0;
      }
      ++v1;
    }
    while ( dword_16C740 > v1 );
    if ( v0 )
    {
      v5 = s;
      v6 = &unk_16C744;
      do
      {
        v7 = *v5++;
        *v6++ = v7;
      }
      while ( v5 != &s[v0] );
    }
  }
  else
  {
    v0 = 0;
  }
  dword_16C740 = v0;
  return pthread_mutex_unlock(&stru_16C728);
}

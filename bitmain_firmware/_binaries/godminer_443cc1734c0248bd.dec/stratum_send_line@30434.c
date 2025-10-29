int __fastcall stratum_send_line(int *a1, char *a2)
{
  pthread_mutex_t *v4; // r4
  int v5; // r5
  _DWORD v7[7]; // [sp+28h] [bp-1024h] BYREF
  int v8; // [sp+44h] [bp-1008h]
  char v9[4100]; // [sp+48h] [bp-1004h] BYREF

  if ( opt_protocol )
  {
    V_LOCK();
    V_INT((int)v7, "poolno", *a1);
    logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "> %s", a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_send_line",
      17,
      26,
      60,
      v9);
  }
  v4 = (pthread_mutex_t *)(a1 + 11);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 11));
  v5 = send_line(a1[8], a2);
  pthread_mutex_unlock(v4);
  return v5;
}

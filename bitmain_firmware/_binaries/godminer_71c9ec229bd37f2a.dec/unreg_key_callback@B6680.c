int __fastcall unreg_key_callback(int a1)
{
  int v2; // r0
  int *v3; // r3
  int v4; // t1
  char v6[2048]; // [sp+10h] [bp-1804h] BYREF
  char v7[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = pthread_mutex_lock(&stru_16E464);
  if ( v2 )
  {
    strcpy(v6, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_ui.c",
      163,
      "unreg_key_callback",
      18,
      434,
      100,
      v7);
    return -1;
  }
  else
  {
    v3 = (int *)&off_16E480;
    while ( 1 )
    {
      v4 = *v3++;
      if ( a1 == v4 )
        break;
      if ( ++v2 == 5 )
      {
        strcpy(v6, "listener not registered before\n");
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_ui.c",
          163,
          "unreg_key_callback",
          18,
          448,
          80,
          v7);
        goto LABEL_7;
      }
    }
    dword_16E460[v2 + 8] = 0;
LABEL_7:
    pthread_mutex_unlock(&stru_16E464);
    return 0;
  }
}

int __fastcall reg_key_callback(int a1)
{
  int v2; // r5
  _DWORD *v3; // r2
  int v4; // r3
  char v7[2048]; // [sp+10h] [bp-1800h] BYREF
  char v8[4096]; // [sp+810h] [bp-1000h] BYREF

  v2 = pthread_mutex_lock(&stru_16C438);
  if ( v2 )
  {
    v2 = -1;
    strcpy(v7, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/platform/7007/7007_ui.c",
      178,
      "reg_key_callback",
      16,
      398,
      100,
      v8);
  }
  else
  {
    v3 = &off_16C454;
    v4 = 0;
    while ( *v3++ )
    {
      if ( ++v4 == 5 )
      {
        v2 = -2;
        strcpy(v7, "no more listener available\n");
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/backend/device/hal/platform/7007/7007_ui.c",
          178,
          "reg_key_callback",
          16,
          414,
          100,
          v8);
        goto LABEL_7;
      }
    }
    dword_16C434[v4 + 8] = a1;
LABEL_7:
    pthread_mutex_unlock(&stru_16C438);
  }
  return v2;
}

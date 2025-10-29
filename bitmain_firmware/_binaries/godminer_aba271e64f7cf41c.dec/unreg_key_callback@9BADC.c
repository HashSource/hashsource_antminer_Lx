int __fastcall unreg_key_callback(int (__fastcall *a1)(int, bool))
{
  char v4[2048]; // [sp+1Ch] [bp-1808h] BYREF
  char v5[8]; // [sp+81Ch] [bp-1008h] BYREF
  int i; // [sp+181Ch] [bp-8h]

  i = 0;
  if ( pthread_mutex_lock(&stru_15F9AC) )
  {
    strcpy(v4, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
      184,
      "unreg_key_callback",
      18,
      423,
      100,
      v5);
    return -1;
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( a1 == dword_15F9D4[i] )
      {
        dword_15F9D4[i] = 0;
        break;
      }
    }
    if ( i > 4 )
    {
      strcpy(v4, "listener not registered before\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
        184,
        "unreg_key_callback",
        18,
        436,
        80,
        v5);
    }
    pthread_mutex_unlock(&stru_15F9AC);
    return 0;
  }
}

int __fastcall reg_key_callback(int (__fastcall *a1)(int, bool))
{
  char v4[2048]; // [sp+18h] [bp-180Ch] BYREF
  char v5[12]; // [sp+818h] [bp-100Ch] BYREF
  int i; // [sp+1818h] [bp-Ch]
  int v7; // [sp+181Ch] [bp-8h]

  i = 0;
  v7 = 0;
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
      "reg_key_callback",
      16,
      390,
      100,
      v5);
    return -1;
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( !dword_15F9D4[i] )
      {
        dword_15F9D4[i] = a1;
        break;
      }
    }
    if ( i > 4 )
    {
      v7 = -2;
      strcpy(v4, "no more listener available\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
        184,
        "reg_key_callback",
        16,
        404,
        100,
        v5);
    }
    pthread_mutex_unlock(&stru_15F9AC);
    return v7;
  }
}

int __fastcall unreg_key_callback(int (__fastcall *a1)(int, bool))
{
  char v4[2048]; // [sp+1Ch] [bp+Ch] BYREF
  int v5; // [sp+81Ch] [bp+80Ch] BYREF
  int i; // [sp+181Ch] [bp+180Ch]

  i = 0;
  if ( pthread_mutex_lock(&stru_47B328) )
  {
    strcpy(v4, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
      92,
      "unreg_key_callback",
      18,
      434,
      100,
      &v5);
    return -1;
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( dword_47B350[i] == a1 )
      {
        dword_47B350[i] = 0;
        break;
      }
    }
    if ( i > 4 )
    {
      strcpy(v4, "listener not registered before\n");
      V_LOCK();
      logfmt_raw(&v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
        92,
        "unreg_key_callback",
        18,
        448,
        80,
        &v5);
    }
    pthread_mutex_unlock(&stru_47B328);
    return 0;
  }
}

int __fastcall reg_key_callback(int (__fastcall *a1)(int, bool))
{
  char v4[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v5[8]; // [sp+818h] [bp+808h] BYREF
  int v6; // [sp+1818h] [bp+1808h]
  int i; // [sp+181Ch] [bp+180Ch]

  i = 0;
  v6 = 0;
  if ( pthread_mutex_lock(&stru_47B328) )
  {
    strcpy(v4, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
      92,
      "reg_key_callback",
      16,
      398,
      100,
      v5);
    return -1;
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( !dword_47B350[i] )
      {
        dword_47B350[i] = a1;
        break;
      }
    }
    if ( i > 4 )
    {
      v6 = -2;
      strcpy(v4, "no more listener available\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
        92,
        "reg_key_callback",
        16,
        414,
        100,
        v5);
    }
    pthread_mutex_unlock(&stru_47B328);
    return v6;
  }
}

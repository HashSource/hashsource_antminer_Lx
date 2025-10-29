int check_and_destroy_abnormal_runtime()
{
  _BYTE v1[8]; // [sp+10h] [bp+0h] BYREF
  _DWORD s[256]; // [sp+1010h] [bp+1000h] BYREF
  int v3; // [sp+1410h] [bp+1400h]
  int i; // [sp+1414h] [bp+1404h]

  i = 0;
  memset(s, 0, sizeof(s));
  v3 = 0;
  pthread_mutex_lock(&stru_47A2B0);
  for ( i = 0; i < dword_47A2AC; ++i )
  {
    if ( *(_DWORD *)(dword_479EAC[i] + 236) == *(_DWORD *)(dword_479EAC[i] + 196) )
    {
      s[v3++] = dword_479EAC[i];
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v1,
        0x1000u,
        0,
        "chain %d runtime check asic number error, destroy it!",
        *(_DWORD *)(dword_479EAC[i] + 140));
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_interface.c",
        77,
        "check_and_destroy_abnormal_runtime",
        34,
        131,
        80,
        v1);
      (*(void (__fastcall **)(_DWORD))(dword_479EAC[i] + 8))(dword_479EAC[i]);
      (*(void (__fastcall **)(_DWORD))(dword_479EAC[i] + 16))(dword_479EAC[i]);
      free((void *)dword_479EAC[i]);
      dword_479EAC[i] = 0;
    }
  }
  for ( i = 0; i < v3; ++i )
    dword_479EAC[i] = s[i];
  dword_47A2AC = v3;
  return pthread_mutex_unlock(&stru_47A2B0);
}

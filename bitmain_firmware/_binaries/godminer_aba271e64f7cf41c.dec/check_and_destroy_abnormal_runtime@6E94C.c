int check_and_destroy_abnormal_runtime()
{
  char v1[12]; // [sp+10h] [bp-140Ch] BYREF
  _DWORD v2[256]; // [sp+1010h] [bp-40Ch] BYREF
  int i; // [sp+1410h] [bp-Ch]
  int v4; // [sp+1414h] [bp-8h]

  i = 0;
  memset(v2, 0, sizeof(v2));
  v4 = 0;
  pthread_mutex_lock(&stru_15F79C);
  for ( i = 0; i < dword_15F798; ++i )
  {
    if ( *(_DWORD *)(dword_15F698[i] + 424) == *(_DWORD *)(dword_15F698[i] + 336) )
    {
      v2[v4++] = dword_15F698[i];
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v1,
        0x1000u,
        0,
        "chain %d runtime check asic number error, destroy it!",
        *(_DWORD *)(dword_15F698[i] + 252));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_interface.c",
        165,
        "check_and_destroy_abnormal_runtime",
        34,
        124,
        80,
        v1);
      set_miner_6060info_asic_num_less_than_design_err(*(_DWORD *)(dword_15F698[i] + 252), 1);
      (*(void (__fastcall **)(_DWORD))(dword_15F698[i] + 20))(dword_15F698[i]);
      (*(void (__fastcall **)(_DWORD))(dword_15F698[i] + 28))(dword_15F698[i]);
      free((void *)dword_15F698[i]);
      dword_15F698[i] = 0;
    }
  }
  for ( i = 0; i < v4; ++i )
    dword_15F698[i] = v2[i];
  dword_15F798 = v4;
  return pthread_mutex_unlock(&stru_15F79C);
}

int __fastcall runtime_ctrl(int a1)
{
  char v3[12]; // [sp+18h] [bp-100Ch] BYREF
  int v4; // [sp+1018h] [bp-Ch]
  unsigned int i; // [sp+101Ch] [bp-8h]

  v4 = 0;
  for ( i = 0; i <= 1 && a1 != *(_DWORD *)&asc_119FA0[12 * i]; ++i )
    ;
  if ( i != 2 && *(_DWORD *)&asc_119FA0[12 * i + 8] )
  {
    v4 = (*(int (**)(void))&asc_119FA0[12 * i + 8])();
    if ( v4 )
    {
      pthread_mutex_lock(&stru_15F79C);
      dword_15F698[dword_15F798] = v4;
      *(_DWORD *)(v4 + 248) = dword_15F798++;
      pthread_mutex_unlock(&stru_15F79C);
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "not support miner type: %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_interface.c",
      165,
      "runtime_ctrl",
      12,
      69,
      100,
      v3);
  }
  return v4;
}

int __fastcall set_frontend_runtime_type(int a1, int a2)
{
  char v5[12]; // [sp+18h] [bp-100Ch] BYREF
  unsigned int i; // [sp+1018h] [bp-Ch]
  int v7; // [sp+101Ch] [bp-8h]

  v7 = 0;
  for ( i = 0; i <= 1 && a2 != *(_DWORD *)&asc_DAF50[12 * i]; ++i )
    ;
  if ( i != 2 && *(_DWORD *)&asc_DAF50[12 * i + 8] )
  {
    v7 = (*(int (**)(void))&asc_DAF50[12 * i + 8])();
    if ( v7 )
    {
      *(_DWORD *)(v7 + 72) = a1;
      if ( dword_152334 )
        free((void *)dword_152334);
      *(_DWORD *)(v7 + 76) = a2;
      dword_152334 = v7;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "ALGO %d does not define Frontend_Base", a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/frontend/frontend_interface.c",
      167,
      "set_frontend_runtime_type",
      25,
      66,
      100,
      v5);
  }
  return v7;
}

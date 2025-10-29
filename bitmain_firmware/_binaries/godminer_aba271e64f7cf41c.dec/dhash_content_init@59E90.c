int __fastcall dhash_content_init(int a1)
{
  char v3[12]; // [sp+18h] [bp-100Ch] BYREF
  int v4; // [sp+1018h] [bp-Ch]
  unsigned int i; // [sp+101Ch] [bp-8h]

  v4 = 0;
  for ( i = 0; i <= 1 && a1 != *(_DWORD *)&asc_FDFA4[12 * i]; ++i )
    ;
  if ( i != 2 && *(_DWORD *)&asc_FDFA4[12 * i + 8] )
    return (*(int (**)(void))&asc_FDFA4[12 * i + 8])();
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "ALGO %d does not define dhash_content", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/dhash_content/dhash_content.c",
    167,
    "dhash_content_init",
    18,
    64,
    100,
    v3);
  return v4;
}

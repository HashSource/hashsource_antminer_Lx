int sub_6F6C8()
{
  int v0; // r4
  char v3[16]; // [sp+14h] [bp-1010h] BYREF
  size_t nmemb; // [sp+1014h] [bp-10h]

  nmemb = *(_DWORD *)(dword_161260 + 92);
  v0 = dword_161260;
  *(_DWORD *)(v0 + 84) = calloc(nmemb, 0x18u);
  if ( *(_DWORD *)(dword_161260 + 84) )
    return 0;
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "calloc sensor failed!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/topol/topol.c",
    159,
    "_alloc_sensor",
    13,
    98,
    100,
    v3);
  return -1;
}

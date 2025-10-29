int frontend_runtime_instance()
{
  char v2[4]; // [sp+10h] [bp-1004h] BYREF

  if ( dword_152334 )
    return dword_152334;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "frontend runtime type not set");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/frontend/frontend_interface.c",
    167,
    "frontend_runtime_instance",
    25,
    85,
    100,
    v2);
  return 0;
}

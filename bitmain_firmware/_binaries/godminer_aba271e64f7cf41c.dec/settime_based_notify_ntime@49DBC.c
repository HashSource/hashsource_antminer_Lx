int __fastcall settime_based_notify_ntime(const char *a1)
{
  char v3[16]; // [sp+1Ch] [bp-1010h] BYREF
  struct timeval tv; // [sp+101Ch] [bp-10h] BYREF
  unsigned int v5; // [sp+1024h] [bp-8h]

  v5 = strtol(a1, 0, 16);
  if ( byte_152331 == 1 || !v5 )
    return 0;
  tv = 0;
  gettimeofday(&tv, 0);
  if ( v5 <= tv.tv_sec )
    return 0;
  tv.tv_sec = v5;
  settimeofday(&tv, 0);
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "settime notify.ntime successfuly");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/frontend/frontend_base.c",
    162,
    "settime_based_notify_ntime",
    26,
    383,
    60,
    v3);
  byte_152331 = 1;
  return 1;
}

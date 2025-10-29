int droa_macro_check()
{
  int result; // r0
  int v1; // r4
  int *v2; // r0
  char *v3; // r0
  char v4[16]; // [sp+14h] [bp-1010h] BYREF
  FILE *stream; // [sp+1014h] [bp-10h]

  result = access("/nvdata/droaswitch", 0);
  if ( result )
  {
    stream = fopen("/nvdata/droaswitch", "w");
    if ( stream )
    {
      return fclose(stream);
    }
    else
    {
      V_LOCK();
      v1 = *_errno_location();
      v2 = _errno_location();
      v3 = strerror(*v2);
      logfmt_raw(v4, 0x1000u, 0, "cswitch file ret=%d,reason=%s", v1, v3);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/"
               "godminer-origin_godminer-branch1/god-miner.c",
               149,
               "droa_macro_check",
               16,
               1930,
               60,
               v4);
    }
  }
  return result;
}

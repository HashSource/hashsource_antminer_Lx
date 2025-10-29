int __fastcall sub_31E20(const char *a1, int *a2)
{
  int result; // r0
  int v5; // r4
  char *endptr; // [sp+14h] [bp-1004h] BYREF
  char v7[4096]; // [sp+18h] [bp-1000h] BYREF

  result = strtol(a1, &endptr, 0);
  v5 = result;
  if ( *endptr || !*a1 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "'%s' is not a number", a1);
    V_UNLOCK();
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/releas"
               "e/build/godminer-origin_master/util.c",
               142,
               "opt_set_longval",
               15,
               453,
               100,
               v7);
    if ( (unsigned int)(v5 + 0x7FFFFFFF) <= 0xFFFFFFFD )
      goto LABEL_4;
  }
  else if ( (unsigned int)(result + 0x7FFFFFFF) <= 0xFFFFFFFD )
  {
LABEL_4:
    *a2 = v5;
    return result;
  }
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "'%s' is out of range", a1);
  V_UNLOCK();
  result = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/"
             "build/godminer-origin_master/util.c",
             142,
             "opt_set_longval",
             15,
             455,
             100,
             v7);
  *a2 = v5;
  return result;
}

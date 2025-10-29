int __fastcall sub_3A890(const char *a1, int *a2, int a3, int a4)
{
  int result; // r0
  char v9[12]; // [sp+20h] [bp-100Ch] BYREF
  char *endptr; // [sp+1020h] [bp-Ch] BYREF
  int v11; // [sp+1024h] [bp-8h]

  result = strtol(a1, &endptr, 0);
  v11 = result;
  if ( *endptr || !*a1 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "'%s' is not a number", a1);
    V_UNLOCK();
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/"
               "godminer-origin_godminer-branch1/util.c",
               144,
               "opt_set_longval",
               15,
               474,
               100,
               v9);
  }
  if ( v11 == 0x7FFFFFFF || v11 == 0x80000000 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "'%s' is out of range", a1);
    V_UNLOCK();
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/"
               "godminer-origin_godminer-branch1/util.c",
               144,
               "opt_set_longval",
               15,
               476,
               100,
               v9);
  }
  if ( v11 < a3 && v11 > a4 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "'%s' is out of range", a1);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/util.c",
             144,
             "opt_set_longval",
             15,
             480,
             100,
             v9);
  }
  else
  {
    *a2 = v11;
  }
  return result;
}

int __fastcall sub_E2384(const char *a1, int *a2, int a3, int a4)
{
  int result; // r0
  _BYTE v9[8]; // [sp+20h] [bp+10h] BYREF
  char *v10; // [sp+1020h] [bp+1010h] BYREF
  int v11; // [sp+1024h] [bp+1014h]

  result = strtol(a1, &v10, 0);
  v11 = result;
  if ( *v10 || !*a1 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "'%s' is not a number", a1);
    V_UNLOCK();
    result = zlog(
               g_zc,
               "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c",
               56,
               "opt_set_longval",
               15,
               453,
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
               "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c",
               56,
               "opt_set_longval",
               15,
               455,
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
             "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c",
             56,
             "opt_set_longval",
             15,
             459,
             100,
             v9);
  }
  else
  {
    *a2 = v11;
  }
  return result;
}

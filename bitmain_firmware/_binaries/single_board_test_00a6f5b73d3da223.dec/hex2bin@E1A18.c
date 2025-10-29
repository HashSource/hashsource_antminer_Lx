bool __fastcall hex2bin(_BYTE *a1, char *a2, int a3)
{
  _BYTE v8[8]; // [sp+20h] [bp+10h] BYREF
  char *v9; // [sp+1020h] [bp+1010h] BYREF
  char v10[4]; // [sp+1024h] [bp+1014h] BYREF

  v10[2] = 0;
  while ( *a2 && a3 )
  {
    if ( !a2[1] )
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "hex2bin str truncated");
      V_UNLOCK();
      zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c", 56, "hex2bin", 7, 154, 100, v8);
      return 0;
    }
    v10[0] = *a2;
    v10[1] = a2[1];
    *a1 = strtol(v10, &v9, 16);
    if ( *v9 )
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "hex2bin failed on '%s'", v10);
      V_UNLOCK();
      zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c", 56, "hex2bin", 7, 161, 100, v8);
      return 0;
    }
    ++a1;
    a2 += 2;
    --a3;
  }
  return a3 == 0;
}

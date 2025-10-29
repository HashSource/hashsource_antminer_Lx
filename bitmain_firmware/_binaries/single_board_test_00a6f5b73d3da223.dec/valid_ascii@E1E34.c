int __fastcall valid_ascii(const char *a1)
{
  _BYTE v4[16]; // [sp+18h] [bp+8h] BYREF
  unsigned __int8 v5; // [sp+101Bh] [bp+100Bh]
  signed int v6; // [sp+101Ch] [bp+100Ch]
  unsigned __int8 v7; // [sp+1023h] [bp+1013h]
  signed int i; // [sp+1024h] [bp+1014h]

  v7 = 0;
  if ( a1 )
  {
    v6 = strlen(a1);
    if ( v6 )
    {
      for ( i = 0; i < v6; ++i )
      {
        v5 = a1[i];
        if ( v5 <= 0x1Fu || v5 > 0x7Eu )
        {
          V_LOCK();
          logfmt_raw(v4, 0x1000u, 0, "Invalid char passed to valid_ascii");
          V_UNLOCK();
          zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c", 56, "valid_ascii", 11, 258, 20, v4);
          return v7;
        }
      }
      v7 = 1;
      return 1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "Zero length string passed to valid_ascii");
      V_UNLOCK();
      zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c", 56, "valid_ascii", 11, 249, 20, v4);
      return v7;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Null string passed to valid_ascii");
    V_UNLOCK();
    zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c", 56, "valid_ascii", 11, 243, 20, v4);
    return v7;
  }
}

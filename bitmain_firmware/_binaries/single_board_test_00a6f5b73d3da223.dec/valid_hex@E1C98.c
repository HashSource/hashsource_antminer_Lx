int __fastcall valid_hex(const char *a1)
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
    for ( i = 0; i < v6; ++i )
    {
      v5 = a1[i];
      if ( dword_1C7E68[v5] < 0 )
      {
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, "Invalid charpassed to valid_hex");
        V_UNLOCK();
        zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c", 56, "valid_hex", 9, 228, 20, v4);
        return v7;
      }
    }
    v7 = 1;
    return 1;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Null string passed to valid_hex");
    V_UNLOCK();
    zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c", 56, "valid_hex", 9, 218, 20, v4);
    return v7;
  }
}

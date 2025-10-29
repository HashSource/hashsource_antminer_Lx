int __fastcall extract_byte_from_hex(const char *a1, int a2)
{
  _BYTE v5[12]; // [sp+1Ch] [bp+Ch] BYREF
  int v6; // [sp+101Ch] [bp+100Ch]
  int v7; // [sp+1020h] [bp+1010h]
  unsigned __int8 v8; // [sp+1026h] [bp+1016h]
  unsigned __int8 v9; // [sp+1027h] [bp+1017h]

  if ( (strlen(a1) & 1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "Provided hex %s is not valid!", a1);
    V_UNLOCK();
    zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c", 56, "extract_byte_from_hex", 21, 36, 100, v5);
  }
  v9 = tolower((unsigned __int8)a1[a2]);
  v8 = tolower((unsigned __int8)a1[a2 + 1]);
  if ( (unsigned __int8)sub_E10B4(v9) != 1 )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "Hex character %d is not valid!", v9);
    V_UNLOCK();
    zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c", 56, "extract_byte_from_hex", 21, 43, 100, v5);
  }
  if ( (unsigned __int8)sub_E10B4(v8) != 1 )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "Hex character %d is not valid!", v8);
    V_UNLOCK();
    zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c", 56, "extract_byte_from_hex", 21, 46, 100, v5);
  }
  v7 = 16 * sub_E10F4(v9);
  v6 = sub_E10F4(v8);
  if ( v6 + v7 > 255 )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "The provided hex %s at index %d is not a valid byte!", a1, a2);
    V_UNLOCK();
    zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/util.c", 56, "extract_byte_from_hex", 21, 53, 100, v5);
  }
  return (unsigned __int8)(v6 + v7);
}

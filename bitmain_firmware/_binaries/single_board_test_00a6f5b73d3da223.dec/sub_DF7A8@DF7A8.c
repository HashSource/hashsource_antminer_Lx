int __fastcall sub_DF7A8(unsigned __int8 a1)
{
  _BYTE v4[4096]; // [sp+18h] [bp+8h] BYREF

  if ( a1 > 0x2Fu && a1 <= 0x39u )
    return a1 - 48;
  if ( a1 > 0x60u && a1 <= 0x66u )
    return a1 - 87;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "The provided character %c is invalid and was not rejected in preliminary hex checks!", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/./util.h",
    58,
    "get_value_from_lower_hex",
    24,
    42,
    100,
    v4);
  return -1;
}

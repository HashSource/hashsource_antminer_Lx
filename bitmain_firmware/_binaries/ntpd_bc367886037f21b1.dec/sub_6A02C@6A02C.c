int __fastcall sub_6A02C(_WORD *a1)
{
  _BYTE *v3; // r7
  int v4; // r6
  unsigned int v5; // r4
  __int16 v6; // r4
  const char *v7; // r3

  if ( *a1 != 2 || a1[2] != 32639 )
    return sub_6BF44(a1);
  v3 = &lib_stringbuf[128 * lib_nextbuf];
  v4 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v3, 0, 0x80u);
  v5 = *((_DWORD *)a1 + 1);
  lib_nextbuf = v4;
  v6 = bswap32(v5);
  v7 = (const char *)sub_78244(HIBYTE(v6));
  if ( v7 )
    sub_6BCB0(v3, 128, "%s(%lu)", v7, (unsigned __int8)v6);
  else
    sub_6BCB0(v3, 128, "REFCLK(%lu,%lu)", HIBYTE(v6), (unsigned __int8)v6);
  return (int)v3;
}

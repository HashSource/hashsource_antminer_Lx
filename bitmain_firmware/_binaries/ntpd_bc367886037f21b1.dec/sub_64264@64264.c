_BYTE *__fastcall sub_64264(unsigned int a1)
{
  _BYTE *v2; // r4
  int v4; // r7

  if ( a1 <= 8 )
    return *(&off_B3BD8 + a1);
  v2 = &lib_stringbuf[128 * lib_nextbuf];
  v4 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v2, 0, 0x80u);
  lib_nextbuf = v4;
  sub_6BCB0(v2, 128, "mode#%zu", a1);
  return v2;
}

char *__fastcall sub_13608(int a1)
{
  int v1; // r4
  char v3[12]; // [sp+0h] [bp-14h] BYREF

  v1 = a1;
  byte_B7A14[0] = 0;
  if ( (a1 & 0x2000) != 0 )
  {
    v1 = a1 & 0xDFFF;
    sub_D4FC(byte_B7A14, "ntponly");
  }
  if ( (v1 & 0x4000) != 0 )
  {
    v1 &= 0xBFFFu;
    sub_D4FC(byte_B7A14, "source");
  }
  if ( v1 )
  {
    sub_6BCB0(v3, 10, "%0x", v1);
    sub_D4FC(byte_B7A14, v3);
  }
  return byte_B7A14;
}

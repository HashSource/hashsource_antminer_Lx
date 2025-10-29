unsigned int __fastcall sub_1BCB4(unsigned int *a1)
{
  unsigned int v2; // r4
  unsigned int result; // r0

  if ( !a1 )
    sub_10788();
  sub_1BBC8();
  v2 = rand();
  result = (rand() << 12) & 0xFFFF0000;
  *a1 = (unsigned __int16)(v2 >> 4) | result;
  return result;
}

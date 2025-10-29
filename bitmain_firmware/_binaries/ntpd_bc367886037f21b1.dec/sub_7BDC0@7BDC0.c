unsigned int __fastcall sub_7BDC0(unsigned int *a1)
{
  unsigned int v2; // r4
  unsigned int result; // r0

  if ( !a1 )
    sub_6E8F0((int)"./../lib/isc/random.c", 78, 0, "val != ((void *)0)");
  sub_7BCD4();
  v2 = rand();
  result = (rand() << 12) & 0xFFFF0000;
  *a1 = (unsigned __int16)(v2 >> 4) | result;
  return result;
}

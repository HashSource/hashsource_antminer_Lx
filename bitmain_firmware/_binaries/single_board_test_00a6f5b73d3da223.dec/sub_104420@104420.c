unsigned int __fastcall sub_104420(unsigned __int8 a1)
{
  unsigned int i; // [sp+Ch] [bp+Ch]

  for ( i = 0; i <= 0x40; ++i )
  {
    if ( a1 == (unsigned __int8)aAbcdefghijklmn[i] )
      return i;
  }
  printf("%s (%02x) failed!\n\n", "base64_decode_value", a1);
  return -1;
}

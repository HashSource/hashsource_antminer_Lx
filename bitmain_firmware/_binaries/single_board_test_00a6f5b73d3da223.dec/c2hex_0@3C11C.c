unsigned __int8 __cdecl c2hex_0(unsigned __int8 value)
{
  unsigned __int8 v2; // [sp+Fh] [bp+Fh]

  v2 = -1;
  if ( value > 0x2Fu && value <= 0x39u )
    return value & 0xF;
  switch ( value )
  {
    case 'a':
    case 'A':
      return 10;
    case 'b':
    case 'B':
      return 11;
    case 'c':
    case 'C':
      return 12;
    case 'd':
    case 'D':
      return 13;
    case 'e':
    case 'E':
      return 14;
    case 'f':
    case 'F':
      return 15;
  }
  printf("input value error: %c\n", value);
  return v2;
}

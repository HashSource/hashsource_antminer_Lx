int __fastcall sub_A9658(unsigned __int16 a1)
{
  if ( a1 == 106 )
    return 0;
  if ( a1 <= 0x6Au )
  {
    if ( a1 == 98 )
      return 0;
    if ( a1 <= 0x62u )
    {
      if ( a1 != 26 )
      {
        if ( a1 != 65 )
          return (unsigned __int8)-1;
        return 64;
      }
      return 0;
    }
    if ( (unsigned int)a1 - 100 <= 2 )
      return 0;
    return (unsigned __int8)-1;
  }
  if ( a1 <= 0x78u )
  {
    if ( a1 < 0x75u && a1 != 113 && a1 != 115 )
      return (unsigned __int8)-1;
    return 64;
  }
  if ( (unsigned int)a1 - 193 > 1 )
    return (unsigned __int8)-1;
  return 0;
}

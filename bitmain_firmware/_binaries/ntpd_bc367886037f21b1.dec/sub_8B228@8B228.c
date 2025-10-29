unsigned int __fastcall sub_8B228(unsigned int result, unsigned int a2)
{
  if ( a2 != 1 )
  {
    if ( !a2 )
      JUMPOUT(0x8BB98);
    if ( result <= a2 )
    {
      return result == a2;
    }
    else if ( (a2 & (a2 - 1)) != 0 )
    {
      return ((int (*)(void))((char *)&loc_8B260 + 16 * (31 - (__clz(a2) - __clz(result)))))();
    }
    else
    {
      result >>= 31 - __clz(a2);
    }
  }
  return result;
}

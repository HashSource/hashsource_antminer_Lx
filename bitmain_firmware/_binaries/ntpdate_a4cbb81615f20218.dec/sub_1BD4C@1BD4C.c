unsigned int __fastcall sub_1BD4C(unsigned int result, unsigned int a2)
{
  unsigned int v2; // r4
  int v4; // r1
  unsigned int v5; // [sp+0h] [bp-8h] BYREF

  v2 = result;
  if ( a2 < result )
  {
    if ( a2 )
    {
      sub_1BCB4(&v5);
      sub_1C04C(v5, a2);
      return v2 - v4;
    }
  }
  else
  {
    result |= a2;
    if ( result )
      sub_10788();
  }
  return result;
}

int __fastcall sub_423CC(int a1, int a2, time_t *a3)
{
  int result; // r0

  result = dword_BBBE8;
  if ( dword_BBBE8 && *(_BYTE *)dword_BBBE8 )
  {
    result = sub_2E270((const char *)dword_BBBE8, dword_BBCC8, dword_BBCC4 == 0, a1);
    if ( result )
    {
      dword_BBCC4 = 1;
    }
    else if ( !dword_BBCC4 )
    {
      return result;
    }
    return sub_414B4(a1, a2, a3);
  }
  return result;
}

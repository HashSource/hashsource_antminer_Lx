int __fastcall sub_33A3B8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, _DWORD *a8)
{
  int v12; // r4
  int result; // r0

  if ( sub_33A848(a1, a4) )
  {
    *a8 = a5;
    a8[1] = a3;
    if ( a2 >= 0 )
    {
      if ( a7 == a5 + a2 )
        v12 = 6;
      else
        v12 = 1;
      a8[3] = v12;
      return 0;
    }
    result = 0;
    if ( a2 == -2 )
      a8[3] = 1;
  }
  else
  {
    if ( a5 == a7 && sub_33A848(a1, a6) )
    {
      a8[2] = a3;
      return 0;
    }
    return (*(int (__fastcall **)(_DWORD, int, int, int, int, int, int, _DWORD *))(**(_DWORD **)(a1 + 8) + 28))(
             *(_DWORD *)(a1 + 8),
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8);
  }
  return result;
}

int __fastcall sub_33A2C4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, _DWORD *a8)
{
  if ( a5 == a7 && sub_33A848(a1, a6) )
  {
    a8[2] = a3;
    return 0;
  }
  else
  {
    if ( sub_33A848(a1, a4) )
    {
      *a8 = a5;
      a8[1] = a3;
      a8[3] = 1;
    }
    return 0;
  }
}

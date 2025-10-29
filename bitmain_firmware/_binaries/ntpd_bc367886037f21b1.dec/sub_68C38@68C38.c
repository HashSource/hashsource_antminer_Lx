int __fastcall sub_68C38(int a1)
{
  int i; // r4
  int v3; // r0

  if ( a1 > 0 )
  {
    for ( i = 0; i != a1; ++i )
    {
      v3 = i;
      close(v3);
    }
  }
  return sub_68BC8(a1);
}

int __fastcall sub_FE450(int a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // r2

  if ( sub_FE420(a1, a2, a3, a4) )
    v5 = a2 - a3 + a4 - a1;
  else
    v5 = a4 - a3;
  return v5 - a5;
}

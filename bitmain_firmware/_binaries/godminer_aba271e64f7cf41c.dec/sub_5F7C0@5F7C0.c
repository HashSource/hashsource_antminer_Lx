int __fastcall sub_5F7C0(int a1)
{
  int v1; // r3

  v1 = a1 & ~(a1 >> 31);
  if ( v1 >= 255 )
    return 255;
  return v1;
}

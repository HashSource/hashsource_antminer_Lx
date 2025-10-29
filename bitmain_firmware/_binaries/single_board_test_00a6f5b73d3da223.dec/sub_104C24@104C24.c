int __fastcall sub_104C24(int result, int a2, unsigned int a3)
{
  int v3; // [sp+Ch] [bp+Ch]
  unsigned int i; // [sp+14h] [bp+14h]

  v3 = result;
  for ( i = 0; i < a3; ++i )
  {
    result = a2;
    *(_BYTE *)(i + v3) ^= *(_BYTE *)(i + a2);
  }
  return result;
}

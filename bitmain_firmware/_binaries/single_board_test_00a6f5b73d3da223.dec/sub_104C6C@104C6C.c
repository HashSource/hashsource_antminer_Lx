int __fastcall sub_104C6C(int result, int a2, unsigned int a3)
{
  unsigned int i; // [sp+14h] [bp+14h]

  for ( i = 0; i < a3; ++i )
    *(_BYTE *)(i + a2) = *(_BYTE *)(i + result);
  return result;
}

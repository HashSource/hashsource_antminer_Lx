unsigned int __fastcall sub_FF634(unsigned int result, int a2, unsigned int a3)
{
  unsigned int v5; // [sp+Ch] [bp+Ch]
  unsigned int i; // [sp+14h] [bp+14h]

  v5 = result;
  for ( i = 0; i < a3; ++i )
  {
    result = sub_FF61C(*(_DWORD *)(4 * i + a2));
    *(_DWORD *)(v5 + 4 * i) = result;
  }
  return result;
}

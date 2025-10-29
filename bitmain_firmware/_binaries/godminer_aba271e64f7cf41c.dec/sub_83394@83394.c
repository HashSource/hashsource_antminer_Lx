int __fastcall sub_83394(int a1)
{
  int i; // [sp+14h] [bp-8h]

  for ( i = 10; i < 2 * *(_DWORD *)(a1 + 336); i += 10 )
  {
    if ( sub_7CE48(a1, i, 15) )
      return 109;
  }
  return 0;
}

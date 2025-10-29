int __fastcall sub_5B854(int a1, int a2)
{
  unsigned __int8 v3; // [sp+13h] [bp+13h]
  int i; // [sp+14h] [bp+14h]

  v3 = 1;
  for ( i = 7; i >= 0; --i )
  {
    if ( *(_DWORD *)(4 * i + a1) < *(_DWORD *)(4 * i + a2) )
      return 1;
    if ( *(_DWORD *)(4 * i + a1) > *(_DWORD *)(4 * i + a2) )
      return 0;
  }
  return v3;
}

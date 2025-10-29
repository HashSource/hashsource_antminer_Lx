int __fastcall sub_DEE20(int a1, int a2)
{
  int i; // [sp+10h] [bp+10h]
  unsigned __int8 v4; // [sp+17h] [bp+17h]

  v4 = 1;
  for ( i = 7; i >= 0; --i )
  {
    if ( *(_DWORD *)(4 * i + a1) > *(_DWORD *)(4 * i + a2) )
      return 0;
    if ( *(_DWORD *)(4 * i + a1) < *(_DWORD *)(4 * i + a2) )
      return 1;
  }
  return v4;
}

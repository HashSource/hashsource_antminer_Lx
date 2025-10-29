int __fastcall sub_6A98C(int a1, int a2)
{
  unsigned int v3; // [sp+8h] [bp+8h]
  unsigned int v4; // [sp+Ch] [bp+Ch]
  unsigned __int8 v5; // [sp+13h] [bp+13h]
  int i; // [sp+14h] [bp+14h]

  v5 = 1;
  for ( i = 0; i <= 5; ++i )
  {
    v4 = HIBYTE(*(_DWORD *)(4 * i + a1))
       | (*(_DWORD *)(4 * i + a1) << 24)
       | (*(_DWORD *)(4 * i + a1) << 8) & 0xFF0000
       | (*(_DWORD *)(4 * i + a1) >> 8) & 0xFF00;
    v3 = HIBYTE(*(_DWORD *)(4 * i + a2))
       | (*(_DWORD *)(4 * i + a2) << 24)
       | (*(_DWORD *)(4 * i + a2) << 8) & 0xFF0000
       | (*(_DWORD *)(4 * i + a2) >> 8) & 0xFF00;
    if ( v4 > v3 )
      return 0;
    if ( v4 < v3 )
      return 1;
  }
  return v5;
}

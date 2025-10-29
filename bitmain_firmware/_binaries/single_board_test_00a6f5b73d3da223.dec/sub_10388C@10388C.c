int __fastcall sub_10388C(int result, int a2)
{
  int v2; // [sp+10h] [bp+10h]
  int i; // [sp+14h] [bp+14h]

  v2 = result;
  for ( i = 0; i <= 7; ++i )
  {
    result = a2;
    *(_DWORD *)(4 * i + v2) = HIBYTE(*(_DWORD *)(4 * i + a2))
                            | (*(_DWORD *)(4 * i + a2) << 24)
                            | (*(_DWORD *)(4 * i + a2) << 8) & 0xFF0000
                            | (*(_DWORD *)(4 * i + a2) >> 8) & 0xFF00;
  }
  return result;
}

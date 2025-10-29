int __fastcall get_sols_ae(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7, int a8)
{
  int v9; // r3
  unsigned int v13; // [sp+2Ch] [bp+Ch]
  unsigned int v14; // [sp+30h] [bp+10h]
  int j; // [sp+34h] [bp+14h]
  int i; // [sp+38h] [bp+18h]
  int v17; // [sp+3Ch] [bp+1Ch]

  if ( !gSols[172 * a1] )
    return 0;
  v17 = 0;
  for ( i = 0; i < a8; ++i )
  {
    v14 = sip_node_ae(a1, a2, a3, a4, a5, *(_DWORD *)(4 * i + a7), 0);
    v13 = sip_node_ae(a1, a2, a3, a4, a5, *(_DWORD *)(4 * i + a7), 1u);
    for ( j = 0; j <= 41; ++j )
    {
      if ( v14 >> 1 == gEdges[84 * a1 + 2 * j] && v13 >> 1 == gEdges[84 * a1 + 1 + 2 * j] )
      {
        v9 = v17++;
        *(_DWORD *)(4 * v9 + a6) = *(_DWORD *)(4 * i + a7);
      }
    }
  }
  return 1;
}

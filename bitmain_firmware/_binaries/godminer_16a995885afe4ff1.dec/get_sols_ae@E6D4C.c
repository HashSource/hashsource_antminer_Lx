int __fastcall get_sols_ae(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int *a8, int a9)
{
  int *v10; // r8
  int v12; // r6
  char *v13; // r5
  unsigned int v14; // r0
  int v15; // t1
  unsigned int v16; // r4
  unsigned int v17; // r0
  char *v18; // r3
  unsigned int v19; // r0
  char *v21; // [sp+24h] [bp-10h]
  int v22; // [sp+2Ch] [bp-8h]

  v22 = (unsigned __int8)gSols[172 * a1];
  if ( gSols[172 * a1] && a9 > 0 )
  {
    v10 = a8;
    v12 = 0;
    v13 = (char *)&unk_16F618 + 336 * a1;
    v21 = (char *)&gEdges + 336 * a1 + 4;
    do
    {
      v14 = sip_node_ae(a1, a2, a3, a4, a5, a6, *v10, 0);
      v15 = *v10++;
      v16 = v14 >> 1;
      v17 = sip_node_ae(a1, a2, a3, a4, a5, a6, v15, 1);
      v18 = v21;
      v19 = v17 >> 1;
      do
      {
        if ( v16 == *((_DWORD *)v18 - 1) && v19 == *(_DWORD *)v18 )
          *(_DWORD *)(a7 + 4 * v12++) = *(v10 - 1);
        v18 += 8;
      }
      while ( v18 != v13 );
    }
    while ( v10 != &a8[a9] );
  }
  return v22;
}

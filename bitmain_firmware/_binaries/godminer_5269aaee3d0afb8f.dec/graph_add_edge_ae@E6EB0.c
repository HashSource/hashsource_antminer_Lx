unsigned int __fastcall graph_add_edge_ae(unsigned int result, int a2, int a3)
{
  int v3; // r7
  int v4; // r6
  int v5; // r8
  int v6; // r9
  int v7; // r5
  int v8; // r4
  int v9; // r10
  int v10; // r11
  int v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // lr
  unsigned int v14; // r1
  unsigned int v15; // r12
  unsigned int *j; // r6
  int v17; // t1
  unsigned int *i; // r9
  int v19; // t1
  int v20; // r0
  unsigned int v21; // r2
  int v22; // r3
  unsigned int v23; // r1
  int v24; // r7
  int v25; // r3
  int v26; // lr
  int v27; // t1
  int v28; // t1
  unsigned int v29; // r4
  unsigned int v30; // r3
  int v31; // r6
  _DWORD *v32; // r2
  unsigned int v33; // r12
  unsigned int v34; // lr
  int v35; // r12
  int v36; // r1
  int v37; // r6
  int v38; // r2
  unsigned int *v39; // r3
  unsigned int v40; // r0
  unsigned int v41; // r12
  bool v42; // zf
  int v43; // r2

  v3 = 2 * a2;
  if ( !(2 * a2) )
    return result;
  LOWORD(v4) = -844;
  HIWORD(v4) = (unsigned int)&unk_16EBAC >> 16;
  LOWORD(v6) = -11068;
  v5 = (result << 11) + v4;
  HIWORD(v6) = (unsigned int)&unk_16C3BC >> 16;
  v7 = result;
  v8 = (2 * a3) | 1;
  v9 = (result << 11) + v6;
  v10 = sub_E6DD0(result, 2 * a2, v5);
  result = sub_E6DD0(v7, v8, v9);
  if ( !v10 || !result )
    return result;
  v11 = v7 << 9;
  v12 = v10 - 1;
  v13 = result - 1;
  v14 = *(_DWORD *)(v4 + 4 * ((v7 << 9) + v10 - 1));
  v15 = *(_DWORD *)(v6 + 4 * ((v7 << 9) + result - 1));
  if ( v14 != v15 )
  {
    if ( v12 >= v13 )
    {
      if ( result != 1 )
      {
        for ( i = (unsigned int *)(v6 + 4 * (v11 + 1073741822 + result) + 4); ; v15 = *i )
        {
          v19 = *--i;
          cuckoo_hash_set(v7, v15, v19);
          if ( i == (unsigned int *)v9 )
            break;
        }
      }
      return cuckoo_hash_set(v7, v8, v3);
    }
    else
    {
      if ( v10 != 1 )
      {
        for ( j = (unsigned int *)(v4 + 4 * (v11 + 1073741822 + v10) + 4); ; v14 = *j )
        {
          v17 = *--j;
          cuckoo_hash_set(v7, v14, v17);
          if ( j == (unsigned int *)v5 )
            break;
        }
      }
      return cuckoo_hash_set(v7, v3, v8);
    }
  }
  if ( v12 >= v13 )
    v20 = result - 1;
  else
    v20 = v10 - 1;
  v21 = v12 - v20;
  result = v13 - v20;
  if ( *(_DWORD *)(v6 + 4 * (v11 + result)) == *(_DWORD *)(v4 + 4 * (v11 + v21)) )
  {
    v29 = result;
    v23 = v21;
  }
  else
  {
    v22 = v11 + 1;
    v23 = v21;
    v24 = v4 + 4 * (v21 + v22) - 4;
    v25 = v6 + 4 * (result + v22) - 4;
    do
    {
      v27 = *(_DWORD *)(v24 + 4);
      v24 += 4;
      v26 = v27;
      ++v23;
      v28 = *(_DWORD *)(v25 + 4);
      v25 += 4;
      v29 = result + v23 - v21;
    }
    while ( v26 != v28 );
  }
  if ( v23 + v29 != 41 )
    return result;
  LOWORD(result) = -2876;
  HIWORD(result) = (unsigned int)&unk_16E3BC >> 16;
  v30 = v23 - 1;
  v31 = *(_DWORD *)(v4 + (v7 << 11)) >> 1;
  v32 = (_DWORD *)(result + 336 * v7);
  v32[1] = *(_DWORD *)(v6 + (v7 << 11)) >> 1;
  *v32 = v31;
  if ( !v23 )
  {
    v37 = 40;
    v36 = 1;
LABEL_28:
    v38 = v37;
    v39 = (unsigned int *)(result + 8 * (v36 + 42 * v7) + 4);
    do
    {
      v40 = *(_DWORD *)(v9 + 4 * (v29 & 0xFFFFFFFE));
      v41 = *(_DWORD *)(v9 + 4 * (v38 | 1));
      v42 = v38 == 0;
      v29 = v38--;
      result = v40 >> 1;
      *(v39 - 1) = v41 >> 1;
      *v39 = result;
      v39 += 2;
    }
    while ( !v42 );
    v36 += v37 + 1;
    goto LABEL_32;
  }
  do
  {
    v33 = (v30 + 1) & 0xFFFFFFFE;
    v34 = *(_DWORD *)(v5 + 4 * (v30-- | 1));
    v32 += 2;
    v35 = *(_DWORD *)(v5 + 4 * v33) >> 1;
    v32[1] = v34 >> 1;
    *v32 = v35;
  }
  while ( v30 != -1 );
  v36 = v23 + 1;
  v37 = v29 - 1;
  if ( v29 )
    goto LABEL_28;
LABEL_32:
  if ( v36 == 42 )
  {
    LOWORD(v43) = -1532;
    HIWORD(v43) = (unsigned int)&unk_16E8FC >> 16;
    *(_BYTE *)(v43 + 172 * v7) = 1;
  }
  return result;
}

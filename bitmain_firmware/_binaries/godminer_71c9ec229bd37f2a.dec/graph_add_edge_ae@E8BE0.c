unsigned int __fastcall graph_add_edge_ae(unsigned int result, int a2, int a3)
{
  int v3; // r7
  int v4; // r8
  int v5; // r9
  int v6; // r5
  int v7; // r4
  int v8; // r10
  int v9; // r11
  int v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // lr
  unsigned int v13; // r1
  unsigned int v14; // r12
  unsigned int *j; // r6
  int v16; // t1
  unsigned int *i; // r9
  int v18; // t1
  int v19; // r0
  unsigned int v20; // r2
  int v21; // r3
  unsigned int v22; // r1
  int v23; // r7
  int v24; // r3
  int v25; // lr
  int v26; // t1
  int v27; // t1
  unsigned int v28; // r4
  unsigned int v29; // r3
  unsigned int v30; // r6
  unsigned int *v31; // r2
  unsigned int v32; // lr
  unsigned int v33; // r12
  int v34; // r1
  int v35; // r6
  int v36; // r2
  unsigned int *v37; // r3
  unsigned int v38; // r0
  unsigned int v39; // r12
  bool v40; // zf

  v3 = 2 * a2;
  if ( !(2 * a2) )
    return result;
  LOWORD(v5) = -2828;
  v4 = (result << 11) + 1514724;
  HIWORD(v5) = (unsigned int)&unk_16D4C4 >> 16;
  v6 = result;
  v7 = (2 * a3) | 1;
  v8 = (result << 11) + v5;
  v9 = sub_E8B00(result, 2 * a2, v4);
  result = sub_E8B00(v6, v7, v8);
  if ( !v9 || !result )
    return result;
  v10 = v6 << 9;
  v11 = v9 - 1;
  v12 = result - 1;
  v13 = us[512 * v6 - 1 + v9];
  v14 = *(_DWORD *)(v5 + 4 * ((v6 << 9) + result - 1));
  if ( v13 != v14 )
  {
    if ( v11 >= v12 )
    {
      if ( result != 1 )
      {
        for ( i = (unsigned int *)(v5 + 4 * (v10 + 1073741822 + result) + 4); ; v14 = *i )
        {
          v18 = *--i;
          cuckoo_hash_set(v6, v14, v18);
          if ( i == (unsigned int *)v8 )
            break;
        }
      }
      return cuckoo_hash_set(v6, v7, v3);
    }
    else
    {
      if ( v9 != 1 )
      {
        for ( j = (unsigned int *)(4 * (v10 + 1073741822 + v9) + 1514728); ; v13 = *j )
        {
          v16 = *--j;
          cuckoo_hash_set(v6, v13, v16);
          if ( j == (unsigned int *)v4 )
            break;
        }
      }
      return cuckoo_hash_set(v6, v3, v7);
    }
  }
  if ( v11 >= v12 )
    v19 = result - 1;
  else
    v19 = v9 - 1;
  v20 = v11 - v19;
  result = v12 - v19;
  if ( *(_DWORD *)(v5 + 4 * (v10 + result)) == us[v10 + v20] )
  {
    v28 = result;
    v22 = v20;
  }
  else
  {
    v21 = v10 + 1;
    v22 = v20;
    v23 = 4 * (v20 + v21) + 1514720;
    v24 = v5 + 4 * (result + v21) - 4;
    do
    {
      v26 = *(_DWORD *)(v23 + 4);
      v23 += 4;
      v25 = v26;
      ++v22;
      v27 = *(_DWORD *)(v24 + 4);
      v24 += 4;
      v28 = result + v22 - v20;
    }
    while ( v25 != v27 );
  }
  if ( v22 + v28 != 41 )
    return result;
  result = 1512692;
  v29 = v22 - 1;
  v30 = us[512 * v6] >> 1;
  v31 = (unsigned int *)(336 * v6 + 1512692);
  v31[1] = *(_DWORD *)(v5 + (v6 << 11)) >> 1;
  *v31 = v30;
  if ( !v22 )
  {
    v35 = 40;
    v34 = 1;
LABEL_28:
    v36 = v35;
    v37 = (unsigned int *)(8 * (v34 + 42 * v6) + 1512696);
    do
    {
      v38 = *(_DWORD *)(v8 + 4 * (v28 & 0xFFFFFFFE));
      v39 = *(_DWORD *)(v8 + 4 * (v36 | 1));
      v40 = v36 == 0;
      v28 = v36--;
      result = v38 >> 1;
      *(v37 - 1) = v39 >> 1;
      *v37 = result;
      v37 += 2;
    }
    while ( !v40 );
    v34 += v35 + 1;
    goto LABEL_32;
  }
  do
  {
    v32 = *(_DWORD *)(v4 + 4 * (v29 | 1));
    v33 = *(_DWORD *)(v4 + 4 * ((v29-- + 1) & 0xFFFFFFFE));
    v31 += 2;
    v31[1] = v32 >> 1;
    *v31 = v33 >> 1;
  }
  while ( v29 != -1 );
  v34 = v22 + 1;
  v35 = v28 - 1;
  if ( v28 )
    goto LABEL_28;
LABEL_32:
  if ( v34 == 42 )
    gSols[172 * v6] = 1;
  return result;
}

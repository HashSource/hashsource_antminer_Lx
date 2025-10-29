int __fastcall sub_3EE3C(int a1, int a2, int a3)
{
  char v3; // r4
  char v4; // r0
  int i; // r6
  int v6; // r1
  __int16 v7; // r1
  int v8; // r1
  int *v9; // r4
  int *v10; // r3
  unsigned int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r0
  unsigned int v14; // r2
  unsigned int v15; // r1
  unsigned int v16; // r3
  void **v17; // r0
  int v19; // r1
  int *v20; // r12
  int *v21; // r6
  int v22; // r1
  int v23; // r2
  int v24; // r3
  unsigned int v25; // r10
  int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  unsigned int v30; // r6
  unsigned int v31; // r12
  void **j; // r0
  int *v33; // [sp+0h] [bp-14h] BYREF
  int *v34; // [sp+4h] [bp-10h] BYREF
  void *ptr; // [sp+8h] [bp-Ch] BYREF

  v3 = *(_BYTE *)(a3 + 2);
  dword_BBB28 = a1;
  v4 = *(_BYTE *)(a3 + 3);
  i = dword_BBB2C;
  dword_BBB24 = a2;
  if ( dword_BBB2C )
    v6 = 56;
  else
    v6 = 16;
  byte_BB926 = v3;
  dword_BB91C = v6;
  if ( dword_BBB2C )
    v7 = 14336;
  else
    v7 = 4096;
  byte_BB927 = v4;
  word_BB92A = v7;
  dword_BBB20 = 0;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  ptr = 0;
  v8 = restrictlist4;
  v33 = (int *)restrictlist4;
  if ( restrictlist4 )
  {
    do
    {
      if ( !sub_3A744(&ptr, v8) )
      {
        i = dword_BBB2C;
        goto LABEL_12;
      }
      v8 = *v33;
      v33 = (int *)*v33;
    }
    while ( v33 );
    i = dword_BBB2C;
  }
LABEL_12:
  v9 = &dword_BB92C;
  while ( 1 )
  {
    if ( !sub_3A7EC((_DWORD **)&ptr, &v33) )
      goto LABEL_20;
    v10 = v33;
    v11 = v33[6];
    v12 = v33[1];
    *v9 = bswap32(v33[5]);
    v13 = bswap32(v11);
    v14 = *((unsigned __int16 *)v10 + 4);
    v15 = bswap32(v12);
    v16 = *((unsigned __int16 *)v10 + 5);
    if ( i )
      v9[4] = 0;
    v9[1] = v13;
    v9[2] = v15;
    *((_WORD *)v9 + 6) = __rev16(v14);
    *((_WORD *)v9 + 7) = __rev16(v16);
    v9 = (int *)sub_3A5E8();
    if ( !v9 )
      break;
    i = dword_BBB2C;
  }
  v17 = (void **)ptr;
  for ( i = dword_BBB2C; ptr; v17 = (void **)ptr )
  {
    ptr = *v17;
    free(v17);
LABEL_20:
    ;
  }
  if ( i )
  {
    ptr = 0;
    v19 = restrictlist6;
    v34 = (int *)restrictlist6;
    if ( restrictlist6 )
    {
      do
      {
        if ( !sub_3A744(&ptr, v19) )
          break;
        v19 = *v34;
        v34 = (int *)*v34;
      }
      while ( v34 );
      if ( !v9 )
        goto LABEL_34;
    }
    else if ( !v9 )
    {
      return sub_3AD04();
    }
    while ( sub_3A7EC((_DWORD **)&ptr, &v34) )
    {
      v20 = v34;
      v21 = v34 + 9;
      v22 = v34[6];
      v23 = v34[7];
      v24 = v34[8];
      v25 = bswap32(v34[1]);
      v9[6] = v34[5];
      v9[7] = v22;
      v9[8] = v23;
      v9[9] = v24;
      v26 = *v21;
      v27 = v21[1];
      v28 = v21[2];
      v29 = v21[3];
      v30 = *((unsigned __int16 *)v20 + 4);
      v31 = *((unsigned __int16 *)v20 + 5);
      v9[10] = v26;
      v9[11] = v27;
      v9[12] = v28;
      v9[13] = v29;
      v9[4] = 1;
      v9[2] = v25;
      *((_WORD *)v9 + 6) = __rev16(v30);
      *((_WORD *)v9 + 7) = __rev16(v31);
      v9 = (int *)sub_3A5E8();
      if ( !v9 )
        goto LABEL_34;
    }
    for ( j = (void **)ptr; ptr; j = (void **)ptr )
    {
      ptr = *j;
      free(j);
LABEL_34:
      ;
    }
  }
  return sub_3AD04();
}

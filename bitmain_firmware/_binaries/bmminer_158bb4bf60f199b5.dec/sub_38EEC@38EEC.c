void __fastcall sub_38EEC(char *a1, int a2, unsigned int a3)
{
  int v4; // r10
  char *v5; // r7
  int v6; // r8
  int v7; // r4
  int v8; // r5
  char *v9; // r9
  int v10; // r0
  char *v11; // r3
  char *v12; // r2
  int i; // r3
  int v14; // r1
  char *v15; // r7
  unsigned int j; // r4
  unsigned int v17; // r0
  int v18; // r10
  int v21; // [sp+10h] [bp-A84h]
  _QWORD s[78]; // [sp+20h] [bp-A74h] BYREF
  char v23[2052]; // [sp+290h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v23, "Get asic grade by PM data:\n");
    sub_47AB4(3, v23, 0);
  }
  memset(s, 0, sizeof(s));
  v4 = 0;
  do
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * v4 + 4) != 1 )
    {
      if ( ++v4 == 16 )
        return;
    }
    sub_2DF9C(v4, (int)s);
    v5 = a1;
    v6 = 0;
    v21 = v4;
    v7 = 0;
    v8 = a2 + 78 * v4;
    v9 = a1;
    do
    {
      v10 = v7 + 6;
      v11 = v5;
      do
      {
        v11 += 8;
        *(_DWORD *)&v5[8 * v7 + v6] = s[v7];
        *((_DWORD *)v11 - 1) = v7++;
      }
      while ( v10 != v7 );
      qsort(v5, 6u, 8u, (__compar_fn_t)sub_36CA4);
      v12 = v5;
      for ( i = 0; i != 6; ++i )
      {
        v14 = *((_DWORD *)v12 + 1);
        v12 += 8;
        *(_BYTE *)(v8 + v14) = i;
      }
      v6 -= 48;
      v5 += 48;
    }
    while ( v6 != -624 );
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v23, "1 step result:\n");
      sub_47AB4(3, v23, 0);
    }
    sub_36CB4(v4, a2);
    do
    {
      v15 = v9;
      for ( j = 0; j != 6; ++j )
      {
        v17 = j;
        v18 = *((_DWORD *)v15 + 1);
        v15 += 8;
        *(_BYTE *)(v8 + v18) = v17 / a3;
      }
      v9 += 48;
    }
    while ( a1 + 624 != v9 );
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(v23, 0x800u, "%d step result:\n", a3);
      sub_47AB4(3, v23, 0);
    }
    v4 = v21 + 1;
    sub_36CB4(v21, a2);
  }
  while ( v21 != 15 );
}

int __fastcall sub_6056C(unsigned __int8 *a1, int *a2)
{
  int v2; // r4
  unsigned __int8 *v3; // r5
  int v5; // r8
  int v6; // r7
  const unsigned __int16 **v7; // r0
  int v8; // r2
  const unsigned __int16 *v9; // r0
  int v10; // r12
  int v11; // t1
  unsigned int v12; // r3

  v2 = *a1;
  v3 = a1;
  if ( v2 == 45 )
  {
    v3 = a1 + 1;
    v2 = a1[1];
    v5 = 56;
    v6 = 1;
  }
  else
  {
    v5 = 55;
    v6 = 0;
  }
  if ( v2 )
  {
    v7 = _ctype_b_loc();
    v8 = 0;
    v9 = *v7;
    while ( 1 )
    {
      v12 = ((v9[v2] ^ 0x800u) >> 11) & 1;
      if ( v8 > 214748364 )
        v12 = 1;
      if ( v12 )
        break;
      if ( v8 == 214748364 && v5 < v2 )
        return 0;
      v10 = v2 - 48;
      v11 = *++v3;
      v2 = v11;
      v8 = v10 + 10 * v8;
      if ( !v11 )
      {
        if ( v6 )
          v8 = -v8;
        *a2 = v8;
        if ( !v6 )
          return 1;
        return v6;
      }
    }
  }
  return 0;
}

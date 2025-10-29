int __fastcall sub_58AF4(double a1, int a2)
{
  _DWORD *v2; // r9
  int v3; // r6
  double **v4; // r8
  double v5; // d0
  double *v6; // r4
  __int64 v7; // r0
  unsigned int v8; // lr
  int v9; // r2
  int v10; // r3
  int result; // r0
  int v12; // r1
  char *v13; // r5
  double v14; // d16
  int v15; // r3
  int v16; // r1
  bool v17; // cf
  int v18; // r1
  int v19; // r3
  char v20; // t1
  double v21; // d10
  int v22; // r2
  int v23; // r3

  v2 = (_DWORD *)LODWORD(a1);
  v3 = *(_DWORD *)(LODWORD(a1) + 4);
  v4 = *(double ***)(v3 + 84);
  v5 = (double)*(int *)(LODWORD(a1) + 84) / 8000.0;
  v6 = *v4;
  LODWORD(a1) = 32;
  ldexp(a1, a2);
  if ( v5 < 0.0 )
    v7 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v5), HIDWORD(COERCE_UNSIGNED_INT64(-v5)));
  else
    v7 = sub_8BBA8(LODWORD(v5), HIDWORD(v5));
  v8 = v2[19];
  v9 = v2[21];
  v10 = v2[18] - HIDWORD(v7);
  if ( v8 < (unsigned int)v7 )
    --v10;
  v2[19] = v8 - v7;
  v2[18] = v10;
  result = v2[18];
  v12 = v2[19];
  *(_DWORD *)v6 = result;
  *((_DWORD *)v6 + 1) = v12;
  if ( v9 > 0 )
  {
    v13 = (char *)(v2 + 22);
    do
    {
      v20 = *v13++;
      v21 = v6[(unsigned __int8)~v20 + 8];
      if ( v21 > 6000.0 )
      {
        ++*((_DWORD *)v6 + 531);
      }
      else if ( v21 < -6000.0 )
      {
        ++*((_DWORD *)v6 + 531);
      }
      v14 = (v6[3] + clock_codec) / 8000.0 + v6[2];
      v6[2] = v14;
      if ( v14 < 0.5 )
      {
        if ( v14 < -0.5 )
        {
          v6[2] = v14 + 1.0;
          sub_5760C(v3);
        }
        sub_5760C(v3);
        v9 = v2[21];
      }
      else
      {
        v6[2] = v14 - 1.0;
      }
      v15 = *((_DWORD *)v6 + 1);
      v16 = *((_DWORD *)v6 + 3);
      v17 = __CFADD__(v16, v15);
      v18 = v16 + v15;
      v19 = *(_DWORD *)v6;
      *((_DWORD *)v6 + 1) = v18;
      result = v17;
      *(_DWORD *)v6 = v19 + *((_DWORD *)v6 + 2) + v17;
    }
    while ( v9 > v13 - (char *)(v2 + 22) );
  }
  if ( ((_BYTE)v4[192] & 2) != 0 )
    v22 = 2;
  else
    v22 = 1;
  v23 = (_BYTE)v4[192] & 4;
  *((_DWORD *)v6 + 528) = v22;
  if ( v23 )
    v23 = 127;
  *((_DWORD *)v6 + 530) = v23;
  return result;
}

int __fastcall sub_39754(_DWORD *a1, int a2, unsigned int a3)
{
  double v3; // d0
  double v5; // d8
  int v6; // r3
  double v7; // r0
  double v8; // d0
  int v9; // r2
  int result; // r0
  int v11; // r1
  int v12; // r3
  int v13; // r3
  double v14; // r0
  double v15; // d0
  int v16; // r2
  int vars20; // [sp+3Ch] [bp+20h]
  unsigned int _40; // [sp+40h] [bp+24h]

  v5 = v3;
  v6 = a2 - vars20;
  if ( a3 < _40 )
    --v6;
  a1[58] = vars20;
  a1[59] = _40;
  if ( v6 < 0 )
  {
    v14 = COERCE_DOUBLE(sub_8BA5C(_40 - a3, (unsigned __int64)-(__int64)(__PAIR64__(v6, 0) + a3 - _40) >> 32));
    v15 = v14;
    LODWORD(v14) = -32;
    ldexp(v14, v16);
    v8 = -v15;
  }
  else
  {
    v7 = COERCE_DOUBLE(sub_8BA5C(a3 - _40, (__PAIR64__(v6, 0) + a3 - _40) >> 32));
    v8 = v7;
    LODWORD(v7) = -32;
    ldexp(v7, v9);
  }
  result = -2004318071;
  v11 = a1[55];
  v12 = (a1[54] + 1) % 60;
  a1[54] = v12;
  *(double *)&a1[2 * v12 + 66] = v8 + v5;
  if ( v12 == v11 )
  {
    v13 = v12 + 1;
    result = -2004318071 * v13;
    a1[55] = v13 % 60;
  }
  return result;
}

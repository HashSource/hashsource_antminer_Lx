int __fastcall sub_398A8(_DWORD *a1)
{
  double v2; // r0
  int v3; // r2
  int v4; // s15
  double v5; // d0
  __int64 v6; // r0
  unsigned __int64 v7; // kr00_8
  int v9; // [sp+14h] [bp-10h] BYREF
  unsigned int v10; // [sp+18h] [bp-Ch]

  LODWORD(v2) = sub_6300C(a1[48], a1[49], a1[50], a1[51], 0, a1[58], a1 + 53, &v9);
  if ( LODWORD(v2) )
  {
    v4 = a1[52];
    v10 = 0;
    v5 = (double)v4 / 1000000000.0;
    LODWORD(v2) = 32;
    ldexp(v2, v3);
    if ( v5 < 0.0 )
      v6 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v5), HIDWORD(COERCE_UNSIGNED_INT64(-v5)));
    else
      v6 = sub_8BBA8(LODWORD(v5), HIDWORD(v5));
    v7 = __PAIR64__(v9 + HIDWORD(v6), v6) + v10;
    v9 = HIDWORD(v7);
    v10 = v7;
    sub_39754(a1, SHIDWORD(v7), v7);
    LODWORD(v2) = 1;
  }
  return LODWORD(v2);
}

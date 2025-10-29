unsigned __int64 __fastcall sub_2CDF0(__int64 *a1)
{
  double v2; // r0
  double v3; // d8
  double v4; // r0
  double v5; // d8
  double v6; // r0
  double v7; // d6
  double v8; // r0
  double v9; // d8

  if ( !a1 )
    return 0;
  LODWORD(v2) = sub_4A10C(a1[27]);
  v3 = v2 * 6.27710174e57;
  LODWORD(v4) = sub_4A10C(a1[26]);
  v5 = v3 + v4 * 3.40282367e38;
  LODWORD(v6) = sub_4A10C(a1[25]);
  v7 = v6;
  LODWORD(v8) = sub_4A10C(a1[24]);
  v9 = v8 + v5 + v7 * 1.84467441e19;
  if ( v9 == 0.0 )
    return 0;
  else
    return (unsigned __int64)(2.69595353e67 / v9);
}

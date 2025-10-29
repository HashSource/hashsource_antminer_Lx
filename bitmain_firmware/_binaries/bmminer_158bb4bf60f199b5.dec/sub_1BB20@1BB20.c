const char *__fastcall sub_1BB20(int a1)
{
  __int64 v2; // r0
  double v3; // d8
  double v4; // r0
  double v5; // d7
  double v7; // [sp+0h] [bp-8h] BYREF

  qword_2463D0 = (__int64)(dbl_242EF0 + dbl_242F10 + dbl_246238);
  v2 = (__int64)(dbl_242EF0 + dbl_242F10 + dbl_246238) + dword_242EE8;
  if ( v2 )
  {
    v3 = (double)dword_242EE8;
    LODWORD(v4) = sub_778B4(v2);
    v5 = v3 / v4;
  }
  else
  {
    v5 = 0.0;
  }
  v7 = v5;
  return sub_4402C(a1, "Device Hardware%", (const char *)&v7, 1);
}

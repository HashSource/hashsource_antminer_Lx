int *__fastcall sub_655B4(int *a1, int *a2)
{
  __int64 v3; // r8
  int v5; // r0
  int v6; // r2
  int v7; // r3

  v3 = *(_QWORD *)a2;
  if ( a2[1] < 0 )
    v5 = ~sub_8BB68(~(_DWORD)v3, ~HIDWORD(v3), &loc_15180, 0);
  else
    v5 = sub_8BB68(v3, HIDWORD(v3), &loc_15180, 0);
  v6 = *a2;
  *a1 = v5;
  v7 = v6 - 86400 * v5;
  a1[1] = v7;
  return a1;
}

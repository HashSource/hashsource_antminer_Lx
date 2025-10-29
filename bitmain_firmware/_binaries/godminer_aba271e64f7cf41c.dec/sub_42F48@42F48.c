_QWORD *__fastcall sub_42F48(int *a1, __int64 a2)
{
  int v6; // [sp+14h] [bp-8h]

  v6 = json_integer(a2, HIDWORD(a2));
  if ( !v6 )
  {
    sub_4250C(a1, "<internal>", 1, "Out of memory", a2);
    a1[19] = 1;
  }
  return (_QWORD *)v6;
}

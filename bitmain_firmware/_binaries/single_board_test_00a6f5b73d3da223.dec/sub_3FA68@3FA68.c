_QWORD *__fastcall sub_3FA68(int *a1, __int64 a2)
{
  int v5; // [sp+14h] [bp+14h]

  v5 = json_integer(a2, HIDWORD(a2));
  if ( !v5 )
  {
    sub_3F404(a1, "<internal>", 1, "Out of memory");
    a1[19] = 1;
  }
  return (_QWORD *)v5;
}

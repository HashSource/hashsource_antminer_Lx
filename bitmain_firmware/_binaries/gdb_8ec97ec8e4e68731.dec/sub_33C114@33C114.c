unsigned int *__fastcall sub_33C114(unsigned int *a1, int a2, int a3, int a4)
{
  unsigned int v4; // r2
  __int64 v5; // kr00_8
  char *v6; // r6
  size_t v7; // r1
  size_t v8; // r3

  v4 = a3 - a2;
  v5 = *(_QWORD *)a1;
  v6 = *(char **)a4;
  v7 = a2 - *a1;
  v8 = *(_DWORD *)(a4 + 4);
  if ( v7 > a1[1] )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", v7, HIDWORD(v5));
  if ( v4 >= HIDWORD(v5) - v7 )
    v4 = HIDWORD(v5) - v7;
  return sub_33BC54(a1, v7, v4, v6, v8);
}

_DWORD *__fastcall sub_33CF6C(_DWORD *a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // kr00_8
  _BYTE *v6; // r1
  unsigned int v7; // r2
  int v8; // r2

  if ( a3 > *((_DWORD *)a2 + 1) )
    sub_33D20C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      a3,
      *((_DWORD *)a2 + 1));
  *a1 = a1 + 2;
  v5 = *a2;
  if ( a3 > *((_DWORD *)a2 + 1) )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string", a3, HIDWORD(v5));
  v6 = (_BYTE *)(v5 + a3);
  v7 = HIDWORD(v5) - a3;
  if ( v7 > a4 )
    v8 = (int)&v6[a4];
  else
    v8 = (int)&v6[v7];
  sub_33CDCC(a1, v6, v8);
  return a1;
}

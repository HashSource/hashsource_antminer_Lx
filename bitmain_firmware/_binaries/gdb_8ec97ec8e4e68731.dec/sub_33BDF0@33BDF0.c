unsigned int *__fastcall sub_33BDF0(unsigned int *a1, _DWORD *a2, unsigned int a3, size_t a4)
{
  unsigned int v4; // r4
  size_t v5; // r4

  v4 = a2[1];
  if ( a3 > v4 )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::assign", a3, a2[1]);
  v5 = v4 - a3;
  if ( v5 >= a4 )
    v5 = a4;
  return sub_33BC54(a1, 0, a1[1], (char *)(*a2 + a3), v5);
}

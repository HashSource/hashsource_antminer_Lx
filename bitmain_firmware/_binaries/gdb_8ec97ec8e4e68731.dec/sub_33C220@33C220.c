unsigned int *__fastcall sub_33C220(unsigned int *a1, int a2, char *a3, size_t a4)
{
  size_t v4; // r1

  v4 = a2 - *a1;
  if ( v4 > a1[1] )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", v4, a1[1]);
  return sub_33BC54(a1, v4, 0, a3, a4);
}

_DWORD *__fastcall sub_345470(_DWORD *a1, size_t a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  size_t v5; // r4
  unsigned int v6; // r4

  v5 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v5 )
    sub_33D20C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a2,
      *(_DWORD *)(*a1 - 12));
  v6 = v5 - a2;
  if ( a3 >= v6 )
    a3 = v6;
  return sub_34538C(a1, a2, a3, a4, a5);
}

void **__fastcall sub_34617C(void **a1, int *a2, unsigned int a3, unsigned int a4)
{
  if ( a3 > *(_DWORD *)(*a2 - 12) )
    sub_33D20C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      a3,
      *(_DWORD *)(*a2 - 12));
  sub_346134(a1, a2, a3, a4);
  return a1;
}

bool __fastcall json_equal(int *a1, int *a2)
{
  bool v2; // zf

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  return !v2 && sub_3A0AC(a1, a2);
}

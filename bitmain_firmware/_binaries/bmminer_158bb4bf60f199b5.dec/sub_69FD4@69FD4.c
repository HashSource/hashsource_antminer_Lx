int __fastcall sub_69FD4(int *a1, int a2, _DWORD *a3)
{
  _DWORD *v4; // r0

  if ( !a1 )
    return 0;
  v4 = sub_6A408(*a1, a2);
  if ( !v4 )
    return 0;
  sub_6AC04(v4[5], a3);
  return 1;
}

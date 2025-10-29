void __fastcall sub_14D18(_DWORD **a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  if ( !a1 )
    sub_10788();
  v2 = *a1;
  if ( !*a1 || *v2 != 1114990113 )
    sub_10788();
  if ( !v2[8] )
    sub_10788();
  v3 = *a1;
  *a1 = 0;
  v2[8] = 0;
  sub_135EC(v3);
  free(v2);
}

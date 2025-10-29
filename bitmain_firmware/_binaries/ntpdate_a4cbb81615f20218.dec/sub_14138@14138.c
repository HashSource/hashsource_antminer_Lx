int __fastcall sub_14138(_DWORD *a1)
{
  int v1; // r3
  int v2; // r2

  if ( !a1 || *a1 != 1114990113 )
    sub_10788();
  v1 = a1[4];
  if ( a1[3] == v1 )
    sub_10788();
  v2 = a1[1];
  a1[4] = v1 + 1;
  return *(unsigned __int8 *)(v2 + v1);
}

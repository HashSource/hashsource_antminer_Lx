int __fastcall sub_44278(int a1, int a2)
{
  int v2; // r3
  int v4; // r1
  int v5; // r5
  int v6; // r4
  int v7; // r2

  v2 = a1 + 20 * a2;
  v4 = a2 + 1;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)(v2 + 20);
  v7 = *(_DWORD *)(v2 + 8);
  if ( v7 == 1 )
  {
    v6 *= 2;
  }
  else if ( v7 != 2 )
  {
    goto LABEL_3;
  }
  for ( ; v6; --v6 )
  {
    if ( v4 >= 0 && v5 > v4 )
      v4 = sub_44278(a1);
  }
LABEL_3:
  if ( v4 >= 0 && v5 >= v4 )
    return v4;
  return v5;
}

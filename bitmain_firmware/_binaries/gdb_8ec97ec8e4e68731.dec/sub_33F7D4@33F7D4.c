int __fastcall sub_33F7D4(int a1, int a2)
{
  _BYTE *v2; // r3
  _DWORD *v4; // r5
  int v5; // r0

  v2 = *(_BYTE **)(a1 + 12);
  if ( *v2 == 74 )
  {
    *(_DWORD *)(a1 + 12) = v2 + 1;
    goto LABEL_4;
  }
  if ( a2 )
  {
LABEL_4:
    v4 = sub_33ECE4(a1);
    if ( !v4 )
      return 0;
    goto LABEL_5;
  }
  v4 = 0;
LABEL_5:
  v5 = sub_33F5CC(a1);
  if ( v5 )
    return sub_33D710(a1, 41, __SPAIR64__(v5, (unsigned int)v4));
  return 0;
}

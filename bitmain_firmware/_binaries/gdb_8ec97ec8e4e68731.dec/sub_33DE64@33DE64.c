int __fastcall sub_33DE64(int a1, int a2)
{
  _BYTE *v3; // r3
  _BYTE *v5; // r3
  _BYTE *v6; // r3

  if ( !a2 )
  {
    v3 = *(_BYTE **)(a1 + 12);
    if ( !*v3 )
      return 0;
    *(_DWORD *)(a1 + 12) = v3 + 1;
    a2 = (unsigned __int8)*v3;
  }
  if ( a2 == 104 )
  {
    sub_33D8F4((unsigned __int8 **)(a1 + 12));
  }
  else
  {
    if ( a2 != 118 )
      return 0;
    sub_33D8F4((unsigned __int8 **)(a1 + 12));
    v5 = *(_BYTE **)(a1 + 12);
    if ( *v5 != 95 )
      return 0;
    *(_DWORD *)(a1 + 12) = v5 + 1;
    sub_33D8F4((unsigned __int8 **)(a1 + 12));
  }
  v6 = *(_BYTE **)(a1 + 12);
  if ( *v6 != 95 )
    return 0;
  *(_DWORD *)(a1 + 12) = v6 + 1;
  return 1;
}

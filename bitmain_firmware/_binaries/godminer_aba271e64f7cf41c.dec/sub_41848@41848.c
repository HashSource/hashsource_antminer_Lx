int __fastcall sub_41848(_DWORD *a1)
{
  unsigned __int8 v3; // [sp+Bh] [bp-9h]

  v3 = *(_BYTE *)(*a1 + a1[1]);
  if ( !v3 )
    return -1;
  ++a1[1];
  return v3;
}

int __fastcall map_get_(int *a1, unsigned __int8 *a2)
{
  int v4; // [sp+Ch] [bp-8h]

  v4 = sub_C4E34(a1, a2);
  if ( v4 )
    return *(_DWORD *)(*(_DWORD *)v4 + 4);
  else
    return 0;
}

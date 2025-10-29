int __fastcall json_array_get(_DWORD *a1, unsigned int a2)
{
  if ( !a1 || *a1 != 1 )
    return 0;
  if ( a1[3] > a2 )
    return *(_DWORD *)(4 * a2 + a1[4]);
  return 0;
}

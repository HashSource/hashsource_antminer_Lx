int __fastcall json_array_extend(int a1, int a2)
{
  unsigned int i; // [sp+1Ch] [bp+14h]

  if ( !a1 || *(_DWORD *)a1 != 1 || !a2 || *(_DWORD *)a2 != 1 )
    return -1;
  if ( !json_array_grow((json_array_t *)a1, *(_DWORD *)(a2 + 12), 1) )
    return -1;
  for ( i = 0; *(_DWORD *)(a2 + 12) > i; ++i )
    sub_42EE4(*(_DWORD *)(4 * i + *(_DWORD *)(a2 + 16)));
  array_copy(*(json_t ***)(a1 + 16), *(_DWORD *)(a1 + 12), *(json_t ***)(a2 + 16), 0, *(_DWORD *)(a2 + 12));
  *(_DWORD *)(a1 + 12) += *(_DWORD *)(a2 + 12);
  return 0;
}

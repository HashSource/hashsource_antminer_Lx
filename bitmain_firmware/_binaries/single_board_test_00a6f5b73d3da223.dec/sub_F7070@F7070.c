int __fastcall sub_F7070(int a1)
{
  if ( *(_DWORD *)(a1 + 20) )
    *(_DWORD *)(a1 + 20) = tree_successor(**(int ***)(a1 + 12), *(_DWORD *)(a1 + 20));
  else
    *(_DWORD *)(a1 + 20) = sub_F704C(*(int **)(a1 + 12));
  if ( *(_DWORD *)(a1 + 20) )
    return *(_DWORD *)(*(_DWORD *)(a1 + 20) + 20);
  else
    return 0;
}

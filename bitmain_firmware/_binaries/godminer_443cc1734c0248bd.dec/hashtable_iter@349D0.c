int __fastcall hashtable_iter(int a1)
{
  if ( *(_DWORD *)(a1 + 24) == a1 + 20 )
    return 0;
  else
    return *(_DWORD *)(a1 + 24);
}

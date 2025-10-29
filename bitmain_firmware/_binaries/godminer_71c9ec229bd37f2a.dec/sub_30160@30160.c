int sub_30160()
{
  int v0; // r3

  v0 = ++dword_167358;
  if ( dword_167358 > total_pools )
  {
    add_pool();
    v0 = dword_167358;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}

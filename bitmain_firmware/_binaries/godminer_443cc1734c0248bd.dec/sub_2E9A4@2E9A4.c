int sub_2E9A4()
{
  int v0; // r3

  v0 = ++dword_164330;
  if ( dword_164330 > total_pools )
  {
    add_pool();
    v0 = dword_164330;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}

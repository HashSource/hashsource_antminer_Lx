int sub_2F324()
{
  int v0; // r3

  v0 = ++dword_165340;
  if ( dword_165340 > total_pools )
  {
    add_pool();
    v0 = dword_165340;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}

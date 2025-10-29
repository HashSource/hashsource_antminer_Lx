pool *add_url()
{
  if ( ++dword_151908 > total_pools )
    add_pool();
  return *(pool **)(pools + 4 * (dword_151908 + 0x3FFFFFFF));
}

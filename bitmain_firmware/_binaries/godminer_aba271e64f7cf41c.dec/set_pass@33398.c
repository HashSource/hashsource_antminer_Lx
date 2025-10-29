int __fastcall set_pass(const char *a1)
{
  int v3; // [sp+Ch] [bp-8h]

  if ( ++dword_151910 > total_pools )
    add_pool();
  v3 = *(_DWORD *)(pools + 4 * (dword_151910 + 0x3FFFFFFF));
  if ( *(_DWORD *)(v3 + 20) )
    free(*(void **)(v3 + 20));
  *(_DWORD *)(v3 + 20) = strdup(a1);
  return 0;
}

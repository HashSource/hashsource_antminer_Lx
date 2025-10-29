int __fastcall global_idx_free_grin29(int a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(a1 + 624);
  if ( v1 )
    free(*(void **)(a1 + 624));
  return v1;
}

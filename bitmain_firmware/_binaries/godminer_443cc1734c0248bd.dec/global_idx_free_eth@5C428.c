void __fastcall global_idx_free_eth(int a1)
{
  void *v1; // r0

  v1 = *(void **)(a1 + 624);
  if ( v1 )
    free(v1);
}

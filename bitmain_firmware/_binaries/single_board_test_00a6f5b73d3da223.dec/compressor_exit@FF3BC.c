void __fastcall compressor_exit(int a1)
{
  if ( *(_DWORD *)(a1 + 28) )
    free(*(void **)(a1 + 28));
}

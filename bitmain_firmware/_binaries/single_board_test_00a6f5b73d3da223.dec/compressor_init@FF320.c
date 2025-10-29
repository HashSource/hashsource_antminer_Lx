void *__fastcall compressor_init(int a1, int a2, int a3)
{
  *(_DWORD *)a1 = a3;
  *(_DWORD *)(a1 + 4) = a2 - a3;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 4) - 1;
  *(_DWORD *)(a1 + 12) = 1 << *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 12) - 1;
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 16) >> 1;
  *(_DWORD *)(a1 + 28) = calloc(*(_DWORD *)(a1 + 12), 4u);
  if ( !*(_DWORD *)(a1 + 28) )
    puts("calloc failed!");
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = -1;
  return memset(*(void **)(a1 + 28), (unsigned __int8)*(_DWORD *)(a1 + 32), 4 * *(_DWORD *)(a1 + 12));
}

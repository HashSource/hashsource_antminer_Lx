_DWORD *__fastcall new_compressor(int a1, int a2)
{
  _DWORD *v5; // [sp+Ch] [bp+Ch]

  v5 = calloc(1u, 0x38u);
  if ( !v5 )
    puts("alloc compressor failed!");
  v5[9] = compressor_init;
  v5[10] = compressor_reset;
  v5[11] = compressor_exit;
  v5[12] = compressor_stats;
  v5[13] = compress;
  ((void (__fastcall *)(_DWORD *, int, int))v5[9])(v5, a1, a2);
  return v5;
}

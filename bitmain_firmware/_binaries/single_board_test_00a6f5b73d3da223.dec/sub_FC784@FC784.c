size_t *__fastcall sub_FC784(int a1)
{
  _DWORD *v4; // [sp+Ch] [bp+Ch]
  size_t *v5; // [sp+10h] [bp+10h]
  signed int i; // [sp+14h] [bp+14h]

  v5 = (size_t *)calloc(1u, 8u);
  if ( !v5 )
    puts("sols stats calloc failed!");
  *v5 = *(_DWORD *)(a1 + 56);
  if ( !*v5 )
    return v5;
  v4 = calloc(*v5, 0xACu);
  if ( v4 )
  {
    for ( i = 0; (int)*v5 > i; ++i )
    {
      *v4 = *(_DWORD *)(172 * i + *(_DWORD *)(a1 + 72));
      memcpy(v4 + 1, (const void *)(172 * i + *(_DWORD *)(a1 + 72) + 4), 0xA8u);
    }
    v5[1] = (size_t)v4;
    return v5;
  }
  puts("s calloc failed!");
  return 0;
}

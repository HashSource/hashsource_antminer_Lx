int __fastcall hashtable_init(int a1)
{
  _DWORD *v2; // r2
  unsigned int i; // [sp+Ch] [bp+Ch]

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 3;
  *(_DWORD *)(a1 + 4) = jsonp_malloc(8 << *(_DWORD *)(a1 + 8));
  if ( !*(_DWORD *)(a1 + 4) )
    return -1;
  list_init((list_t *)(a1 + 12));
  list_init((list_t *)(a1 + 20));
  for ( i = 0; 1 << *(_DWORD *)(a1 + 8) > i; ++i )
  {
    v2 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 8 * i);
    v2[1] = a1 + 12;
    *v2 = v2[1];
  }
  return 0;
}

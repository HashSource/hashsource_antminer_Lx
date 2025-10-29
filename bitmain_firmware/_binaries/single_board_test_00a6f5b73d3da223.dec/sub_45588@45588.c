int __fastcall sub_45588(int a1)
{
  int v1; // r3
  _DWORD *v3; // r2
  int v4; // r1
  int v7; // [sp+10h] [bp+10h]
  void *v8; // [sp+14h] [bp+14h]
  unsigned int v9; // [sp+18h] [bp+18h]
  int v10; // [sp+1Ch] [bp+1Ch]
  unsigned int i; // [sp+20h] [bp+20h]
  int v12; // [sp+24h] [bp+24h]

  v1 = *(_DWORD *)(a1 + 8);
  v10 = v1 + 1;
  v9 = 1 << (v1 + 1);
  v8 = jsonp_malloc(8 * v9);
  if ( !v8 )
    return -1;
  jsonp_free(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 4) = v8;
  *(_DWORD *)(a1 + 8) = v10;
  for ( i = 0; 1 << *(_DWORD *)(a1 + 8) > i; ++i )
  {
    v3 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 8 * i);
    v3[1] = a1 + 12;
    *v3 = v3[1];
  }
  v12 = *(_DWORD *)(a1 + 16);
  list_init((list_t *)(a1 + 12));
  while ( a1 + 12 != v12 )
  {
    v7 = *(_DWORD *)(v12 + 4);
    sub_1A363C(*(_DWORD *)(v12 + 16), v9);
    insert_to_bucket((hashtable_t *)a1, (bucket_t *)(8 * v4 + *(_DWORD *)(a1 + 4)), (list_t *)v12);
    v12 = v7;
  }
  return 0;
}

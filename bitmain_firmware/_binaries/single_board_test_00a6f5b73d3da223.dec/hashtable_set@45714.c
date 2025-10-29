int __fastcall hashtable_set(int a1, char *a2, int a3)
{
  size_t v4; // r0
  size_t v9; // [sp+14h] [bp+14h]
  int v10; // [sp+18h] [bp+18h]
  char *v11; // [sp+18h] [bp+18h]
  bucket_t *v12; // [sp+1Ch] [bp+1Ch]
  int v13; // [sp+24h] [bp+24h]

  if ( !(*(_DWORD *)a1 >> *(_DWORD *)(a1 + 8)) || !sub_45588(a1) )
  {
    v4 = strlen(a2);
    v13 = sub_44AD4((unsigned __int8 *)a2, v4, hashtable_seed);
    v12 = (bucket_t *)(8 * (v13 & ((1 << *(_DWORD *)(a1 + 8)) - 1)) + *(_DWORD *)(a1 + 4));
    v10 = sub_45414((hashtable_t *)a1, v12, a2, v13);
    if ( v10 )
    {
      sub_44A90(*(_DWORD *)(v10 + 20));
      *(_DWORD *)(v10 + 20) = a3;
    }
    else
    {
      v9 = strlen(a2);
      if ( v9 > 0xFFFFFFE6 )
        return -1;
      v11 = (char *)jsonp_malloc(v9 + 25);
      if ( !v11 )
        return -1;
      *((_DWORD *)v11 + 4) = v13;
      strncpy(v11 + 24, a2, v9 + 1);
      *((_DWORD *)v11 + 5) = a3;
      list_init((list_t *)v11);
      list_init((list_t *)(v11 + 8));
      insert_to_bucket((hashtable_t *)a1, v12, (list_t *)v11);
      list_insert((list_t *)(a1 + 20), (list_t *)(v11 + 8));
      ++*(_DWORD *)a1;
    }
    return 0;
  }
  return -1;
}

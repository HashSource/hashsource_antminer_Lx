int __fastcall hashtable_iter_at(int a1, char *a2)
{
  size_t v2; // r0
  int v7; // [sp+Ch] [bp+Ch]
  int v8; // [sp+14h] [bp+14h]

  v2 = strlen(a2);
  v8 = sub_44AD4((unsigned __int8 *)a2, v2, hashtable_seed);
  v7 = sub_45414(
         (hashtable_t *)a1,
         (bucket_t *)(8 * (v8 & ((1 << *(_DWORD *)(a1 + 8)) - 1)) + *(_DWORD *)(a1 + 4)),
         a2,
         v8);
  if ( v7 )
    return v7 + 8;
  else
    return 0;
}

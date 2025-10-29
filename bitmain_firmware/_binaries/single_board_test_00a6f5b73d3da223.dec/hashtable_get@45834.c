void *__cdecl hashtable_get(hashtable_t *hashtable, const char *key)
{
  size_t v2; // r0
  int v7; // [sp+Ch] [bp+Ch]
  int v8; // [sp+14h] [bp+14h]

  v2 = strlen(key);
  v8 = sub_44AD4((unsigned __int8 *)key, v2, hashtable_seed);
  v7 = sub_45414(
         hashtable,
         (bucket_t *)(8 * (v8 & ((1 << *((_DWORD *)hashtable + 2)) - 1)) + *((_DWORD *)hashtable + 1)),
         key,
         v8);
  if ( v7 )
    return *(void **)(v7 + 20);
  else
    return 0;
}

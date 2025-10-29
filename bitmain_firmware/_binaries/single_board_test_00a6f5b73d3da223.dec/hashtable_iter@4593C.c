void *__fastcall hashtable_iter(int a1)
{
  return hashtable_iter_next((hashtable_t *)a1, (void *)(a1 + 20));
}

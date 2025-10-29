int __fastcall sub_40E24(hashtable_t *a1, const void *a2, char *a3, size_t a4)
{
  void *v5; // r0

  snprintf(a3, a4, "%p", a2);
  if ( hashtable_get(a1, a3) )
    return -1;
  v5 = json_null();
  return hashtable_set((int)a1, a3, (int)v5);
}

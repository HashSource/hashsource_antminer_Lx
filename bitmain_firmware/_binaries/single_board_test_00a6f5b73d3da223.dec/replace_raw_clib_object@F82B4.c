void *__fastcall replace_raw_clib_object(void **a1, const void *a2, size_t a3)
{
  free(*a1);
  *a1 = malloc(a3);
  return memcpy(*a1, a2, a3);
}

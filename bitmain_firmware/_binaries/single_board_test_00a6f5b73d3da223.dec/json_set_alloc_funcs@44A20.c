void *(*__fastcall json_set_alloc_funcs(void *(*result)(size_t size), void (*a2)(void *ptr)))(size_t size)
{
  off_1ED3E4 = result;
  off_1ED3E8 = a2;
  return result;
}

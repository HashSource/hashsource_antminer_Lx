void *(*__fastcall json_set_alloc_funcs(void *(*result)(size_t size), void (*a2)(void *ptr)))(size_t size)
{
  off_14DE98 = result;
  off_14DE9C = a2;
  return result;
}

void __cdecl array_copy(json_t **dest, size_t dpos, json_t **src, size_t spos, size_t count)
{
  memcpy(&dest[dpos], &src[spos], 4 * count);
}

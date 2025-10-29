int __cdecl dump_to_strbuffer(const char *buffer, size_t size, void *data)
{
  return strbuffer_append_bytes((int)data, buffer, size);
}

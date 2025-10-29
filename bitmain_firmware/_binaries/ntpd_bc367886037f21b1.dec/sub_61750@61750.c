void *sub_61750()
{
  size_t v0; // r5
  void *result; // r0

  v0 = 4 * (unsigned __int16)authhashbuckets;
  key_hash = sub_637E4(key_hash, v0, 0, 0);
  result = memset((void *)key_hash, 0, v0);
  dword_107D44 = (int)&key_listhead;
  dword_107D40 = (int)&key_listhead;
  return result;
}

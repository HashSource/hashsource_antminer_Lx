int __cdecl json_object_set_new_nocheck(json_t *json, const char *key, json_t *value)
{
  if ( !value )
    return -1;
  if ( key && json && !*(_DWORD *)json && json != value && !hashtable_set((int)json + 8, (char *)key, (int)value) )
    return 0;
  sub_42F24((int)value);
  return -1;
}

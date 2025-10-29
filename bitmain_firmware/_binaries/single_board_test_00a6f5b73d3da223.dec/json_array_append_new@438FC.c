int __cdecl json_array_append_new(json_t *json, json_t *value)
{
  if ( !value )
    return -1;
  if ( json && *(_DWORD *)json == 1 && json != value && json_array_grow(json, 1u, 1) )
  {
    *(_DWORD *)(4 * (*((_DWORD *)json + 3))++ + *((_DWORD *)json + 4)) = value;
    return 0;
  }
  else
  {
    sub_42F24((int)value);
    return -1;
  }
}

int __fastcall get_key_value_string(const json_t *a1, const char *a2, void **a3)
{
  const char *v4; // r0
  json_t *v7; // [sp+14h] [bp+14h]

  v7 = json_object_get(a1, a2);
  if ( !v7 )
    return 0;
  if ( *(_DWORD *)v7 != 2 || !json_string_value(v7) )
    return 0;
  if ( *a3 )
  {
    free(*a3);
    *a3 = 0;
  }
  v4 = json_string_value(v7);
  *a3 = strdup(v4);
  return 1;
}

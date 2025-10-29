int __fastcall get_key_value_boolean(const json_t *a1, const char *a2, bool *a3)
{
  json_t *v6; // [sp+14h] [bp+14h]

  v6 = json_object_get(a1, a2);
  if ( !v6 )
    return 0;
  if ( *(_DWORD *)v6 != 5 && *(_DWORD *)v6 != 6 )
    return 0;
  *a3 = *(_DWORD *)v6 == 5;
  return 1;
}

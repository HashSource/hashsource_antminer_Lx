int __fastcall get_key_value_interger(const json_t *a1, const char *a2, int *a3)
{
  json_t *v6; // [sp+14h] [bp+14h]

  v6 = json_object_get(a1, a2);
  if ( !v6 )
    return 0;
  if ( *(_DWORD *)v6 != 3 )
    return 0;
  *a3 = json_integer_value(v6);
  return 1;
}

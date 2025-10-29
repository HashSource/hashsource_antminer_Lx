int __fastcall get_key_value_real(const json_t *a1, const char *a2, _QWORD *a3)
{
  __int64 v3; // d0
  json_t *v7; // [sp+14h] [bp+14h]

  v7 = json_object_get(a1, a2);
  if ( !v7 )
    return 0;
  if ( *(_DWORD *)v7 != 4 )
    return 0;
  json_real_value(v7);
  *a3 = v3;
  return 1;
}

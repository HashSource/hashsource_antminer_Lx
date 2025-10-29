int __fastcall get_key_value_array_real(const json_t *a1, const char *a2, void **a3, size_t *a4)
{
  __int64 v4; // d0
  size_t v6; // r0
  _QWORD *v7; // r4
  const json_t *v11; // [sp+14h] [bp+14h]
  json_t *v12; // [sp+18h] [bp+18h]
  size_t i; // [sp+1Ch] [bp+1Ch]

  v12 = json_object_get(a1, a2);
  if ( v12 )
  {
    if ( *(_DWORD *)v12 != 1 )
      return 0;
    *a4 = json_array_size(v12);
    if ( *a3 )
    {
      free(*a3);
      *a3 = 0;
    }
    if ( json_array_size(v12) )
    {
      v6 = json_array_size(v12);
      *a3 = malloc(8 * v6);
      if ( !*a3 )
      {
        printf("%s malloc failed!\n", "get_key_value_array_real");
        return 0;
      }
      for ( i = 0; json_array_size(v12) > i; ++i )
      {
        v11 = (const json_t *)json_array_get(v12, i);
        if ( !v11 )
          break;
        if ( *(_DWORD *)v11 != 4 )
        {
          printf("%s json is not double!\n", "get_key_value_array_real");
          return 0;
        }
        v7 = (char *)*a3 + 8 * i;
        json_real_value(v11);
        *v7 = v4;
      }
    }
    return 1;
  }
  return 0;
}

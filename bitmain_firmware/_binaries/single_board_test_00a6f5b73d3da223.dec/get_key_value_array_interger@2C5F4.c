int __fastcall get_key_value_array_interger(const json_t *a1, const char *a2, void **a3, size_t *a4)
{
  size_t v5; // r0
  _DWORD *v6; // r4
  _DWORD *v10; // [sp+14h] [bp+14h]
  json_t *v11; // [sp+18h] [bp+18h]
  size_t i; // [sp+1Ch] [bp+1Ch]

  v11 = json_object_get(a1, a2);
  if ( v11 )
  {
    if ( *(_DWORD *)v11 != 1 )
      return 0;
    *a4 = json_array_size(v11);
    if ( *a3 )
    {
      free(*a3);
      *a3 = 0;
    }
    if ( json_array_size(v11) )
    {
      v5 = json_array_size(v11);
      *a3 = malloc(4 * v5);
      if ( !*a3 )
      {
        printf("%s malloc failed!\n", "get_key_value_array_interger");
        return 0;
      }
      for ( i = 0; json_array_size(v11) > i; ++i )
      {
        v10 = (_DWORD *)json_array_get(v11, i);
        if ( !v10 )
          break;
        if ( *v10 != 3 )
        {
          printf("%s json is not integer!\n", "get_key_value_array_interger");
          return 0;
        }
        v6 = (char *)*a3 + 4 * i;
        *v6 = json_integer_value(v10);
      }
    }
    return 1;
  }
  return 0;
}

json_t *__fastcall sub_43C44(const json_t *a1)
{
  int v2; // r0
  json_t *v5; // [sp+8h] [bp+8h]
  size_t i; // [sp+Ch] [bp+Ch]

  v5 = (json_t *)json_array();
  if ( !v5 )
    return 0;
  for ( i = 0; json_array_size(a1) > i; ++i )
  {
    v2 = json_array_get(a1, i);
    sub_42F90(v5, v2);
  }
  return v5;
}

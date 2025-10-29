json_t *__fastcall sub_43C94(const json_t *a1)
{
  const json_t *v2; // r0
  json_t *v3; // r0
  json_t *v6; // [sp+8h] [bp+8h]
  size_t i; // [sp+Ch] [bp+Ch]

  v6 = (json_t *)json_array();
  if ( !v6 )
    return 0;
  for ( i = 0; json_array_size(a1) > i; ++i )
  {
    v2 = (const json_t *)json_array_get(a1, i);
    v3 = (json_t *)json_deep_copy(v2);
    json_array_append_new(v6, v3);
  }
  return v6;
}

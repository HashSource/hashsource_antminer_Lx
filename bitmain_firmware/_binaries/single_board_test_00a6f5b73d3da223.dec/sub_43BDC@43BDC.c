int __fastcall sub_43BDC(const json_t *a1, const json_t *a2)
{
  const json_t *v6; // [sp+8h] [bp+8h]
  const json_t *v7; // [sp+Ch] [bp+Ch]
  size_t v8; // [sp+10h] [bp+10h]
  unsigned int i; // [sp+14h] [bp+14h]

  v8 = json_array_size(a1);
  if ( json_array_size(a2) != v8 )
    return 0;
  for ( i = 0; i < v8; ++i )
  {
    v7 = (const json_t *)json_array_get(a1, i);
    v6 = (const json_t *)json_array_get(a2, i);
    if ( !json_equal(v7, v6) )
      return 0;
  }
  return 1;
}

json_t *__fastcall sub_43610(json_t *a1)
{
  json_t *v2; // r0
  const json_t *v5; // [sp+8h] [bp+8h]
  const char *v6; // [sp+Ch] [bp+Ch]
  json_t *v7; // [sp+10h] [bp+10h]
  void *i; // [sp+14h] [bp+14h]

  v7 = (json_t *)json_object();
  if ( !v7 )
    return 0;
  for ( i = json_object_iter(a1); i; i = json_object_iter_next(a1, i) )
  {
    v6 = json_object_iter_key(i);
    v5 = (const json_t *)json_object_iter_value((int)i);
    v2 = (json_t *)json_deep_copy(v5);
    json_object_set_new_nocheck(v7, v6, v2);
  }
  return v7;
}

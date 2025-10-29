json_t *__fastcall sub_4359C(json_t *a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  int v8; // [sp+Ch] [bp+Ch]
  json_t *v9; // [sp+10h] [bp+10h]
  const char *i; // [sp+14h] [bp+14h]

  v9 = (json_t *)json_object();
  if ( !v9 )
    return 0;
  v2 = json_object_iter(a1);
  for ( i = json_object_iter_key(v2); i; i = json_object_iter_key(v4) )
  {
    v5 = json_object_key_to_iter(i);
    v8 = json_object_iter_value((int)v5);
    if ( !v8 )
      break;
    sub_42F68(v9, i, v8);
    v3 = json_object_key_to_iter(i);
    v4 = json_object_iter_next(a1, v3);
  }
  return v9;
}

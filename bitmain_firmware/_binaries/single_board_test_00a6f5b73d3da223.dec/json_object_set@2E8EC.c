int __cdecl json_object_set(json_t_0 *object, const char *key, json_t_0 *value)
{
  json_t *v3; // r0

  v3 = json_incref(value);
  return json_object_set_new(object, key, v3);
}

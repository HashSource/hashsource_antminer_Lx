int __cdecl json_array_append(json_t_0 *array, json_t_0 *value)
{
  json_t *v2; // r0

  v2 = json_incref(value);
  return json_array_append_new(array, v2);
}

int __cdecl json_array_append(json_t *array, json_t *value)
{
  json_t *v2; // r0

  v2 = (json_t *)sub_454C0((int)value);
  return json_array_append_new(array, v2);
}

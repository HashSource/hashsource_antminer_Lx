int __fastcall sub_42F90(json_t *a1, int a2)
{
  json_t *v2; // r0

  v2 = (json_t *)sub_42EE4(a2);
  return json_array_append_new(a1, v2);
}

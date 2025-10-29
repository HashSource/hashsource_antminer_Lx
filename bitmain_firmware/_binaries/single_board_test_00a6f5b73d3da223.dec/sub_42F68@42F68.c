int __fastcall sub_42F68(json_t *a1, const char *a2, int a3)
{
  json_t *v3; // r0

  v3 = (json_t *)sub_42EE4(a3);
  return json_object_set_new_nocheck(a1, a2, v3);
}

json_t *__fastcall sub_1DE14(json_t *result, const char **a2)
{
  json_t *v2; // r0
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v7; // [sp+4h] [bp-30h]
  _QWORD v8[2]; // [sp+Ch] [bp-28h] BYREF
  _QWORD s[2]; // [sp+1Ch] [bp-18h] BYREF
  json_t *v10; // [sp+2Ch] [bp-8h]

  v7 = result;
  memset(s, 0, sizeof(s));
  memset(v8, 0, sizeof(v8));
  if ( result )
  {
    if ( a2 )
    {
      v10 = (json_t *)json_object();
      v2 = (json_t *)json_string("S");
      json_object_set_new(v10, "STATUS", v2);
      v3 = (json_t *)json_integer(dword_151284, dword_151284 >> 31);
      json_object_set_new(v10, "when", v3);
      snprintf((char *)s, 0x10u, "%s", *a2);
      v4 = (json_t *)json_string((const char *)s);
      json_object_set_new(v10, "Msg", v4);
      snprintf((char *)v8, 0x10u, "%s", a2[1]);
      v5 = (json_t *)json_string((const char *)v8);
      json_object_set_new(v10, "api_version", v5);
      return (json_t *)json_object_set_new(v7, "STATUS", v10);
    }
  }
  return result;
}

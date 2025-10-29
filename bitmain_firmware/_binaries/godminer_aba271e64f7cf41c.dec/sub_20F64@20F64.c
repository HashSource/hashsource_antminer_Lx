json_t *__fastcall sub_20F64(json_t *result, char a2, int a3, const char *a4)
{
  const char *v4; // r3
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r0
  json_t *v9; // r0
  json_t *v10; // r0
  json_t *v14; // [sp+Ch] [bp-48h]
  _QWORD v15[6]; // [sp+14h] [bp-40h] BYREF
  char s[4]; // [sp+44h] [bp-10h] BYREF
  json_t *v17; // [sp+48h] [bp-Ch]
  json_t *v18; // [sp+4Ch] [bp-8h]

  v14 = result;
  v18 = 0;
  v17 = 0;
  *(_WORD *)s = 0;
  memset(v15, 0, sizeof(v15));
  if ( result && a4 )
  {
    v18 = (json_t *)json_array();
    v17 = (json_t *)json_object();
    if ( a2 )
      v4 = "S";
    else
      v4 = "E";
    snprintf(s, 2u, "%s", v4);
    v5 = (json_t *)json_string(s);
    json_object_set_new(v17, "STATUS", v5);
    v6 = (json_t *)json_integer(dword_151284, dword_151284 >> 31);
    json_object_set_new(v17, "When", v6);
    v7 = (json_t *)json_integer(a3, a3 >> 31);
    json_object_set_new(v17, "Code", v7);
    if ( a3 == 7 )
      snprintf((char *)v15, 0x30u, a4, total_pools);
    else
      snprintf((char *)v15, 0x30u, "%s", a4);
    v8 = (json_t *)json_string((const char *)v15);
    json_object_set_new(v17, "Msg", v8);
    v9 = (json_t *)json_string(opt_api_description[0]);
    json_object_set_new(v17, "Description", v9);
    json_array_append_new(v18, v17);
    result = (json_t *)json_object_set_new(v14, "STATUS", v18);
    if ( a2 != 1 )
    {
      v10 = (json_t *)json_integer(1, 0);
      return (json_t *)json_object_set_new(v14, "id", v10);
    }
  }
  return result;
}

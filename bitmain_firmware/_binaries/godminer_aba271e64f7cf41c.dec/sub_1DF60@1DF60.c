json_t *__fastcall sub_1DF60(json_t *result)
{
  json_t *v1; // r0
  json_t *v2; // r0
  json_t *v3; // r0
  json_t *v4; // [sp+4h] [bp-D0h]
  _QWORD v5[8]; // [sp+Ch] [bp-C8h] BYREF
  _QWORD v6[8]; // [sp+4Ch] [bp-88h] BYREF
  _QWORD s[8]; // [sp+8Ch] [bp-48h] BYREF
  json_t *v8; // [sp+CCh] [bp-8h]

  v4 = result;
  memset(s, 0, sizeof(s));
  memset(v6, 0, sizeof(v6));
  memset(v5, 0, sizeof(v5));
  if ( result )
  {
    v8 = (json_t *)json_object();
    snprintf((char *)s, 0x40u, "%s", g_miner_version);
    v1 = (json_t *)json_string((const char *)s);
    json_object_set_new(v8, "miner_version", v1);
    snprintf((char *)v6, 0x40u, "%s", g_miner_compiletime);
    v2 = (json_t *)json_string((const char *)v6);
    json_object_set_new(v8, "CompileTime", v2);
    snprintf((char *)v5, 0x40u, "%s", g_miner_type);
    v3 = (json_t *)json_string((const char *)v5);
    json_object_set_new(v8, "type", v3);
    return (json_t *)json_object_set_new(v4, "INFO", v8);
  }
  return result;
}

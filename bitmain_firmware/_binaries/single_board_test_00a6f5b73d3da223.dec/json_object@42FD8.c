_DWORD *json_object()
{
  _DWORD *v2; // [sp+4h] [bp+4h]

  v2 = jsonp_malloc(0x24u);
  if ( !v2 )
    return 0;
  if ( !hashtable_seed )
    json_object_seed(0);
  json_init(v2, 0);
  if ( !hashtable_init((int)(v2 + 2)) )
    return v2;
  jsonp_free(v2);
  return 0;
}

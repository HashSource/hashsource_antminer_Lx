_DWORD *__fastcall sub_43CEC(char *a1, size_t a2, int a3)
{
  _DWORD *v6; // [sp+10h] [bp+10h]
  char *v7; // [sp+14h] [bp+14h]

  if ( !a1 )
    return 0;
  if ( a3 )
  {
    v7 = a1;
  }
  else
  {
    v7 = jsonp_strndup(a1, a2);
    if ( !v7 )
      return 0;
  }
  v6 = jsonp_malloc(0x10u);
  if ( v6 )
  {
    json_init(v6, 2);
    v6[2] = v7;
    v6[3] = a2;
    return v6;
  }
  else
  {
    jsonp_free(v7);
    return 0;
  }
}

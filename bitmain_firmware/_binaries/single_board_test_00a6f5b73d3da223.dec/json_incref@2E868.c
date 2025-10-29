json_t_0 *__cdecl json_incref(json_t_0 *json)
{
  unsigned int *v1; // r3
  unsigned int v2; // r2

  if ( json && *((_DWORD *)json + 1) != -1 )
  {
    v1 = (unsigned int *)((char *)json + 4);
    do
      v2 = __ldrex(v1);
    while ( __strex(v2 + 1, v1) );
    __dmb(0xBu);
  }
  return json;
}

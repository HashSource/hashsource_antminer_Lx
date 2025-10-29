void __cdecl json_decref(json_t_0 *json)
{
  unsigned int *v1; // r3
  unsigned int v2; // r2
  unsigned int v3; // r2

  if ( json && *((_DWORD *)json + 1) != -1 )
  {
    v1 = (unsigned int *)((char *)json + 4);
    __dmb(0xBu);
    do
    {
      v2 = __ldrex(v1);
      v3 = v2 - 1;
    }
    while ( __strex(v3, v1) );
    if ( !v3 )
      json_delete(json);
  }
}

int __fastcall json_array_clear(_DWORD *a1)
{
  unsigned int v2; // r2
  unsigned int i; // r4
  _DWORD *v4; // r0
  unsigned int *v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r2

  if ( !a1 || *a1 != 1 )
    return -1;
  v2 = a1[3];
  if ( v2 )
  {
    for ( i = 0; i < v2; ++i )
    {
      v4 = *(_DWORD **)(a1[4] + 4 * i);
      if ( v4 )
      {
        v5 = v4 + 1;
        if ( v4[1] != -1 )
        {
          __dmb(0xBu);
          do
          {
            v6 = __ldrex(v5);
            v7 = v6 - 1;
          }
          while ( __strex(v7, v5) );
          if ( !v7 )
            json_delete(v4);
          v2 = a1[3];
        }
      }
    }
  }
  a1[3] = 0;
  return 0;
}

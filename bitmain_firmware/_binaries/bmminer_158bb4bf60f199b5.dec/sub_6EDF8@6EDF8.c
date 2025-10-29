void **__fastcall sub_6EDF8(int *a1)
{
  int v2; // r3
  void **v3; // r7
  int i; // r0
  int v6; // r0
  char *v7; // r5
  int v8; // r12
  unsigned int v9; // r3
  unsigned int j; // r5
  int v11; // r1

  if ( !a1 )
    return 0;
  v2 = *a1;
  if ( !*a1 )
  {
    v3 = (void **)sub_6DF5C();
    if ( v3 )
    {
      if ( !*a1 )
      {
        for ( i = sub_6BD80((int)(a1 + 2)); i; i = sub_6BE08((int)(a1 + 2), (int)(v7 - 16)) )
        {
          v6 = sub_6BE20(i);
          v7 = (char *)v6;
          if ( !v6 )
            break;
          v8 = sub_6BE30(v6 - 16);
          if ( !v8 )
            break;
          if ( *(_DWORD *)(v8 + 4) != -1 )
            ++*(_DWORD *)(v8 + 4);
          sub_6E894(v3, v7, (void **)v8);
          if ( *a1 )
            break;
        }
      }
      return v3;
    }
    return 0;
  }
  switch ( v2 )
  {
    case 1:
      v3 = (void **)sub_6E144();
      if ( v3 )
      {
        if ( *a1 == 1 )
        {
          v9 = a1[3];
          if ( v9 )
          {
            for ( j = 0; j < v9; ++j )
            {
              v11 = 0;
              if ( j < v9 )
              {
                v11 = *(_DWORD *)(a1[4] + 4 * j);
                if ( v11 )
                {
                  if ( *(_DWORD *)(v11 + 4) != -1 )
                    ++*(_DWORD *)(v11 + 4);
                }
              }
              sub_6ED4C(v3, (void **)v11);
              if ( *a1 != 1 )
                break;
              v9 = a1[3];
            }
          }
        }
        return v3;
      }
      return 0;
    case 2:
      return (void **)sub_6E2B0((const char *)a1[2]);
    case 3:
      return (void **)sub_6DC90((int)a1);
  }
  if ( v2 != 4 )
  {
    if ( (unsigned int)(v2 - 5) <= 2 )
      return (void **)a1;
    return 0;
  }
  return (void **)sub_6E480();
}

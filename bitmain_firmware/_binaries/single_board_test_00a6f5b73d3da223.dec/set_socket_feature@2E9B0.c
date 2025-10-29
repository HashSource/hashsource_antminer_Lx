int __fastcall set_socket_feature(int a1)
{
  _DWORD optval[2]; // [sp+10h] [bp+8h] BYREF
  int v5; // [sp+18h] [bp+10h] BYREF
  int v6; // [sp+1Ch] [bp+14h] BYREF
  int v7; // [sp+20h] [bp+18h] BYREF
  int v8; // [sp+24h] [bp+1Ch]

  v7 = 1;
  v6 = 45;
  v5 = 30;
  v8 = 0;
  optval[0] = 3;
  optval[1] = 0;
  v8 = setsockopt(a1, 1, 21, optval, 8u);
  if ( v8 >= 0 )
  {
    v8 = setsockopt(a1, 1, 20, optval, 8u);
    if ( v8 >= 0 )
    {
      v8 = setsockopt(a1, 1, 9, &v7, 4u);
      if ( v8 >= 0 )
      {
        v8 = setsockopt(a1, 6, 1, &v7, 4u);
        if ( v8 >= 0 )
        {
          v8 = setsockopt(a1, 6, 6, &v7, 4u);
          if ( v8 >= 0 )
          {
            v8 = setsockopt(a1, 6, 4, &v6, 4u);
            if ( v8 >= 0 )
            {
              v8 = setsockopt(a1, 6, 5, &v5, 4u);
              if ( v8 >= 0 )
              {
                return 1;
              }
              else
              {
                printf("Set socket keep intvl fail, ret = %d\n", v8);
                return 0;
              }
            }
            else
            {
              printf("Set socket keep idle fail, ret = %d\n", v8);
              return 0;
            }
          }
          else
          {
            printf("Set socket keep cnt fail, ret = %d\n", v8);
            return 0;
          }
        }
        else
        {
          printf("Set socket no delay fail, ret = %d\n", v8);
          return 0;
        }
      }
      else
      {
        printf("Set socket keep alive fail, ret = %d\n", v8);
        return 0;
      }
    }
    else
    {
      printf("Set socket send timeout fail, ret = %d\n", v8);
      return 0;
    }
  }
  else
  {
    printf("Set socket send timeout fail, ret = %d\n\n", v8);
    return 0;
  }
}

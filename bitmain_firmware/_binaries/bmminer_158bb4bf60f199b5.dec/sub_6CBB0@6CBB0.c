void **__fastcall sub_6CBB0(int a1, int a2, int a3)
{
  int v4; // r3
  void **v7; // r6
  int v9; // r3
  void *v10; // r8
  double *v11; // r0
  double *v12; // r7
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  char *v17; // r3
  char *v18; // r3
  int v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r3
  void **v23; // r0
  int v24; // r3
  double v25; // [sp+0h] [bp-Ch] BYREF

  v4 = *(_DWORD *)(a1 + 52);
  if ( v4 == 257 )
  {
    if ( (a2 & 8) == 0 )
      return (void **)sub_6E400(*(_QWORD *)(a1 + 56));
    if ( !sub_6D750(a1 + 40, &v25) )
      return (void **)sub_6E480();
    sub_6BF34(a3, (_DWORD *)a1, "real number overflow");
    return 0;
  }
  if ( v4 <= 257 )
  {
    if ( v4 == 91 )
    {
      v7 = (void **)sub_6E144();
      if ( v7 )
      {
        sub_6C3F4(a1, a3);
        v19 = *(_DWORD *)(a1 + 52);
        if ( v19 == 93 )
          return v7;
        if ( v19 )
        {
          while ( 1 )
          {
            v12 = sub_6CBB0(a1, a2, a3);
            if ( !v12 )
              break;
            if ( *((_DWORD *)v12 + 1) != -1 )
              ++*((_DWORD *)v12 + 1);
            v20 = sub_6ED4C(v7, (void **)v12);
            v21 = *((_DWORD *)v12 + 1);
            if ( v20 )
            {
              if ( v21 != -1 )
              {
LABEL_65:
                v24 = v21 - 1;
                *((_DWORD *)v12 + 1) = v24;
                if ( !v24 )
                  sub_6E5DC((void **)v12);
              }
              goto LABEL_33;
            }
            if ( v21 != -1 )
            {
              *((_DWORD *)v12 + 1) = v21 - 1;
              if ( v21 == 1 )
                sub_6E5DC((void **)v12);
            }
            sub_6C3F4(a1, a3);
            v22 = *(_DWORD *)(a1 + 52);
            if ( v22 != 44 )
            {
              if ( v22 == 93 )
                return v7;
              goto LABEL_63;
            }
            sub_6C3F4(a1, a3);
            if ( !*(_DWORD *)(a1 + 52) )
              goto LABEL_63;
          }
        }
        else
        {
LABEL_63:
          sub_6BF34(a3, (_DWORD *)a1, "']' expected");
        }
        goto LABEL_33;
      }
    }
    else if ( v4 <= 91 )
    {
      if ( v4 != -1 )
        goto LABEL_41;
      sub_6BF34(a3, (_DWORD *)a1, "invalid token");
    }
    else
    {
      if ( v4 != 123 )
      {
        if ( v4 == 256 )
          return (void **)sub_6E2B0(*(const char **)(a1 + 56));
        goto LABEL_41;
      }
      v7 = (void **)sub_6DF5C();
      if ( v7 )
      {
        sub_6C3F4(a1, a3);
        v9 = *(_DWORD *)(a1 + 52);
        if ( v9 == 125 )
          return v7;
        if ( v9 != 256 )
        {
LABEL_67:
          sub_6BF34(a3, (_DWORD *)a1, "string or '}' expected");
          goto LABEL_33;
        }
        v10 = *(void **)(a1 + 56);
        *(_DWORD *)(a1 + 56) = 0;
        if ( v10 )
        {
          while ( 1 )
          {
            if ( (a2 & 1) != 0 && sub_6DFCC(v7, (char *)v10) )
            {
              sub_6D518(v10);
              sub_6BF34(a3, (_DWORD *)a1, "duplicate object key");
              goto LABEL_33;
            }
            sub_6C3F4(a1, a3);
            if ( *(_DWORD *)(a1 + 52) != 58 )
            {
              sub_6D518(v10);
              sub_6BF34(a3, (_DWORD *)a1, "':' expected");
              goto LABEL_33;
            }
            sub_6C3F4(a1, a3);
            v11 = sub_6CBB0(a1, a2, a3);
            v12 = v11;
            if ( !v11 )
            {
              sub_6D518(v10);
              goto LABEL_33;
            }
            v13 = *((_DWORD *)v11 + 1);
            if ( v13 != -1 )
              *((_DWORD *)v11 + 1) = v13 + 1;
            if ( sub_6E894(v7, (char *)v10, (int)v11) )
            {
              sub_6D518(v10);
              v21 = *((_DWORD *)v12 + 1);
              if ( v21 != -1 )
                goto LABEL_65;
              goto LABEL_33;
            }
            v14 = *((_DWORD *)v12 + 1);
            if ( v14 != -1 )
            {
              v15 = v14 - 1;
              *((_DWORD *)v12 + 1) = v15;
              if ( !v15 )
                sub_6E5DC((void **)v12);
            }
            sub_6D518(v10);
            sub_6C3F4(a1, a3);
            v16 = *(_DWORD *)(a1 + 52);
            if ( v16 != 44 )
              break;
            sub_6C3F4(a1, a3);
            if ( *(_DWORD *)(a1 + 52) != 256 )
              goto LABEL_67;
            v10 = *(void **)(a1 + 56);
            *(_DWORD *)(a1 + 56) = 0;
            if ( !v10 )
              return 0;
          }
          if ( v16 == 125 )
            return v7;
          sub_6BF34(a3, (_DWORD *)a1, "'}' expected");
LABEL_33:
          v17 = (char *)v7[1];
          if ( v17 != (char *)-1 )
          {
            v18 = v17 - 1;
            v7[1] = v18;
            if ( !v18 )
            {
              v23 = v7;
              v7 = 0;
              sub_6E5DC(v23);
              return v7;
            }
          }
        }
      }
    }
    return 0;
  }
  if ( v4 == 259 )
    return (void **)sub_6E5B8();
  if ( v4 < 259 )
    return (void **)sub_6E480();
  if ( v4 == 260 )
    return (void **)sub_6E5C4();
  if ( v4 == 261 )
    return (void **)sub_6E5D0();
LABEL_41:
  sub_6BF34(a3, (_DWORD *)a1, "unexpected token");
  return 0;
}

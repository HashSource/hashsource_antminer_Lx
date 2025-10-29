int __fastcall sub_7E484(int **a1, const void *a2, size_t a3, const char *a4, int a5)
{
  size_t v7; // r4
  char *v8; // r0
  int v9; // r5
  char *v10; // r9
  int v11; // r4
  _BYTE *v12; // r8
  int v13; // r3
  const char *v14; // r7
  signed int v15; // r5
  char *v16; // r10
  int v18; // r3
  const char *v19; // r0
  int v20; // r2
  char v21; // r0
  int v24; // [sp+Ch] [bp-18h]
  char *endptr; // [sp+18h] [bp-Ch] BYREF

  v7 = a5 + 12 + a3;
  v8 = (char *)malloc(v7);
  v9 = (int)v8;
  if ( !v8 )
    sub_C610(v7);
  v10 = v8 + 8;
  if ( a4 )
  {
    if ( !a5 )
      v8[8] = 0;
    *(_DWORD *)v8 = 1;
    if ( !a5 )
    {
LABEL_20:
      v10 += a5 + 1;
      *(_DWORD *)(v9 + 4) = v10;
      goto LABEL_21;
    }
    v11 = a5;
    v12 = v8 + 8;
    v24 = (int)v8;
    while ( 1 )
    {
      v13 = *(unsigned __int8 *)a4;
      v14 = a4 + 1;
      if ( !*a4 )
      {
LABEL_19:
        v9 = v24;
        *v12 = 0;
        goto LABEL_20;
      }
      if ( v13 == 38 && v11 > 2 )
        break;
LABEL_8:
      --v11;
      a4 = v14;
      *v12++ = v13;
      if ( v11 <= 0 )
        goto LABEL_19;
    }
    if ( a4[1] == 35 )
    {
      v18 = *((unsigned __int8 *)a4 + 2);
      if ( v18 == 120 )
        v19 = a4 + 3;
      else
        v19 = a4 + 2;
      if ( v18 == 120 )
        v20 = 16;
      else
        v20 = 10;
      v21 = strtoul(v19, &endptr, v20);
      if ( *endptr == 59 && endptr - a4 <= v11 )
      {
        v11 -= endptr - a4;
        v14 = endptr + 1;
        LOBYTE(v13) = v21;
        goto LABEL_8;
      }
    }
    else
    {
      v15 = 4;
      v16 = (char *)&unk_9EF4C;
      if ( v11 < 4 )
        goto LABEL_15;
      while ( 1 )
      {
        if ( !strncmp(v14, v16 + 8, v15) )
        {
          v14 += v15;
          v11 -= v15;
          LOBYTE(v13) = *v16;
          goto LABEL_8;
        }
LABEL_15:
        if ( v16 == (char *)&unk_9EF8C )
          break;
        while ( 1 )
        {
          v16 += 16;
          v15 = *((_DWORD *)v16 + 1);
          if ( v15 <= v11 )
            break;
          if ( v16 == (char *)&unk_9EF8C )
            goto LABEL_18;
        }
      }
    }
LABEL_18:
    LOBYTE(v13) = 38;
    goto LABEL_8;
  }
  *(_DWORD *)v8 = 0;
  *((_DWORD *)v8 + 1) = v10;
LABEL_21:
  memcpy(v10, a2, a3);
  *(_BYTE *)(*(_DWORD *)(v9 + 4) + a3) = 0;
  sub_7E374(a1, v9);
  return v9;
}

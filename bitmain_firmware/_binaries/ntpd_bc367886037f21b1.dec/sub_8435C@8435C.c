_BYTE *__fastcall sub_8435C(_BYTE *a1, char *s)
{
  size_t v4; // r4
  size_t v5; // r0
  _BYTE *v6; // r2
  size_t v7; // r7
  unsigned int v8; // r3
  unsigned int v9; // t1
  bool v10; // zf
  int v11; // r3
  unsigned int v12; // t1
  _BYTE *v13; // r0
  _BYTE *v14; // r8
  _BYTE *v15; // r4
  bool v16; // zf
  _BYTE *v17; // r3
  _BYTE *v18; // r1
  int v19; // r2
  int v20; // r1
  _BYTE *v21; // r2
  int v22; // t1
  _BYTE *v23; // r3
  char *v25; // r0
  void *v26; // r0

  v4 = 3;
  v5 = strlen(s);
  v6 = a1;
  v7 = v5;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = (unsigned __int8)*v6++;
        v8 = v9;
        if ( v9 - 32 <= 0x5E )
        {
          do
          {
            v10 = v8 == 92;
            if ( v8 != 92 )
              v10 = v8 == 34;
            if ( v10 )
              v11 = 2;
            else
              v11 = 1;
            v4 += v11;
            v12 = (unsigned __int8)*v6++;
            v8 = v12;
          }
          while ( v12 - 32 <= 0x5E );
        }
        if ( v8 <= 0xD )
          break;
LABEL_13:
        v4 += 4;
      }
      if ( ((1 << v8) & 0x3B80) == 0 )
        break;
      v4 += 2;
    }
    if ( ((1 << v8) & 0x400) == 0 )
      break;
    v4 += v5;
  }
  if ( v8 )
    goto LABEL_13;
  v13 = malloc(v4);
  v14 = v13;
  if ( !v13 )
    sub_C610(v4);
  v15 = v13 + 1;
  *v13 = 34;
  while ( 2 )
  {
    while ( 1 )
    {
      v19 = (unsigned __int8)*a1;
      if ( (unsigned int)(v19 - 32) > 0x5E )
        break;
      v16 = v19 == 92;
      if ( v19 != 92 )
        v16 = v19 == 34;
      v17 = v15 + 1;
      if ( v16 )
      {
        v18 = v15++;
        *v18 = 92;
        v17 = v18 + 2;
      }
      *v15 = v19;
      v15 = v17;
LABEL_23:
      ++a1;
    }
    switch ( *a1 )
    {
      case 0:
        goto LABEL_32;
      case 7:
        *v15 = 92;
        v15[1] = 97;
        v15 += 2;
        goto LABEL_23;
      case 8:
        *v15 = 92;
        v15[1] = 98;
        v15 += 2;
        goto LABEL_23;
      case 9:
        *v15 = 92;
        v15[1] = 116;
        v15 += 2;
        goto LABEL_23;
      case 0xA:
        v20 = (unsigned __int8)*++a1;
        if ( v20 == 10 )
        {
          v21 = v15 + 2;
          do
          {
            v22 = (unsigned __int8)*++a1;
            v20 = v22;
            v15 = v21;
            *(v21 - 2) = 92;
            v21 += 2;
            *(v21 - 3) = 110;
          }
          while ( v22 == 10 );
        }
        if ( v20 )
        {
          v26 = v15;
          v15 += v7;
          memcpy(v26, s, v7);
          continue;
        }
        v23 = v15;
        *v15 = 92;
        v15 += 2;
        v23[1] = 110;
LABEL_32:
        *v15 = 34;
        v15[1] = 0;
        return v14;
      case 0xB:
        *v15 = 92;
        v15[1] = 118;
        v15 += 2;
        goto LABEL_23;
      case 0xC:
        *v15 = 92;
        v15[1] = 102;
        v15 += 2;
        goto LABEL_23;
      case 0xD:
        *v15 = 92;
        v15[1] = 114;
        v15 += 2;
        goto LABEL_23;
      default:
        v25 = v15;
        v15 += 4;
        sprintf(v25, "\\%03o", v19);
        goto LABEL_23;
    }
  }
}

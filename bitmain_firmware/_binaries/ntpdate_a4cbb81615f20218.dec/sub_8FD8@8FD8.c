char *__fastcall sub_8FD8(unsigned int a1, int a2, int a3, int a4)
{
  int v8; // r7
  char *v9; // r6
  char *v10; // r1
  char *v11; // lr
  unsigned int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r0
  char *v15; // r2
  int v16; // r5
  char *v17; // r0
  char v18; // t1
  _BYTE *v20; // r0
  _BYTE *v21; // r12
  _BYTE *v22; // r3
  char v23; // t1
  _BYTE v25[12]; // [sp+8h] [bp-14h] BYREF

  v8 = lib_nextbuf;
  v9 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
  memset(v9, 0, 0x80u);
  v12 = HIWORD(a1) << 16;
  LOBYTE(v13) = (v8 + 1) & 0xF;
  lib_nextbuf = (unsigned __int8)v13;
  *(_QWORD *)v25 = 0;
  if ( !v12 )
  {
    v10 = &v25[4];
    v11 = &v25[5];
  }
  *(_QWORD *)&v25[4] = 0;
  if ( v12 )
  {
    v11 = &v25[5];
    v14 = HIWORD(a1);
    v10 = &v25[5];
    do
    {
      LOBYTE(v13) = v14 % 0xA;
      v14 = (unsigned __int16)(v14 / 0xA);
      *--v10 = v13;
    }
    while ( v14 );
  }
  if ( a4 )
  {
    v15 = &v25[8];
    a3 = (__int16)(a3 + 3);
    if ( a3 <= 2 )
    {
      LOWORD(a3) = 3;
      goto LABEL_12;
    }
  }
  else
  {
    v15 = v11;
  }
  if ( a3 <= 6 )
  {
    if ( a3 <= 0 )
      goto LABEL_15;
  }
  else
  {
    LOWORD(a3) = 6;
  }
LABEL_12:
  v13 = (unsigned int)v11;
  v16 = (unsigned __int16)(a3 - 1);
  do
  {
    a1 = 10 * (unsigned __int16)a1;
    *(_BYTE *)v13++ = BYTE2(a1);
  }
  while ( (_BYTE *)v13 != &v25[v16 + 6] );
  v11 += v16 + 1;
LABEL_15:
  if ( (a1 & 0x8000) != 0 )
  {
    v17 = v11 - 1;
    v13 = (unsigned __int8)(*(v11 - 1) + 1);
    for ( *(v11 - 1) = v13; v13 > 9; *v17 = v13 )
    {
      *v17 = 0;
      v18 = *--v17;
      v13 = (unsigned __int8)(v18 + 1);
    }
  }
  if ( v10 < v15 - 1 )
  {
    LOBYTE(v13) = *v10;
    if ( !*v10 )
    {
      v13 = (unsigned int)(v10 + 1);
      do
      {
        v10 = (char *)v13;
        if ( v15 - 1 == (char *)v13 )
          break;
      }
      while ( !*(unsigned __int8 *)v13++ );
    }
  }
  if ( a2 )
  {
    v20 = &lib_stringbuf;
    LOBYTE(v13) = 45;
  }
  else
  {
    v20 = v9;
  }
  if ( a2 )
  {
    v20[128 * v8] = v13;
    v20 = v9 + 1;
  }
  if ( v11 <= v10 )
  {
    v21 = v20;
  }
  else
  {
    do
    {
      v21 = v20 + 1;
      if ( v15 == v10 )
      {
        v22 = v20++;
        *v22 = 46;
        v21 = v22 + 2;
      }
      v23 = *v10++;
      *v20 = v23 + 48;
      v20 = v21;
    }
    while ( v11 != v10 );
  }
  *v21 = 0;
  return v9;
}

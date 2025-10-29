char *__fastcall sub_92FC(unsigned int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r7
  char *v10; // r6
  char *v11; // r12
  _BOOL4 v12; // r3
  char *v13; // r11
  int v14; // r10
  bool v15; // cc
  char *v16; // r5
  int v17; // r2
  bool v18; // r1
  _BOOL4 v19; // r9
  char v20; // r3
  char *v21; // r3
  _BYTE *v23; // r2
  _BYTE *v24; // r3
  char v25; // t1
  char *v27; // r2
  char v28; // t1
  int v29; // r3
  _BYTE *v30; // r1
  __int64 v31; // [sp+Ch] [bp-20h] BYREF
  _QWORD v32[2]; // [sp+14h] [bp-18h] BYREF

  v9 = lib_nextbuf;
  v10 = &lib_stringbuf[128 * lib_nextbuf];
  memset(v10, 0, 0x80u);
  v31 = 0;
  v32[0] = 0;
  lib_nextbuf = ((_BYTE)v9 + 1) & 0xF;
  if ( !a1 )
    v11 = (char *)v32 + 2;
  v32[1] = 0;
  if ( a1 )
  {
    v11 = (char *)v32 + 2;
    do
    {
      *--v11 = a1 % 0xA;
      a1 /= 0xAu;
      v12 = v11 - (char *)&v31 > 0;
      if ( !a1 )
        v12 = 0;
    }
    while ( v12 );
  }
  if ( a4 < 0 )
  {
    if ( !a5 )
    {
      v16 = (char *)v32 + 2;
      v13 = (char *)v32 + 2;
      goto LABEL_49;
    }
    v14 = 3;
    goto LABEL_44;
  }
  if ( a5 )
  {
    v14 = a4 + 3;
    if ( a4 + 3 >= 14 )
      v14 = 14;
LABEL_44:
    v13 = (char *)v32 + 5;
    if ( !a2 )
    {
      v16 = (char *)v32 + 2;
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  v13 = (char *)v32 + 2;
  if ( a4 >= 14 )
    v14 = 14;
  else
    v14 = a4;
  v15 = a2 <= 0;
  if ( a2 )
    v15 = a4 <= 0;
  if ( v15 )
  {
    v16 = (char *)v32 + 2;
    goto LABEL_24;
  }
LABEL_17:
  v16 = (char *)v32 + 2;
  do
  {
    v17 = 10 * a2;
    --v14;
    v18 = __CFADD__(2 * a2, 8 * a2);
    v19 = v14 > 0;
    v20 = v18 + (a2 < 0) + (((a2 & 0x20000000) != 0) | (2 * (((a2 & 0x40000000) != 0) | (2 * (a2 < 0)))));
    a2 *= 10;
    if ( !v17 )
      v19 = 0;
    *v16++ = v20;
  }
  while ( v19 );
LABEL_24:
  if ( v14 )
  {
LABEL_25:
    v16 += v14;
    goto LABEL_26;
  }
LABEL_49:
  v27 = v16;
  if ( ((v16 - (char *)&v31 > 0) & ((unsigned int)a2 >> 31)) != 0 )
  {
    while ( 1 )
    {
      v28 = *--v27;
      v29 = (unsigned __int8)(v28 + 1);
      if ( v29 != 10 )
        break;
      *v27 = 0;
      if ( v27 - (char *)&v31 <= 0 )
        goto LABEL_52;
    }
    *v27 = v29;
  }
LABEL_52:
  if ( v11 >= v27 )
    v11 = v27;
LABEL_26:
  if ( v11 >= v13 )
  {
LABEL_32:
    v11 = v13 - 1;
    goto LABEL_33;
  }
  if ( !*v11 )
  {
    v21 = v11 + 1;
    do
    {
      v11 = v21;
      if ( v21 == v13 )
        goto LABEL_32;
    }
    while ( !*v21++ );
  }
LABEL_33:
  if ( a3 )
  {
    lib_stringbuf[128 * v9] = 45;
    v23 = v10 + 1;
  }
  else
  {
    v23 = v10;
  }
  if ( v11 < v16 )
  {
    do
    {
      v30 = v23 + 1;
      if ( v11 == v13 )
      {
        v24 = v23++;
        *v24 = 46;
        v30 = v24 + 2;
      }
      v25 = *v11++;
      *v23 = v25 + 48;
      v23 = v30;
    }
    while ( v11 != v16 );
  }
  else
  {
    v30 = v23;
  }
  *v30 = 0;
  return v10;
}

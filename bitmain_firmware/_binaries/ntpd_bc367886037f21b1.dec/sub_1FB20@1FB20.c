char *__fastcall sub_1FB20(unsigned int *a1, int a2, int a3)
{
  unsigned int v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r5
  int v8; // r7
  int v9; // r3
  int v10; // r6
  unsigned int *v11; // r10
  int v12; // r9
  int v13; // r3
  char *v14; // r4
  const char *v15; // r0
  int v16; // r8
  size_t v17; // r0
  int v19; // r5
  unsigned int v20; // r0
  unsigned int v21; // r1
  unsigned int v22; // r2
  unsigned int v23; // r3
  unsigned int v24; // r1
  unsigned int v25; // r2
  unsigned int v26; // r3
  int v27; // [sp+0h] [bp-90h]
  _BYTE *v28; // [sp+18h] [bp-78h]
  char *v29; // [sp+34h] [bp-5Ch]
  char v30; // [sp+3Ch] [bp-54h]
  __int64 v31; // [sp+44h] [bp-4Ch] BYREF
  unsigned int v32; // [sp+4Ch] [bp-44h]
  unsigned __int64 v33; // [sp+50h] [bp-40h]
  __int64 v34; // [sp+58h] [bp-38h]
  __int64 v35; // [sp+60h] [bp-30h] BYREF
  unsigned int v36; // [sp+68h] [bp-28h]
  unsigned __int64 v37; // [sp+6Ch] [bp-24h]
  __int64 v38; // [sp+74h] [bp-1Ch]
  int v39; // [sp+7Ch] [bp-14h]
  char v40[8]; // [sp+80h] [bp-10h] BYREF
  char v41[8]; // [sp+88h] [bp-8h] BYREF
  char v42[8]; // [sp+90h] [bp+0h] BYREF
  char v43[12]; // [sp+98h] [bp+8h] BYREF
  char v44[40]; // [sp+A4h] [bp+14h] BYREF

  strcpy(v40, "addr.%u");
  v31 = 0;
  v32 = 0;
  strcpy(v41, "mask.%u");
  strcpy(v42, "hits.%u");
  v33 = 0;
  v34 = 0;
  strcpy(v43, "flags.%u");
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  if ( a2 )
  {
    v20 = a1[5];
    LOWORD(v31) = 10;
    v21 = a1[6];
    v22 = a1[7];
    v23 = a1[8];
    LOWORD(v35) = 10;
    v32 = v20;
    v33 = __PAIR64__(v22, v21);
    LODWORD(v34) = v23;
    v24 = a1[10];
    v25 = a1[11];
    v26 = a1[12];
    v36 = a1[9];
    v37 = __PAIR64__(v25, v24);
    LODWORD(v38) = v26;
  }
  else
  {
    v5 = a1[6];
    v6 = bswap32(a1[5]);
    LOWORD(v31) = 2;
    HIDWORD(v31) = v6;
    LOWORD(v35) = 2;
    HIDWORD(v35) = bswap32(v5);
  }
  v7 = 0;
  v8 = 0;
  v39 = 0;
  v9 = a3;
  v10 = 4;
  v11 = a1;
  v12 = v9;
  do
  {
    if ( v8 <= 1 )
    {
      v8 = 29;
      v19 = rand();
      v7 = v19 ^ (rand() << 16);
    }
    else
    {
      v8 -= 2;
    }
    v13 = v7 & 3;
    v7 >>= 2;
    while ( 1 )
    {
      v14 = &v44[v13 + 36];
      if ( !v40[v13 - 4] )
        break;
      v13 = ((_BYTE)v13 + 1) & 3;
    }
    if ( v13 == 2 )
    {
      sub_6BCB0(v44, 32, v42, v12);
      sub_1F8EC(v44, v11[1]);
    }
    else
    {
      if ( v13 == 3 )
      {
        sub_6BCB0(v44, 32, v43, v12);
        v28 = (_BYTE *)sub_6CC70(*((unsigned __int16 *)v11 + 5));
        v16 = sub_6CCD8(*((unsigned __int16 *)v11 + 4));
        if ( *v28 )
        {
          v30 = lib_nextbuf;
          v29 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
          memset(v29, 0, 0x80u);
          v27 = v16;
          v16 = (int)v29;
          lib_nextbuf = (v30 + 1) & 0xF;
          sub_6BCB0(v29, 128, "%s %s", v28, v27);
        }
        v15 = (const char *)v16;
      }
      else
      {
        if ( v13 == 1 )
        {
          sub_6BCB0(v44, 32, v41, v12);
          v15 = (const char *)sub_6BF44(&v35);
        }
        else
        {
          sub_6BCB0(v44, 32, v40, v12);
          v15 = (const char *)sub_6BF44(&v31);
        }
        v16 = (int)v15;
      }
      v17 = strlen(v15);
      sub_1EE84(v44, v16, v17);
    }
    --v10;
    *(v14 - 76) = 1;
  }
  while ( v10 );
  return sub_1F990(v12);
}

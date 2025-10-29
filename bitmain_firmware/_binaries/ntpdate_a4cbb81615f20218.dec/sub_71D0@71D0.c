int __fastcall sub_71D0(unsigned __int8 *a1, int *a2)
{
  const unsigned __int16 **v4; // r0
  unsigned __int8 *v5; // r2
  const unsigned __int16 *v6; // r7
  unsigned int v7; // r4
  unsigned int v8; // r10
  int v9; // r6
  int result; // r0
  int v11; // r5
  char *v12; // r0
  unsigned int v13; // t1
  unsigned __int8 *v14; // r11
  unsigned __int8 *v15; // r5
  int v16; // r6
  int v17; // r10
  unsigned __int8 *v18; // r7
  unsigned __int8 *v19; // r9
  char *v20; // r0
  const unsigned __int16 *v21; // r7
  int v22; // r1
  unsigned __int8 *v23; // r3
  int v24; // t1
  int v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r1
  const unsigned __int16 *v28; // [sp+0h] [bp-24h]
  int v29; // [sp+4h] [bp-20h]
  int v30; // [sp+8h] [bp-1Ch]
  int *v31; // [sp+Ch] [bp-18h]
  unsigned __int8 *v32; // [sp+14h] [bp-10h]

  if ( !a1 )
    sub_10788("atolfp.c", 43, 0, "str != ((void *)0)");
  v4 = _ctype_b_loc();
  v5 = a1;
  v6 = *v4;
  do
  {
    v7 = *v5;
    v8 = (unsigned int)v5++;
    v9 = v6[v7] & 0x2000;
  }
  while ( (v6[v7] & 0x2000) != 0 );
  if ( v7 == 45 )
  {
    v7 = *(unsigned __int8 *)(v8 + 1);
    v9 = 1;
    v8 = (unsigned int)v5;
  }
  if ( v7 == 43 )
    v7 = *(unsigned __int8 *)++v8;
  if ( v7 == 46 )
  {
    v11 = v6[46] & 0x2000;
    if ( (v6[46] & 0x2000) == 0 )
      goto LABEL_24;
LABEL_20:
    v11 = 0;
    v7 = 0;
    goto LABEL_14;
  }
  result = v6[v7] & 0x800;
  if ( (v6[v7] & 0x800) == 0 )
    return result;
  if ( !v7 )
    goto LABEL_20;
  v11 = 0;
  while ( 1 )
  {
    v12 = strchr("0123456789", v7);
    if ( !v12 )
      break;
    v13 = *(unsigned __int8 *)++v8;
    v7 = v13;
    v11 = v12 - "0123456789" + 10 * v11;
    if ( !v13 )
      goto LABEL_14;
  }
  if ( (v6[v7] & 0x2000) != 0 )
    goto LABEL_40;
  if ( v7 != 46 )
    return v6[v7] & 0x2000;
LABEL_24:
  v14 = (unsigned __int8 *)(v8 + 1);
  v29 = v9;
  v30 = v11;
  v7 = 0;
  v15 = (unsigned __int8 *)(v8 + 10);
  v16 = ~v8;
  v32 = (unsigned __int8 *)(v8 + 10);
  v28 = v6;
  v31 = a2;
  while ( 1 )
  {
    v17 = *v14;
    v18 = &v14[v16];
    v19 = v14++;
    if ( !v17 )
      break;
    v20 = strchr("0123456789", v17);
    if ( !v20 )
      break;
    v7 = v20 - "0123456789" + 10 * v7;
    if ( v15 == v14 )
    {
      v21 = v28;
      v17 = v19[1];
      v22 = 9;
      v9 = v29;
      v11 = v30;
      a2 = v31;
      v23 = v32;
      goto LABEL_30;
    }
  }
  v22 = (int)v18;
  v23 = v19;
  v21 = v28;
  v9 = v29;
  v11 = v30;
  a2 = v31;
LABEL_30:
  while ( (v21[v17] & 0x800) != 0 )
  {
    v24 = *++v23;
    v17 = v24;
  }
  if ( !v17 || (result = v21[v17] & 0x2000, (v21[v17] & 0x2000) != 0) )
  {
    if ( v22 )
    {
      v25 = 32;
      v26 = 0x80000000;
      v12 = 0;
      v27 = dword_1D020[v22];
      do
      {
        v7 *= 2;
        if ( v27 <= v7 )
        {
          v12 = (char *)((unsigned int)v12 | v26);
          v7 -= v27;
        }
        --v25;
        v26 >>= 1;
      }
      while ( v25 );
      if ( v27 < 2 * v7 )
      {
        v7 = (unsigned int)(v12 + 1);
        goto LABEL_14;
      }
LABEL_40:
      v7 = (unsigned int)v12;
    }
LABEL_14:
    if ( v9 )
    {
      v7 = -v7;
      v11 = ~v11;
      if ( !v7 )
        ++v11;
    }
    result = 1;
    *a2 = v11;
    a2[1] = v7;
  }
  return result;
}

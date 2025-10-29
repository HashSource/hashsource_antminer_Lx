int __fastcall sub_DC94(
        int a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  unsigned int v12; // r9
  const char *v13; // r11
  char *v14; // r7
  int v15; // r5
  __int64 v16; // d8
  unsigned __int64 v17; // r0
  int v18; // r2
  _BOOL4 v19; // lr
  int v20; // r3
  int v21; // r12
  int v22; // lr
  int v23; // r2
  int v24; // r10
  int v25; // r2
  int v26; // r1
  int v27; // lr
  int v28; // r1
  int result; // r0
  unsigned int v30; // r1
  int v31; // lr
  bool v32; // cf
  unsigned int v33; // lr
  unsigned int v34; // r0
  bool v35; // cf
  unsigned int v36; // r7
  unsigned int v37; // r2
  unsigned int v38; // r3
  bool v39; // cf
  int v40; // r3
  unsigned __int64 v41; // [sp+0h] [bp-5Ch]
  int v42; // [sp+8h] [bp-54h]
  int v43; // [sp+Ch] [bp-50h]
  int v44; // [sp+18h] [bp-44h]
  int v45; // [sp+1Ch] [bp-40h]
  _DWORD v46[12]; // [sp+24h] [bp-38h] BYREF

  v12 = a9;
  v43 = a7;
  if ( (a9 & 0x80) != 0 )
  {
    v41 = a5;
    v44 = 0;
    v45 = 0;
  }
  else
  {
    v41 = abs64(a5);
    if ( a5 < 0 )
    {
      v44 = 1;
      v45 = 45;
    }
    else if ( (a9 & 2) != 0 )
    {
      v44 = 1;
      v45 = 43;
    }
    else
    {
      v40 = a9 & 4;
      v44 = v40;
      if ( (a9 & 4) != 0 )
      {
        v44 = 1;
        v40 = 32;
      }
      v45 = v40;
    }
  }
  v46[0] = a9 & 0x40;
  if ( (a9 & 0x40) != 0 )
    v13 = "0123456789ABCDEF";
  else
    v13 = "0123456789abcdef";
  v14 = (char *)v46 + 3;
  v15 = 0;
  v16 = vshrd_n_s64(vdup_n_s32(a6).n64_i64[0], 0x20u);
  v17 = v41;
  do
  {
    ++v15;
    LODWORD(v17) = sub_1C480(v17, HIDWORD(v17), v16, HIDWORD(v16));
    v19 = (unsigned int)v15 <= 0x2A;
    if ( !v17 )
      v19 = 0;
    *++v14 = v13[v18];
  }
  while ( v19 );
  v42 = a9 & 0x20;
  v20 = v15;
  v21 = (v41 != 0) & (a9 >> 3);
  if ( !v21 )
    goto LABEL_10;
  if ( a6 == 8 )
  {
    v21 = 0;
    if ( a8 > v15 )
      v22 = a8;
    else
      v22 = v15 + 1;
    if ( a8 > v15 )
      v23 = v22 - v15;
    else
      v23 = 1;
  }
  else
  {
    if ( a6 != 16 )
    {
      v21 = 0;
LABEL_10:
      v22 = a8;
      v23 = a8 - v15;
      goto LABEL_11;
    }
    v22 = a8;
    v23 = a8 - v15;
    if ( v46[0] )
      v21 = 88;
    else
      v21 = 120;
  }
LABEL_11:
  if ( (a9 & 0x20) != 0 )
  {
    if ( v15 == 3 * (v15 / 3) )
      v24 = v15 - 1;
    else
      v24 = v15;
    v23 -= v24 / 3;
    v42 = v24 / 3;
    v43 = a7 - v24 / 3;
  }
  v25 = v23 & ~(v23 >> 31);
  if ( v22 < v15 )
    v26 = v43 - v15;
  else
    v26 = v43 - v22;
  v27 = v26 - v44;
  if ( v21 )
    v27 -= 2;
  v28 = a9 & 1;
  result = v27 & ~(v27 >> 31);
  if ( (a9 & 1) != 0 )
  {
    v28 = -result;
  }
  else if ( ((a8 == -1) & (a9 >> 4)) != 0 )
  {
    v25 += result;
  }
  else if ( v27 > 0 )
  {
    v30 = *a2;
    v31 = v27 & ~(v27 >> 31);
    v12 = 32;
    do
    {
      v32 = v30 + 1 >= a3;
      if ( v30 + 1 >= a3 )
      {
        ++v30;
      }
      else
      {
        *(_BYTE *)(a1 + v30) = 32;
        v30 = *a2;
      }
      if ( !v32 )
        ++v30;
      --v31;
      *a2 = v30;
    }
    while ( v31 );
    if ( result < 1 )
      v28 = result - 1;
    else
      v28 = 0;
  }
  else
  {
    v28 = v27 & ~(v27 >> 31);
  }
  if ( v45 )
  {
    result = *a2 + 1;
    if ( result < a3 )
    {
      *(_BYTE *)(a1 + *a2) = v45;
      result = *a2 + 1;
    }
    *a2 = result;
  }
  if ( v21 )
  {
    v33 = *a2;
    v34 = *a2 + 1;
    if ( v34 < a3 )
    {
      *(_BYTE *)(a1 + v33) = 48;
      v33 = *a2;
      v34 = *a2 + 1;
    }
    *a2 = v34;
    if ( v33 + 2 < a3 )
    {
      *(_BYTE *)(a1 + v34) = v21;
      v34 = *a2;
    }
    result = v34 + 1;
    *a2 = result;
  }
  if ( v25 )
  {
    result = *a2;
    do
    {
      v35 = result + 1 >= a3;
      if ( result + 1 >= a3 )
      {
        ++result;
      }
      else
      {
        *(_BYTE *)(a1 + result) = 48;
        result = *a2;
      }
      if ( !v35 )
        ++result;
      --v25;
      *a2 = result;
    }
    while ( v25 );
  }
  if ( v15 > 0 )
  {
    result = v42 > 0;
    do
    {
      while ( 1 )
      {
        v36 = *a2;
        --v20;
        v37 = *a2 + 1;
        if ( v37 < a3 )
        {
          *(_BYTE *)(a1 + v36) = *((_BYTE *)&v46[1] + v20);
          v36 = *a2;
          v37 = *a2 + 1;
        }
        if ( v20 > 0 )
          v12 = v42 > 0;
        *a2 = v37;
        if ( v20 <= 0 )
          v12 = 0;
        if ( !v12 )
          break;
        v12 = 3 * (v20 / 3u);
        if ( v20 == v12 )
        {
          if ( a3 > v36 + 2 )
          {
            *(_BYTE *)(a1 + v37) = 44;
            v37 = *a2;
          }
          *a2 = v37 + 1;
        }
      }
    }
    while ( v20 );
  }
  if ( v28 )
  {
    v38 = *a2;
    result = 32;
    do
    {
      v39 = v38 + 1 >= a3;
      if ( v38 + 1 >= a3 )
      {
        ++v38;
      }
      else
      {
        *(_BYTE *)(a1 + v38) = 32;
        v38 = *a2;
      }
      if ( !v39 )
        ++v38;
      ++v28;
      *a2 = v38;
    }
    while ( v28 );
  }
  return result;
}

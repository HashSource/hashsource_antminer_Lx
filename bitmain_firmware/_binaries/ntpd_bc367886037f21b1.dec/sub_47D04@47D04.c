__int16 *__fastcall sub_47D04(int a1)
{
  int v1; // r6
  int v2; // r5
  int v3; // r12
  int v4; // r9
  __int16 *result; // r0
  int v6; // r3
  int v7; // r11
  bool v8; // cc
  int v9; // r3
  _BYTE *v10; // r12
  int v11; // r1
  char *v12; // r0
  const char *v13; // r8
  int v14; // r4
  int v15; // r2
  bool v16; // zf
  int v17; // r2
  int v18; // t1
  bool v19; // zf
  char *v20; // r4
  const char *v21; // r1
  unsigned __int8 v22; // r3
  char v23; // t1
  int v24; // r11
  int v25; // r3
  int v26; // r4
  int v27; // r8
  int v28; // r2
  int v29; // r1
  int v30; // r1
  char *v31; // r3
  int v32; // t1
  int v33; // r8
  int v34; // r3
  int v35; // r1
  int v36; // r0
  bool v37; // nf
  int v38; // r3
  int v39; // r3
  int v40; // r3
  int v41; // r1
  int v42; // r0
  char *v43; // r3
  int v44; // t1
  int v45; // r4
  int v46; // r1
  int v47; // r1
  int v48; // r3
  bool v49; // zf
  bool v50; // zf
  _DWORD *v51; // [sp+2Ch] [bp-20h]
  int v52; // [sp+30h] [bp-1Ch]
  int v53; // [sp+34h] [bp-18h]
  char v54; // [sp+3Bh] [bp-11h] BYREF
  char v55; // [sp+3Ch] [bp-10h] BYREF
  char v56; // [sp+3Dh] [bp-Fh] BYREF
  char v57; // [sp+3Eh] [bp-Eh] BYREF
  unsigned __int8 v58; // [sp+3Fh] [bp-Dh] BYREF
  char v59; // [sp+40h] [bp-Ch] BYREF
  unsigned __int8 v60; // [sp+41h] [bp-Bh] BYREF
  __int16 v61; // [sp+42h] [bp-Ah] BYREF
  int v62; // [sp+44h] [bp-8h] BYREF
  int v63; // [sp+48h] [bp-4h] BYREF
  _DWORD v64[2]; // [sp+4Ch] [bp+0h] BYREF
  char v65[128]; // [sp+54h] [bp+8h] BYREF
  int v66; // [sp+D4h] [bp+88h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 84);
  v3 = _stack_chk_guard;
  v4 = *(_DWORD *)v2;
  *(_BYTE *)(v2 + 56) = 0;
  v66 = v3;
  result = (__int16 *)sub_39BB4(a1, (bool *)(v2 + 56), 128, v64);
  *(_DWORD *)(v2 + 184) = result;
  if ( !result )
    return result;
  v6 = *(_DWORD *)(v4 + 12);
  v7 = v4 + 20;
  v8 = v6 <= 0;
  v9 = v6 - 1;
  *(_DWORD *)(v4 + 12) = v9;
  if ( !v8 )
  {
    v10 = *(_BYTE **)(v4 + 16);
    result = (__int16 *)((char *)result + 1);
    if ( (int)result < 1841 - (int)&v10[-v7] )
    {
      *(_DWORD *)(v4 + 16) = v10 + 1;
      *v10 = 10;
      result = (__int16 *)memcpy(*(void **)(v4 + 16), (const void *)(v2 + 56), *(_DWORD *)(v2 + 184));
      v9 = *(_DWORD *)(v4 + 12);
      *(_DWORD *)(v4 + 16) += *(_DWORD *)(v2 + 184);
    }
    if ( !v9 )
      return (__int16 *)sub_41CA4(v1 + 16, (const char *)(v4 + 20));
    return result;
  }
  sub_41CA4(v1 + 16, (const char *)(v2 + 56));
  v11 = v64[1];
  v51 = (_DWORD *)(v2 + 232);
  *(_DWORD *)(v2 + 232) = v64[0];
  *(_DWORD *)(v2 + 236) = v11;
  *(_BYTE *)(v4 + 20) = 0;
  *(_DWORD *)v4 = 2;
  *(_DWORD *)(v4 + 16) = v7;
  sub_6D12C(v65);
  v12 = strrchr((const char *)(v2 + 56), 62);
  if ( v12 )
  {
    v13 = v12 + 1;
    v14 = (int)&v12[-v2 - 55];
  }
  else
  {
    v13 = (const char *)(v2 + 56);
    v14 = 0;
  }
  v65[v14] = 0;
  v15 = *(unsigned __int8 *)v13;
  v16 = v15 == 9;
  if ( v15 != 9 )
    v16 = v15 == 32;
  if ( v16 )
  {
    do
    {
      v18 = *(unsigned __int8 *)++v13;
      v17 = v18;
      v19 = v18 == 9;
      if ( v18 != 9 )
        v19 = v17 == 32;
    }
    while ( v19 );
  }
  v20 = strrchr(v65, 69);
  if ( v20 > strrchr(v65, 115) && write(*(_DWORD *)(v2 + 28), "*CLS\r\r", 6u) != 6 )
    sub_3918C((__int16 *)v1, 3);
  if ( sscanf(v13, "%c%c", &v54, &v55) != 2 )
    return sub_3918C((__int16 *)v1, 2);
  if ( v54 == 45 )
  {
LABEL_24:
    result = (__int16 *)sscanf(v13, "%d,%d", v4 + 4, v4 + 8);
    if ( result == (_WORD *)&dword_0 + 1
      && (unsigned int)(*(_DWORD *)(v4 + 4) + 12) <= 0x19
      && (unsigned int)(*(_DWORD *)(v4 + 8) + 59) <= 0x76 )
    {
      return result;
    }
    return sub_3918C((__int16 *)v1, 2);
  }
  if ( v54 != 84 )
  {
    if ( v54 != 43 )
      return sub_3918C((__int16 *)v1, 2);
    goto LABEL_24;
  }
  if ( v55 != 50 )
    return sub_3918C((__int16 *)v1, 2);
  if ( sscanf(
         v13,
         "%*c%*c%4d%2d%2d%2d%2d%2d%c%c%c%c%c%2hx",
         v2 + 188,
         &v62,
         &v63,
         v2 + 196,
         v2 + 200,
         v2 + 204,
         &v56,
         &v57,
         &v58,
         &v59,
         &v60,
         &v61) != 12 )
    return sub_3918C((__int16 *)v1, 2);
  v21 = v13 + 21;
  v22 = 0;
  do
  {
    v23 = *v13++;
    v22 += v23;
  }
  while ( v13 != v21 );
  if ( v61 != v22 )
    return sub_3918C((__int16 *)v1, 2);
  v24 = v62;
  v25 = v62 - 1;
  if ( (unsigned int)(v62 - 1) > 0xB )
    return sub_3918C((__int16 *)v1, 6);
  v26 = v63;
  v27 = v63;
  if ( v63 <= 0 )
    return sub_3918C((__int16 *)v1, 6);
  v28 = *(_DWORD *)(v2 + 188);
  if ( (v28 & 3) != 0 )
    goto LABEL_93;
  v53 = v62 - 1;
  v52 = v28;
  sub_8B734(*(_DWORD *)(v2 + 188), 100);
  v28 = v52;
  v25 = v53;
  if ( v29 )
    goto LABEL_94;
  sub_8B734(v52, 400);
  v28 = v52;
  v25 = v53;
  if ( v30 )
  {
LABEL_93:
    if ( v26 > *(_DWORD *)&aGps[4 * v25 + 8] )
      return sub_3918C((__int16 *)v1, 6);
    if ( v25 )
    {
      v43 = (char *)&unk_97360;
      do
      {
        v44 = *((_DWORD *)v43 + 1);
        v43 += 4;
        v27 += v44;
      }
      while ( &aGps[4 * v24] != v43 );
      v26 = v27;
      v63 = v27;
    }
    v33 = 365;
  }
  else
  {
LABEL_94:
    if ( v26 > *(_DWORD *)&aGps[4 * v25 + 56] )
      return sub_3918C((__int16 *)v1, 6);
    if ( v25 )
    {
      v31 = (char *)&unk_97390;
      do
      {
        v32 = *((_DWORD *)v31 + 1);
        v31 += 4;
        v27 += v32;
      }
      while ( v31 != (char *)&unk_9738C + 4 * v24 );
      v26 = v27;
      v63 = v27;
    }
    v33 = 366;
  }
  v34 = *(_DWORD *)(v2 + 196);
  v35 = *(_DWORD *)(v2 + 200) - *(_DWORD *)(v4 + 8);
  v36 = *(_DWORD *)(v4 + 4);
  v37 = v35 < 0;
  *(_DWORD *)(v2 + 200) = v35;
  v38 = v34 - v36;
  if ( v35 < 0 )
  {
    v35 += 60;
    v36 = v38 - 1;
  }
  *(_DWORD *)(v2 + 196) = v38;
  if ( v37 )
  {
    *(_DWORD *)(v2 + 200) = v35;
    v38 = v36;
    *(_DWORD *)(v2 + 196) = v36;
  }
  if ( v35 > 59 )
  {
    *(_DWORD *)(v2 + 196) = ++v38;
    *(_DWORD *)(v2 + 200) = v35 - 60;
  }
  if ( v38 < 0 )
  {
    --v26;
    v38 += 24;
    v63 = v26;
    *(_DWORD *)(v2 + 196) = v38;
    if ( v26 <= 0 )
    {
      v45 = v28 - 1;
      *(_DWORD *)(v2 + 188) = v28 - 1;
      if ( ((v28 - 1) & 3) != 0 || (sub_8B734(v28 - 1, 100), !v46) && (sub_8B734(v45, 400), v47) )
      {
        v38 = *(_DWORD *)(v2 + 196);
        v26 = 365;
        v63 = 365;
      }
      else
      {
        v26 = 366;
        v38 = *(_DWORD *)(v2 + 196);
        v63 = 366;
      }
    }
  }
  if ( v38 > 23 )
  {
    ++v26;
    *(_DWORD *)(v2 + 196) = v38 - 24;
    v63 = v26;
    if ( v26 > v33 )
    {
      v39 = *(_DWORD *)(v2 + 188);
      v26 = 1;
      v63 = 1;
      *(_DWORD *)(v2 + 188) = v39 + 1;
    }
  }
  v40 = v60;
  *(_DWORD *)(v2 + 192) = v26;
  if ( v40 == 48 )
  {
    v48 = v58;
    *(_BYTE *)(v2 + 40) = 0;
    if ( v48 == 45 )
    {
      v50 = v24 == 12;
      if ( v24 != 12 )
        v50 = v24 == 6;
      if ( v50 )
        *(_BYTE *)(v2 + 40) = 2;
    }
    else if ( v48 != 48 )
    {
      if ( v48 != 43 )
        return sub_3918C((__int16 *)v1, 6);
      v49 = v24 == 12;
      if ( v24 != 12 )
        v49 = v24 == 6;
      if ( v49 )
        *(_BYTE *)(v2 + 40) = 1;
    }
  }
  else
  {
    *(_BYTE *)(v2 + 40) = 3;
  }
  if ( !sub_399D0((_DWORD *)v2) )
    return sub_3918C((__int16 *)v1, 6);
  v41 = v51[1];
  *(_DWORD *)(v2 + 224) = *v51;
  *(_DWORD *)(v2 + 228) = v41;
  result = (__int16 *)sub_39A1C(v1);
  if ( (*(_BYTE *)(v2 + 768) & 8) != 0 )
  {
    v42 = *(_DWORD *)(v2 + 28);
    *(_DWORD *)(v4 + 12) = 22;
    result = (__int16 *)write(v42, ":SYSTEM:PRINT?\r", 0xFu);
    if ( result != (__int16 *)&byte_9[6] )
      return sub_3918C((__int16 *)v1, 3);
  }
  return result;
}

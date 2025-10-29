int sub_1C38C()
{
  double v0; // d0
  Elf32_Dyn **v1; // r11
  char *v2; // r2
  int i; // r4
  const unsigned __int16 **v4; // r0
  Elf32_Dyn *v5; // r7
  __int32 d_tag; // r5
  char *v7; // r6
  int v8; // r0
  int v9; // r4
  int v10; // r1
  char *v11; // r0
  int v12; // r5
  int v13; // r0
  int v14; // r11
  int v15; // r3
  _DWORD *v16; // r2
  int v17; // r8
  int v18; // r5
  int v19; // r6
  char *v20; // r5
  _DWORD *v21; // r0
  bool v22; // zf
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r2
  Elf32_Dyn *v27; // r5
  int v29; // r2
  unsigned int v30; // r3
  int v31; // r1
  _BYTE *v32; // r0
  char *v33; // r2
  int v34; // r3
  __int16 v35; // r3
  int v36; // r2
  int v37; // r6
  char *v38; // r2
  int v39; // t1
  __int16 v40; // r3
  _BOOL4 v41; // r0
  int v42; // r2
  char *v43; // r1
  int v44; // r3
  int v45; // t1
  int v46; // r4
  int v47; // r5
  int v48; // r3
  char *v49; // r3
  int v50; // r2
  int v51; // t1
  int v52; // r3
  int *v53; // r0
  int *v54; // r4
  int v55; // r0
  bool v56; // zf
  int v57; // r0
  char *v58; // r1
  int v59; // r2
  int v60; // t1
  int *v61; // r4
  char *s; // [sp+Ch] [bp-28h]
  char *sb; // [sp+Ch] [bp-28h]
  char *sa; // [sp+Ch] [bp-28h]
  char *nptra; // [sp+10h] [bp-24h]
  char *nptr; // [sp+10h] [bp-24h]
  Elf32_Dyn **v67; // [sp+14h] [bp-20h]
  int v68; // [sp+24h] [bp-10h]
  int v69; // [sp+28h] [bp-Ch] BYREF

  v1 = &GLOBAL_OFFSET_TABLE_;
  v68 = 0;
  v2 = (char *)dword_B83D8;
  do
  {
    while ( 1 )
    {
      i = sub_1BBFC(v2);
      if ( i == -1 )
      {
        i = (int)sub_1C108();
        if ( !i )
          return i;
        i = 447;
        goto LABEL_26;
      }
      v4 = _ctype_b_loc();
      v5 = v1[424];
      d_tag = v5->d_tag;
      v7 = (char *)v4;
      if ( ((*v4)[i] & 0x2000) == 0 )
        break;
      if ( d_tag )
      {
        if ( i == 10 )
        {
LABEL_25:
          i = 447;
          dword_B83DC = 0;
          goto LABEL_26;
        }
        v2 = (char *)dword_B83D8;
      }
      else
      {
        if ( i == 59 )
          goto LABEL_25;
        v2 = (char *)dword_B83D8;
      }
    }
    if ( d_tag )
    {
      if ( i == 10 )
        goto LABEL_25;
    }
    else if ( i == 59 )
    {
      goto LABEL_25;
    }
    s = (char *)v1[669];
    if ( strchr(s, i) && !dword_B83DC )
    {
      if ( i == 61 )
        dword_B83DC = d_tag != 0;
      LOWORD(v1[458]->d_tag) = (unsigned __int8)i;
      goto LABEL_26;
    }
    v8 = i;
    v9 = 0;
    nptra = (char *)dword_B83D8;
    sub_1B9E0(v8, (_DWORD *)dword_B83D8);
    v10 = *((_DWORD *)nptra + 5);
    *((_DWORD *)nptra + 8) = *((_DWORD *)nptra + 4);
    *((_DWORD *)nptra + 9) = v10;
    v11 = nptra;
    v67 = v1;
    v12 = (int)&v1[458][-1].d_un.d_ptr + 3;
    nptr = (char *)v1[458];
    while ( 1 )
    {
      v13 = sub_1BBFC(v11);
      v14 = v13;
      if ( v13 == -1 )
      {
        v15 = -1;
        v1 = v67;
        v16 = (_DWORD *)dword_B83D8;
        goto LABEL_30;
      }
      *(_BYTE *)++v12 = v13;
      if ( (*(_WORD *)(*(_DWORD *)v7 + 2 * v13) & 0x2000) != 0 )
      {
        v15 = v13;
        v1 = v67;
        v16 = (_DWORD *)dword_B83D8;
        if ( v13 != 34 )
          goto LABEL_30;
        goto LABEL_37;
      }
      if ( v5->d_tag )
      {
        if ( v13 == 10 )
        {
          v15 = 10;
          v1 = v67;
          v16 = (_DWORD *)dword_B83D8;
          goto LABEL_30;
        }
      }
      else if ( v13 == 59 )
      {
        v15 = 59;
        v1 = v67;
        v16 = (_DWORD *)dword_B83D8;
        goto LABEL_30;
      }
      if ( v13 == 34 )
        break;
      if ( !dword_B83DC && strchr(s, v13) )
      {
        v15 = v14;
        v16 = (_DWORD *)dword_B83D8;
        v1 = v67;
        goto LABEL_30;
      }
      v11 = (char *)dword_B83D8;
      if ( v14 == 35 )
      {
        v1 = v67;
        do
        {
          v24 = sub_1BBFC(v11);
          v15 = v24;
          if ( v24 == -1 )
          {
            v16 = (_DWORD *)dword_B83D8;
            goto LABEL_30;
          }
          v22 = v24 == 10;
          v11 = (char *)dword_B83D8;
        }
        while ( !v22 );
        v16 = (_DWORD *)dword_B83D8;
        goto LABEL_30;
      }
      if ( ++v9 == 1025 )
      {
        v26 = dword_B83D8;
        v1 = v67;
LABEL_52:
        *((_BYTE *)&word_32 + (_DWORD)nptr) = 0;
        sub_64A18(
          3,
          "configuration item on line %d longer than limit of %lu, began with '%s'",
          *(_DWORD *)(v26 + 16),
          50,
          nptr);
        if ( sub_1C1F4() )
          exit(1024);
        v27 = v1[620];
LABEL_54:
        i = 0;
        v27->d_tag = 0;
        return i;
      }
    }
    v1 = v67;
    v16 = (_DWORD *)dword_B83D8;
LABEL_37:
    sa = v7;
    v19 = v9;
    v20 = &nptr[v9 - 1];
    v21 = v16;
    while ( 1 )
    {
      v23 = sub_1BBFC(v21);
      v15 = v23;
      if ( v23 == -1 )
      {
        v9 = v19;
        v7 = sa;
        v68 = 1;
        v16 = (_DWORD *)dword_B83D8;
        goto LABEL_30;
      }
      v22 = v23 == 34;
      if ( v23 != 34 )
        v22 = v23 == 10;
      v21 = (_DWORD *)dword_B83D8;
      if ( v22 )
        break;
      ++v19;
      *++v20 = v15;
      if ( v19 == 1025 )
      {
        v26 = (int)v21;
        goto LABEL_52;
      }
    }
    v9 = v19;
    v16 = (_DWORD *)dword_B83D8;
    v7 = sa;
    v68 = 1;
    if ( v15 == 34 )
    {
      v25 = sub_1BBFC((_DWORD *)dword_B83D8);
      v16 = (_DWORD *)dword_B83D8;
      v15 = v25;
    }
LABEL_30:
    sb = (char *)v16;
    sub_1B9E0(v15, v16);
    nptr[v9] = 0;
    v2 = sb;
  }
  while ( !v9 );
  v17 = (unsigned __int8)*nptr;
  v18 = dword_B83DC | v68;
  if ( dword_B83DC | v68 )
  {
    if ( v17 != 45 )
      goto LABEL_33;
    v29 = *((unsigned __int8 *)&dword_0 + (_DWORD)nptr + 1);
    if ( v29 == 52 )
    {
      i = 325;
    }
    else
    {
      if ( v29 != 54 )
      {
LABEL_33:
        if ( dword_B83DC == 1 )
          dword_B83DC = 0;
        return sub_1BDA0();
      }
      i = 327;
    }
LABEL_26:
    v1[620]->d_tag = i;
    return i;
  }
  if ( !*nptr )
  {
LABEL_128:
    if ( sscanf(nptr, "%u", &v69) != 1 )
    {
      v17 = (unsigned __int8)*nptr;
      goto LABEL_78;
    }
    if ( v69 < 0 )
    {
      v17 = (unsigned __int8)*nptr;
      goto LABEL_78;
    }
LABEL_110:
    v53 = _errno_location();
    *v53 = 0;
    v54 = v53;
    v55 = strtol(nptr, 0, 10);
    v27 = v1[620];
    v27->d_tag = v55;
    if ( v55 )
      return 319;
    v56 = *v54 == 34;
    if ( *v54 != 34 )
      v56 = *v54 == 22;
    if ( !v56 )
      return 319;
    sub_64A18(3, "Integer cannot be represented: %s", nptr);
    goto LABEL_116;
  }
  v30 = 1961801593;
  v31 = (unsigned __int8)*nptr;
  v32 = nptr + 1;
  for ( i = 940; ; v30 = *(&v1[400]->d_tag + i) )
  {
    for ( ; (unsigned __int8)v30 != v31; v30 = *(&v1[400]->d_tag + i) )
    {
      i = v30 >> 21;
      if ( !(v30 >> 21) )
        goto LABEL_74;
    }
    v31 = (unsigned __int8)*v32;
    if ( !*v32 )
      break;
    i = (v30 >> 10) & 0x7FF;
    ++v32;
    if ( !i )
      goto LABEL_74;
  }
  v52 = (v30 >> 8) & 3;
  if ( v52 != 3 )
  {
    dword_B83DC = v52;
    if ( i == 407 && !v5->d_tag )
      dword_B83DC = 0;
    goto LABEL_26;
  }
LABEL_74:
  v33 = &nptr[v17 == 45];
  v34 = (unsigned __int8)*v33;
  if ( !*v33 )
  {
LABEL_109:
    if ( v17 == 45 )
      goto LABEL_110;
    goto LABEL_128;
  }
  while ( (*(_WORD *)(*(_DWORD *)v7 + 2 * v34) & 0x800) != 0 )
  {
    v34 = (unsigned __int8)*++v33;
    if ( !*v33 )
      goto LABEL_109;
  }
LABEL_78:
  if ( v17 == 48 )
  {
    if ( (*_ctype_tolower_loc())[*((unsigned __int8 *)&dword_0 + (_DWORD)nptr + 1)] == 120 )
    {
      v35 = *((unsigned __int8 *)&dword_0 + (_DWORD)nptr + 2);
      if ( !*((_BYTE *)&dword_0 + (_DWORD)nptr + 2) )
      {
LABEL_125:
        if ( (*_ctype_tolower_loc())[*((unsigned __int8 *)&dword_0 + (_DWORD)nptr + 1)] == 120 )
        {
          v27 = v1[620];
          v57 = sscanf(nptr + 2, "%x", v27);
          goto LABEL_120;
        }
LABEL_119:
        v27 = v1[620];
        v57 = sscanf(nptr, "%u", v27);
LABEL_120:
        if ( v57 == 1 )
          return 434;
        sub_64A18(3, "U_int cannot be represented: %s", nptr);
LABEL_116:
        if ( !sub_1C1F4() )
          goto LABEL_54;
LABEL_117:
        exit(1);
      }
      v36 = 2;
      v18 = 1;
      goto LABEL_81;
    }
  }
  else if ( !v17 )
  {
    goto LABEL_119;
  }
  v35 = v17;
  v36 = 0;
LABEL_81:
  v37 = *(_DWORD *)v7;
  v38 = &nptr[v36];
  while ( 1 )
  {
    v40 = *(_WORD *)(v37 + 2 * v35);
    if ( v18 )
    {
      if ( (v40 & 0x1000) == 0 )
        break;
      goto LABEL_83;
    }
    if ( (v40 & 0x800) == 0 )
      break;
LABEL_83:
    v39 = (unsigned __int8)*++v38;
    v35 = v39;
    if ( !v39 )
    {
      if ( v17 != 48 )
        goto LABEL_119;
      goto LABEL_125;
    }
  }
  v41 = ((v17 - 43) & 0xFD) == 0;
  v42 = (unsigned __int8)nptr[v41];
  v43 = &nptr[v41];
  if ( !nptr[v41] )
    return sub_1BDA0();
  v44 = 0;
  while ( 1 )
  {
    v46 = v41 + v44;
    if ( (*(_WORD *)(v37 + 2 * v42) & 0x800) == 0 )
      break;
    v45 = (unsigned __int8)*++v43;
    v42 = v45;
    ++v44;
    if ( !v45 )
      goto LABEL_138;
  }
  if ( v42 == 46 )
  {
    v58 = &nptr[++v46];
    v59 = (unsigned __int8)nptr[v46];
    if ( nptr[v46] )
    {
      while ( (*(_WORD *)(v37 + 2 * v59) & 0x800) != 0 )
      {
        v60 = (unsigned __int8)*++v58;
        v59 = v60;
        ++v44;
        ++v46;
        if ( !v60 )
          goto LABEL_137;
      }
      goto LABEL_91;
    }
LABEL_137:
    if ( !v44 )
      return sub_1BDA0();
LABEL_138:
    v61 = _errno_location();
    *v61 = 0;
    strtod(nptr, 0);
    *(double *)v1[620] = v0;
    if ( v0 != 0.0 || *v61 != 34 )
      return 289;
    sub_64A18(3, "Double too large to represent: %s", nptr);
    goto LABEL_117;
  }
LABEL_91:
  if ( v44 )
  {
    if ( !nptr[v46] )
      goto LABEL_138;
    v47 = (unsigned __int8)nptr[v46];
    if ( (*_ctype_tolower_loc())[v47] == 101 )
    {
      v48 = v46 + 1;
      if ( ((nptr[v46 + 1] - 43) & 0xFD) == 0 )
        v48 = v46 + 2;
      v49 = &nptr[v48 - 1];
      while ( 1 )
      {
        v51 = (unsigned __int8)*++v49;
        v50 = v51;
        if ( !v51 )
          break;
        if ( (*(_WORD *)(v37 + 2 * v50) & 0x800) == 0 )
          return sub_1BDA0();
      }
      goto LABEL_138;
    }
  }
  return sub_1BDA0();
}

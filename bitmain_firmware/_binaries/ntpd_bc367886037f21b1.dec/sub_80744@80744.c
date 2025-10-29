int __fastcall sub_80744(const char *a1)
{
  const unsigned __int16 **v2; // r7
  const char *v3; // r0
  int v4; // r3
  const char *v5; // r4
  unsigned __int16 v6; // r5
  int v7; // r6
  int *v8; // r0
  int *v9; // r8
  unsigned int v10; // r9
  int v11; // r0
  char *v12; // r5
  unsigned int v13; // r4
  unsigned int v14; // t1
  int v15; // r2
  int v16; // r0
  int v17; // r2
  unsigned int j; // r1
  int v19; // t1
  char *v21; // r5
  int *v22; // r0
  int v23; // r3
  int *v24; // r10
  char *v25; // r0
  const char *v26; // r8
  char *v27; // r4
  _BOOL4 v28; // r9
  char *v29; // r0
  int v30; // r4
  char *v31; // r2
  int v32; // r0
  int v33; // r7
  size_t v34; // r0
  void *v35; // r3
  const char **p_endptr; // r1
  const char *v37; // r2
  int v38; // r0
  char *v39; // r2
  int v40; // r0
  char *v41; // r2
  int v42; // r0
  char *v43; // r2
  int v44; // r0
  char *v45; // r2
  int v46; // r0
  int v47; // r3
  const unsigned __int16 *i; // r1
  int v49; // r3
  int v50; // r0
  int v51; // r0
  __int16 v52; // r12
  int *v53; // r3
  int v54; // r10
  int v55; // r8
  int v56; // r11
  int *v57; // r4
  unsigned int v58; // r0
  int v59; // r0
  int v60; // r4
  int v61; // t1
  bool v62; // zf
  int *v63; // r2
  char *v64; // [sp+14h] [bp-18h] BYREF
  char *endptr; // [sp+18h] [bp-14h] BYREF
  int v66; // [sp+1Ch] [bp-10h] BYREF
  char v67[4]; // [sp+20h] [bp-Ch] BYREF

  v2 = _ctype_b_loc();
  v3 = a1;
  do
  {
    v4 = *(unsigned __int8 *)v3;
    v5 = v3++;
    v6 = (*v2)[v4];
    v7 = v6 & 0x2000;
  }
  while ( (v6 & 0x2000) != 0 );
  if ( v4 == 80 )
  {
    v21 = _strdup(v5 + 1);
    v22 = _errno_location();
    if ( !v21 )
    {
      v23 = 12;
      v7 = -1;
    }
    v24 = v22;
    if ( !v21 )
    {
      *v22 = v23;
      return v7;
    }
    v25 = strchr(v21, 84);
    v26 = v25;
    if ( v25 )
    {
      *v25 = v7;
      v27 = (char *)sub_7C02C(v21);
      v26 = sub_7C02C(v26 + 1);
      v28 = v26 != 0;
    }
    else
    {
      v27 = v21;
      v28 = 0;
    }
    v29 = strchr(v27, 45);
    if ( v29 )
    {
      v64 = v27;
      v30 = sub_7D424(0, (const char **)&v64, v29, 31536000);
      v31 = strchr(++v64, 45);
      if ( v31 )
      {
        v32 = sub_7D424(v30, (const char **)&v64, v31, 2592000);
        ++v64;
        v33 = v32;
        v34 = strlen(v64);
        v35 = &loc_15180;
        p_endptr = (const char **)&v64;
        v37 = &v64[v34];
        v38 = v33;
LABEL_42:
        v7 = sub_7D424(v38, p_endptr, v37, (int)v35);
LABEL_43:
        if ( *v24 )
          v28 = 0;
        if ( v28 )
        {
          v50 = sub_7D514(v26);
          v7 = sub_7D370(v7, v50, 1);
        }
        goto LABEL_47;
      }
    }
    else if ( strpbrk(v27, "YMWD") )
    {
      endptr = v27;
      v39 = strchr(v27, 89);
      if ( v39 )
      {
        v40 = sub_7D424(0, (const char **)&endptr, v39, 31536000);
        v27 = ++endptr;
        v7 = v40;
      }
      else
      {
        v7 = 0;
      }
      v41 = strchr(v27, 77);
      if ( v41 )
      {
        v42 = sub_7D424(v7, (const char **)&endptr, v41, 2592000);
        v27 = ++endptr;
        v7 = v42;
      }
      v43 = strchr(v27, 87);
      if ( v43 )
      {
        v44 = sub_7D424(v7, (const char **)&endptr, v43, (int)" + 1)");
        v27 = ++endptr;
        v7 = v44;
      }
      v45 = strchr(v27, 68);
      if ( v45 )
      {
        v46 = sub_7D424(v7, (const char **)&endptr, v45, (int)&loc_15180);
        v27 = ++endptr;
        v7 = v46;
      }
      v47 = (unsigned __int8)*v27;
      for ( i = *v2; (i[v47] & 0x2000) != 0; v47 = (unsigned __int8)*v27 )
        endptr = ++v27;
      if ( !v47 )
        goto LABEL_43;
    }
    else if ( strlen(v27) == 8 )
    {
      v66 = *(_DWORD *)v27;
      v67[0] = 0;
      endptr = (char *)&v66;
      v51 = sub_7D424(0, (const char **)&endptr, v67, 31536000);
      LOWORD(v66) = *((_WORD *)v27 + 2);
      endptr = (char *)&v66;
      BYTE2(v66) = 0;
      v38 = sub_7D424(v51, (const char **)&endptr, (const char *)&v66 + 2, 2592000);
      v52 = *((_WORD *)v27 + 3);
      v35 = &loc_15180;
      v37 = (char *)&v66 + 2;
      p_endptr = (const char **)&endptr;
      endptr = (char *)&v66;
      LOWORD(v66) = v52;
      BYTE2(v66) = 0;
      goto LABEL_42;
    }
    v7 = -1;
    *v24 = 22;
LABEL_47:
    free(v21);
    return v7;
  }
  if ( v4 == 84 )
    return sub_7D514(v5 + 1);
  v8 = _errno_location();
  v9 = v8;
  if ( (v6 & 0x800) == 0 )
  {
    v7 = -1;
    *v8 = 22;
    return v7;
  }
  v10 = v6 & 0x2000;
  while ( 1 )
  {
    *v9 = 0;
    v11 = strtol(v5, &endptr, 10);
    v12 = endptr;
    if ( *v9 )
      goto LABEL_23;
    v13 = (unsigned __int8)*endptr;
    if ( v13 == 58 )
      break;
    if ( ((*v2)[v13] & 0x2000) != 0 )
    {
      do
      {
        v14 = (unsigned __int8)*++v12;
        v13 = v14;
      }
      while ( ((*v2)[v14] & 0x2000) != 0 );
    }
    if ( v13 == 89 )
      goto LABEL_51;
    if ( v13 <= 0x59 )
    {
      if ( v13 == 68 )
        goto LABEL_73;
      if ( v13 <= 0x44 )
      {
        v49 = v11;
        if ( !v13 )
          return sub_7D370(v7, v49, 1);
LABEL_23:
        v7 = -1;
        *v9 = 22;
        return v7;
      }
      if ( v13 == 77 )
      {
        if ( v10 > 1 )
          goto LABEL_23;
        v15 = 2592000;
        v10 = 2;
      }
      else
      {
        if ( v13 != 87 || v10 > 2 )
          goto LABEL_23;
        v15 = (int)" + 1)";
        v10 = 3;
      }
    }
    else
    {
      if ( v13 == 109 )
      {
        if ( v10 == 6 )
          goto LABEL_23;
        v15 = 60;
        v10 = 6;
        goto LABEL_19;
      }
      if ( v13 <= 0x6D )
      {
        if ( v13 != 100 )
        {
          if ( v13 != 104 || v10 > 4 )
            goto LABEL_23;
          v15 = 3600;
          v10 = 5;
          goto LABEL_19;
        }
LABEL_73:
        if ( v10 > 3 )
          goto LABEL_23;
        v15 = (int)&loc_15180;
        v10 = 4;
        goto LABEL_19;
      }
      if ( v13 != 115 )
      {
        if ( v13 != 121 )
          goto LABEL_23;
LABEL_51:
        if ( v10 )
          goto LABEL_23;
        v15 = 31536000;
        v10 = 1;
        goto LABEL_19;
      }
      v15 = 1;
      v10 = 7;
    }
LABEL_19:
    v16 = sub_7D370(v7, v11, v15);
    v17 = (unsigned __int8)v12[1];
    v5 = v12 + 1;
    v7 = v16;
    for ( j = (*v2)[v17]; (j & 0x2000) != 0; j = (*v2)[v19] )
    {
      v19 = *(unsigned __int8 *)++v5;
      v17 = v19;
    }
    if ( !v17 )
      return v7;
    if ( ((v10 != 7) & (j >> 11)) == 0 )
      goto LABEL_23;
  }
  if ( v10 == 6 )
    goto LABEL_23;
  v53 = v9;
  v54 = 3;
  v55 = (unsigned __int8)*endptr;
  v56 = v11;
  v57 = v53;
  while ( --v54 )
  {
    v58 = strtoul(v12 + 1, &endptr, 10);
    v12 = endptr;
    if ( *v57 || (v59 = sub_7D370(v58, v56, 60), v56 = v59, *v57) )
    {
      v49 = -1;
      return sub_7D370(v7, v49, 1);
    }
    if ( *v12 != 58 )
    {
      v9 = v57;
      v49 = v59;
      v60 = (unsigned __int8)*v12;
      goto LABEL_84;
    }
  }
  v63 = v57;
  v49 = v56;
  v60 = v55;
  v9 = v63;
LABEL_84:
  if ( ((*v2)[v60] & 0x2000) != 0 )
  {
    do
    {
      v61 = (unsigned __int8)*++v12;
      v60 = v61;
    }
    while ( ((*v2)[v61] & 0x2000) != 0 );
  }
  if ( v60 )
  {
    v49 = -1;
    *v9 = 22;
    return sub_7D370(v7, v49, 1);
  }
  v62 = v49 == 3600;
  if ( v49 >= 3600 )
    v62 = v10 == 5;
  if ( v62 )
    goto LABEL_23;
  return sub_7D370(v7, v49, 1);
}

int __fastcall sub_5134C(int a1)
{
  int v1; // r5
  int *v2; // r11
  int v3; // r7
  int v4; // r3
  size_t v5; // r10
  double v6; // r0
  int v7; // r2
  int v8; // r3
  unsigned int v9; // r1
  bool v10; // cc
  unsigned __int8 *v11; // r1
  int v12; // t1
  unsigned int v13; // lr
  bool v14; // cc
  int v15; // r3
  int v16; // r2
  bool v17; // zf
  int v18; // t1
  bool v19; // zf
  int v20; // r3
  int v21; // lr
  int v22; // r12
  int v23; // t1
  unsigned int v24; // r1
  int v25; // r2
  int v26; // r8
  int v27; // r3
  int v28; // r8
  int v29; // r8
  char v30; // r0
  int v31; // r6
  size_t v32; // r4
  double v33; // d0
  char *v34; // r0
  char v35; // r0
  int v36; // r1
  char v37; // r0
  int v38; // r1
  bool v39; // zf
  int v40; // r8
  int v41; // r0
  signed int v42; // r3
  int v43; // r1
  int v44; // r9
  int v45; // r8
  __int64 v46; // d16
  int v47; // r3
  int v48; // r0
  int v49; // r9
  int v50; // r5
  int v51; // r3
  int v52; // r0
  unsigned int v53; // r1
  int v54; // r3
  const char *v55; // r0
  int v56; // r1
  unsigned __int8 *v57; // r2
  int v58; // t1
  int v59; // r0
  int v60; // r3
  int v61; // r8
  const char *v62; // r0
  int v63; // r1
  unsigned __int8 *v64; // r2
  int v65; // t1
  int v66; // r0
  int v67; // r3
  int v68; // r8
  const char *v69; // r0
  int v70; // r1
  unsigned __int8 *v71; // r2
  int v72; // t1
  int v73; // r0
  int v74; // r6
  int v75; // r1
  __int16 v76; // r7
  int v77; // r0
  unsigned int v78; // r12
  int v79; // r12
  int v80; // r4
  bool v81; // cc
  __int16 v82; // r1
  int v83; // r12
  int v84; // r8
  unsigned __int16 v85; // r0
  const char *v86; // r0
  const char *v87; // r0
  bool v88; // zf
  char *v90; // [sp+14h] [bp-108h]
  char *v91; // [sp+14h] [bp-108h]
  unsigned __int8 v92; // [sp+18h] [bp-104h]
  int v93; // [sp+18h] [bp-104h]
  int v94; // [sp+18h] [bp-104h]
  int v95; // [sp+20h] [bp-FCh]
  __int16 v96; // [sp+3Ch] [bp-E0h]
  _DWORD v97[2]; // [sp+40h] [bp-DCh] BYREF
  _DWORD v98[3]; // [sp+48h] [bp-D4h] BYREF
  int v99; // [sp+54h] [bp-C8h] BYREF
  unsigned int v100; // [sp+58h] [bp-C4h]
  double v101; // [sp+5Ch] [bp-C0h] BYREF
  double v102; // [sp+64h] [bp-B8h] BYREF
  _WORD v103[6]; // [sp+6Ch] [bp-B0h] BYREF
  unsigned int v104; // [sp+78h] [bp-A4h] BYREF
  char *v105; // [sp+7Ch] [bp-A0h]
  bool *v106; // [sp+84h] [bp-98h] BYREF
  unsigned __int8 *v107; // [sp+88h] [bp-94h]
  int v108; // [sp+8Ch] [bp-90h]
  int v109; // [sp+90h] [bp-8Ch]
  bool v110; // [sp+94h] [bp-88h] BYREF
  unsigned __int8 v111; // [sp+95h] [bp-87h] BYREF
  unsigned __int8 v112; // [sp+96h] [bp-86h] BYREF
  char s1[125]; // [sp+97h] [bp-85h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(int **)(v1 + 84);
  v3 = *v2;
  memset(v103, 0, 10);
  v101 = 0.0;
  v102 = 0.0;
  LODWORD(v6) = sub_39BB4(a1, &v110, 128, &v99);
  v106 = &v110;
  v107 = (unsigned __int8 *)&v110;
  v109 = 0;
  v4 = LODWORD(v6) & ~(SLODWORD(v6) >> 31);
  v5 = LODWORD(v6);
  v108 = v4;
  LODWORD(v6) = &v110 + v4;
  *(&v110 + v4) = 0;
  if ( !v110 )
    return LODWORD(v6);
  if ( v110 != 36 )
    goto LABEL_3;
  v7 = v111;
  v108 = v4 - 1;
  v106 = (bool *)&v111;
  v107 = &v111;
  if ( (unsigned int)v111 - 65 > 0x19 )
    goto LABEL_3;
  v8 = v112;
  v9 = v112 - 48;
  v10 = v9 > 9;
  if ( v9 > 9 )
    v10 = (unsigned int)v112 - 65 > 0x19;
  v11 = &v112;
  if ( !v10 )
  {
    do
    {
      v7 ^= v8;
      v12 = *++v11;
      v8 = v12;
      v13 = v12 - 65;
      v14 = (unsigned int)(v12 - 48) > 9;
      if ( (unsigned int)(v12 - 48) > 9 )
        v14 = v13 > 0x19;
    }
    while ( !v14 );
  }
  if ( v8 != 44 || v11 - &v111 <= 4 )
    goto LABEL_3;
  v15 = v11[1];
  v16 = v7 ^ 0x2C;
  HIDWORD(v6) = v11 + 1;
  v17 = v15 == 42;
  if ( v15 != 42 )
    v17 = v15 == 0;
  if ( !v17 )
  {
    do
    {
      v16 ^= v15;
      v18 = *(unsigned __int8 *)++HIDWORD(v6);
      v15 = v18;
      v19 = v18 == 0;
      if ( v18 )
        v19 = v15 == 42;
    }
    while ( !v19 );
  }
  if ( !v15 )
  {
    v92 = 1;
    goto LABEL_34;
  }
  if ( v15 != 42 || LODWORD(v6) - 3 != HIDWORD(v6) || HIDWORD(v6) - (int)&v111 > 79 )
    goto LABEL_3;
  v20 = *(unsigned __int8 *)(LODWORD(v6) - 2);
  v21 = LODWORD(v6) - 2;
  if ( *(_BYTE *)(LODWORD(v6) - 2) )
  {
    v22 = 0;
    while ( 1 )
    {
      v24 = (unsigned __int8)(v20 - 48);
      if ( v24 <= 9 )
      {
        v22 = (unsigned __int8)(v24 + 16 * v22);
      }
      else
      {
        if ( (unsigned int)(v20 - 65) > 5 )
          goto LABEL_176;
        v22 = (unsigned __int8)(v20 - 55 + 16 * v22);
      }
      v23 = *(unsigned __int8 *)++v21;
      v20 = v23;
      if ( !v23 )
        goto LABEL_176;
    }
  }
  v22 = *(unsigned __int8 *)(LODWORD(v6) - 2);
LABEL_176:
  v88 = v22 == v16;
  if ( v22 == v16 )
    v88 = LODWORD(v6) == v21;
  if ( !v88 )
  {
LABEL_3:
    LODWORD(v6) = sub_3918C((__int16 *)v1, 2);
    return LODWORD(v6);
  }
  v92 = 2;
LABEL_34:
  ++*(_DWORD *)(v3 + 16);
  LODWORD(v6) = strncmp(s1, "RMC,", 4u);
  v26 = LODWORD(v6);
  if ( !LODWORD(v6) )
    goto LABEL_57;
  LODWORD(v6) = strncmp(s1, "GGA,", 4u);
  if ( !LODWORD(v6) )
  {
    v26 = 1;
    v90 = (_BYTE *)(&dword_0 + 1);
    goto LABEL_42;
  }
  LODWORD(v6) = strncmp(s1, "GLL,", 4u);
  if ( !LODWORD(v6) )
  {
    v26 = 2;
    v90 = (_BYTE *)(&dword_0 + 2);
    goto LABEL_42;
  }
  LODWORD(v6) = strncmp(s1, "ZDA,", 4u);
  if ( !LODWORD(v6) )
  {
    v26 = 3;
    v90 = (_BYTE *)(&dword_0 + 3);
    goto LABEL_42;
  }
  LODWORD(v6) = strncmp(s1, "ZDG,", 4u);
  if ( !LODWORD(v6) )
  {
    v26 = 4;
LABEL_57:
    v27 = *(_DWORD *)(v1 + 76);
    v90 = (char *)v26;
    if ( (v27 & 0x80) == 0 )
      goto LABEL_43;
LABEL_58:
    LODWORD(v6) = -32;
    v33 = (double)v100;
    ldexp(v6, v25);
    v34 = strchr((const char *)&v110, 44);
    LODWORD(v6) = sub_41DB0(v1 + 16, (int)"delay %0.6f %.*s", v33, v34 - (char *)&v110, (const char *)&v110);
    v27 = *(_DWORD *)(v1 + 76);
    goto LABEL_43;
  }
  LODWORD(v6) = strncmp((const char *)&v111, "PGRMF,", 6u);
  if ( LODWORD(v6) )
    return LODWORD(v6);
  v26 = 5;
  v90 = &byte_5;
LABEL_42:
  v27 = *(_DWORD *)(v1 + 76);
  if ( (v27 & 0x80) != 0 )
    goto LABEL_58;
LABEL_43:
  if ( (v27 & 0xFF0F) != 0 && (v27 & dword_98DD8[v26 + 6]) == 0 )
    goto LABEL_45;
  v28 = v3 + v26;
  if ( *(unsigned __int8 *)(v28 + 40) > (unsigned int)v92 )
  {
    LODWORD(v6) = sub_3918C((__int16 *)v1, 2);
    ++*(_DWORD *)(v3 + 28);
    return LODWORD(v6);
  }
  *(_BYTE *)(v28 + 40) = v92;
  if ( *(_BYTE *)v3 )
  {
    if ( v90 != &byte_4 )
    {
LABEL_45:
      ++*(_DWORD *)(v3 + 32);
      return LODWORD(v6);
    }
LABEL_49:
    v93 = sub_50CEC(v103, (_DWORD *)&v101 + 1, (int)&v106, 1);
    v29 = sub_50B80((int)v103, (int)&v106, 2, 1);
    v30 = sub_50784((unsigned __int8 **)&v106, 4, 48, 1u);
    LODWORD(v101) = -1;
    *((_BYTE *)v2 + 40) = v30;
  }
  else
  {
    switch ( (unsigned int)v90 )
    {
      case 1u:
        v93 = sub_50CEC(v103, (_DWORD *)&v101 + 1, (int)&v106, 1);
        v37 = sub_50784((unsigned __int8 **)&v106, 6, 48, 1u);
        v38 = v99;
        *((_BYTE *)v2 + 40) = v37;
        v29 = sub_50AC0((int)v103, v38);
        if ( (v2[192] & 8) != 0 )
          sub_50E64((unsigned __int8 **)&v106, 2, 4, -1);
        goto LABEL_50;
      case 2u:
        v93 = sub_50CEC(v103, (_DWORD *)&v101 + 1, (int)&v106, 5);
        v35 = sub_50784((unsigned __int8 **)&v106, 6, 65, 0);
        v36 = v99;
        *((_BYTE *)v2 + 40) = v35;
        v29 = sub_50AC0((int)v103, v36);
        if ( (v2[192] & 8) != 0 )
          sub_50E64((unsigned __int8 **)&v106, 1, 3, -1);
        goto LABEL_50;
      case 3u:
        *((_BYTE *)v2 + 40) = 0;
        v93 = sub_50CEC(v103, (_DWORD *)&v101 + 1, (int)&v106, 1);
        v29 = sub_50B80((int)v103, (int)&v106, 2, 1);
        goto LABEL_50;
      case 4u:
        goto LABEL_49;
      case 5u:
        v54 = v109;
        if ( v109 <= 1 )
        {
          v55 = (const char *)v107;
          if ( v109 == 1 )
            goto LABEL_114;
        }
        else
        {
          v55 = (const char *)v106;
          v54 = 0;
          v109 = 0;
          v107 = (unsigned __int8 *)v106;
        }
        v56 = *(unsigned __int8 *)v55;
        if ( *v55 )
        {
          v57 = (unsigned __int8 *)(v55 + 1);
          do
          {
            if ( v56 == 44 )
              ++v54;
            v107 = v57;
            v109 = v54;
            v55 = (const char *)v57;
            if ( v54 == 1 )
              break;
            v58 = *v57++;
            v56 = v58;
          }
          while ( v58 );
        }
LABEL_114:
        v59 = sscanf(v55, "%hu", (char *)&v102 + 4);
        v60 = v109;
        v61 = v59;
        if ( v109 <= 2 )
        {
          v62 = (const char *)v107;
          if ( v109 == 2 )
            goto LABEL_123;
        }
        else
        {
          v62 = (const char *)v106;
          v60 = 0;
          v109 = 0;
          v107 = (unsigned __int8 *)v106;
        }
        v63 = *(unsigned __int8 *)v62;
        if ( *v62 )
        {
          v64 = (unsigned __int8 *)(v62 + 1);
          do
          {
            if ( v63 == 44 )
              ++v60;
            v107 = v64;
            v109 = v60;
            v62 = (const char *)v64;
            if ( v60 == 2 )
              break;
            v65 = *v64++;
            v63 = v65;
          }
          while ( v65 );
        }
LABEL_123:
        v66 = sscanf(v62, "%lu", &v104);
        v67 = v109;
        v68 = v61 + v66;
        if ( v109 <= 5 )
        {
          v69 = (const char *)v107;
          if ( v109 == 5 )
            goto LABEL_132;
        }
        else
        {
          v69 = (const char *)v106;
          v67 = 0;
          v109 = 0;
          v107 = (unsigned __int8 *)v106;
        }
        v70 = *(unsigned __int8 *)v69;
        if ( *v69 )
        {
          v71 = (unsigned __int8 *)(v69 + 1);
          do
          {
            if ( v70 == 44 )
              ++v67;
            v107 = v71;
            v109 = v67;
            v69 = (const char *)v71;
            if ( v67 == 5 )
              break;
            v72 = *v71++;
            v70 = v72;
          }
          while ( v72 );
        }
LABEL_132:
        if ( v68 + sscanf(v69, "%hd", (char *)&v102 + 6) != 3
          || WORD2(v102) >= 0x400u
          || v104 > (unsigned int)"2 + 1)"
          || (LODWORD(v102) = v104, !sub_50B80((int)v103, (int)&v106, 3, 0)) )
        {
          v29 = 0;
          v93 = sub_50CEC(v103, (_DWORD *)&v101 + 1, (int)&v106, 4);
          *((_BYTE *)v2 + 40) = sub_50784((unsigned __int8 **)&v106, 11, 48, 1u);
          goto LABEL_134;
        }
        v93 = sub_50CEC(v103, (_DWORD *)&v101 + 1, (int)&v106, 4);
        *((_BYTE *)v2 + 40) = sub_50784((unsigned __int8 **)&v106, 11, 48, 1u);
        v73 = sub_661CC(v103);
        v74 = v3;
        v75 = *(unsigned __int16 *)(v3 + 2);
        v96 = v103[0] % 0x64u;
        v76 = v103[0] % 0x64u;
        v77 = SHIWORD(v102) + v73;
        v78 = (unsigned int)v77 >> 31;
        if ( v77 > 86399 )
          v79 = 1 - v78;
        else
          v79 = -v78;
        v29 = 5;
        v80 = v79;
        break;
      default:
        v93 = sub_50CEC(v103, (_DWORD *)&v101 + 1, (int)&v106, 1);
        *((_BYTE *)v2 + 40) = sub_50784((unsigned __int8 **)&v106, 2, 65, 0);
        v29 = sub_50B80((int)v103, (int)&v106, 9, 0);
        if ( v29 )
        {
          sub_6636C(&v104, v99, 0);
          v84 = (unsigned __int16)v104 - 20;
          if ( v84 < dword_BC5F4 )
            v84 = dword_BC5F4;
          v85 = sub_653C0(v84, v103[0], 100);
          v103[0] = v85;
          v29 = v84 <= v85 && v84 + 99 >= v85;
        }
        if ( (v2[192] & 8) != 0 )
          sub_50E64((unsigned __int8 **)&v106, 3, 4, 5, 6, -1);
        goto LABEL_50;
    }
    while ( 1 )
    {
      v81 = (unsigned int)(v75 - 19) > 4;
      if ( (unsigned int)(v75 - 19) > 4 )
        *(_WORD *)(v74 + 2) = 19;
      else
        LOWORD(v75) = 5 * v75;
      if ( v81 )
        v82 = 1900;
      else
        v82 = 5 * v75;
      if ( !v81 )
        v82 *= 4;
      v103[0] = v76 + v82;
      v83 = sub_66044(v103) - 722819 + v80;
      if ( v83 >= 0 && WORD2(v102) == (((__int16)v83 / 7) & 0x3FF) )
        break;
      --v29;
      v75 = (unsigned __int16)(*(_WORD *)(v74 + 2) + 1);
      *(_WORD *)(v74 + 2) = v75;
      if ( !v29 )
      {
        v3 = v74;
        v103[0] = v96;
        goto LABEL_134;
      }
    }
    v3 = v74;
    v29 = 1;
LABEL_134:
    if ( (v2[192] & 8) != 0 )
      sub_50E64((unsigned __int8 **)&v106, 6, 8, -1);
  }
LABEL_50:
  if ( !v93 )
  {
    v31 = 6;
    ++*(_DWORD *)(v3 + 28);
LABEL_52:
    if ( v5 >= 0x7F )
      v32 = 127;
    else
      v32 = v5;
    v2[46] = v32;
    memcpy(v2 + 14, &v110, v32);
    *((_BYTE *)v2 + v32 + 56) = 0;
    LODWORD(v6) = sub_3918C((__int16 *)v1, v31);
    return LODWORD(v6);
  }
  if ( !v29 )
  {
    v31 = 5;
    ++*(_DWORD *)(v3 + 28);
    goto LABEL_52;
  }
  if ( *((_BYTE *)v2 + 40) == 3 )
  {
    v31 = 2;
    ++*(_DWORD *)(v3 + 24);
    goto LABEL_52;
  }
  v39 = *(_BYTE *)v3 == 0;
  if ( !*(_BYTE *)v3 )
    v39 = v90 == &byte_4;
  if ( v39 )
  {
    v87 = (const char *)sub_6A02C(v1 + 16);
    sub_64A18(6, "%s using GPS time as if it were UTC", v87);
    *(_BYTE *)v3 = 1;
  }
  v94 = **(_DWORD **)(v1 + 84);
  v40 = sub_661CC(v103);
  v41 = sub_66044(v103);
  v42 = HIDWORD(v101);
  v43 = LODWORD(v101);
  v44 = v41 - 693596;
  if ( v101 < 0.0 )
  {
    do
    {
      v42 += 1000000000;
      --v43;
    }
    while ( v42 < 0 );
  }
  else if ( SHIDWORD(v101) > 999999999 )
  {
    if ( HIDWORD(v101) - 1000000000 <= 999999999 )
      v43 = LODWORD(v101) + 1;
    else
      v42 = HIDWORD(v101) - 2013265920;
    if ( HIDWORD(v101) - 1000000000 <= 999999999 )
    {
      v42 = HIDWORD(v101) - 1000000000;
    }
    else
    {
      v43 += 2;
      v42 += 13265920;
    }
  }
  v45 = v40 + v43;
  v46 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(v42).n64_i64[0], 0x20u), 0x20u);
  v91 = (char *)sub_8BB68(v46 + 500000000, (unsigned __int64)(v46 + 500000000) >> 32, 1000000000, 0);
  if ( (*(_DWORD *)(v1 + 76) & 0x2000000) != 0 )
  {
    LODWORD(v6) = sub_65C5C(v97, v44, v45);
    v50 = v97[0];
  }
  else
  {
    if ( v45 <= 86399 )
    {
      while ( v45 < 0 )
      {
        --v44;
        v45 += 86400;
      }
    }
    else
    {
      do
      {
        ++v44;
        v45 -= 86400;
      }
      while ( v45 > 86399 );
    }
    sub_654FC((int)v97, v99, 0);
    v98[0] = v97[0];
    v98[1] = v97[1];
    sub_655B4(&v104, v98);
    v47 = v104 - 3584;
    if ( (int)v105 > v45 || v105 == (char *)v45 && (unsigned int)v91 < v100 )
      v47 = v104 - 3583;
    v48 = dword_BC5F0;
    if ( v47 >= dword_BC5F0 )
      v48 = v47;
    v95 = sub_653C0(v48, v44, 7168);
    v49 = (v95 - v44) / 7;
    if ( v49 != *(__int16 *)(v94 + 12) )
    {
      *(_WORD *)(v94 + 12) = v49;
      if ( (ntp_syslogmask & 0x100) != 0 )
      {
        v86 = (const char *)sub_6A02C(v1 + 16);
        sub_64A18(6, "%s Changed GPS epoch warp to %d weeks", v86, v49);
      }
    }
    LODWORD(v6) = sub_65C5C(v97, v95, v45);
    v50 = v97[0];
  }
  if ( *(_DWORD *)(v3 + 4) == v50 && *(char **)(v3 + 8) == v91 )
    goto LABEL_45;
  v51 = *(_DWORD *)(v3 + 20);
  if ( v5 >= 0x7F )
    v5 = 127;
  *(_DWORD *)(v3 + 4) = v50;
  *(_DWORD *)(v3 + 8) = v91;
  *(_DWORD *)(v3 + 20) = v51 + 1;
  v2[46] = v5;
  memcpy(v2 + 14, &v110, v5);
  v52 = v99;
  v53 = v100;
  *((_BYTE *)v2 + v5 + 56) = 0;
  v2[58] = v52;
  v2[59] = v53;
  v104 = v50;
  v105 = v91;
  LODWORD(v6) = sub_39754(v2, v50, (unsigned int)v91);
  return LODWORD(v6);
}

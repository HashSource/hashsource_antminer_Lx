int __fastcall receive(__int64 a1)
{
  int v1; // r1
  _DWORD *v2; // r9
  int v3; // r5
  int v4; // r8
  int v5; // r7
  int v6; // r2
  int v7; // r2
  int v8; // r3
  int v9; // r10
  int v10; // r9
  int v11; // r6
  int v12; // r2
  unsigned int *v13; // r1
  unsigned int v14; // r5
  int v15; // r7
  unsigned int v16; // r11
  int v17; // r7
  _BOOL4 v18; // r3
  _BOOL4 v19; // r2
  _BOOL4 v20; // r3
  __int16 v21; // r3
  unsigned int v22; // r2
  int v23; // r0
  char v24; // r1
  int v25; // r3
  unsigned int v26; // r3
  int v27; // r0
  unsigned int v28; // r3
  unsigned int v29; // r12
  unsigned int v30; // r2
  int v31; // r3
  int v32; // r7
  _BOOL4 v33; // r1
  _BOOL4 v34; // r2
  unsigned int v35; // r10
  int v36; // r3
  bool v37; // zf
  int v38; // r4
  const char *v39; // r5
  const char *v40; // r0
  bool v41; // cc
  int v42; // r2
  int v43; // r2
  int v44; // r3
  int v45; // r3
  int v46; // r3
  int v47; // r7
  int v49; // r2
  bool v50; // zf
  int v51; // r1
  unsigned int v52; // r3
  unsigned int v53; // r3
  int v54; // r1
  _BOOL4 v55; // r6
  const char *v56; // r0
  int v57; // r3
  int v58; // r1
  unsigned int v59; // r3
  int v60; // r3
  int v61; // r12
  _DWORD *v62; // r5
  const char *v63; // r0
  unsigned __int64 v64; // r0
  const char *v65; // r0
  const char *v66; // r0
  _BOOL4 v67; // r3
  int v68; // r3
  int v69; // r2
  _DWORD *v70; // r8
  int v71; // r3
  int v72; // r2
  _DWORD *v73; // r5
  int v74; // r2
  int v75; // r1
  int v76; // lr
  int v77; // r1
  unsigned int v78; // r3
  int v79; // r3
  unsigned int v80; // r0
  int i; // r10
  int v82; // r2
  const char *v83; // r0
  int v84; // r2
  unsigned int v85; // r1
  unsigned int v86; // r2
  unsigned int v87; // r3
  unsigned int v88; // r2
  int v89; // r3
  int v90; // r3
  const char *v91; // r0
  unsigned __int64 v92; // kr00_8
  const char *v93; // r0
  int v94; // r3
  const char *v95; // r0
  const char *v96; // r0
  int v97; // r3
  int v98; // r7
  int v100; // r2
  int v101; // r12
  int v102; // r6
  int v103; // r12
  _BOOL4 v104; // r2
  unsigned int v105; // r6
  const char *v106; // r0
  const char *v107; // r0
  unsigned int v108; // r2
  const char *v109; // r0
  unsigned int v110; // r2
  int v111; // r3
  const char *v112; // r0
  bool v113; // zf
  int v114; // r3
  int v115; // r1
  const char *v116; // r0
  unsigned int v117; // r12
  unsigned int v118; // r2
  int v119; // r3
  unsigned int v120; // r8
  const char *v121; // r0
  __int64 v122; // r2
  const char *v123; // r0
  __int64 v124; // r2
  int v125; // r3
  const char *v126; // r0
  const char *v127; // r0
  bool v128; // zf
  int v129; // r2
  int v130; // r3
  _BOOL4 v131; // r8
  int v132; // r12
  int v134; // [sp+30h] [bp-16Ch]
  unsigned int v135; // [sp+34h] [bp-168h]
  __int16 v136; // [sp+34h] [bp-168h]
  int v137; // [sp+38h] [bp-164h]
  unsigned int v138; // [sp+38h] [bp-164h]
  int v139; // [sp+3Ch] [bp-160h]
  __int16 v140; // [sp+40h] [bp-15Ch]
  int v141; // [sp+44h] [bp-158h]
  int v142; // [sp+44h] [bp-158h]
  int v143; // [sp+44h] [bp-158h]
  char *s; // [sp+48h] [bp-154h]
  _BOOL4 v145; // [sp+4Ch] [bp-150h]
  unsigned int v146; // [sp+4Ch] [bp-150h]
  unsigned __int8 *v147; // [sp+50h] [bp-14Ch]
  _DWORD *v148; // [sp+54h] [bp-148h]
  const char *v149; // [sp+54h] [bp-148h]
  unsigned int v150; // [sp+54h] [bp-148h]
  int v151; // [sp+54h] [bp-148h]
  unsigned int v152; // [sp+58h] [bp-144h]
  int v153; // [sp+5Ch] [bp-140h]
  int v154; // [sp+5Ch] [bp-140h]
  int v155; // [sp+5Ch] [bp-140h]
  int v156; // [sp+60h] [bp-13Ch]
  const char *v157; // [sp+60h] [bp-13Ch]
  int v158; // [sp+64h] [bp-138h]
  unsigned int v159; // [sp+68h] [bp-134h]
  unsigned int v160; // [sp+68h] [bp-134h]
  int v161; // [sp+6Ch] [bp-130h]
  unsigned __int16 v162; // [sp+70h] [bp-12Ch] BYREF
  __int16 v163; // [sp+72h] [bp-12Ah]
  int v164; // [sp+74h] [bp-128h] BYREF
  unsigned __int64 v165; // [sp+78h] [bp-124h] BYREF
  unsigned __int64 v166; // [sp+80h] [bp-11Ch] BYREF
  unsigned __int64 v167; // [sp+88h] [bp-114h] BYREF
  char v168[268]; // [sp+90h] [bp-10Ch] BYREF

  v164 = 0;
  v1 = *(unsigned __int16 *)(a1 + 6);
  ++sys_received;
  if ( !v1 )
    goto LABEL_2;
  v2 = (_DWORD *)(a1 + 4);
  v3 = a1;
  LODWORD(a1) = sub_3FDAC(a1 + 4, &v162);
  v4 = *(unsigned __int8 *)(v3 + 89);
  v5 = v162;
  if ( !*(_BYTE *)(v3 + 89) )
    v4 = 16;
  if ( (v162 & 1) != 0 )
    goto LABEL_54;
  v135 = *(unsigned __int8 *)(v3 + 88);
  v134 = v135 & 7;
  if ( v134 == 7 )
  {
    if ( ntp_mode7 && (v162 & 0x80) == 0 )
    {
      LODWORD(a1) = sub_3F220(v3, ((v162 ^ 0x100u) >> 8) & 1);
      return a1;
    }
    goto LABEL_54;
  }
  if ( v134 == 6 )
  {
    if ( (v162 & 0x80) == 0 )
    {
      LODWORD(a1) = sub_22EB0(v3, v162);
      return a1;
    }
    goto LABEL_54;
  }
  if ( (v162 & 2) != 0
    || (v162 & 0x2000) != 0 && (LODWORD(a1) = sub_686F8(a1, HIDWORD(a1)), (double)(int)a1 / 2147483650.0 < 0.1) )
  {
LABEL_54:
    ++sys_restricted;
    return a1;
  }
  v141 = (v135 >> 3) & 7;
  if ( v141 == 4 )
  {
    ++sys_newversion;
    if ( (v135 & 7) == 0 )
      goto LABEL_2;
  }
  else
  {
    v6 = (v135 >> 3) & 7;
    if ( v141 )
      v6 = 1;
    if ( (v6 & ((v5 ^ 8u) >> 3)) == 0 )
      goto LABEL_2;
    ++sys_oldversion;
    if ( (v135 & 7) == 0 )
    {
      if ( v141 != 1 )
        goto LABEL_2;
      v134 = 3;
    }
  }
  v147 = (unsigned __int8 *)(v3 + 88);
  v7 = *(_DWORD *)(v3 + 84) - 48;
  v139 = v7;
  v137 = *(_DWORD *)(v3 + 84);
  if ( v7 <= 0 )
  {
    v9 = 48;
    v149 = 0;
    v159 = 0;
LABEL_66:
    if ( !v139 )
    {
      if ( (v5 & 4) == 0 )
      {
        v138 = 0;
        v20 = 1;
        goto LABEL_69;
      }
      goto LABEL_54;
    }
LABEL_2:
    ++sys_badlength;
    return a1;
  }
  v8 = v7 & 3;
  if ( (v7 & 3) != 0 )
    v8 = 1;
  if ( v7 <= 3 )
    v8 |= 1u;
  if ( v8 )
    goto LABEL_2;
  if ( v7 <= 24 )
  {
    v149 = 0;
    v26 = 48;
    v159 = 0;
    v9 = 48;
    goto LABEL_79;
  }
  a1 = 0x3FFF000002010000LL;
  v148 = v2;
  v9 = 48;
  v10 = v3 + 88;
  v11 = *(_DWORD *)(v3 + 84) - 48;
  v153 = v5;
  v156 = v3;
  do
  {
    v13 = (unsigned int *)(v10 + 4 * (v9 / 4));
    v14 = bswap32(*v13);
    v15 = v14 & 3;
    if ( (v14 & 3) != 0 )
      v15 = 1;
    if ( (unsigned __int16)v14 <= 3u )
      v15 |= 1u;
    if ( v15 )
      goto LABEL_2;
    v9 += (unsigned __int16)v14;
    if ( v137 < v9 )
      goto LABEL_2;
    LODWORD(a1) = 33619968;
    if ( (v14 & 0x3FFF0000) == 0x2010000 && sys_groupname )
    {
      v16 = bswap32(v13[4]);
      if ( v16 > 0x100 || (unsigned int)(unsigned __int16)v14 - 20 < v16 )
        goto LABEL_2;
      _memcpy_chk(v168, v13 + 5);
      v168[v16] = 0;
      LODWORD(a1) = strchr(v168, 64);
      if ( !(_DWORD)a1 )
        goto LABEL_103;
      v8 = a1 + 1;
    }
    v11 -= (unsigned __int16)v14;
    if ( v11 <= 0 )
    {
      v139 = v11;
      v159 = v14;
      v5 = v153;
      v3 = v156;
      v2 = v148;
      v149 = (const char *)v8;
      goto LABEL_66;
    }
    v12 = v11 & 3;
    if ( (v11 & 3) != 0 )
      v12 = 1;
    if ( v11 <= 3 )
      v12 |= 1u;
    if ( v12 )
      goto LABEL_2;
  }
  while ( v11 > 24 );
  v2 = v148;
  v139 = v11;
  v149 = (const char *)v8;
  v25 = v9 + 3;
  v159 = v14;
  if ( v9 >= 0 )
    v25 = v9;
  v26 = v25 & 0xFFFFFFFC;
  v5 = v153;
  v3 = v156;
LABEL_79:
  v138 = bswap32(*(_DWORD *)&v147[v26]);
  v20 = v139 == 0;
LABEL_69:
  v145 = v20;
  LODWORD(a1) = sub_30CE4(v3, v5);
  v140 = a1;
  s = (char *)(a1 & 0x40);
  if ( (a1 & 0x40) != 0 )
  {
    ++sys_limitrejected;
    if ( (a1 & 0x800) != 0 && (unsigned int)(v134 - 4) > 1 )
    {
      v21 = a1;
      if ( v134 == 3 )
      {
        v22 = v138;
        v23 = v3;
        v24 = 4;
      }
      else
      {
        v23 = v3;
        v22 = v138;
        v24 = 1;
      }
      LODWORD(a1) = sub_C170(v23, v24, v22, v21);
    }
    return a1;
  }
  v152 = v145;
  v27 = sub_329A4(v3, v134, &v164);
  v28 = *(_DWORD *)(v3 + 128);
  v165 = _byteswap_uint64(__PAIR64__(*(_DWORD *)(v3 + 112), *(_DWORD *)(v3 + 116)));
  v29 = bswap32(v28);
  v30 = bswap32(*(_DWORD *)(v3 + 132));
  v31 = *(_DWORD *)(v3 + 60);
  v166 = _byteswap_uint64(__PAIR64__(*(_DWORD *)(v3 + 120), *(_DWORD *)(v3 + 124)));
  v146 = v31 + 24;
  v167 = __PAIR64__(v30, v29);
  v32 = v27;
  v157 = (const char *)sub_64264(v134);
  sub_334E4(v164);
  LODWORD(a1) = sub_333EC((int *)v32, (_DWORD *)v3, v134);
  v158 = a1;
  if ( (_DWORD)a1 == 1 )
  {
    sub_25C8C((__int16 *)&dword_8C, v32, "Invalid_NAK");
    if ( v32 )
      ++*(_DWORD *)(v32 + 756);
    v38 = current_time;
    v39 = (const char *)sub_6BF44(v146);
    v40 = (const char *)sub_6BF44(v2);
    LODWORD(a1) = sub_64A18(3, "Invalid-NAK error at %ld %s<-%s", v38, v39, v40);
    return a1;
  }
  if ( v152 )
  {
    v35 = 0;
    v152 = 0;
    goto LABEL_95;
  }
  if ( (_DWORD)a1 == 2 )
  {
    v35 = 3;
    s = 0;
    goto LABEL_95;
  }
  v33 = v138 >= 0x10000;
  if ( !crypto_flags )
    v33 = 0;
  if ( !v33 )
  {
    s = 0;
    goto LABEL_88;
  }
  if ( v139 <= 19 )
  {
LABEL_162:
    ++sys_badauth;
    return a1;
  }
  if ( v134 == 5 )
  {
    v43 = *(_DWORD *)(v3 + 60);
    if ( *(_WORD *)(v3 + 4) == 2 )
      v44 = any_interface;
    else
      v44 = any6_interface;
    if ( v43 == v44 )
      goto LABEL_54;
    if ( *(_WORD *)(v43 + 80) == 2 )
    {
      v46 = *(_DWORD *)(v43 + 84) != 0;
    }
    else
    {
      if ( *(_DWORD *)(v43 + 88) )
      {
        v45 = 0;
      }
      else
      {
        v45 = *(_DWORD *)(v43 + 92);
        if ( v45 )
        {
          v45 = *(_DWORD *)(v43 + 88);
        }
        else if ( !*(_DWORD *)(v43 + 96) )
        {
          v45 = *(_DWORD *)(v43 + 100) == 0;
        }
      }
      v46 = v45 ^ 1;
    }
    if ( v46 )
      v146 = v43 + 80;
    s = 0;
LABEL_135:
    v42 = 2;
    goto LABEL_120;
  }
  if ( v32 )
    s = *(char **)(v32 + 168);
  else
    s = (char *)sub_2706C(v2, v146, 0, sys_private, 0);
  v41 = (int)s <= 0;
  if ( s )
    v41 = v9 <= 48;
  if ( v41 )
    goto LABEL_135;
  sub_2706C(v2, v146, v138, 0, 2);
  v42 = 0;
LABEL_120:
  v152 = sub_2706C(v2, v146, v138, (unsigned int)s, v42);
LABEL_88:
  LODWORD(a1) = sub_62494(v138, v147, v9, v139);
  v34 = v138 >= 0x10000;
  if ( (_DWORD)a1 )
    v35 = 1;
  else
    v35 = 2;
  if ( !crypto_flags )
    v34 = 0;
  if ( v34 )
    LODWORD(a1) = sub_61DF8(v138, 0);
LABEL_95:
  if ( v32 )
  {
    v36 = *(_DWORD *)(v32 + 124);
    if ( v36 )
    {
      if ( v36 != v138 )
        goto LABEL_54;
      v37 = v35 == 1;
      if ( v35 != 1 )
        v37 = v139 == 0;
      if ( !v37 )
        goto LABEL_54;
    }
  }
  v161 = v164;
  v154 = v135 >> 6;
  v136 = v140 & 0xE7FF;
  switch ( v164 )
  {
    case 1:
      LODWORD(a1) = sub_C534(v149, *(const char **)(v32 + 80));
      v143 = a1;
      if ( (_DWORD)a1 )
        goto LABEL_103;
      if ( v134 != 5 )
        goto LABEL_159;
      v105 = *(unsigned __int8 *)(v3 + 90);
      if ( v105 != *(unsigned __int8 *)(v32 + 94) )
      {
        v106 = (const char *)sub_6BF44(v2);
        sub_64A18(
          6,
          "receive: broadcast poll from %s changed from %u to %u",
          v106,
          *(unsigned __int8 *)(v32 + 94),
          *(unsigned __int8 *)(v3 + 90));
        v105 = *(unsigned __int8 *)(v3 + 90);
      }
      if ( *(unsigned __int8 *)(v32 + 65) > v105 || *(unsigned __int8 *)(v32 + 66) < v105 )
      {
        v143 = v161;
        v107 = (const char *)sub_6BF44(v2);
        sub_64A18(
          6,
          "receive: broadcast poll of %u from %s is out-of-range (%d to %d)!",
          v105,
          v107,
          *(unsigned __int8 *)(v32 + 65),
          *(unsigned __int8 *)(v32 + 66));
        LOBYTE(v105) = *(_BYTE *)(v3 + 90);
      }
      v108 = 1 << v105;
      if ( (*(_DWORD *)(v32 + 68) & 0x10) != 0 )
        v108 -= 3;
      if ( current_time - *(_DWORD *)(v32 + 732) < v108 )
      {
        v150 = v108;
        ++v143;
        v109 = (const char *)sub_6BF44(v2);
        sub_64A18(
          6,
          "receive: broadcast packet from %s arrived after %lu, not %lu seconds!",
          v109,
          current_time - *(_DWORD *)(v32 + 732),
          v150);
      }
      a1 = *(_QWORD *)(v32 + 600);
      if ( sys_bcpollbstep )
        v110 = *(unsigned __int8 *)(v3 + 90);
      else
        v110 = 0;
      if ( sys_bcpollbstep )
        v110 = ((unsigned __int8)sys_bcpollbstep << v110) + 2;
      if ( !a1 )
        goto LABEL_332;
      v111 = v167 - a1;
      if ( HIDWORD(v167) < HIDWORD(a1) )
        --v111;
      if ( v111 < 0 && current_time - *(_DWORD *)(v32 + 732) < v110 )
      {
        v112 = (const char *)sub_6BF44(v2);
        LODWORD(a1) = sub_64A18(
                        6,
                        "receive: broadcast packet from %s contains non-monotonic timestamp: %#010x.%08x -> %#010x.%08x",
                        v112,
                        *(_DWORD *)(v32 + 600),
                        *(_DWORD *)(v32 + 604),
                        (_DWORD)v167,
                        HIDWORD(v167));
      }
      else
      {
LABEL_332:
        if ( !v143 )
          goto LABEL_159;
      }
      *(_DWORD *)(v32 + 728) = current_time;
      ++sys_declined;
      return a1;
    case 3:
      v102 = *(_DWORD *)(v3 + 60);
      if ( (*(_DWORD *)(v102 + 144) & 0x40) == 0 )
      {
        v103 = *(unsigned __int8 *)(v3 + 89);
        if ( !*(_BYTE *)(v3 + 89) )
          v103 = 16;
        LODWORD(a1) = sub_41E50(
                        v2,
                        v102 + 24,
                        &v165,
                        &v166,
                        &v167,
                        v3 + 72,
                        *(unsigned __int8 *)(v3 + 88) >> 6,
                        (*(unsigned __int8 *)(v3 + 88) >> 3) & 7,
                        *(_BYTE *)(v3 + 88) & 7,
                        v103,
                        *(unsigned __int8 *)(v3 + 90),
                        *(char *)(v3 + 91),
                        *(_DWORD *)(v3 + 100),
                        *(_DWORD *)(v3 + 84) - 48,
                        v3 + 136);
        if ( (v140 & 4) != 0 )
          v104 = v35 == 1;
        else
          v104 = v35 <= 1;
        if ( !v104 )
        {
          if ( v35 != 2 )
            goto LABEL_54;
          LODWORD(a1) = sub_C170(v3, 4, 0, v136);
          goto LABEL_162;
        }
LABEL_385:
        LODWORD(a1) = sub_C170(v3, 4, v138, v136);
        return a1;
      }
      if ( !sys_manycastserver )
        goto LABEL_54;
      LODWORD(a1) = sub_C534(v149, 0);
      if ( (_DWORD)a1
        || sys_leap == 3
        || (unsigned __int8)sys_stratum >= (unsigned int)v4
        || !sys_cohort && (unsigned __int8)sys_stratum == v4 + 1
        || *(_DWORD *)(v102 + 152) == *(_DWORD *)(v3 + 100) )
      {
LABEL_103:
        ++sys_declined;
        return a1;
      }
      if ( (v140 & 4) != 0 )
        v131 = v35 == 1;
      else
        v131 = v35 <= 1;
      if ( v131 )
      {
        v132 = *(unsigned __int8 *)(v3 + 89);
        if ( !*(_BYTE *)(v3 + 89) )
          v132 = 16;
        sub_41E50(
          v2,
          v102 + 24,
          &v165,
          &v166,
          &v167,
          v3 + 72,
          *(unsigned __int8 *)(v3 + 88) >> 6,
          (*(unsigned __int8 *)(v3 + 88) >> 3) & 7,
          *(_BYTE *)(v3 + 88) & 7,
          v132,
          *(unsigned __int8 *)(v3 + 90),
          *(char *)(v3 + 91),
          *(_DWORD *)(v3 + 100),
          *(_DWORD *)(v3 + 84) - 48,
          v3 + 136);
        goto LABEL_385;
      }
      return a1;
    case 4:
      LODWORD(a1) = sub_C534(v149, 0);
      if ( (_DWORD)a1 )
        goto LABEL_103;
      LODWORD(a1) = sub_32910(v3);
      v47 = a1;
      if ( !(_DWORD)a1 )
        goto LABEL_54;
      if ( (*(_BYTE *)(a1 + 72) & 8) == 0 && sys_authenticate || (v140 & 0x14) != 0 ? v35 != 1 : v35 > 1 )
        goto LABEL_54;
      if ( v154 == 3 )
        goto LABEL_103;
      if ( v4 < sys_floor )
        goto LABEL_103;
      if ( v4 >= sys_ceiling )
        goto LABEL_103;
      LODWORD(a1) = sub_31ED8(
                      (int)v2,
                      0,
                      *(char **)(v3 + 60),
                      v163,
                      3u,
                      v141,
                      *(_BYTE *)(a1 + 65),
                      *(_BYTE *)(a1 + 66),
                      *(_DWORD *)(a1 + 68) & 0x100 | 2,
                      0x41u,
                      0,
                      v138,
                      sys_ident);
      if ( !(_DWORD)a1 )
        goto LABEL_103;
      if ( (*(_BYTE *)(v47 + 72) & 8) != 0 )
        *(_DWORD *)(v47 + 720) = current_time + 1;
      return a1;
    case 5:
      v17 = sys_ident;
      LODWORD(a1) = sub_C534(v149, (const char *)sys_ident);
      if ( (_DWORD)a1 )
        goto LABEL_103;
      if ( v140 & 0x14 | sys_authenticate )
        v18 = v35 != 1;
      else
        v18 = v35 > 1;
      if ( v18 )
      {
        if ( (v140 & 4) != 0 )
          v19 = v35 == 1;
        else
          v19 = v35 <= 1;
        if ( v19 )
        {
          LODWORD(a1) = sub_C170(v3, 2, v138, v136);
          return a1;
        }
        if ( v35 != 2 )
          goto LABEL_103;
        LODWORD(a1) = sub_C170(v3, 2, 0, v136);
        goto LABEL_54;
      }
      if ( (v140 & 0x20) != 0 || v154 != 3 && (v4 < sys_floor || v4 >= sys_ceiling) )
        goto LABEL_103;
      LODWORD(a1) = sub_31ED8(
                      (int)v2,
                      0,
                      *(char **)(v3 + 60),
                      v163,
                      2u,
                      v141,
                      *(_BYTE *)(v3 + 90),
                      0xAu,
                      0,
                      1u,
                      0,
                      v138,
                      v17);
      v32 = a1;
      if ( !(_DWORD)a1 )
        goto LABEL_103;
      goto LABEL_159;
    case 6:
      v98 = sys_ident;
      LODWORD(a1) = sub_C534(v149, (const char *)sys_ident);
      if ( (_DWORD)a1 )
        goto LABEL_103;
      if ( !sys_bclient )
        goto LABEL_54;
      if ( v140 & 0x14 | sys_authenticate ? v35 != 1 : v35 > 1 )
        goto LABEL_54;
      if ( v154 == 3 || v4 < sys_floor || v4 >= sys_ceiling )
        goto LABEL_103;
      LODWORD(a1) = v138 >= 0x10000;
      if ( !crypto_flags )
        LODWORD(a1) = 0;
      if ( (_DWORD)a1 && HIWORD(v159) << 16 != -2113863680 )
        goto LABEL_103;
      v100 = *(_DWORD *)(v3 + 60);
      if ( (*(_DWORD *)(v100 + 144) & 0x40) != 0 )
        v100 = 0;
      if ( sys_bdelay <= 0.0 )
      {
        LODWORD(a1) = sub_31ED8(
                        (int)v2,
                        0,
                        (char *)v100,
                        v163,
                        3u,
                        v141,
                        *(_BYTE *)(v3 + 90),
                        *(_BYTE *)(v3 + 90),
                        274,
                        0x20u,
                        0,
                        v138,
                        v98);
        v101 = a1;
        if ( !(_DWORD)a1 )
          goto LABEL_54;
        LODWORD(a1) = v167;
        *(_QWORD *)(v101 + 600) = v167;
        if ( v138 >= 0x10000 )
          LODWORD(a1) = sub_28028(v101, v3);
        return a1;
      }
      if ( (_DWORD)a1 )
        goto LABEL_54;
      LODWORD(a1) = sub_31ED8(
                      (int)v2,
                      0,
                      (char *)v100,
                      v163,
                      6u,
                      v141,
                      *(_BYTE *)(v3 + 90),
                      *(_BYTE *)(v3 + 90),
                      2,
                      0x20u,
                      0,
                      v138,
                      v98);
      v32 = a1;
      if ( !(_DWORD)a1 )
        goto LABEL_54;
      a1 = v167;
      *(double *)(v32 + 616) = sys_bdelay;
      *(_QWORD *)(v32 + 600) = a1;
LABEL_159:
      v49 = *(_DWORD *)(v32 + 68);
      if ( v35 != 3 )
      {
        if ( (v49 & 0x800) != 0 )
        {
          if ( v138 < 0x10000 )
            goto LABEL_162;
        }
        else if ( v138 >= 0x10000 )
        {
          goto LABEL_162;
        }
      }
      v50 = (*(_DWORD *)(v32 + 68) & 0x4000) == 0;
      v51 = *(_DWORD *)(v32 + 744);
      if ( (v49 & 0x4000) != 0 )
        v49 &= ~0x4000u;
      v52 = *(_DWORD *)(v32 + 300) & 0xFFFFFE03;
      if ( (*(_DWORD *)(v32 + 68) & 0x4000) != 0 )
        *(_DWORD *)(v32 + 68) = v49;
      v53 = v52 & 0xFFFFFFFC;
      v54 = v51 + 1;
      *(_DWORD *)(v32 + 300) = v53;
      if ( !v50 )
        v53 |= 4u;
      *(_DWORD *)(v32 + 744) = v54;
      if ( !v50 )
        *(_DWORD *)(v32 + 300) = v53;
      LODWORD(a1) = sub_3332C(v154, v4, v134, *(_DWORD *)(v3 + 100));
      v142 = a1;
      if ( v167 )
      {
        if ( v167 == *(_QWORD *)(v32 + 568) )
        {
          v97 = *(_DWORD *)(v32 + 764);
          *(_DWORD *)(v32 + 300) |= 1u;
          *(_DWORD *)(v32 + 764) = v97 + 1;
          return a1;
        }
        if ( v134 == 5 )
        {
          if ( (unsigned int)v4 > 0xF )
          {
            v96 = (const char *)sub_6BF44(v32 + 16);
            LODWORD(a1) = sub_64A18(6, "receive: Unexpected stratum (%d) in broadcast from %s", v4, v96);
            return a1;
          }
        }
        else
        {
          v92 = v165;
          if ( (_DWORD)a1 )
          {
            if ( !v165 || !v166 )
            {
              ++*(_DWORD *)(v32 + 760);
              v93 = (const char *)sub_6BF44(v32 + 16);
              LODWORD(a1) = sub_64A18(6, "receive: KoD packet from %s has a zero org or rec timestamp.  Ignoring.", v93);
              return a1;
            }
            v113 = (_DWORD)v167 == (_DWORD)v165;
            if ( (_DWORD)v167 == (_DWORD)v165 )
              v113 = HIDWORD(v167) == HIDWORD(v165);
            v114 = !v113;
            if ( (_DWORD)v167 != (_DWORD)v166 )
              v114 |= 1u;
            if ( HIDWORD(v167) == HIDWORD(v166) )
              v115 = v114;
            else
              v115 = v114 | 1;
            if ( v115 )
            {
              ++*(_DWORD *)(v32 + 760);
              v116 = (const char *)sub_6BF44(v32 + 16);
              LODWORD(a1) = sub_64A18(
                              6,
                              "receive: KoD packet from %s has inconsistent xmt/org/rec timestamps.  Ignoring.",
                              v116);
              return a1;
            }
            v125 = *(_DWORD *)(v32 + 316);
            if ( v125 )
            {
              if ( v125 == 1 && *(_QWORD *)(v32 + 592) != v165 )
              {
                ++*(_DWORD *)(v32 + 760);
                v127 = (const char *)sub_6BF44(v32 + 16);
                LODWORD(a1) = sub_64A18(
                                6,
                                "receive: flip 1 KoD origin timestamp %#010x.%08x from %s does not match interleave %#010"
                                "x.%08x - ignoring.",
                                (_DWORD)v92,
                                HIDWORD(v92),
                                v127,
                                *(_DWORD *)(v32 + 592),
                                *(_DWORD *)(v32 + 596));
                return a1;
              }
            }
            else if ( *(_QWORD *)(v32 + 584) != v165 )
            {
              ++*(_DWORD *)(v32 + 760);
              v126 = (const char *)sub_6BF44(v32 + 16);
              LODWORD(a1) = sub_64A18(
                              6,
                              "receive: flip 0 KoD origin timestamp %#010x.%08x from %s does not match %#010x.%08x - ignoring.",
                              (_DWORD)v92,
                              HIDWORD(v92),
                              v126,
                              *(_DWORD *)(v32 + 584),
                              *(_DWORD *)(v32 + 588));
              return a1;
            }
          }
          else if ( *(_DWORD *)(v32 + 316) )
          {
            if ( v165 && v166 && (HIDWORD(v124) = *(_DWORD *)(v32 + 576), LODWORD(v124) = *(_DWORD *)(v32 + 580), v124) )
            {
              v128 = HIDWORD(v124) == (_DWORD)v165;
              if ( HIDWORD(v124) == (_DWORD)v165 )
                v128 = (_DWORD)v124 == HIDWORD(v165);
              if ( !v128 )
              {
                v129 = *(_DWORD *)(v32 + 300);
                v130 = *(_DWORD *)(v32 + 68) | 0x4000;
                ++*(_DWORD *)(v32 + 760);
                *(_DWORD *)(v32 + 68) = v130;
                *(_DWORD *)(v32 + 300) = v129 | 2;
              }
            }
            else
            {
              *(_DWORD *)(v32 + 300) |= 4u;
            }
          }
          else if ( v165 )
          {
            v151 = *(_DWORD *)(v32 + 584);
            v155 = *(_DWORD *)(v32 + 588);
            if ( *(_QWORD *)(v32 + 584) == v165 )
            {
              *(_DWORD *)(v32 + 588) = 0;
              *(_DWORD *)(v32 + 584) = 0;
            }
            else
            {
              v117 = *(_DWORD *)(v3 + 116);
              v118 = *(_DWORD *)(v3 + 112);
              v119 = *(_DWORD *)(v32 + 300) | 2;
              ++*(_DWORD *)(v32 + 760);
              *(_DWORD *)(v32 + 300) = v119;
              v120 = bswap32(v117);
              v160 = bswap32(v118);
              v121 = (const char *)sub_6BF44(v32 + 16);
              sub_64A18(
                6,
                "receive: Unexpected origin timestamp %#010x.%08x does not match aorg %#010x.%08x from %s@%s xmt %#010x.%08x",
                v160,
                v120,
                v151,
                v155,
                v157,
                v121,
                bswap32(*(_DWORD *)(v3 + 128)),
                bswap32(*(_DWORD *)(v3 + 132)));
              v122 = *(_QWORD *)(v32 + 576);
              if ( v122 && v122 == v165 )
              {
                if ( dynamic_interleave )
                {
                  *(_DWORD *)(v32 + 316) = 1;
                  sub_25C8C((_WORD *)&dword_8C + 1, v32, 0);
                }
                else
                {
                  v123 = (const char *)sub_6BF44(v32 + 16);
                  sub_64A18(6, "receive: Dynamic interleave from %s@%s denied", v157, v123);
                }
              }
            }
          }
          else
          {
            v94 = *(_DWORD *)(v32 + 300);
            ++*(_DWORD *)(v32 + 760);
            *(_DWORD *)(v32 + 300) = v94 | 2;
            v95 = (const char *)sub_6BF44(v32 + 16);
            sub_64A18(
              6,
              "receive: %s 0 origin timestamp from %s@%s xmt %#010x.%08x",
              "Drop",
              v157,
              v95,
              bswap32(*(_DWORD *)(v3 + 128)),
              bswap32(*(_DWORD *)(v3 + 132)));
          }
        }
      }
      else
      {
        *(_DWORD *)(v32 + 300) |= 4u;
        if ( (_DWORD)a1 )
        {
          ++*(_DWORD *)(v32 + 760);
          v91 = (const char *)sub_6BF44(v32 + 16);
          LODWORD(a1) = sub_64A18(6, "receive: Unexpected zero transmit timestamp in KoD from %s", v91);
          return a1;
        }
      }
      if ( v158 == 2 )
      {
        LODWORD(a1) = sub_25C8C((__int16 *)&dword_8C, v32, "crypto_NAK");
        HIDWORD(a1) = *(_DWORD *)(v32 + 68);
        v90 = *(_DWORD *)(v32 + 752);
        *(_DWORD *)(v32 + 300) |= 0x10u;
        *(_DWORD *)(v32 + 752) = v90 + 1;
        if ( (a1 & 0x200000000LL) == 0 )
        {
          if ( !*(_DWORD *)(v32 + 136) )
            return a1;
          goto LABEL_203;
        }
        if ( !unpeer_crypto_nak_early )
          return a1;
LABEL_186:
        LODWORD(a1) = sub_31CC8(v32);
        return a1;
      }
      if ( v139 | *(_DWORD *)(v32 + 124) || (v140 & 4) != 0 )
        v55 = v35 != 1;
      else
        v55 = v35 > 1;
      if ( v55 )
      {
        if ( (*(_DWORD *)(v32 + 300) & 0x1FF) != 0 )
        {
          v56 = (const char *)sub_6BF44(v32 + 16);
          LODWORD(a1) = sub_64A18(6, "receive: Bad auth in packet with bad timestamps from %s denied - spoof?", v56);
          return a1;
        }
        LODWORD(a1) = sub_25C8C((__int16 *)&dword_8C, v32, "digest");
        v57 = *(_DWORD *)(v32 + 752);
        *(_DWORD *)(v32 + 300) |= 0x10u;
        *(_DWORD *)(v32 + 752) = v57 + 1;
        if ( v139 && (unsigned int)(v134 - 1) <= 1 )
          LODWORD(a1) = sub_C170(v3, 1, 0, v136);
        if ( (*(_DWORD *)(v32 + 68) & 2) != 0 )
        {
          if ( !unpeer_digest_early )
            return a1;
          goto LABEL_186;
        }
        if ( !peer_clear_digest_early || !*(_DWORD *)(v32 + 136) )
          return a1;
LABEL_203:
        LODWORD(a1) = sub_35EE4(v32, (int *)"AUTH");
        return a1;
      }
      if ( v134 != 5 )
      {
        if ( *(_DWORD *)(v32 + 316) )
          goto LABEL_191;
        *(_QWORD *)(v32 + 560) = v167;
        goto LABEL_190;
      }
      if ( (int)v35 > 1 )
      {
        v66 = (const char *)sub_6BF44(v32 + 16);
        sub_64A18(6, "receive: Bad broadcast auth (%d) from %s", v35, v66);
      }
      else
      {
        v60 = *(_DWORD *)(v32 + 68) & 0x2000;
        if ( v165 )
        {
          if ( !v60 )
          {
            v62 = (_DWORD *)(v3 + 72);
            v63 = (const char *)sub_6BF44(v32 + 16);
            sub_64A18(6, "receive: Broadcast server at %s is in interleave mode", v63);
            v64 = v167;
            *(_DWORD *)(v32 + 68) |= 0x2000u;
            *(_QWORD *)(v32 + 584) = v64;
            HIDWORD(v64) = v62[1];
            *(_DWORD *)(v32 + 592) = *v62;
            *(_DWORD *)(v32 + 596) = HIDWORD(v64);
            LODWORD(a1) = sub_25C8C((_WORD *)&dword_8C + 1, v32, 0);
            return a1;
          }
        }
        else if ( v60 )
        {
          v65 = (const char *)sub_6BF44(v32 + 16);
          sub_64A18(6, "receive: Broadcast server at %s is no longer in interleave mode", v65);
          *(_DWORD *)(v32 + 68) &= ~0x2000u;
        }
      }
      v61 = *(_DWORD *)(v32 + 316);
      *(_QWORD *)(v32 + 600) = v167;
      if ( !v61 )
      {
LABEL_190:
        v58 = *(_DWORD *)(v3 + 76);
        *(_DWORD *)(v32 + 576) = *(_DWORD *)(v3 + 72);
        *(_DWORD *)(v32 + 580) = v58;
      }
LABEL_191:
      LODWORD(a1) = v167;
      *(_QWORD *)(v32 + 568) = v167;
      v59 = *(unsigned __int8 *)(v3 + 90);
      if ( v59 < *(unsigned __int8 *)(v32 + 65) )
        LOBYTE(v59) = *(_BYTE *)(v32 + 65);
      *(_BYTE *)(v32 + 94) = v59;
      if ( v142 == 1 )
      {
        ++*(_DWORD *)(v32 + 772);
        sub_25C8C((__int16 *)((char *)&dword_84 + 3), v32, 0);
        v85 = *(unsigned __int8 *)(v3 + 90);
        v86 = *(unsigned __int8 *)(v32 + 65);
        if ( v86 < v85 )
        {
          LOBYTE(v86) = *(_BYTE *)(v32 + 94);
          *(_BYTE *)(v32 + 65) = v86;
        }
        *(_DWORD *)(v32 + 712) = 9 << v86;
        *(_DWORD *)(v32 + 312) = 0;
        *(_DWORD *)(v32 + 308) = 0;
        LODWORD(a1) = sub_33F78(v32, v85);
        return a1;
      }
      if ( v142 )
      {
        ++*(_DWORD *)(v32 + 772);
        return a1;
      }
      if ( ((1 << v134) & 0xC8) != 0 )
        goto LABEL_245;
      if ( ((1 << v134) & 0x36) != 0 )
      {
        v67 = v35 == 1;
        if ( !v138 )
          v67 = 0;
        if ( v67 )
        {
          if ( v138 < 0x10000 && !sub_61FE0(v138, v32 + 16) )
          {
            LODWORD(a1) = sub_25C8C((__int16 *)&dword_8C, v32, "authIP");
            ++*(_DWORD *)(v32 + 752);
            return a1;
          }
          v68 = *(_DWORD *)(v32 + 68);
          v69 = current_time;
          *(_DWORD *)(v32 + 732) = current_time;
          *(_DWORD *)(v32 + 728) = v69;
          goto LABEL_215;
        }
      }
      else
      {
        v83 = (const char *)sub_6BF44(v32 + 16);
        sub_64A18(6, "receive: Unexpected mode (%d) in packet from %s", v134, v83);
      }
LABEL_245:
      v68 = *(_DWORD *)(v32 + 68);
      if ( v35 != 1 )
      {
        v68 &= ~4u;
        *(_DWORD *)(v32 + 68) = v68;
      }
      v84 = current_time;
      *(_DWORD *)(v32 + 732) = current_time;
      *(_DWORD *)(v32 + 728) = v84;
      if ( v35 == 1 )
      {
LABEL_215:
        v68 |= 4u;
        *(_DWORD *)(v32 + 68) = v68;
      }
      if ( (v68 & 0x800) != 0 )
      {
        v70 = *(_DWORD **)(v32 + 220);
        if ( v70 )
        {
          v71 = v70[1];
          if ( v71 > 0 )
            v70[1] = v71 - 1;
        }
        *(_DWORD *)(v32 + 300) |= 0x80u;
        LODWORD(a1) = sub_28028(v32, v3);
        if ( (_DWORD)a1 != 256 )
        {
          if ( (_DWORD)a1 != 271 )
            return a1;
          sub_25C8C((__int16 *)((char *)&dword_84 + 1), v32, "crypto error");
          LODWORD(a1) = sub_35EE4(v32, (int *)"CRYP");
          v72 = *(_DWORD *)(v32 + 68);
          *(_DWORD *)(v32 + 300) |= 0x100u;
          if ( (v72 & 2) == 0 || !unpeer_crypto_early )
            return a1;
          goto LABEL_186;
        }
        *(_DWORD *)(v32 + 708) = 0;
        if ( v134 == 4 )
        {
          if ( *(_DWORD *)(v32 + 124) == v138 )
            *(_DWORD *)(v32 + 300) &= ~0x80u;
        }
        else if ( (*(_DWORD *)(v32 + 300) & 0x80) != 0 )
        {
          if ( v70 )
          {
            v80 = v152;
            for ( i = 0; ; ++i )
            {
              v82 = v70[1];
              if ( *(_DWORD *)(v32 + 160) == v80 || *v70 == v80 )
                break;
              if ( i > v82 )
              {
                v87 = *(_DWORD *)(v32 + 300);
                *(_DWORD *)(v32 + 136) &= ~0x1000u;
                goto LABEL_253;
              }
              v80 = sub_2706C(v2, v146, v80, (unsigned int)s, 0);
            }
            v89 = *(_DWORD *)(v32 + 300);
            *(_DWORD *)(v32 + 160) = v138;
            v87 = v89 & 0xFFFFFF7F;
            *(_DWORD *)(v32 + 300) = v87;
            v70[1] = v82 - i;
LABEL_253:
            if ( (v87 & 0x80) != 0 )
              sub_25C8C((__int16 *)&dword_8C, v32, "keylist");
          }
        }
        else
        {
          *(_DWORD *)(v32 + 160) = v138;
        }
        v88 = *(_DWORD *)(v32 + 236);
        if ( (*(_DWORD *)(v32 + 136) & 0x400) == 0 )
          *(_DWORD *)(v32 + 300) |= 0x80u;
        if ( v88 < current_time )
        {
          sub_25C8C((__int16 *)((char *)&dword_84 + 1), v32, "crypto refresh");
          LODWORD(a1) = sub_35EE4(v32, (int *)"TIME");
          return a1;
        }
      }
      LODWORD(a1) = sub_35694(v32, v147, *(_DWORD *)(v3 + 84));
      if ( *(_DWORD *)(v32 + 316) )
      {
        v73 = (_DWORD *)(v3 + 72);
        v74 = *(_DWORD *)(v32 + 720);
        v75 = HIDWORD(v166);
        v76 = current_time;
        *(_DWORD *)(v32 + 560) = v166;
        *(_DWORD *)(v32 + 564) = v75;
        v77 = v73[1];
        *(_DWORD *)(v32 + 576) = *v73;
        *(_DWORD *)(v32 + 580) = v77;
        LODWORD(a1) = *(unsigned __int8 *)(v32 + 94);
        HIDWORD(a1) = *(unsigned __int8 *)(v32 + 64);
        if ( (unsigned int)a1 >= HIDWORD(a1) )
          v78 = 1 << SBYTE4(a1);
        else
          v78 = 1 << a1;
        if ( v74 - v76 >= v78 >> 1 )
          v79 = v74 - 1;
        else
          v79 = v74 + 1;
        *(_DWORD *)(v32 + 720) = v79;
      }
      break;
    default:
      goto LABEL_103;
  }
  return a1;
}

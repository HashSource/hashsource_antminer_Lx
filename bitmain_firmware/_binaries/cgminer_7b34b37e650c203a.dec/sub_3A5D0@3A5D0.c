int __fastcall sub_3A5D0(int a1)
{
  _DWORD *v1; // r2
  int v2; // r1
  int v3; // r4
  size_t v4; // r5
  __int64 v6; // r2
  int v7; // r6
  int v8; // r12
  int v9; // r12
  int v10; // r12
  unsigned int v11; // r7
  size_t v12; // r5
  int v13; // r3
  unsigned __int8 *v14; // r10
  int v15; // r0
  unsigned int v16; // r11
  unsigned int v17; // r7
  unsigned __int8 *v18; // r4
  unsigned int v19; // r1
  unsigned int v20; // r3
  int v21; // r2
  unsigned int v22; // r1
  unsigned int v23; // r3
  int v24; // r2
  unsigned int v25; // r1
  unsigned int v26; // r3
  size_t v27; // r3
  int v28; // r2
  unsigned int v29; // r1
  unsigned int v30; // r0
  int v31; // r2
  unsigned int v32; // r3
  unsigned int v33; // r1
  unsigned int v34; // r2
  unsigned int v35; // r7
  _DWORD *v36; // r2
  int v37; // r4
  int v38; // r8
  int v39; // r4
  int v40; // r3
  int v41; // r3
  char *v42; // r0
  int v43; // r7
  int v44; // r4
  int v45; // r5
  int v46; // r3
  int v47; // r10
  int v48; // r9
  int v49; // r2
  int v50; // r12
  unsigned int v51; // lr
  int v52; // r3
  int v53; // r0
  int v54; // r1
  int v55; // r0
  int v56; // r8
  bool v57; // zf
  int v58; // r3
  bool v59; // zf
  bool v60; // zf
  int v61; // r11
  int v62; // r10
  int v63; // r1
  int v64; // r2
  int v65; // r0
  int v66; // r3
  int v67; // r4
  _DWORD *v68; // r2
  int v69; // r3
  int v70; // r2
  __int64 v71; // r2
  unsigned int v72; // r8
  unsigned int v73; // lr
  unsigned __int8 *v74; // r11
  int v75; // r3
  int v76; // r7
  int v77; // r4
  int v78; // r0
  unsigned __int8 *v79; // r10
  int v80; // r1
  unsigned int v81; // r2
  unsigned int v82; // r7
  int v83; // r3
  unsigned int v84; // r1
  unsigned int v85; // r2
  int v86; // r3
  unsigned int v87; // r1
  unsigned int v88; // r2
  int v89; // r1
  unsigned int v90; // r2
  size_t v91; // lr
  int v92; // r3
  unsigned int v93; // r2
  unsigned int v94; // r12
  int v95; // r3
  unsigned int v96; // r1
  unsigned int v97; // r2
  unsigned int v98; // r3
  unsigned int v99; // r4
  int v100; // r3
  int v101; // r8
  __int64 v102; // r2
  int v103; // r3
  int v104; // r1
  int *v105; // r2
  __int64 v106; // r2
  int v107; // r3
  int v108; // r0
  signed int v109; // r7
  char v110; // r1
  int v111; // r2
  __int64 v112; // r0
  double v113; // r0
  double v114; // d8
  int v115; // kr00_4
  struct tm *v116; // r0
  int v117; // r11
  char *v118; // r3
  int v119; // t1
  int v120; // r1
  const char *v121; // r2
  int v122; // r12
  char *v123; // r3
  _DWORD *v124; // r8
  int v125; // r3
  int v126; // r10
  int v127; // r3
  unsigned int v128; // r4
  _DWORD *v129; // r5
  _DWORD *v130; // r6
  int v131; // r4
  char *v132; // r9
  unsigned int v133; // r3
  int v134; // r2
  int v135; // r3
  _DWORD *v136; // r3
  unsigned int v137; // r2
  unsigned int v138; // r1
  bool v139; // cc
  int v140; // r2
  int v141; // r3
  int v142; // r4
  int *v143; // r0
  int v144; // r3
  int *v145; // r0
  int *v146; // r0
  const char *v147; // lr
  int v148; // r3
  int v149; // r12
  int *v150; // r0
  int *v151; // r0
  int *v152; // r0
  int *v153; // r0
  char *v154; // r3
  void *v155; // r0
  void **v156; // r9
  void *v157; // r0
  int *v158; // r0
  int *v159; // r0
  int v160; // r3
  _DWORD *v161; // [sp+10h] [bp-88Ch]
  int v162; // [sp+14h] [bp-888h]
  int v163; // [sp+1Ch] [bp-880h]
  size_t v164; // [sp+24h] [bp-878h]
  unsigned int v165; // [sp+24h] [bp-878h]
  char *v166; // [sp+2Ch] [bp-870h]
  char *v167; // [sp+2Ch] [bp-870h]
  int v168; // [sp+30h] [bp-86Ch] BYREF
  _DWORD s2[8]; // [sp+34h] [bp-868h] BYREF
  char s[12]; // [sp+54h] [bp-848h] BYREF
  char v171; // [sp+60h] [bp-83Ch] BYREF
  time_t v172[513]; // [sp+98h] [bp-804h] BYREF

  v1 = *(_DWORD **)(a1 + 260);
  v2 = *(unsigned __int8 *)(a1 + 282);
  v168 = 0;
  v3 = v1[392];
  v161 = v1;
  v162 = v2;
  v4 = *(unsigned __int8 *)(v3 + 42);
  if ( v2 )
    return v162;
  v6 = *(_QWORD *)(a1 + 28);
  v7 = a1;
  v8 = *(_DWORD *)(a1 + 24);
  s2[0] = *(_DWORD *)(a1 + 32);
  HIDWORD(v6) = *(_DWORD *)(a1 + 20);
  s2[2] = v8;
  v9 = *(_DWORD *)(a1 + 16);
  s2[3] = HIDWORD(v6);
  HIDWORD(v6) = *(_DWORD *)(a1 + 12);
  s2[4] = v9;
  v10 = *(_DWORD *)(a1 + 8);
  s2[5] = HIDWORD(v6);
  HIDWORD(v6) = *(_DWORD *)(a1 + 4);
  s2[1] = v6;
  s2[6] = v10;
  s2[7] = HIDWORD(v6);
  sub_22BB4(s, (int)s2, 32);
  if ( v4 <= 4 )
  {
    sub_254E8(&v168, (const void *)(v3 + 43), v4, (int)"cgminer.c", (int)"test_work_current", 5650);
    --v168;
  }
  if ( pthread_mutex_lock((pthread_mutex_t *)(v161 + 53)) )
  {
    v145 = _errno_location();
    snprintf(
      (char *)v172,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v145,
      "cgminer.c",
      "test_work_current",
      5655);
    goto LABEL_203;
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v161 + 59)) )
  {
    v146 = _errno_location();
    v147 = "test_work_current";
    v148 = *v146;
    v149 = 5655;
LABEL_222:
    snprintf((char *)v172, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", v148, "cgminer.c", v147, v149);
    goto LABEL_203;
  }
  if ( *((_BYTE *)v161 + 680) )
  {
    *((_BYTE *)v161 + 680) = 0;
    *(_BYTE *)(v7 + 280) = 1;
  }
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v161 + 59)) )
  {
    v150 = _errno_location();
    snprintf(
      (char *)v172,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v150,
      "cgminer.c",
      "test_work_current",
      5663);
    goto LABEL_203;
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)(v161 + 53)) )
  {
    v151 = _errno_location();
    snprintf(
      (char *)v172,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v151,
      "cgminer.c",
      "test_work_current",
      5663);
    goto LABEL_203;
  }
  off_67ED8();
  v163 = pthread_rwlock_wrlock(&stru_6A6C0);
  if ( v163 )
  {
    v152 = _errno_location();
    v147 = "block_exists";
    v148 = *v152;
    v149 = 5576;
    goto LABEL_222;
  }
  v11 = -1640531527;
  v12 = strlen(s);
  LOWORD(v13) = -16657;
  if ( v12 <= 0xB )
  {
    HIWORD(v13) = -275;
    v15 = -1640531527;
    v16 = v12;
    v18 = (unsigned __int8 *)s;
  }
  else
  {
    v14 = (unsigned __int8 *)&v171;
    v15 = -1640531527;
    HIWORD(v13) = -275;
    v16 = v12;
    do
    {
      v16 -= 12;
      v17 = (*(v14 - 6) << 16) + (*(v14 - 7) << 8) + *(v14 - 8) + (*(v14 - 5) << 24) + v11;
      v18 = v14;
      v19 = (*(v14 - 10) << 16) + (*(v14 - 11) << 8) + *(v14 - 12) + (*(v14 - 9) << 24) - v17;
      v20 = (*(v14 - 2) << 16) + (*(v14 - 3) << 8) + *(v14 - 4) + (*(v14 - 1) << 24) + v13;
      v14 += 12;
      v21 = (v19 - v20 + v15) ^ (v20 >> 13);
      v22 = (v17 - v20 - v21) ^ (v21 << 8);
      v23 = (v20 - v21 - v22) ^ (v22 >> 13);
      v24 = (v21 - v22 - v23) ^ (v23 >> 12);
      v25 = (v22 - v23 - v24) ^ (v24 << 16);
      v26 = (v23 - v24 - v25) ^ (v25 >> 5);
      v15 = (v24 - v25 - v26) ^ (v26 >> 3);
      v11 = (v25 - v26 - v15) ^ (v15 << 10);
      v13 = (v26 - v15 - v11) ^ (v11 >> 15);
    }
    while ( v16 > 0xB );
  }
  v27 = v12 + v13;
  switch ( v16 )
  {
    case 1u:
      goto LABEL_26;
    case 2u:
      goto LABEL_25;
    case 3u:
      goto LABEL_24;
    case 4u:
      goto LABEL_23;
    case 5u:
      goto LABEL_22;
    case 6u:
      goto LABEL_21;
    case 7u:
      goto LABEL_20;
    case 8u:
      goto LABEL_19;
    case 9u:
      goto LABEL_18;
    case 0xAu:
      goto LABEL_17;
    case 0xBu:
      v27 += v18[10] << 24;
LABEL_17:
      v27 += v18[9] << 16;
LABEL_18:
      v27 += v18[8] << 8;
LABEL_19:
      v11 += v18[7] << 24;
LABEL_20:
      v11 += v18[6] << 16;
LABEL_21:
      v11 += v18[5] << 8;
LABEL_22:
      v11 += v18[4];
LABEL_23:
      v15 += v18[3] << 24;
LABEL_24:
      v15 += v18[2] << 16;
LABEL_25:
      v15 += v18[1] << 8;
LABEL_26:
      v15 += *v18;
      break;
    default:
      break;
  }
  v28 = (v15 - v11 - v27) ^ (v27 >> 13);
  v29 = (v11 - v27 - v28) ^ (v28 << 8);
  v30 = (v27 - v28 - v29) ^ (v29 >> 13);
  v31 = (v28 - v29 - v30) ^ (v30 >> 12);
  v32 = (v29 - v30 - v31) ^ (v31 << 16);
  v33 = (v30 - v31 - v32) ^ (v32 >> 5);
  v34 = v31 - v32 - v33;
  v35 = (v33 - (v34 ^ (v33 >> 3)) - ((v32 - v33 - (v34 ^ (v33 >> 3))) ^ ((v34 ^ (v33 >> 3)) << 10)))
      ^ (((v32 - v33 - (v34 ^ (v33 >> 3))) ^ ((v34 ^ (v33 >> 3)) << 10)) >> 15);
  if ( dword_6A6E0 )
  {
    v36 = *(_DWORD **)(dword_6A6E0 + 68);
    v37 = *(_DWORD *)(*v36 + 12 * ((v36[1] - 1) & v35));
    if ( v37 )
    {
      v38 = -v36[5];
      v39 = v37 - v36[5];
      if ( v39 )
      {
        while ( v35 != *(_DWORD *)(v39 + 96)
             || v12 != *(_DWORD *)(v39 + 92)
             || memcmp(*(const void **)(v39 + 88), s, v12) )
        {
          v40 = *(_DWORD *)(v39 + 84);
          if ( v40 )
          {
            v39 = v40 + v38;
            if ( v40 + v38 )
              continue;
          }
          goto LABEL_55;
        }
        if ( pthread_rwlock_unlock(&stru_6A6C0) )
          goto LABEL_232;
        off_67ED8();
        if ( !memcmp(v161 + 136, s2, 0x20u) )
        {
          v162 = 1;
        }
        else
        {
          if ( !memcmp(s2, &unk_6A6EC, 0x20u) )
          {
            if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
            {
              snprintf((char *)v172, 0x800u, "Pool %d now up to date at height %d", *v161, v168);
              sub_20F58(6, (const char *)v172, 0);
            }
            v162 = 1;
            sub_254E8(v161 + 136, s2, 0x20u, (int)"cgminer.c", (int)"test_work_current", 5721);
            goto LABEL_46;
          }
          v41 = (unsigned __int8)byte_68BD5;
          if ( byte_68BD5 )
          {
            if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
            {
              snprintf((char *)v172, 0x800u, "Stale data from pool %d at height %d", *v161, v168);
              sub_20F58(7, (const char *)v172, 0);
              goto LABEL_46;
            }
            v41 = 0;
          }
          v162 = v41;
        }
LABEL_46:
        if ( *(_BYTE *)(v7 + 280) )
        {
          v139 = (unsigned int)(dword_68FD0 - 3) > 1;
          *(_DWORD *)(v7 + 336) = ++dword_691AC;
          if ( !v139 || (v142 = *(_DWORD *)(v7 + 260), v142 == sub_31FF4()) )
          {
            if ( *(_BYTE *)(v7 + 284) )
            {
              if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
              {
                snprintf((char *)v172, 0x800u, "Stratum from pool %d requested work restart", *v161);
                sub_20F58(5, (const char *)v172, 0);
              }
            }
            else if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
            {
              v154 = "";
              if ( *(_BYTE *)(v7 + 324) )
                v154 = "GBT ";
              snprintf(
                (char *)v172,
                0x800u,
                "%sLONGPOLL from pool %d requested work restart",
                v154,
                **(_DWORD **)(v7 + 260));
              sub_20F58(5, (const char *)v172, 0);
            }
            sub_2E9E8();
          }
        }
        goto LABEL_54;
      }
    }
  }
LABEL_55:
  v42 = (char *)sub_22A44(0x68u, 1u, "cgminer.c", "block_exists", 5580);
  v43 = (int)v42;
  if ( !v42 )
  {
    strcpy((char *)v172, "block_exists OOM");
    sub_20F58(3, (const char *)v172, 1);
    sub_2E6B0(1, 1);
  }
  v44 = (unsigned __int16)&dword_766DC;
  strcpy(v42, s);
  v45 = dword_6A6E0;
  v46 = dword_766DC;
  *(_DWORD *)(v43 + 100) = dword_766DC;
  dword_766DC = v46 + 1;
  if ( !v45 || *(_DWORD *)(*(_DWORD *)(v45 + 68) + 12) <= 3u )
    goto LABEL_114;
  v47 = v45 + 68;
  v48 = 1;
  do
  {
    v49 = v47;
    v47 = 0;
    v50 = 0;
    v51 = 0;
    do
    {
      ++v51;
      if ( v48 )
      {
        v52 = *(_DWORD *)(v49 + 8);
        if ( v52 && (v53 = *(_DWORD *)(*(_DWORD *)(v45 + 68) + 20), (v52 += v53) != 0) )
        {
          v54 = 1;
          do
          {
            if ( v54 == v48 )
            {
              v55 = v54;
              goto LABEL_68;
            }
            v52 = *(_DWORD *)(v52 + 8);
            ++v54;
            if ( !v52 )
              break;
            v52 += v53;
          }
          while ( v52 );
          v55 = v48;
        }
        else
        {
          v55 = v48;
          v54 = 1;
        }
      }
      else
      {
        v52 = v49;
        v55 = 0;
        v54 = 0;
      }
LABEL_68:
      v56 = v49;
      v49 = v52;
      while ( v54 )
      {
        v60 = v49 == 0;
        if ( v49 )
          v60 = v55 == 0;
        if ( v60 )
        {
          if ( v56 )
          {
            v44 = *(_DWORD *)(v56 + 8);
            if ( v44 )
              v44 += *(_DWORD *)(*(_DWORD *)(v45 + 68) + 20);
            goto LABEL_91;
          }
        }
        else
        {
          v44 = *(_DWORD *)(*(_DWORD *)(v45 + 68) + 20);
          if ( *(_DWORD *)(v56 - v44 + 100) - *(_DWORD *)(v49 - v44 + 100) > 0 )
          {
            v58 = *(_DWORD *)(v49 + 8);
            if ( v58 )
              v58 += v44;
LABEL_78:
            --v55;
            if ( !v50 )
            {
              v50 = v49;
              v49 = v58;
              goto LABEL_205;
            }
            v44 = v49 - *(_DWORD *)(*(_DWORD *)(v45 + 68) + 20);
            *(_DWORD *)(v50 + 8) = v44;
            if ( !v49 )
            {
              v50 = 0;
              v49 = v58;
              continue;
            }
            goto LABEL_82;
          }
          if ( v56 )
          {
            v144 = *(_DWORD *)(v56 + 8);
            if ( v144 )
              v44 += v144;
            else
              v44 = 0;
            goto LABEL_91;
          }
        }
        v44 = v56;
LABEL_91:
        --v54;
        if ( !v50 )
        {
          v50 = v56;
          v56 = v44;
LABEL_205:
          v47 = v50;
          if ( v50 )
          {
            v44 = 0;
            goto LABEL_83;
          }
          continue;
        }
        if ( !v56 )
        {
          *(_DWORD *)(v50 + 8) = 0;
          v50 = 0;
          v56 = v44;
          continue;
        }
        v58 = v49;
        v49 = v56;
        v61 = v56 - *(_DWORD *)(*(_DWORD *)(v45 + 68) + 20);
        v56 = v44;
        *(_DWORD *)(v50 + 8) = v61;
LABEL_82:
        v44 = v50 - *(_DWORD *)(*(_DWORD *)(v45 + 68) + 20);
        v50 = v49;
        v49 = v58;
LABEL_83:
        *(_DWORD *)(v50 + 4) = v44;
      }
      v57 = v55 == 0;
      if ( v55 )
        v57 = v49 == 0;
      if ( !v57 )
      {
        v58 = *(_DWORD *)(v49 + 8);
        v59 = v58 == 0;
        if ( v58 )
          v44 = *(_DWORD *)(v45 + 68);
        else
          v58 = v54;
        if ( !v59 )
        {
          v44 = *(_DWORD *)(v44 + 20);
          v58 += v44;
        }
        goto LABEL_78;
      }
    }
    while ( v49 );
    if ( v50 )
      *(_DWORD *)(v50 + 8) = 0;
    if ( v51 <= 1 )
      goto LABEL_101;
    v48 *= 2;
  }
  while ( v47 );
  v50 = 0;
LABEL_101:
  *(_DWORD *)(*(_DWORD *)(v45 + 68) + 16) = v50;
  v62 = v47 - *(_DWORD *)(*(_DWORD *)(v45 + 68) + 20);
  v63 = *(_DWORD *)(v62 + 72);
  dword_6A6E0 = v62;
  v163 = *(_DWORD *)(v62 + 100);
  if ( v63 )
  {
    v64 = *(_DWORD *)(v62 + 68);
    v65 = v62 + 68;
    v66 = *(_DWORD *)(v64 + 20);
    if ( v62 != *(_DWORD *)(v64 + 16) - v66 )
      goto LABEL_103;
LABEL_261:
    *(_DWORD *)(v64 + 16) = v63 + v66;
    v63 = *(_DWORD *)(v62 + 72);
    if ( !v63 )
    {
      v67 = *(_DWORD *)(v62 + 76);
      goto LABEL_264;
    }
    v66 = *(_DWORD *)(*(_DWORD *)(v62 + 68) + 20);
LABEL_103:
    v45 = v62;
    *(_DWORD *)(v63 + v66 + 8) = *(_DWORD *)(v62 + 76);
    v67 = *(_DWORD *)(v62 + 76);
LABEL_104:
    v68 = *(_DWORD **)(v45 + 68);
    if ( v67 )
    {
      *(_DWORD *)(v67 + v68[5] + 4) = *(_DWORD *)(v62 + 72);
      v68 = *(_DWORD **)(v45 + 68);
    }
    v69 = 12 * (*(_DWORD *)(v62 + 96) & (v68[1] - 1));
    --*(_DWORD *)(*v68 + v69 + 4);
    v70 = **(_DWORD **)(v45 + 68);
    if ( *(_DWORD *)(v70 + v69) == v65 )
      *(_DWORD *)(v70 + v69) = *(_DWORD *)(v62 + 84);
    v71 = *(_QWORD *)(v62 + 80);
    if ( (_DWORD)v71 )
    {
      *(_DWORD *)(v71 + 16) = HIDWORD(v71);
      HIDWORD(v71) = *(_DWORD *)(v62 + 84);
    }
    if ( HIDWORD(v71) )
      *(_DWORD *)(HIDWORD(v71) + 12) = *(_DWORD *)(v62 + 80);
    --*(_DWORD *)(*(_DWORD *)(v45 + 68) + 12);
  }
  else
  {
    v67 = *(_DWORD *)(v62 + 76);
    v64 = *(_DWORD *)(v62 + 68);
    if ( v67 )
    {
      v66 = *(_DWORD *)(v64 + 20);
      v65 = v62 + 68;
      if ( v62 == *(_DWORD *)(v64 + 16) - v66 )
        goto LABEL_261;
LABEL_264:
      v45 = v67;
      dword_6A6E0 = v67;
      goto LABEL_104;
    }
    v45 = 0;
    free(*(void **)v64);
    free(*(void **)(v62 + 68));
    dword_6A6E0 = 0;
  }
  free((void *)v62);
LABEL_114:
  LOWORD(v72) = 31161;
  v164 = strlen((const char *)v43);
  v73 = v164;
  if ( v164 <= 0xB )
  {
    HIWORD(v72) = -25033;
    v73 = v164;
    v89 = -17973521;
    v79 = (unsigned __int8 *)v43;
    v75 = v72;
  }
  else
  {
    HIWORD(v72) = -25033;
    v74 = (unsigned __int8 *)(v43 + 12);
    v166 = (char *)v43;
    v75 = v72;
    v76 = -17973521;
    do
    {
      v73 -= 12;
      v77 = *(v74 - 1);
      v78 = (*(v74 - 10) << 16) + (*(v74 - 11) << 8) + *(v74 - 12) + (*(v74 - 9) << 24);
      v79 = v74;
      v80 = (*(v74 - 2) << 16) + (*(v74 - 3) << 8) + *(v74 - 4);
      v81 = (*(v74 - 6) << 16) + (*(v74 - 7) << 8) + *(v74 - 8) + (*(v74 - 5) << 24) + v72;
      v74 += 12;
      v82 = v80 + (v77 << 24) + v76;
      v83 = (v78 - v81 - v82 + v75) ^ (v82 >> 13);
      v84 = (v81 - v82 - v83) ^ (v83 << 8);
      v85 = (v82 - v83 - v84) ^ (v84 >> 13);
      v86 = (v83 - v84 - v85) ^ (v85 >> 12);
      v87 = (v84 - v85 - v86) ^ (v86 << 16);
      v88 = (v85 - v86 - v87) ^ (v87 >> 5);
      v75 = (v86 - v87 - v88) ^ (v88 >> 3);
      v72 = (v87 - v88 - v75) ^ (v75 << 10);
      v76 = (v88 - v75 - v72) ^ (v72 >> 15);
    }
    while ( v73 > 0xB );
    v89 = (v88 - v75 - v72) ^ (v72 >> 15);
    v43 = (int)v166;
  }
  v90 = v73 - 1;
  v91 = v89 + v164;
  switch ( v90 )
  {
    case 0u:
      goto LABEL_129;
    case 1u:
      goto LABEL_128;
    case 2u:
      goto LABEL_127;
    case 3u:
      goto LABEL_126;
    case 4u:
      goto LABEL_125;
    case 5u:
      goto LABEL_124;
    case 6u:
      goto LABEL_123;
    case 7u:
      goto LABEL_122;
    case 8u:
      goto LABEL_121;
    case 9u:
      goto LABEL_120;
    case 0xAu:
      v91 += v79[10] << 24;
LABEL_120:
      v91 += v79[9] << 16;
LABEL_121:
      v91 += v79[8] << 8;
LABEL_122:
      v72 += v79[7] << 24;
LABEL_123:
      v72 += v79[6] << 16;
LABEL_124:
      v72 += v79[5] << 8;
LABEL_125:
      v72 += v79[4];
LABEL_126:
      v75 += v79[3] << 24;
LABEL_127:
      v75 += v79[2] << 16;
LABEL_128:
      v75 += v79[1] << 8;
LABEL_129:
      v75 += *v79;
      break;
    default:
      break;
  }
  *(_DWORD *)(v43 + 88) = v43;
  v92 = (v75 - v72 - v91) ^ (v91 >> 13);
  v93 = (v72 - v91 - v92) ^ (v92 << 8);
  v94 = (v91 - v92 - v93) ^ (v93 >> 13);
  v95 = (v92 - v93 - v94) ^ (v94 >> 12);
  v96 = (v93 - v94 - v95) ^ (v95 << 16);
  v97 = (v94 - v95 - v96) ^ (v96 >> 5);
  v98 = v95 - v96 - v97;
  v99 = (v97 - (v98 ^ (v97 >> 3)) - ((v96 - v97 - (v98 ^ (v97 >> 3))) ^ ((v98 ^ (v97 >> 3)) << 10)))
      ^ (((v96 - v97 - (v98 ^ (v97 >> 3))) ^ ((v98 ^ (v97 >> 3)) << 10)) >> 15);
  *(_DWORD *)(v43 + 96) = v99;
  *(_DWORD *)(v43 + 92) = strlen((const char *)v43);
  if ( v45 )
  {
    v100 = *(_DWORD *)(v45 + 68);
    *(_DWORD *)(v43 + 76) = 0;
    v101 = v43 + 68;
    *(_DWORD *)(v43 + 68) = v100;
    *(_DWORD *)(v43 + 72) = *(_DWORD *)(*(_DWORD *)(v45 + 68) + 16) - *(_DWORD *)(*(_DWORD *)(v45 + 68) + 20);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v45 + 68) + 16) + 8) = v43;
    *(_DWORD *)(*(_DWORD *)(v45 + 68) + 16) = v43 + 68;
    goto LABEL_132;
  }
  *(_DWORD *)(v43 + 76) = 0;
  *(_DWORD *)(v43 + 72) = 0;
  dword_6A6E0 = v43;
  v155 = malloc(0x2Cu);
  *(_DWORD *)(v43 + 68) = v155;
  if ( !v155 )
    goto LABEL_270;
  memset(v155, 0, 0x2Cu);
  v101 = v43 + 68;
  *(_DWORD *)(*(_DWORD *)(v43 + 68) + 16) = v43 + 68;
  *(_DWORD *)(*(_DWORD *)(v43 + 68) + 4) = 32;
  *(_DWORD *)(*(_DWORD *)(v43 + 68) + 8) = 5;
  *(_DWORD *)(*(_DWORD *)(v43 + 68) + 20) = 68;
  v156 = *(void ***)(v43 + 68);
  *v156 = malloc(0x180u);
  v157 = **(void ***)(v43 + 68);
  if ( !v157 )
    goto LABEL_270;
  memset(v157, 0, 0x180u);
  v45 = v43;
  *(_DWORD *)(*(_DWORD *)(v43 + 68) + 40) = -1609490463;
LABEL_132:
  ++*(_DWORD *)(*(_DWORD *)(v45 + 68) + 12);
  v102 = *(_QWORD *)*(_DWORD *)(v45 + 68);
  v103 = 12 * (v99 & (HIDWORD(v102) - 1));
  ++*(_DWORD *)(v102 + v103 + 4);
  LODWORD(v102) = *(_DWORD *)(**(_DWORD **)(v45 + 68) + v103);
  *(_DWORD *)(v43 + 80) = 0;
  *(_DWORD *)(v43 + 84) = v102;
  LODWORD(v102) = **(_DWORD **)(v45 + 68);
  v104 = *(_DWORD *)(v102 + v103);
  v105 = (int *)(v102 + v103);
  if ( v104 )
  {
    *(_DWORD *)(v104 + 12) = v101;
    v105 = (int *)(**(_DWORD **)(v45 + 68) + v103);
  }
  *v105 = v101;
  v106 = *(_QWORD *)(**(_DWORD **)(v45 + 68) + v103 + 4);
  if ( (unsigned int)v106 >= 10 * (HIDWORD(v106) + 1) )
  {
    v107 = *(_DWORD *)(v43 + 68);
    if ( *(_DWORD *)(v107 + 36) != 1 )
    {
      v124 = calloc(24 * *(_DWORD *)(v107 + 4), 1u);
      if ( v124 )
      {
        v125 = *(_DWORD *)(v43 + 68);
        v126 = 0;
        *(_DWORD *)(v125 + 24) = (((2 * *(_DWORD *)(v125 + 4) - 1) & *(_DWORD *)(v125 + 12)) != 0)
                               + (*(_DWORD *)(v125 + 12) >> (*(_BYTE *)(v125 + 8) + 1));
        *(_DWORD *)(*(_DWORD *)(v43 + 68) + 28) = 0;
        v127 = *(_DWORD *)(v43 + 68);
        v128 = *(_DWORD *)(v127 + 4);
        if ( v128 )
        {
          v165 = 0;
          v167 = (char *)v7;
          do
          {
            v129 = *(_DWORD **)(*(_DWORD *)v127 + v126);
            if ( v129 )
            {
              while ( 1 )
              {
                v130 = (_DWORD *)v129[4];
                v131 = 3 * ((2 * v128 - 1) & v129[7]);
                v132 = (char *)&v124[v131];
                v133 = *((_DWORD *)v132 + 1) + 1;
                *((_DWORD *)v132 + 1) = v133;
                v134 = *(_DWORD *)(v43 + 68);
                if ( v133 > *(_DWORD *)(v134 + 24) )
                {
                  ++*(_DWORD *)(v134 + 28);
                  *((_DWORD *)v132 + 2) = *((_DWORD *)v132 + 1) / *(_DWORD *)(*(_DWORD *)(v43 + 68) + 24);
                }
                v129[3] = 0;
                v129[4] = v124[v131];
                v135 = v124[v131];
                if ( v135 )
                  *(_DWORD *)(v135 + 12) = v129;
                v124[v131] = v129;
                v127 = *(_DWORD *)(v43 + 68);
                if ( !v130 )
                  break;
                v128 = *(_DWORD *)(v127 + 4);
                v129 = v130;
              }
              v128 = *(_DWORD *)(v127 + 4);
            }
            v126 += 12;
            ++v165;
          }
          while ( v165 < v128 );
          v7 = (int)v167;
        }
        free(*(void **)v127);
        *(_DWORD *)(*(_DWORD *)(v43 + 68) + 4) *= 2;
        ++*(_DWORD *)(*(_DWORD *)(v43 + 68) + 8);
        **(_DWORD **)(v43 + 68) = v124;
        v136 = *(_DWORD **)(v43 + 68);
        v137 = v136[7];
        v138 = v136[3];
        v139 = v137 > v138 >> 1;
        if ( v137 <= v138 >> 1 )
          v140 = 0;
        else
          v140 = v136[8];
        if ( v139 )
          ++v140;
        v136[8] = v140;
        v141 = *(_DWORD *)(v43 + 68);
        if ( *(_DWORD *)(v141 + 32) > 1u )
          *(_DWORD *)(v141 + 36) = 1;
        goto LABEL_136;
      }
LABEL_270:
      exit(-1);
    }
  }
LABEL_136:
  v108 = 8 * (29 - *(unsigned __int8 *)(v7 + 72));
  v109 = bswap32(*(_DWORD *)(v7 + 72)) & 0xFFFFFF;
  if ( v108 < 8 )
    LOBYTE(v108) = 8;
  v110 = 32 - v108;
  v111 = 0xFFFF << (v108 - 32);
  LODWORD(v112) = 0xFFFF << v108;
  HIDWORD(v112) = v111 | (0xFFFFu >> v110);
  LODWORD(v113) = sub_4A10C(v112);
  v114 = v113 / (double)v109;
  if ( v114 != dbl_68748 )
  {
    sub_2AEF8((unsigned __int64)v114, byte_6A6E4, 8u, 0);
    dbl_68748 = v114;
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
    {
      snprintf((char *)v172, 0x800u, "Network diff set to %s", byte_6A6E4);
      sub_20F58(5, (const char *)v172, 0);
    }
  }
  if ( v163 && byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    snprintf((char *)v172, 0x800u, "Deleted block %d from database", v163);
    sub_20F58(7, (const char *)v172, 0);
  }
  if ( pthread_rwlock_unlock(&stru_6A6C0) )
  {
LABEL_232:
    v153 = _errno_location();
    snprintf(
      (char *)v172,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v153,
      "cgminer.c",
      "block_exists",
      5614);
    goto LABEL_203;
  }
  off_67ED8();
  if ( pthread_mutex_lock(&stru_74504) )
  {
    v158 = _errno_location();
    snprintf(
      (char *)v172,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v158,
      "cgminer.c",
      "set_curblock",
      5521);
    goto LABEL_203;
  }
  if ( pthread_rwlock_wrlock(&stru_7451C) )
  {
    v159 = _errno_location();
    snprintf(
      (char *)v172,
      0x800u,
      "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v159,
      "cgminer.c",
      "set_curblock",
      5521);
    goto LABEL_203;
  }
  sub_239A4((struct timeval *)&dword_755F0);
  strcpy(byte_73324, s);
  sub_254E8(&unk_6A6EC, s2, 0x20u, (int)"cgminer.c", (int)"set_curblock", 5524);
  v115 = dword_755F4;
  v172[0] = dword_755F0;
  v116 = localtime(v172);
  snprintf(byte_6A70C, 0x20u, "[%02d:%02d:%02d.%03d]", v116->tm_hour, v116->tm_min, v116->tm_sec, v115 / 1000);
  if ( pthread_rwlock_unlock(&stru_7451C) )
  {
    v143 = _errno_location();
    snprintf(
      (char *)v172,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v143,
      "cgminer.c",
      "set_curblock",
      5526);
    goto LABEL_203;
  }
  v117 = pthread_mutex_unlock(&stru_74504);
  if ( v117 )
  {
    v160 = *_errno_location();
    snprintf(
      (char *)v172,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      v160,
      "cgminer.c",
      "set_curblock",
      5526);
LABEL_203:
    sub_20F58(3, (const char *)v172, 1);
    sub_2E6B0(1, 1);
  }
  off_67ED8();
  v118 = byte_73324;
  do
  {
    v119 = (unsigned __int8)*v118++;
    if ( v119 != 48 )
      break;
    ++v117;
  }
  while ( v117 != 57 );
  strncpy(dest, &byte_73324[v117], 8u);
  byte_6A734 = 0;
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
  {
    snprintf((char *)v172, 0x800u, "New block: %s... diff %s", byte_73324, byte_6A6E4);
    sub_20F58(6, (const char *)v172, 0);
  }
  if ( v163 && byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    snprintf((char *)v172, 0x800u, "Deleted block %d from database", v163);
    sub_20F58(7, (const char *)v172, 0);
  }
  sub_254E8(v161 + 136, s2, 0x20u, (int)"cgminer.c", (int)"test_work_current", 5671);
  if ( dword_766DC != 1 )
  {
    v120 = *(unsigned __int8 *)(v7 + 280);
    *(_DWORD *)(v7 + 336) = ++dword_691AC;
    if ( v120 )
    {
      if ( *(_BYTE *)(v7 + 284) )
      {
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
        {
          v121 = "Stratum from pool %d detected new block at height %d";
          v122 = v168;
          v123 = (char *)*v161;
          goto LABEL_170;
        }
      }
      else if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
      {
        v123 = "";
        v122 = **(_DWORD **)(v7 + 260);
        v121 = "%sLONGPOLL from pool %d detected new block";
        if ( *(_BYTE *)(v7 + 324) )
          v123 = "GBT ";
LABEL_170:
        snprintf((char *)v172, 0x800u, v121, v123, v122);
        sub_20F58(5, (const char *)v172, 0);
      }
    }
    else if ( byte_74502 )
    {
      if ( !*((_BYTE *)v161 + 900) && (byte_74500 || byte_68BD4 || dword_67DB4 > 4) )
      {
        strcpy((char *)v172, "New block detected on network before pool notification");
        sub_20F58(5, (const char *)v172, 0);
      }
    }
    else if ( !*((_BYTE *)v161 + 900) && (byte_74500 || byte_68BD4 || dword_67DB4 > 4) )
    {
      strcpy((char *)v172, "New block detected on network");
      sub_20F58(5, (const char *)v172, 0);
    }
    sub_2E9E8();
    v162 = 1;
  }
LABEL_54:
  *(_BYTE *)(v7 + 280) = 0;
  return v162;
}

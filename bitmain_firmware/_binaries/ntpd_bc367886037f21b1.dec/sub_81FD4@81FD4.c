int **__fastcall sub_81FD4(char *a1, const void *a2, size_t a3)
{
  char *v3; // r4
  char *v6; // r0
  int **v7; // r5
  int **v8; // t1
  int **v9; // r0
  int *v10; // r0
  char *v11; // r0
  unsigned int v12; // r3
  unsigned int v13; // t1
  int *v14; // r9
  int *v16; // r6
  int v17; // r8
  int v18; // r7
  int *v19; // r10
  int v20; // r4
  int v21; // r5
  int v22; // t1
  const char *v23; // r11
  int v24; // t1
  unsigned int v25; // r3
  char *v26; // r8
  const char *v27; // r9
  char *v28; // r0
  int v29; // t1
  unsigned int v30; // r3
  unsigned int v31; // r2
  int v32; // r1
  const char *v33; // r7
  char *v34; // r0
  int v35; // t1
  char *v36; // r2
  char *v37; // r4
  char *v38; // r3
  char v39; // t1
  char *v40; // r4
  char *v41; // r0
  char *v42; // r3
  int v43; // r10
  int v44; // r9
  size_t v45; // r0
  char *v46; // r2
  int v47; // t1
  size_t v48; // r9
  int v49; // r2
  int v50; // t1
  char *v51; // r0
  char *v52; // r7
  char *v53; // r0
  int v54; // t1
  size_t v55; // r10
  char *v56; // r0
  int v57; // r3
  int v58; // t1
  char *v59; // r0
  char *v60; // r1
  char *v61; // r9
  int v62; // r2
  char *v63; // r8
  int v64; // r0
  char *v65; // r0
  unsigned __int8 *v66; // r8
  int v67; // t1
  bool v68; // zf
  int v69; // r0
  char *v70; // r0
  int v71; // t1
  char *v72; // r2
  char *v73; // r0
  char *v74; // r1
  int v75; // r3
  int v76; // t1
  int v77; // t1
  _BYTE *v78; // r0
  int v79; // r3
  _BYTE *v80; // r10
  _DWORD *v81; // r0
  int v82; // r7
  _DWORD *v83; // r0
  int v84; // r2
  int v85; // r10
  unsigned int v86; // r3
  unsigned int v87; // t1
  _BOOL4 v88; // r3
  int *v89; // r3
  char *v90; // r1
  int v91; // r0
  int v92; // r0
  int v93; // r9
  unsigned int v94; // r0
  unsigned int v95; // r8
  char *v96; // r10
  _BYTE *v97; // r7
  size_t v98; // r0
  _BYTE *v99; // r2
  int v100; // t1
  int v101; // r3
  int v102; // r3
  _DWORD *v103; // r0
  unsigned int v104; // r1
  unsigned int v105; // r3
  unsigned int v106; // t1
  int v107; // r2
  unsigned __int8 *v108; // r1
  bool v109; // zf
  int v110; // r2
  char *v111; // r1
  char *v112; // r0
  int v113; // t1
  const char *v114; // r0
  char *v115; // r0
  int v116; // r3
  char *v117; // r0
  const char *v118; // r7
  int v119; // r2
  int v120; // t1
  size_t v121; // r0
  const char *v122; // r1
  char *v123; // r0
  int v124; // [sp+Ch] [bp-78h]
  int **v125; // [sp+10h] [bp-74h]
  size_t n; // [sp+14h] [bp-70h]
  size_t na; // [sp+14h] [bp-70h]
  int v128; // [sp+18h] [bp-6Ch]
  int **v129; // [sp+1Ch] [bp-68h]
  char *v130; // [sp+1Ch] [bp-68h]
  char *v131; // [sp+20h] [bp-64h]
  char *v132; // [sp+20h] [bp-64h]
  int v133[3]; // [sp+28h] [bp-5Ch] BYREF
  char needle[4]; // [sp+34h] [bp-50h] BYREF
  _BYTE s[76]; // [sp+38h] [bp-4Ch] BYREF

  v3 = a1;
  if ( !a1 )
  {
    v7 = 0;
    *_errno_location() = 22;
    return v7;
  }
  v6 = (char *)dword_106334;
  if ( !dword_106334 )
    v6 = sub_7DEE8(12);
  v7 = (int **)(unsigned __int8)*v3;
  if ( *((_BYTE *)v7 + (_DWORD)v6) )
  {
    do
    {
      v8 = (int **)(unsigned __int8)*++v3;
      v7 = v8;
    }
    while ( *((_BYTE *)v8 + (_DWORD)v6) );
  }
  if ( !v7 )
  {
    *_errno_location() = 42;
    return v7;
  }
  v9 = (int **)malloc(a3 + 13);
  v7 = v9;
  if ( !v9 )
    sub_C610(a3 + 13);
  *v9 = (_DWORD *)&byte_6;
  v9[1] = (int *)(v9 + 3);
  *((_BYTE *)memcpy(v9 + 3, a2, a3) + a3) = 0;
  v10 = (int *)malloc(0x20u);
  if ( !v10 )
    sub_C610(32);
  v7[2] = v10;
  *v10 = 0;
  v10[1] = 6;
LABEL_10:
  v11 = (char *)dword_106334;
  if ( !dword_106334 )
    goto LABEL_76;
  while ( 1 )
  {
    v12 = (unsigned __int8)*v3;
    if ( v11[v12] )
    {
      do
      {
        v13 = (unsigned __int8)*++v3;
        v12 = v13;
      }
      while ( v11[v13] );
    }
    if ( v12 <= 0x7F && (dword_9ED4C[v12] & 0x180040) != 0 )
    {
      v52 = v3 + 1;
      v53 = (char *)dword_106374;
      if ( !dword_106374 )
        v53 = sub_7DEE8(28);
      if ( v53[(unsigned __int8)v3[1]] )
      {
        do
          v54 = (unsigned __int8)*++v52;
        while ( v53[v54] );
      }
      if ( *(v52 - 1) == 58 )
        --v52;
      v55 = v52 - v3;
      v56 = (char *)dword_10632C;
      if ( !dword_10632C )
        v56 = sub_7DEE8(10);
      v57 = (unsigned __int8)*v52;
      if ( v56[v57] )
      {
        do
        {
          v58 = (unsigned __int8)*++v52;
          v57 = v58;
        }
        while ( v56[v58] );
      }
      while ( 2 )
      {
        switch ( v57 )
        {
          case 0:
            goto LABEL_91;
          case 10:
          case 44:
            ++v52;
LABEL_91:
            v60 = v3;
            v3 = v52;
            sub_7E484(v7 + 2, v60, v55, 0, 0);
            goto LABEL_22;
          case 34:
          case 39:
            v61 = v52 + 1;
            do
            {
              while ( 2 )
              {
                while ( 2 )
                {
                  v63 = v61 + 1;
                  v62 = (unsigned __int8)*v61;
                  if ( !*v61 )
                    goto LABEL_98;
                  if ( v62 == v57 )
                  {
                    v64 = sub_7E484(v7 + 2, v3, v55, v52, v63 - v52);
                    if ( v64 && !dword_B7168[0] )
                    {
                      ++v61;
                      goto LABEL_101;
                    }
                    goto LABEL_187;
                  }
                  if ( v62 != 92 )
                  {
                    ++v61;
                    continue;
                  }
                  break;
                }
                v107 = (unsigned __int8)v61[1];
                v108 = (unsigned __int8 *)(v61 + 2);
                if ( !v61[1] )
                  goto LABEL_98;
                v109 = v107 == 92;
                if ( v107 != 92 )
                  v109 = v107 == v57;
                if ( !v109 )
                {
                  v61 += 2;
                  continue;
                }
                break;
              }
              v110 = (unsigned __int8)v61[2];
              v61 += 3;
            }
            while ( v110 );
            v61 = (char *)v108;
LABEL_98:
            v64 = sub_7E484(v7 + 2, v3, v55, v52, v61 - v52);
            if ( v64 )
            {
              if ( dword_B7168[0] )
              {
                v3 = v61;
                goto LABEL_22;
              }
LABEL_101:
              v3 = v61;
              sub_81D8C((unsigned __int8 *)(v64 + 8), 0);
              goto LABEL_22;
            }
            goto LABEL_203;
          case 58:
          case 61:
            v65 = (char *)dword_10632C;
            v66 = (unsigned __int8 *)(v52 + 1);
            if ( !dword_10632C )
              v65 = sub_7DEE8(10);
            v57 = (unsigned __int8)v52[1];
            if ( v65[v57] )
            {
              do
              {
                v67 = *++v66;
                v57 = v67;
              }
              while ( v65[v67] );
            }
            v68 = v57 == 58;
            if ( v57 != 58 )
              v68 = v57 == 61;
            v52 = (char *)v66;
            if ( !v68 )
              continue;
            goto LABEL_110;
          default:
LABEL_110:
            v61 = v52;
            while ( 2 )
            {
              v63 = v61 + 1;
              if ( v57 == 10 )
              {
                if ( v63 <= v52 + 2 )
                {
LABEL_201:
                  v111 = v3;
                  v3 = v61 + 1;
                  v69 = sub_7E484(v7 + 2, v111, v55, v52, v61 - v52);
                  if ( !v69 )
                    goto LABEL_22;
                  break;
                }
                if ( *(v61 - 1) == 92 )
                {
                  v57 = (unsigned __int8)*v63;
                  if ( *v63 )
                    goto LABEL_115;
                }
                v69 = sub_7E484(v7 + 2, v3, v55, v52, v61 - v52);
                if ( !v69 )
                {
LABEL_187:
                  v3 = v63;
                  goto LABEL_10;
                }
                v3 = v61 + 1;
              }
              else
              {
                if ( v57 == 44 )
                  goto LABEL_201;
                if ( v57 )
                {
                  v57 = (unsigned __int8)*v63;
LABEL_115:
                  ++v61;
                  continue;
                }
                v69 = sub_7E484(v7 + 2, v3, v55, v52, v61 - v52);
                if ( !v69 )
                {
LABEL_203:
                  v3 = v61;
                  goto LABEL_10;
                }
                v3 = v61;
              }
              break;
            }
            v70 = (char *)(v69 + 8);
            while ( 1 )
            {
              if ( *v70 == 10 )
              {
                do
                  v71 = (unsigned __int8)*++v70;
                while ( v71 == 10 );
              }
              v70 = strchr(v70, 10);
              if ( !v70 )
                break;
              if ( *(v70 - 1) == 92 )
              {
                v72 = v70;
                v73 = v70 - 1;
                v74 = v72;
                while ( 1 )
                {
                  v76 = (unsigned __int8)*v72++;
                  v75 = v76;
                  *v73 = v76;
                  if ( !v76 )
                    goto LABEL_22;
                  while ( v75 != 92 || *v72 != 10 )
                  {
                    v77 = (unsigned __int8)*v72++;
                    v75 = v77;
                    v73 = v74++;
                    *v73 = v77;
                    if ( !v77 )
                      goto LABEL_22;
                  }
                }
              }
            }
LABEL_22:
            if ( !v3 )
              goto LABEL_23;
            break;
        }
        goto LABEL_10;
      }
    }
    if ( v12 == 35 )
    {
      v3 = strchr(v3, 10);
      goto LABEL_22;
    }
    if ( v12 != 60 )
      break;
    v25 = (unsigned __int8)v3[1];
    v26 = v3 + 1;
    if ( v25 > 0x7F || (dword_9ED4C[v25] & 0x180040) == 0 )
    {
      if ( v25 == 33 )
      {
        v59 = strstr(v3 + 1, "-->");
        if ( !v59 )
          goto LABEL_18;
        v3 = v59 + 3;
      }
      else
      {
        if ( v25 != 63 )
          goto LABEL_18;
        v51 = strchr(v3 + 1, 62);
        if ( !v51 )
          goto LABEL_18;
        v3 = v51 + 1;
      }
      if ( !v3 )
        goto LABEL_18;
      goto LABEL_73;
    }
    v27 = v3 + 2;
    v28 = (char *)dword_106374;
    v128 = dword_B7168[0];
    if ( !dword_106374 )
      v28 = sub_7DEE8(28);
    if ( v28[(unsigned __int8)v3[2]] )
    {
      do
        v29 = *(unsigned __int8 *)++v27;
      while ( v28[v29] );
    }
    n = v27 - v26;
    if ( (unsigned int)(v27 - v26) > 0x40 || (v133[0] = 1, v30 = *(unsigned __int8 *)v27, v31 = v30, v30 > 0x7F) )
    {
LABEL_118:
      v14 = v7[2];
      dword_B7168[0] = v128;
LABEL_19:
      free(v14);
      free(v7);
      return 0;
    }
    v32 = dword_9ED4C[v30];
    if ( (v32 & 0xC01) != 0 )
    {
      v112 = (char *)dword_106334;
      if ( !dword_106334 )
      {
        v112 = sub_7DEE8(12);
        v30 = *(unsigned __int8 *)v27;
      }
      if ( v112[v30] )
      {
        do
          v113 = *(unsigned __int8 *)++v27;
        while ( v112[v113] );
      }
      v114 = sub_80F7C(v27, dword_B7168, v133);
      v27 = v114;
      if ( !v114 )
        goto LABEL_118;
      v31 = *(unsigned __int8 *)v114;
      if ( v31 > 0x7F )
        goto LABEL_118;
      v32 = dword_9ED4C[v31];
    }
    if ( (v32 & 0x1000C01) == 0 )
      goto LABEL_118;
    v33 = v27 + 1;
    if ( v31 == 47 )
    {
      if ( v27[1] != 62 )
        goto LABEL_118;
      v33 = v27 + 2;
      v133[0] = 0;
      if ( v27 == (const char *)-2 )
        goto LABEL_118;
    }
    else
    {
      if ( v27 == (const char *)-1 )
        goto LABEL_118;
      if ( v133[0] )
      {
        if ( dword_B7168[0] != 2 )
        {
          v34 = (char *)dword_106334;
          if ( !dword_106334 )
            v34 = sub_7DEE8(12);
          if ( v34[*((unsigned __int8 *)v27 + 1)] )
          {
            do
              v35 = *(unsigned __int8 *)++v33;
            while ( v34[v35] );
          }
        }
        *(_DWORD *)needle = 12092;
        memset(s, 0, 0x44u);
        v36 = &needle[1];
        v37 = &v3[n + 1];
        v38 = v26;
        do
        {
          v39 = *v38++;
          *++v36 = v39;
        }
        while ( v38 != v37 );
        v40 = &needle[n + 1];
        v40[1] = 62;
        v40[2] = 0;
        v41 = strstr(v33, needle);
        v42 = v41;
        if ( !v41 )
          goto LABEL_118;
        v43 = dword_106334;
        if ( dword_B7168[0] != 2 )
        {
          if ( dword_106334 )
          {
            v44 = dword_106334;
          }
          else
          {
            v132 = v41;
            v117 = sub_7DEE8(12);
            v42 = v132;
            v43 = dword_106334;
            v44 = (int)v117;
          }
          if ( v33 < v42 )
          {
            v41 = v42;
            goto LABEL_58;
          }
          v131 = v42;
          v45 = strlen(v33);
          v42 = v131;
          v41 = (char *)&v33[v45];
          if ( v33 < v41 )
          {
LABEL_58:
            if ( *(_BYTE *)(v44 + (unsigned __int8)*(v41 - 1)) )
            {
              v46 = v41 - 1;
              do
              {
                v41 = v46;
                if ( v33 >= v46 )
                  break;
                v47 = (unsigned __int8)*--v46;
              }
              while ( *(_BYTE *)(v44 + v47) );
            }
          }
        }
        v48 = v41 - v33;
        v49 = &s[n - 1] - needle;
        v3 = &v42[v49];
        if ( !v43 )
        {
          v130 = v42;
          v115 = sub_7DEE8(12);
          v42 = v130;
          v49 = &s[n - 1] - needle;
          v43 = (int)v115;
        }
        if ( *(_BYTE *)(v43 + (unsigned __int8)v42[v49]) )
        {
          do
            v50 = (unsigned __int8)*++v3;
          while ( *(_BYTE *)(v43 + v50) );
        }
        switch ( v133[0] )
        {
          case 0:
            v33 = v3;
            goto LABEL_206;
          case 1:
            v92 = sub_7E484(v7 + 2, v26, n, v33, v48);
            na = dword_B7168[0];
            v93 = v92;
            if ( dword_B7168[0] != 2 )
            {
              v94 = *(unsigned __int8 *)(v92 + 8);
              v95 = v93 + 8;
              v96 = (char *)dword_106334;
              if ( v94 <= 0x7F && (dword_9ED4C[v94] & 0xC01) != 0 )
              {
                v118 = (const char *)(v93 + 9);
                if ( dword_106334 )
                {
                  v119 = dword_106334;
                }
                else
                {
                  v123 = sub_7DEE8(12);
                  v119 = dword_106334;
                  v96 = v123;
                }
                if ( v96[*(unsigned __int8 *)(v93 + 9)] )
                {
                  do
                    v120 = *(unsigned __int8 *)++v118;
                  while ( v96[v120] );
                }
                v96 = (char *)v119;
                v121 = strlen(v118);
                v122 = v118;
                v97 = (_BYTE *)(v95 + v121);
                memmove((void *)(v93 + 8), v122, v121 + 1);
              }
              else
              {
                v97 = (_BYTE *)(v95 + strlen((const char *)(v93 + 8)));
              }
              if ( !v96 )
                v96 = sub_7DEE8(12);
              if ( v95 < (unsigned int)v97
                || (v98 = strlen((const char *)(v93 + 8)), v97 = (_BYTE *)(v95 + v98), v95 < v95 + v98) )
              {
                if ( v96[(unsigned __int8)*(v97 - 1)] )
                {
                  v99 = v97 - 1;
                  do
                  {
                    v97 = v99;
                    if ( v95 >= (unsigned int)v99 )
                      break;
                    v100 = (unsigned __int8)*--v99;
                  }
                  while ( v96[v100] );
                }
              }
              *v97 = 0;
              if ( na != 1 )
              {
                v101 = *(unsigned __int8 *)(v93 + 8);
                if ( v101 == 34 || v101 == 39 )
                {
                  v102 = (unsigned __int8)*(v97 - 1);
                  if ( v102 == 34 || v102 == 39 )
                    sub_81D8C((unsigned __int8 *)(v93 + 8), 0);
                }
              }
            }
            goto LABEL_139;
          case 3:
            v129 = v7 + 2;
            v83 = malloc(n + 13);
            v84 = n + 13;
            v85 = (int)v83;
            if ( !v83 )
              goto LABEL_230;
            v86 = *(unsigned __int8 *)v33;
            if ( v86 > 0x7F )
              goto LABEL_148;
            if ( (dword_9ED4C[v86] & 0xC01) == 0 )
              goto LABEL_220;
            if ( !v48 )
              goto LABEL_219;
            while ( 2 )
            {
              v87 = *(unsigned __int8 *)++v33;
              v86 = v87;
              --v48;
              if ( v87 > 0x7F )
              {
LABEL_148:
                if ( v48 )
                {
                  v88 = 1;
LABEL_151:
                  v83[2] = v88;
                  goto LABEL_152;
                }
LABEL_219:
                v83[2] = 0;
                goto LABEL_152;
              }
              if ( (dword_9ED4C[v86] & 0xC01) != 0 )
              {
                if ( !v48 )
                  goto LABEL_219;
                continue;
              }
              break;
            }
LABEL_220:
            if ( !v48 )
              goto LABEL_219;
            v116 = dword_9ED4C[v86];
            if ( (v116 & 0x30000) == 0 )
            {
              v88 = (v116 & 0x8000002) == 0;
              goto LABEL_151;
            }
            v83[2] = strtol(v33, 0, 10);
LABEL_152:
            v89 = (int *)v85;
            v90 = v26;
            v91 = 3;
LABEL_183:
            *v89 = v91;
            *(_DWORD *)(v85 + 4) = v89 + 3;
            *((_BYTE *)memcpy(v89 + 3, v90, n) + n) = 0;
            sub_7E374(v129, v85);
            break;
          case 5:
            v129 = v7 + 2;
            v103 = malloc(n + 13);
            v84 = n + 13;
            v85 = (int)v103;
            if ( !v103 )
LABEL_230:
              sub_C610(v84);
            v104 = *(unsigned __int8 *)v33;
            if ( v104 > 0x7F || (dword_9ED4C[v104] & 0xC01) == 0 )
              goto LABEL_180;
            if ( !v48 )
              goto LABEL_215;
            while ( 1 )
            {
              v106 = *(unsigned __int8 *)++v33;
              v105 = v106;
              --v48;
              if ( v106 > 0x7F || (dword_9ED4C[v105] & 0xC01) == 0 )
                break;
              if ( !v48 )
                goto LABEL_215;
            }
LABEL_180:
            if ( v48 )
            {
              v103[2] = strtol(v33, 0, 0);
              goto LABEL_182;
            }
LABEL_215:
            v103[2] = 0;
LABEL_182:
            v89 = (int *)v85;
            v90 = v26;
            v91 = 5;
            goto LABEL_183;
          case 6:
            v78 = malloc(v48 + 1);
            v79 = v48 + 1;
            v80 = v78;
            if ( !v78 )
              goto LABEL_232;
            memcpy(v78, v33, v48);
            v80[v48] = 0;
            if ( !v48 )
            {
              v81 = malloc(n + 13);
              v79 = n + 13;
              v82 = (int)v81;
              if ( !v81 )
LABEL_232:
                sub_C610(v79);
              v81[2] = 0;
              *v81 = 6;
              v81[1] = v81 + 3;
              *((_BYTE *)memcpy(v81 + 3, v26, n) + n) = 0;
LABEL_137:
              sub_7E374(v7 + 2, v82);
              goto LABEL_138;
            }
            v82 = sub_81FD4(v80, v26, n);
            if ( v82 )
              goto LABEL_137;
LABEL_138:
            free(v80);
            goto LABEL_139;
          default:
            goto LABEL_139;
        }
        goto LABEL_139;
      }
    }
LABEL_206:
    v3 = (char *)v33;
    sub_7E484(v7 + 2, v26, n, 0, 0);
LABEL_139:
    dword_B7168[0] = v128;
LABEL_73:
    if ( *v3 == 44 )
    {
      ++v3;
      goto LABEL_22;
    }
    v11 = (char *)dword_106334;
    if ( !dword_106334 )
LABEL_76:
      v11 = sub_7DEE8(12);
  }
  if ( v12 )
  {
LABEL_18:
    v14 = v7[2];
    goto LABEL_19;
  }
LABEL_23:
  v14 = v7[2];
  v124 = *v14;
  if ( !*v14 )
  {
    *_errno_location() = 42;
    goto LABEL_19;
  }
  if ( v124 > 1 )
  {
    v16 = v14 + 2;
    v17 = 1;
    v125 = v7;
    do
    {
      v18 = v16[1];
      v19 = v16 - 1;
      v20 = v17;
      v22 = *v16++;
      v21 = v22;
      v23 = *(const char **)(v18 + 4);
      do
      {
        if ( strcmp(*(const char **)(v21 + 4), v23) <= 0 )
          break;
        --v20;
        v19[2] = v21;
        v24 = *v19--;
        v21 = v24;
      }
      while ( v20 );
      ++v17;
      v14[v20 + 2] = v18;
    }
    while ( v124 != v17 );
    return v125;
  }
  return v7;
}

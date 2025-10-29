char *__fastcall sub_45E44(int a1)
{
  double v1; // d0
  unsigned __int8 *v3; // r10
  unsigned __int8 *v4; // r2
  int v5; // r3
  int *v6; // r0
  int v7; // r4
  int v8; // r5
  int v9; // r2
  unsigned __int8 *v10; // r9
  _BYTE *v11; // r3
  _BYTE *v12; // r11
  bool v13; // zf
  unsigned int v14; // r2
  unsigned int v15; // t1
  _BYTE *v16; // r2
  unsigned int v17; // t1
  int v18; // r7
  _DWORD *v19; // r2
  int v20; // r4
  int v21; // r8
  int v22; // r0
  int v23; // r3
  char *result; // r0
  int v25; // r3
  int v26; // r2
  int v27; // r1
  int v28; // r0
  int v29; // r3
  int v30; // r2
  int v31; // r8
  int v32; // r2
  int *v33; // r7
  int v34; // r8
  int v35; // r6
  int v36; // r0
  int v37; // r3
  const char *v38; // r12
  _BOOL4 v39; // r2
  double v40; // r0
  int *v41; // r2
  const char *v42; // r7
  __int16 v43; // r3
  int v44; // r3
  int *v45; // r8
  int v46; // r6
  char v47; // r1
  int v48; // r1
  int v49; // r6
  char v50; // r3
  int v51; // r1
  int v52; // r2
  int v53; // r2
  int v54; // r1
  char **v55; // r6
  int v56; // r0
  char *v57; // r8
  char **v58; // r3
  int v59; // r0
  int *v60; // r0
  int *v61; // r6
  unsigned __int16 v62; // r7
  unsigned __int16 v63; // r0
  int v64; // r6
  unsigned int v65; // r6
  char v66; // r1
  char v67; // r2
  char v68; // r3
  char v69; // r2
  const char *v70; // r2
  size_t v71; // r6
  int v72; // r3
  bool v73; // zf
  const char *v74; // r2
  int v75; // r2
  const char *v76; // r2
  int v77; // r2
  int v78; // r2
  int v79; // r7
  int v80; // r3
  int v81; // r3
  int v82; // r2
  bool v83; // zf
  int v84; // r8
  int v85; // r3
  int v86; // r7
  unsigned int v87; // r2
  int v88; // r0
  unsigned int v89; // r12
  bool v90; // cf
  unsigned int v91; // r2
  int v92; // r12
  int v93; // r3
  int v94; // r1
  const char *v95; // r0
  int v96; // r0
  const char *v97; // r0
  int *v98; // r3
  int v99; // r6
  const char *v100; // r6
  unsigned __int8 *v101; // r0
  int v102; // r0
  int v103; // r2
  char v104; // r2
  int v105; // r3
  bool v106; // zf
  const char *v107; // r2
  int v108; // r0
  int v109; // r1
  int v110; // r2
  int v111; // r7
  unsigned int v112; // lr
  int v113; // r12
  unsigned int v114; // r3
  unsigned int v115; // r0
  int v116; // r0
  int v117; // r1
  unsigned int v118; // r1
  int v119; // r2
  unsigned int v120; // lr
  int v121; // r0
  int v122; // r1
  int v123; // r7
  const char *v124; // r0
  const char *v125; // r2
  int v126; // r0
  signed int v127; // r2
  int v128; // r0
  int v129; // r1
  __int64 v130; // r0
  int v131; // r0
  unsigned int v132; // lr
  int v133; // r6
  int v134; // r1
  int v135; // r1
  int v136; // r3
  unsigned int v137; // r2
  char v138; // r1
  const unsigned __int16 **v139; // r0
  unsigned int v140; // r1
  const unsigned __int16 *v141; // r12
  int v142; // [sp+10h] [bp-64h]
  int v143; // [sp+14h] [bp-60h]
  unsigned int v144; // [sp+18h] [bp-5Ch]
  _DWORD *v145; // [sp+18h] [bp-5Ch]
  int v146; // [sp+18h] [bp-5Ch]
  char **endptr; // [sp+1Ch] [bp-58h]
  char **endptra; // [sp+1Ch] [bp-58h]
  char **endptrb; // [sp+1Ch] [bp-58h]
  int v150; // [sp+20h] [bp-54h]
  _DWORD *v151; // [sp+28h] [bp-4Ch]
  int v152; // [sp+2Ch] [bp-48h]
  char **v153; // [sp+38h] [bp-3Ch]
  const char *v154; // [sp+38h] [bp-3Ch]
  unsigned __int8 *v155; // [sp+38h] [bp-3Ch]
  int v156; // [sp+38h] [bp-3Ch]
  char **v157; // [sp+3Ch] [bp-38h]
  const char *v158; // [sp+3Ch] [bp-38h]
  int v159; // [sp+3Ch] [bp-38h]
  char *v160[13]; // [sp+40h] [bp-34h] BYREF

  v3 = (unsigned __int8 *)(a1 + 88);
  v4 = (unsigned __int8 *)(a1 + 88);
  v5 = *(_DWORD *)(a1 + 84);
  v143 = *(_DWORD *)(a1 + 4);
  v6 = *(int **)(v143 + 84);
  v7 = *v6 + 4096;
  v150 = *v6;
  v142 = v7;
  v8 = *v6 + 7196;
  sub_44330(v6, "recv", v4, v5);
  v9 = *(_DWORD *)(a1 + 84);
  v10 = &v3[v9];
  v11 = (_BYTE *)(v8 + *(_DWORD *)(v7 + 3096));
  if ( v3 != &v3[v9] )
  {
    v12 = v11 + 1599;
    v152 = a1;
    do
    {
      while ( 1 )
      {
        v15 = *v3++;
        v14 = v15;
        if ( v15 != 10 )
        {
          if ( v12 != v11 )
          {
            v13 = v14 == 32;
            if ( v14 <= 0x20 )
              v13 = v8 == (_DWORD)v11;
            if ( !v13 )
              *v11++ = v14;
          }
          goto LABEL_8;
        }
        if ( (_BYTE *)v8 != v11 && (unsigned __int8)*(v11 - 1) <= 0x20u )
        {
          v16 = v11 - 1;
          do
          {
            v11 = v16;
            if ( v16 == (_BYTE *)v8 )
              break;
            v17 = (unsigned __int8)*--v16;
          }
          while ( v17 <= 0x20 );
        }
        v18 = 0;
        *v11 = 0;
        v19 = *(_DWORD **)(v143 + 84);
        *(_DWORD *)(v142 + 3096) = &v11[-v8];
        v20 = *v19;
        v151 = v19;
        v21 = *v19 + 7196;
        v144 = *(_DWORD *)(*v19 + 7192);
        sub_45DF0(v160);
        v22 = sub_4577C((unsigned int *)v160, v20 + 7196, v144, v20 + 192, 0x15Eu);
        if ( v22 > 0 )
        {
          v23 = *(_DWORD *)(v20 + 192);
          *(_DWORD *)(v20 + 184) = v21;
          *(_DWORD *)(v20 + 188) = v22;
          if ( v23 == 1 )
          {
            v25 = v20;
            do
            {
              v26 = *(_DWORD *)(v25 + 200);
              ++v18;
              v27 = *(_DWORD *)(v25 + 196);
              v25 += 20;
              if ( v26 > v27 )
                *(_BYTE *)(*(_DWORD *)(v20 + 184) + v26) = 0;
            }
            while ( v18 < *(_DWORD *)(v20 + 188) );
            v145 = (_DWORD *)(v20 + 184);
            v28 = sub_45314((_DWORD *)(v20 + 184), "class", 3);
            if ( v28 != -1 )
            {
              v29 = *(_DWORD *)(v20 + 184);
              v30 = *(_DWORD *)(v20 + 20 * v28 + 196);
              v31 = v29 + v30;
              if ( v29 + v30 )
                break;
            }
          }
        }
        v11 = (_BYTE *)v8;
        ++*(_DWORD *)(v20 + 156);
        if ( v10 == v3 )
          goto LABEL_18;
      }
      v32 = *(unsigned __int8 *)(v29 + v30);
      if ( v32 == 84 )
      {
        if ( *(_BYTE *)(v31 + 1) != 80 || *(_BYTE *)(v31 + 2) != 86 || *(_BYTE *)(v31 + 3) )
          goto LABEL_70;
        v33 = *(int **)(v143 + 84);
        v34 = *v33;
        v35 = sub_456D4(v145, "mode", 0);
        v36 = sub_45314(v145, "time", 3);
        if ( v36 == -1 )
        {
          v37 = *(_BYTE *)(v34 + 133) & 1;
LABEL_117:
          v83 = v37 == 0;
          if ( !v37 )
            v37 = *(_DWORD *)(v34 + 164);
          ++*(_DWORD *)(v34 + 160);
          if ( v83 )
            *(_DWORD *)(v34 + 164) = v37 + 1;
          *(_BYTE *)(v34 + 132) = *(_BYTE *)(v34 + 132) & 0xF8 | 1;
          goto LABEL_57;
        }
        v37 = *(_BYTE *)(v34 + 133) & 1;
        v38 = (const char *)(*(_DWORD *)(v20 + 184) + *(_DWORD *)(v20 + 20 * v36 + 196));
        v39 = v38 == 0;
        if ( v35 <= 1 )
          v39 = 1;
        if ( v39 )
          goto LABEL_117;
        *(_BYTE *)(v34 + 132) &= ~1u;
        if ( !v37 )
        {
          v100 = v38;
          ++*(_DWORD *)(v34 + 164);
          sub_441E8((int)v33, v38);
          v101 = (unsigned __int8 *)strptime(v100, "%Y-%m-%dT%H:%M:%S", v160);
          v155 = v101;
          if ( !v101 )
            goto LABEL_142;
          v102 = *v101;
          if ( v102 == 46 )
          {
            v139 = _ctype_b_loc();
            v140 = 100000000;
            v103 = 0;
            v141 = *v139;
            while ( 1 )
            {
              v102 = *++v155;
              if ( (v141[v102] & 0x800) == 0 )
                break;
              v103 += v140 * (v102 - 48);
              v140 /= 0xAu;
            }
          }
          else
          {
            v103 = 0;
          }
          if ( v102 == 90 && !v155[1] )
          {
            v159 = v103;
            v156 = sub_65FDC(v160);
            v126 = sub_66220(v160);
            v127 = v159;
            v128 = v126 + 86400 * (v156 - 693596);
            if ( v159 < 0 )
            {
              do
              {
                v127 += 1000000000;
                --v128;
              }
              while ( v127 < 0 );
            }
            else if ( v159 > 999999999 )
            {
              v129 = v128 + 1;
              if ( v159 - 1000000000 <= 999999999 )
              {
                v127 = v159 - 1000000000;
              }
              else
              {
                v128 += 2;
                v127 = v159 - 2000027648;
              }
              if ( v159 - 1000000000 <= 999999999 )
                v128 = v129;
              else
                v127 += 27648;
            }
            *(_DWORD *)(v34 + 88) = v128;
            v130 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(v127).n64_i64[0], 0x20u), 0x20u) + 500000000;
            v131 = sub_8BB68(v130, HIDWORD(v130), 1000000000, 0);
            v132 = *(_DWORD *)(v34 + 128);
            v133 = *(_DWORD *)(v34 + 124);
            *(_DWORD *)(v34 + 92) = v131;
            v134 = *(_DWORD *)(v152 + 76);
            *(_DWORD *)(v34 + 80) = *(_DWORD *)(v152 + 72);
            *(_DWORD *)(v34 + 84) = v134;
            v135 = *(_DWORD *)(v152 + 76);
            v136 = *(_DWORD *)(v152 + 72) - v133;
            *(_DWORD *)(v34 + 96) = *(_DWORD *)(v152 + 72);
            *(_DWORD *)(v34 + 100) = v135;
            v137 = *(_DWORD *)(v34 + 100);
            if ( v137 < v132 )
              --v136;
            v138 = *(_BYTE *)(v34 + 132) | 2;
            *(_DWORD *)(v34 + 96) = v136;
            *(_DWORD *)(v34 + 100) = v137 - v132;
            *(_BYTE *)(v34 + 132) = v138;
          }
          else
          {
LABEL_142:
            v104 = *(_BYTE *)(v34 + 132);
            ++*(_DWORD *)(v34 + 156);
            *(_BYTE *)(v34 + 132) = v104 & 0xFD;
          }
        }
        LODWORD(v40) = sub_45314(v145, "ept", 0);
        if ( LODWORD(v40) == -1
          || (v41 = &dword_14,
              (v42 = (const char *)(*(_DWORD *)(v20 + 184) + *(_DWORD *)(v20 + 20 * LODWORD(v40) + 196))) == 0)
          || (v40 = strtod(v42, v160), v42 == v160[0])
          || *v160[0] )
        {
          v1 = 0.00141421356;
        }
        else
        {
          v1 = fabs(v1) * 0.70710678;
        }
        LODWORD(v40) = v160;
        frexp(v40, v41);
        if ( v1 < 0.25 )
          v160[0] = (char *)0x80000000;
        if ( v1 <= 2.0 )
        {
          v44 = (int)v160[0];
          if ( (int)v160[0] < -32 )
            v44 = -32;
          v43 = v44 & (v44 >> 31);
        }
        else
        {
          v43 = 0;
        }
        *(_WORD *)(v34 + 104) = v43;
      }
      else
      {
        if ( v32 != 80 || *(_BYTE *)(v31 + 1) != 80 || *(_BYTE *)(v31 + 2) != 83 || *(_BYTE *)(v31 + 3) )
        {
LABEL_70:
          endptr = *(char ***)(v20 + 184);
          if ( !strcmp("TOFF", (const char *)v31) )
          {
            v84 = *(_DWORD *)(v143 + 84);
            v46 = *(_DWORD *)v84;
            v85 = *(_BYTE *)(*(_DWORD *)v84 + 132) & 1;
            *(_DWORD *)(v46 + 164) = *(_DWORD *)(*(_DWORD *)v84 + 164) + 1;
            v86 = v85;
            *(_BYTE *)(v46 + 133) |= 1u;
            if ( v85 )
              goto LABEL_57;
            if ( !sub_454F4((_DWORD *)(v46 + 96), v145, "clock_sec", "clock_nsec", 1)
              || !sub_454F4((_DWORD *)(v46 + 88), v145, "real_sec", "real_nsec", 1) )
            {
LABEL_56:
              ++*(_DWORD *)(v46 + 156);
              goto LABEL_57;
            }
            v87 = *(_DWORD *)(v46 + 100);
            v88 = v86;
            v89 = *(_DWORD *)(v46 + 128);
            v90 = v87 >= v89;
            v91 = v87 - v89;
            v92 = *(_DWORD *)(v46 + 124);
            v93 = *(_DWORD *)(v46 + 96);
            if ( !v90 )
              v88 = 1;
            *(_DWORD *)(v46 + 100) = v91;
            *(_DWORD *)(v46 + 96) = v93 - v92 - v88;
            v94 = *(_DWORD *)(v152 + 76);
            *(_DWORD *)(v46 + 80) = *(_DWORD *)(v152 + 72);
            *(_DWORD *)(v46 + 84) = v94;
            *(_BYTE *)(v46 + 132) |= 2u;
            v95 = (const char *)sub_698D0(v46 + 88);
            sub_441E8(v84, v95);
          }
          else if ( !strcmp("VERSION", (const char *)v31) )
          {
            v153 = endptr;
            v55 = *(char ***)(v143 + 84);
            endptra = v55;
            v56 = sub_45314(v145, "rev", 3);
            v57 = *v55;
            v58 = v153;
            if ( v56 == -1 )
              v154 = "(unknown)";
            else
              v154 = (char *)v153 + *(_DWORD *)(v20 + 20 * v56 + 196);
            v157 = v58;
            v59 = sub_45314(v145, "release", 3);
            if ( v59 == -1 )
              v158 = "(unknown)";
            else
              v158 = (char *)v157 + *(_DWORD *)(v20 + 20 * v59 + 196);
            v60 = _errno_location();
            *v60 = 0;
            v61 = v60;
            v62 = sub_45440(v145, "proto_major");
            v63 = sub_45440(v145, "proto_minor");
            if ( *v61 )
            {
              if ( ((_BYTE)endptra[192] & 4) != 0 )
                goto LABEL_148;
              v105 = *((_DWORD *)v57 + 45);
              v106 = v105 == 0;
              if ( v105 )
                v106 = v105 == 3600;
              if ( v106 )
              {
LABEL_148:
                v107 = (const char *)*((_DWORD *)v57 + 5);
                *((_DWORD *)v57 + 45) = 3600;
                sub_64A18(6, "%s: could not evaluate version data", v107);
              }
            }
            else
            {
              v64 = v63;
              if ( (v57[132] & 0x20) == 0 )
                sub_64A18(
                  6,
                  "%s: GPSD revision=%s release=%s protocol=%u.%u",
                  *((const char **)v57 + 5),
                  v154,
                  v158,
                  v62,
                  v63);
              v65 = v64 | (v62 << 16);
              v66 = v57[133];
              if ( v65 > 0x30008 )
                v67 = -1;
              else
                v67 = 0;
              v68 = v57[132] & 0x5F | 0x20 | ((v67 & 1) << 7);
              *((_DWORD *)v57 + 7) = v65;
              v57[132] = v68;
              if ( v65 > 0x30009 )
                v69 = -1;
              else
                v69 = 0;
              v57[133] = v66 & 0xFE | v69 & 1;
              if ( (v68 & 0x40) == 0 )
              {
                v70 = (v57[133] & 1) != 0 ? ",\"pps\":true" : byte_97B44;
                sub_6BCB0(
                  v57 + 7196,
                  1600,
                  "?WATCH={\"device\":\"%s\",\"enable\":true,\"json\":true%s};\r\n",
                  *((const char **)v57 + 6),
                  v70);
                v71 = strlen(v57 + 7196);
                sub_44330(*(int **)(v143 + 84), "send", (unsigned __int8 *)v57 + 7196, v71);
                if ( v71 != write((int)endptra[7], v57 + 7196, v71) )
                {
                  if ( ((_BYTE)endptra[192] & 4) != 0 )
                    goto LABEL_96;
                  v72 = *((_DWORD *)v57 + 45);
                  v73 = v72 == 0;
                  if ( v72 )
                    v73 = v72 == 3600;
                  if ( v73 )
                  {
LABEL_96:
                    v74 = (const char *)*((_DWORD *)v57 + 5);
                    *((_DWORD *)v57 + 45) = 3600;
                    sub_64A18(3, "%s: failed to write watch request (%m)", v74);
                  }
                }
              }
            }
          }
          else
          {
            if ( strcmp("WATCH", (const char *)v31) )
              goto LABEL_73;
            v96 = sub_45314(v145, "device", 3);
            if ( v96 != -1 )
            {
              v97 = (char *)endptr + *(_DWORD *)(v20 + 20 * v96 + 196);
              if ( v97 )
              {
                v98 = *(int **)(v143 + 84);
                v99 = *v98;
                if ( !strcmp(v97, *(const char **)(*v98 + 24)) )
                {
                  if ( sub_45640(v145, "enable") <= 0 || sub_45640(v145, "json") <= 0 )
                    *(_BYTE *)(v99 + 132) &= ~0x40u;
                  else
                    *(_BYTE *)(v99 + 132) |= 0x40u;
                }
              }
            }
          }
          goto LABEL_57;
        }
        v45 = *(int **)(v143 + 84);
        v46 = *v45;
        v47 = *(_BYTE *)(*v45 + 132);
        ++*(_DWORD *)(*v45 + 172);
        if ( (v47 & 1) == 0 )
        {
          v13 = (v47 & 0x80) == 0;
          v48 = *(_DWORD *)(v152 + 76);
          *(_DWORD *)(v46 + 32) = *(_DWORD *)(v152 + 72);
          *(_DWORD *)(v46 + 36) = v48;
          if ( v13 )
          {
            if ( !sub_454F4((_DWORD *)(v46 + 64), v145, "clock_sec", "clock_musec", 1000) )
              goto LABEL_56;
            endptrb = (char **)(v46 + 56);
            if ( !sub_454F4((_DWORD *)(v46 + 56), v145, "real_sec", "real_musec", 1000) )
              goto LABEL_56;
          }
          else
          {
            if ( !sub_454F4((_DWORD *)(v46 + 64), v145, "clock_sec", "clock_nsec", 1) )
              goto LABEL_56;
            endptrb = (char **)(v46 + 56);
            if ( !sub_454F4((_DWORD *)(v46 + 56), v145, "real_sec", "real_nsec", 1) )
              goto LABEL_56;
          }
          v108 = sub_456D4(v145, "precision", *(__int16 *)(v46 + 104));
          v109 = -32;
          v110 = *(_DWORD *)(v46 + 64) - *(_DWORD *)(v46 + 116);
          v111 = *(_DWORD *)(v46 + 108);
          v112 = *(_DWORD *)(v46 + 112);
          v146 = *(_DWORD *)(v46 + 8);
          v113 = *(_DWORD *)(v46 + 68) - *(_DWORD *)(v46 + 120);
          v114 = *(_DWORD *)(v46 + 68);
          if ( v108 >= -32 )
            v109 = v108;
          v115 = *(_DWORD *)(v46 + 120);
          *(_WORD *)(v46 + 106) = v109 & (v109 >> 31);
          if ( v114 < v115 )
            --v110;
          v116 = *(_DWORD *)(v46 + 64);
          v117 = *(_DWORD *)(v46 + 68);
          *(_DWORD *)(v46 + 48) = v116;
          *(_DWORD *)(v46 + 52) = v117;
          v118 = *(_DWORD *)(v46 + 52);
          *(_DWORD *)(v46 + 64) = v110;
          v119 = v116 - v111;
          if ( v118 < v112 )
            --v119;
          v120 = v118 - v112;
          *(_DWORD *)(v46 + 48) = v119;
          *(_DWORD *)(v46 + 52) = v120;
          v121 = *(_DWORD *)(v46 + 48);
          v122 = *(_DWORD *)(v46 + 52);
          *(_DWORD *)(v46 + 68) = v113;
          v45[58] = v121;
          v45[59] = v122;
          *(_DWORD *)(v46 + 40) = v119 + (v120 >> 31);
          *(_DWORD *)(v46 + 44) = 0;
          if ( v146 )
          {
            v123 = *(_DWORD *)(v146 + 84);
            v124 = (const char *)sub_698D0(endptrb);
            sub_441E8(v123, v124);
          }
          *(_BYTE *)(v46 + 132) = *(_BYTE *)(v46 + 132) & 0xFB
                                | (4 * (((*((unsigned __int8 *)v45 + 768) ^ 2) << 30 >> 31) & 1))
                                | 8;
        }
      }
LABEL_57:
      v49 = *(_DWORD *)(v20 + 8);
      v50 = *(_BYTE *)(v20 + 132);
      ++*(_DWORD *)(v20 + 152);
      if ( v49 && (v50 & 8) != 0 )
      {
        v79 = *(_DWORD *)(v49 + 84);
        sub_44144((__int16 *)v49, (_DWORD *)v79, *(_DWORD *)(v20 + 56), *(_DWORD *)(v20 + 60));
        *(_BYTE *)(v49 + 95) = *(_WORD *)(v20 + 106);
        v80 = *(_DWORD *)(v20 + 76);
        if ( v80 >= 8 )
          v80 = 8;
        v81 = v80 + 2;
        *(_DWORD *)(v20 + 76) = v81;
        if ( v81 == 10 && (*(_BYTE *)(v79 + 768) & 1) != 0 )
          *(_DWORD *)(v49 + 68) |= 0x80u;
        v82 = *(_DWORD *)(v20 + 176);
        v50 = *(_BYTE *)(v20 + 132) & 0xF7;
        *(_BYTE *)(v20 + 132) = v50;
        *(_DWORD *)(v20 + 176) = v82 + 1;
      }
      v51 = *(_DWORD *)(v20 + 16);
      if ( (v50 & 6) != 6 )
      {
        if ( v51 == 1 )
          goto LABEL_73;
        goto LABEL_61;
      }
      v78 = *(_DWORD *)(v20 + 80) - *(_DWORD *)(v20 + 32);
      if ( *(_DWORD *)(v20 + 84) < *(_DWORD *)(v20 + 36) )
        --v78;
      if ( v78 <= 0 )
      {
        if ( !v78 )
        {
          if ( v51 == 1 )
            goto LABEL_69;
          goto LABEL_61;
        }
        *(_BYTE *)(v20 + 132) &= ~2u;
      }
      else
      {
        *(_BYTE *)(v20 + 132) &= ~4u;
      }
      v50 = *(_BYTE *)(v20 + 132);
      if ( v51 == 1 )
        goto LABEL_68;
LABEL_61:
      if ( v51 != 2 )
        goto LABEL_103;
      if ( (v50 & 2) == 0 )
        goto LABEL_73;
      v52 = *(_DWORD *)(v20 + 72);
      if ( (v50 & 4) == 0 )
      {
        if ( v52 < 1 )
          v52 = 1;
        v75 = v52 - 1;
        *(_DWORD *)(v20 + 72) = v75;
        if ( !v75 )
        {
          if ( (v50 & 0x10) != 0 )
            goto LABEL_104;
          v76 = *(const char **)(v20 + 20);
          *(_BYTE *)(v20 + 132) |= 0x10u;
          sub_64A18(4, "%s: use TPV alone from now", v76);
LABEL_102:
          v50 = *(_BYTE *)(v20 + 132);
          if ( (v50 & 0x10) != 0 )
          {
LABEL_103:
            if ( (v50 & 2) != 0 )
            {
LABEL_104:
              sub_44144((__int16 *)v143, v151, *(_DWORD *)(v20 + 88), *(_DWORD *)(v20 + 92));
              v11 = (_BYTE *)v8;
              *(_BYTE *)(v143 + 95) = *(_WORD *)(v20 + 104);
              v77 = *(_DWORD *)(v20 + 168);
              *(_BYTE *)(v20 + 132) &= ~2u;
              *(_DWORD *)(v20 + 168) = v77 + 1;
              continue;
            }
LABEL_73:
            v11 = (_BYTE *)v8;
            continue;
          }
          goto LABEL_68;
        }
LABEL_67:
        if ( (v50 & 0x10) != 0 )
          goto LABEL_104;
        goto LABEL_68;
      }
      if ( v52 >= 57 )
        v52 = 57;
      v53 = v52 + 3;
      *(_DWORD *)(v20 + 72) = v53;
      if ( v53 != 60 )
        goto LABEL_67;
      if ( (v50 & 0x10) != 0 )
      {
        v125 = *(const char **)(v20 + 20);
        *(_BYTE *)(v20 + 132) &= ~0x10u;
        sub_64A18(6, "%s: expect valid PPS from now", v125);
        goto LABEL_102;
      }
LABEL_68:
      if ( (v50 & 6) != 6 )
        goto LABEL_73;
LABEL_69:
      sub_44144((__int16 *)v143, v151, *(_DWORD *)(v20 + 88), *(_DWORD *)(v20 + 92));
      v11 = (_BYTE *)v8;
      *(_BYTE *)(v143 + 95) = *(_WORD *)(v20 + 106);
      v54 = *(_DWORD *)(v20 + 168) + 1;
      *(_BYTE *)(v20 + 132) &= 0xF9u;
      *(_DWORD *)(v20 + 168) = v54;
LABEL_8:
      ;
    }
    while ( v10 != v3 );
  }
LABEL_18:
  result = v160[11];
  *(_DWORD *)(v142 + 3096) = &v11[-v8];
  *(_DWORD *)(v150 + 144) = 10;
  return result;
}

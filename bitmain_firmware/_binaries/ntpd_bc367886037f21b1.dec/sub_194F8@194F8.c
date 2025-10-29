int sub_194F8()
{
  int v0; // r3
  int v1; // r6
  int v2; // r0
  __int16 *v3; // r11
  int *v4; // r9
  int *v5; // r1
  __int16 *v6; // r10
  unsigned int v7; // r6
  unsigned int v8; // r5
  unsigned int v9; // r4
  int v10; // r3
  int v11; // r7
  int v12; // r4
  const __int16 *v13; // r2
  int v14; // r4
  int v15; // r7
  const char *v16; // r0
  __int16 *v17; // r5
  int *v18; // r9
  int v19; // r6
  int v20; // r6
  int v21; // r1
  int v22; // r3
  unsigned int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r9
  int v27; // r4
  __int16 *v28; // r0
  __int16 *v29; // r7
  int v30; // r5
  size_t v31; // r10
  size_t v32; // r9
  char *v33; // r4
  int v34; // r3
  int v35; // r3
  unsigned int v36; // r5
  int v37; // r5
  int v38; // r5
  int v39; // t1
  int v40; // r4
  bool v41; // zf
  int v42; // r4
  __int16 *v43; // r8
  int v44; // r1
  int v45; // t1
  int v47; // r3
  int v48; // r5
  __int16 *v49; // r4
  int v50; // r0
  int v51; // r3
  const char *v52; // r0
  __int16 *v53; // r9
  __int16 *v54; // r11
  int v55; // r0
  _DWORD *v56; // r0
  int **v57; // r3
  int v58; // r0
  int **v59; // r4
  _DWORD *v60; // r0
  _DWORD *v61; // r0
  int v62; // r5
  int v63; // r0
  _DWORD *v64; // r0
  int v65; // r0
  int v66; // r4
  int v67; // r0
  int v68; // r0
  __int16 v69; // r6
  int **v70; // r5
  int v71; // r0
  _DWORD *v72; // r0
  int v73; // r0
  int v74; // r4
  int v75; // r0
  int v76; // r0
  __int16 v77; // r6
  int **v78; // r5
  int v79; // r0
  _DWORD *v80; // r0
  int **v81; // r4
  __int16 v82; // r5
  int v83; // r0
  _DWORD *v84; // r0
  int v85; // r4
  __int16 v86; // r6
  int **v87; // r5
  int v88; // r0
  _DWORD *v89; // r0
  _DWORD *v90; // r0
  unsigned __int64 v91; // kr00_8
  _DWORD *v92; // r0
  _DWORD *v93; // r4
  _DWORD *v94; // r0
  int v95; // r4
  __int16 v96; // r6
  int **v97; // r5
  int v98; // r0
  _DWORD *v99; // r0
  _DWORD *v100; // r0
  _DWORD *v101; // r4
  _DWORD *v102; // r0
  _DWORD *v103; // r0
  int **v104; // r0
  int v105; // r4
  unsigned int v106; // r3
  int v107; // r0
  int v108; // r4
  int v109; // r0
  _DWORD *v110; // r0
  _DWORD *v111; // r0
  _DWORD *v112; // r0
  _DWORD *v113; // r0
  int **v114; // r1
  _DWORD *v115; // r0
  int **v116; // r1
  _DWORD *v117; // r0
  _DWORD *v118; // r1
  int v119; // r0
  _DWORD *v120; // r0
  _DWORD *v121; // r0
  _DWORD *v122; // r0
  _DWORD *v123; // r0
  _DWORD *v124; // r0
  _DWORD *v125; // r0
  const char *v126; // r0
  const char *v127; // r0
  const char *v128; // r4
  unsigned int v129; // [sp+14h] [bp-938h]
  char *src; // [sp+18h] [bp-934h]
  int v131; // [sp+1Ch] [bp-930h]
  int v132; // [sp+1Ch] [bp-930h]
  __int16 *v133; // [sp+1Ch] [bp-930h]
  int v134; // [sp+1Ch] [bp-930h]
  int v135; // [sp+24h] [bp-928h]
  int v136; // [sp+28h] [bp-924h]
  int v137; // [sp+30h] [bp-91Ch]
  int v138; // [sp+58h] [bp-8F4h]
  int v139; // [sp+58h] [bp-8F4h]
  int v140; // [sp+58h] [bp-8F4h]
  int v141; // [sp+5Ch] [bp-8F0h]
  void *v142; // [sp+68h] [bp-8E4h] BYREF
  unsigned int v143; // [sp+6Ch] [bp-8E0h] BYREF
  _WORD ptr[4]; // [sp+70h] [bp-8DCh] BYREF
  _BYTE v145[1600]; // [sp+200h] [bp-74Ch] BYREF
  _BYTE v146[124]; // [sp+844h] [bp-108h] BYREF
  char v147[128]; // [sp+8C4h] [bp-88h] BYREF

  v142 = v146;
  v143 = 128;
  v0 = yydebug;
  if ( yydebug )
  {
    fwrite("Starting parse\n", 1u, 0xFu, stderr);
    v0 = yydebug;
  }
  v1 = 0;
  v2 = -2;
  yynerrs = 0;
  v3 = ptr;
  v135 = 0;
  v4 = (int *)v145;
  v5 = &yychar;
  ptr[0] = 0;
  v129 = 200;
  src = v145;
  yychar = -2;
  v6 = ptr;
  if ( v0 )
    goto LABEL_39;
  while ( 1 )
  {
    if ( v1 == 216 )
    {
      v42 = 0;
      v43 = v6;
      goto LABEL_64;
    }
    v7 = 2 * v1;
    v8 = asc_8DCA0[v7 / 2];
    v9 = v8;
    if ( v8 == -215 )
    {
LABEL_14:
      v13 = "\v";
      v14 = *(unsigned __int16 *)((char *)&unk_8EC34 + v7);
      if ( *(_WORD *)((char *)&unk_8EC34 + v7) )
        goto LABEL_15;
      v34 = yychar;
      if ( yychar == -2 )
      {
        v14 = -2;
      }
      else
      {
        if ( (unsigned int)yychar > 0x1C9 )
          v14 = 2;
        else
          v13 = (__int16 *)("\v" + yychar);
        if ( (unsigned int)yychar <= 0x1C9 )
          v14 = *((unsigned __int8 *)v13 + 2200);
      }
      if ( v135 )
      {
        if ( v135 == 3 )
        {
          if ( yychar > 0 )
          {
            sub_18F50("Error: discarding", v14);
            yychar = -2;
          }
          else if ( !yychar )
          {
            v42 = 1;
            v43 = v6;
            goto LABEL_84;
          }
        }
      }
      else
      {
        ++yynerrs;
        v50 = sub_190FC(&v143, (_BYTE **)&v142, v6, v14);
        v51 = v50;
        if ( v50 )
        {
          if ( v50 == 1 )
          {
            if ( v142 != v146 )
              free(v142);
            v142 = (void *)sub_637E4(0, v143, 0, 0);
            if ( !v142 )
            {
              v53 = v3;
              v54 = v6;
              v142 = v146;
              v143 = 128;
              sub_19420("syntax error");
              goto LABEL_106;
            }
            v51 = sub_190FC(&v143, (_BYTE **)&v142, v6, v14);
            v52 = (const char *)v142;
          }
          else
          {
            v52 = "syntax error";
          }
          v134 = v51;
          sub_19420(v52);
          if ( v134 == 2 )
            goto LABEL_105;
        }
        else
        {
          sub_19420((const char *)v142);
        }
      }
      v35 = v7;
      while ( 1 )
      {
        if ( v8 != -215 )
        {
          v36 = v8 + 1;
          if ( v36 <= 0x296 )
          {
            v37 = 2 * v36;
            if ( *(_WORD *)((char *)&unk_8E008 + v37) == 1 && *(__int16 *)((char *)&unk_8E704 + v37) > 0 )
              break;
          }
        }
        if ( v3 == v6 )
        {
          v3 = v6;
          v42 = 1;
          v43 = v6;
          goto LABEL_64;
        }
        v4 -= 2;
        sub_18F50("Error: popping", *(unsigned __int16 *)((char *)&word_8F0E4[326] + v35));
        v39 = *--v6;
        v38 = v39;
        if ( yydebug )
          sub_18DD8(v3, (unsigned int)v6);
        v35 = 2 * v38;
        v8 = asc_8DCA0[v38];
      }
      v40 = *(__int16 *)((char *)&unk_8E704 + v37);
      v2 = yydebug;
      v41 = yydebug == 0;
      *((double *)v4 + 1) = yylval;
      v4 += 2;
      if ( v41 )
      {
        v17 = v6;
        v1 = v40;
        v135 = 3;
      }
      else
      {
        v1 = v40;
        v135 = 3;
        v17 = v6;
        _fprintf_chk(stderr, 1, "%s ", "Shifting");
        sub_18EA8(stderr, word_8F0E4[v40 + 326]);
        v2 = fputc(10, stderr);
      }
      goto LABEL_27;
    }
    v2 = yychar;
    v10 = yydebug;
    if ( yychar == -2 )
    {
      if ( yydebug )
        fwrite("Reading a token: ", 1u, 0x11u, stderr);
      v2 = sub_1C38C();
      v10 = yydebug;
      yychar = v2;
    }
    if ( v2 <= 0 )
    {
      v11 = 0;
      yychar = 0;
      if ( v10 )
        v2 = fwrite("Now at end of input.\n", 1u, 0x15u, stderr);
      else
        v11 = 0;
    }
    else if ( v2 <= 457 )
    {
      v2 += (int)"\v";
      v11 = *(unsigned __int8 *)(v2 + 2200);
      v9 = v8 + v11;
      if ( v10 )
        goto LABEL_82;
    }
    else
    {
      v11 = 2;
      v9 = v8 + 2;
      if ( v10 )
      {
LABEL_82:
        _fprintf_chk(stderr, 1, "%s ", "Next token is");
        sub_18EA8(stderr, v11);
        v2 = fputc(10, stderr);
      }
    }
    if ( v9 > 0x296 )
      goto LABEL_14;
    v12 = 2 * v9;
    v131 = *(__int16 *)((char *)&unk_8E008 + v12);
    if ( v131 != v11 )
      goto LABEL_14;
    v47 = *(__int16 *)((char *)&unk_8E704 + v12);
    v1 = v47;
    if ( v47 <= 0 )
    {
      v14 = -v47;
LABEL_15:
      v15 = (unsigned __int8)aFilegenNolinkR[v14 - 3288];
      v132 = v4[2 * (1 - v15)];
      v136 = v4[2 * (1 - v15) + 1];
      if ( yydebug )
      {
        v137 = v14;
        v2 = _fprintf_chk(stderr, 1, "Reducing stack by rule %d (line %lu):\n", v14 - 1, word_8F0E4[v14]);
        if ( v15 )
        {
          v141 = v14;
          v48 = 0;
          v49 = &v6[-v15];
          do
          {
            ++v48;
            ++v49;
            _fprintf_chk(stderr, 1, "   $%d = ", v48);
            sub_18EA8(stderr, word_8F0E4[v49[(__int16)v15 - v15] + 326]);
            v2 = fputc(10, stderr);
          }
          while ( v15 != v48 );
          v14 = v141;
        }
      }
      else
      {
        v137 = v14;
      }
      switch ( v14 )
      {
        case 5:
          v55 = sub_1C25C();
          sub_64A18(
            3,
            "syntax error in %s line %d, column %d",
            (const char *)(v55 + 48),
            *(_DWORD *)(v55 + 40),
            *(_DWORD *)(v55 + 44));
          break;
        case 20:
          v117 = (_DWORD *)sub_F494(*(v4 - 4), *(v4 - 2), (int **)*v4);
          unk_10644C = sub_ED94(unk_10644C, v117);
          break;
        case 27:
          v132 = sub_F32C(*v4, *(v4 - 2));
          break;
        case 28:
          v132 = sub_F32C(*v4, 0);
          break;
        case 29:
          v132 = 2;
          break;
        case 30:
          v132 = 10;
          break;
        case 31:
        case 71:
        case 111:
        case 257:
          v132 = 0;
          break;
        case 32:
        case 72:
        case 81:
        case 112:
        case 157:
        case 163:
        case 175:
        case 189:
        case 197:
        case 214:
        case 258:
        case 261:
        case 287:
        case 294:
        case 309:
        case 314:
          v132 = (int)sub_ED94((_DWORD *)*(v4 - 2), (_DWORD *)*v4);
          break;
        case 36:
        case 116:
        case 199:
          goto LABEL_185;
        case 45:
        case 159:
        case 165:
        case 178:
        case 191:
        case 259:
          goto LABEL_130;
        case 46:
          v132 = (int)sub_F0EC(*(v4 - 2), *v4);
          break;
        case 53:
        case 73:
        case 180:
        case 181:
          goto LABEL_157;
        case 55:
          v118 = (_DWORD *)sub_F7A0((_DWORD *)*v4);
          if ( v118 )
            unk_106450 = sub_ED94(unk_106450, v118);
          break;
        case 58:
          unk_106454 = 1;
          break;
        case 59:
          unk_106458 = sub_EE2C(unk_106458, (_DWORD *)*v4);
          break;
        case 60:
          unk_10645C = sub_EE2C(unk_10645C, (_DWORD *)*v4);
          break;
        case 61:
          dword_1064D8 = *v4;
          break;
        case 62:
        case 230:
          v113 = sub_F07C(*(v4 - 2), *v4);
          dword_1064C8 = sub_ED94(dword_1064C8, v113);
          break;
        case 63:
          unk_106490 = *v4;
          break;
        case 64:
          v114 = (int **)*v4;
          ++unk_106494;
          unk_106498 = sub_EE2C(unk_106498, v114);
          break;
        case 65:
          unk_10649C = *v4;
          break;
        case 66:
          unk_1064A0 = *v4;
          break;
        case 67:
          unk_1064A4 = *v4;
          break;
        case 68:
          unk_1064A8 = *v4;
          break;
        case 69:
          v115 = (_DWORD *)sub_EED4(unk_1064AC, (void (**)(void *))destroy_attr_val);
          v116 = (int **)*v4;
          unk_1064AC = v115;
          unk_1064AC = sub_EE2C(v115, v116);
          break;
        case 70:
          unk_1064B0 = *v4;
          break;
        case 74:
          v132 = 0;
          unk_1064A8 = *v4;
          sub_64A18(4, "'crypto revoke %d' is deprecated, please use 'revoke %d' instead.", unk_1064A8, unk_1064A8);
          break;
        case 80:
          unk_106460 = sub_EE2C(unk_106460, (_DWORD *)*v4);
          break;
        case 82:
        case 158:
        case 164:
        case 176:
        case 190:
        case 198:
        case 215:
        case 262:
        case 288:
        case 295:
        case 310:
        case 315:
          v132 = (int)sub_ED94(0, (_DWORD *)*v4);
          break;
        case 83:
        case 84:
        case 85:
        case 177:
        case 216:
          v132 = sub_F004(*(v4 - 2));
          break;
        case 86:
          v132 = (int)sub_F07C(267, *v4);
          break;
        case 98:
          unk_106464 = sub_EE2C(unk_106464, (_DWORD *)*v4);
          break;
        case 99:
          if ( sub_1C1F4(v2, v5) )
          {
            unk_106468 = *v4;
          }
          else
          {
            free((void *)*v4);
            sub_19420("statsdir remote configuration ignored");
          }
          break;
        case 100:
          v103 = (_DWORD *)sub_F87C(*(v4 - 2), *v4);
          unk_10646C = sub_ED94(unk_10646C, v103);
          break;
        case 101:
        case 139:
        case 276:
        case 285:
          v101 = (_DWORD *)*(v4 - 2);
          v102 = (_DWORD *)sub_F26C(*v4);
          v132 = (int)sub_ED94(v101, v102);
          break;
        case 102:
        case 277:
        case 286:
          v100 = (_DWORD *)sub_F26C(*v4);
          v132 = (int)sub_ED94(0, v100);
          break;
        case 113:
          if ( sub_1C1F4(v2, v5) )
          {
LABEL_157:
            v132 = (int)sub_F1D4(*(v4 - 2), *v4);
          }
          else
          {
            v132 = 0;
            free((void *)*v4);
            sub_19420("filegen file remote config ignored");
          }
          break;
        case 114:
          if ( sub_1C1F4(v2, v5) )
            goto LABEL_130;
          v132 = 0;
          sub_19420("filegen type remote config ignored");
          break;
        case 115:
          if ( sub_1C1F4(v2, v5) )
            goto LABEL_185;
          v132 = 0;
          if ( *v4 == 337 )
            v16 = "filegen link remote config ignored";
          else
            v16 = "filegen nolink remote config ignored";
          sub_19420(v16);
          break;
        case 128:
          unk_106470 = sub_EE2C(unk_106470, (_DWORD *)*v4);
          break;
        case 129:
          unk_106474 = sub_EE2C(unk_106474, (_DWORD *)*v4);
          break;
        case 130:
          v95 = *(v4 - 4);
          v96 = *((_WORD *)v4 - 4);
          v97 = (int **)*v4;
          v98 = sub_1C25C();
          v99 = (_DWORD *)sub_F8E4(v95, 0, v96, (int)v97, *(_DWORD *)(v98 + 16));
          unk_106478 = sub_ED94(unk_106478, v99);
          break;
        case 131:
          v85 = *(v4 - 8);
          v86 = *((_WORD *)v4 - 4);
          v140 = *(v4 - 4);
          v87 = (int **)*v4;
          v88 = sub_1C25C();
          v89 = (_DWORD *)sub_F8E4(v85, v140, v86, (int)v87, *(_DWORD *)(v88 + 16));
          unk_106478 = sub_ED94(unk_106478, v89);
          break;
        case 132:
          v81 = (int **)*v4;
          v82 = *((_WORD *)v4 - 4);
          v83 = sub_1C25C();
          v84 = (_DWORD *)sub_F8E4(0, 0, v82, (int)v81, *(_DWORD *)(v83 + 16));
          unk_106478 = sub_ED94(unk_106478, v84);
          break;
        case 133:
          v73 = sub_63948("0.0.0.0");
          v74 = sub_F32C(v73, 2);
          v75 = sub_63948("0.0.0.0");
          v76 = sub_F32C(v75, 2);
          v77 = *((_WORD *)v4 - 4);
          v78 = (int **)*v4;
          v139 = v76;
          v79 = sub_1C25C();
          v80 = (_DWORD *)sub_F8E4(v74, v139, v77, (int)v78, *(_DWORD *)(v79 + 16));
          unk_106478 = sub_ED94(unk_106478, v80);
          break;
        case 134:
          v65 = sub_63948("::");
          v66 = sub_F32C(v65, 10);
          v67 = sub_63948("::");
          v68 = sub_F32C(v67, 10);
          v69 = *((_WORD *)v4 - 4);
          v70 = (int **)*v4;
          v138 = v68;
          v71 = sub_1C25C();
          v72 = (_DWORD *)sub_F8E4(v66, v138, v69, (int)v70, *(_DWORD *)(v71 + 16));
          unk_106478 = sub_ED94(unk_106478, v72);
          break;
        case 135:
          v59 = (int **)*v4;
          v60 = (_DWORD *)sub_F26C(*(v4 - 4));
          v61 = sub_ED94(v59, v60);
          LOWORD(v59) = *((_WORD *)v4 - 4);
          *v4 = (int)v61;
          v62 = (int)v61;
          v63 = sub_1C25C();
          v64 = (_DWORD *)sub_F8E4(0, 0, (__int16)v59, v62, *(_DWORD *)(v63 + 16));
          unk_106478 = sub_ED94(unk_106478, v64);
          break;
        case 136:
          v132 = -1;
          break;
        case 137:
          v57 = (int **)*v4;
          if ( (unsigned int)(*v4 + 1) > 0x65 )
          {
            v58 = sub_1C25C();
            sub_64A18(
              3,
              "Unreasonable ippeerlimit value (%d) in %s line %d, column %d.  Using 0.",
              *v4,
              (const char *)(v58 + 48),
              *(_DWORD *)(v58 + 40),
              *(_DWORD *)(v58 + 44));
            v57 = 0;
            *v4 = 0;
          }
          v132 = (int)v57;
          break;
        case 138:
          v132 = 0;
          break;
        case 174:
          v56 = (_DWORD *)sub_FA90(*(v4 - 2), *v4);
          unk_10647C = sub_ED94(unk_10647C, v56);
          break;
        case 179:
          if ( (unsigned int)*v4 > 0x10 )
          {
            v132 = 0;
            sub_19420("fudge factor: stratum value not in [0..16], ignored");
          }
          else
          {
LABEL_130:
            v132 = (int)sub_F07C(*(v4 - 2), *v4);
          }
          break;
        case 188:
          unk_106480 = sub_EE2C(unk_106480, (_DWORD *)*v4);
          break;
        case 195:
          unk_106488 = sub_EE2C(unk_106488, (_DWORD *)*v4);
          break;
        case 196:
          unk_10648C = sub_EE2C(unk_10648C, (_DWORD *)*v4);
          break;
        case 200:
          if ( sub_1C1F4(v2, v5) )
          {
LABEL_185:
            v132 = (int)sub_F07C(446, *v4);
          }
          else
          {
            v132 = 0;
            v126 = (const char *)sub_1BE60(*v4);
            sub_6BCB0(v147, 128, "enable/disable %s remote configuration ignored", v126);
            sub_19420(v147);
          }
          break;
        case 213:
          unk_106484 = sub_EE2C(unk_106484, (_DWORD *)*v4);
          break;
        case 229:
          v112 = (_DWORD *)sub_F004(*(v4 - 2));
          dword_1064C8 = sub_ED94(dword_1064C8, v112);
          break;
        case 231:
          goto LABEL_180;
        case 232:
          if ( sub_1C1F4(v2, v5) )
          {
LABEL_180:
            v111 = sub_F1D4(*(v4 - 2), *v4);
            dword_1064C8 = sub_ED94(dword_1064C8, v111);
          }
          else
          {
            free((void *)*v4);
            v127 = (const char *)sub_1BE60(*(v4 - 2));
            sub_6BCB0(v147, 64, "%s remote config ignored", v127);
            sub_19420(v147);
          }
          break;
        case 233:
          if ( sub_1C1F4(v2, v5) )
          {
            if ( (unsigned int)sub_1C180() <= 5 )
            {
              v128 = (const char *)sub_639B8(*(v4 - 2));
              if ( !sub_1C08C(v128, "r") )
              {
                _fprintf_chk(stderr, 1, "getconfig: Couldn't open <%s>\n", v128);
                sub_64A18(3, "getconfig: Couldn't open <%s>", v128);
              }
            }
            else
            {
              fwrite("getconfig: Maximum include file level exceeded.\n", 1u, 0x30u, stderr);
              sub_64A18(3, "getconfig: Maximum include file level exceeded.");
            }
            free((void *)*(v4 - 2));
          }
          else
          {
            free((void *)*(v4 - 2));
            sub_19420("remote includefile ignored");
          }
          break;
        case 234:
          sub_1BFF0();
          break;
        case 236:
          unk_1064B4 = sub_EE2C(unk_1064B4, (_DWORD *)*v4);
          break;
        case 237:
          unk_1064B8 = sub_EE2C(unk_1064B8, (_DWORD *)*v4);
          break;
        case 238:
          unk_1064BC = sub_ED94(unk_1064BC, (_DWORD *)*v4);
          break;
        case 239:
          v110 = (_DWORD *)sub_FA90(*(v4 - 2), *v4);
          dword_1064C4 = sub_ED94(dword_1064C4, v110);
          break;
        case 240:
          dword_1064C0 = sub_EE2C(dword_1064C0, (_DWORD *)*v4);
          break;
        case 245:
          sub_19420("Built without LEAP_SMEAR support.");
          break;
        case 251:
          if ( sub_1C1F4(v2, v5) )
          {
            v123 = sub_F1D4(290, *v4);
            dword_1064C8 = sub_ED94(dword_1064C8, v123);
          }
          else
          {
            free((void *)*v4);
            sub_19420("driftfile remote configuration ignored");
          }
          break;
        case 252:
          if ( sub_1C1F4(v2, v5) )
          {
            v121 = sub_F1D4(290, *(v4 - 2));
            dword_1064C8 = sub_ED94(dword_1064C8, v121);
            v122 = (_DWORD *)sub_F004(441);
            dword_1064C8 = sub_ED94(dword_1064C8, v122);
            sub_64A18(
              4,
              "'driftfile FILENAME WanderValue' is deprecated, please use separate 'driftfile FILENAME' and 'nonvolatile "
              "WanderValue' lines instead.");
          }
          else
          {
            free((void *)*(v4 - 2));
            sub_19420("driftfile remote configuration ignored");
          }
          break;
        case 253:
          if ( sub_1C1F4(v2, v5) )
          {
            v119 = sub_63948(byte_97B44);
            v120 = sub_F1D4(290, v119);
            dword_1064C8 = sub_ED94(dword_1064C8, v120);
          }
          else
          {
            sub_19420("driftfile remote configuration ignored");
          }
          break;
        case 254:
          v132 = (int)sub_F964((const char *)*(v4 - 6), *(v4 - 2), *v4);
          break;
        case 256:
        case 298:
          v132 = 0;
          break;
        case 260:
          v108 = *(v4 - 2);
          v109 = sub_63948(*(_DWORD *)(*v4 + 4));
          v132 = (int)sub_F1D4(v108, v109);
          sub_F3F4((_DWORD *)*v4);
          break;
        case 263:
          v104 = (int **)*v4;
          v105 = *(unsigned __int8 *)*v4;
          v106 = (unsigned __int8)(v105 - 43);
          if ( v106 <= 0x12 && ((1 << v106) & 0x40005) != 0 )
            v104 = (int **)((char *)v104 + 1);
          else
            v105 = 61;
          v107 = sub_63948(v104);
          v132 = (int)sub_F1D4(v105, v107);
          free((void *)*v4);
          break;
        case 264:
          v124 = sub_F9E8(*v4, 0, *(v4 - 2));
          dword_1064CC = sub_ED94(dword_1064CC, v124);
          break;
        case 265:
          v125 = sub_F9E8(0, *v4, *(v4 - 2));
          dword_1064CC = sub_ED94(dword_1064CC, v125);
          break;
        case 275:
          dword_1064D0 = sub_EE2C(dword_1064D0, (_DWORD *)*v4);
          break;
        case 289:
          v132 = (int)sub_F07C(105, *v4);
          break;
        case 291:
          v132 = (int)sub_F15C(45, *(v4 - 6), *(v4 - 2));
          break;
        case 292:
          v93 = (_DWORD *)*(v4 - 2);
          v94 = (_DWORD *)sub_F2CC(*v4);
          v132 = (int)sub_ED94(v93, v94);
          break;
        case 293:
          v92 = (_DWORD *)sub_F2CC(*v4);
          v132 = (int)sub_ED94(0, v92);
          break;
        case 296:
          if ( (unsigned int)*v4 > 1 )
          {
            v132 = 1;
            sub_19420("Integer value is not boolean (0 or 1). Assuming 1");
          }
          else
          {
            v132 = *v4;
          }
          break;
        case 297:
          v132 = 1;
          break;
        case 299:
          *(double *)&v91 = (double)*v4;
          v136 = HIDWORD(v91);
          v132 = v91;
          break;
        case 301:
          v132 = sub_66AB8(*v4);
          free((void *)*v4);
          break;
        case 302:
          v90 = (_DWORD *)sub_FAF8(*(v4 - 4), *(v4 - 2));
          dword_1064D4 = sub_ED94(dword_1064D4, v90);
          old_config_style = 1;
          break;
        case 303:
          old_config_style = 0;
          break;
        case 304:
        case 317:
          v132 = (int)sub_ED94((_DWORD *)*(v4 - 4), (_DWORD *)*(v4 - 2));
          break;
        case 305:
        case 318:
          v132 = (int)sub_ED94(0, (_DWORD *)*(v4 - 2));
          break;
        case 306:
        case 319:
          v132 = sub_F004(*(v4 - 4));
          break;
        case 311:
          v132 = 0;
          break;
        case 312:
          v132 = *(v4 - 2);
          v136 = *(v4 - 1);
          break;
        case 313:
          v132 = *v4;
          break;
        case 316:
          v132 = 0;
          break;
        default:
          break;
      }
      v17 = &v6[-(__int16)v15];
      v18 = &v4[-2 * (__int16)v15];
      v19 = word_8F0E4[v137 + 762];
      if ( yydebug )
      {
        _fprintf_chk(stderr, 1, "%s ", "-> $$ =");
        sub_18EA8(stderr, v19);
        fputc(10, stderr);
        if ( yydebug )
          sub_18DD8(v3, (unsigned int)v17);
      }
      v4 = v18 + 2;
      v20 = v19 - 208;
      v21 = *v17;
      v2 = v136;
      v22 = (__int16)word_8F0E4[v20 + 1088];
      *v4 = v132;
      v23 = v22 + v21;
      v4[1] = v136;
      if ( v23 <= 0x296 && (v24 = 2 * v23, *(__int16 *)((char *)&unk_8E008 + v24) == v21) )
        v1 = *(__int16 *)((char *)&unk_8E704 + v24);
      else
        v1 = (__int16)word_8F0E4[v20 + 1196];
      goto LABEL_27;
    }
    if ( v135 )
      --v135;
    if ( yydebug )
    {
      _fprintf_chk(stderr, 1, "%s ", "Shifting");
      sub_18EA8(stderr, v131);
      v2 = fputc(10, stderr);
    }
    v17 = v6;
    v4 += 2;
    yychar = -2;
    *(double *)v4 = yylval;
LABEL_27:
    v5 = (int *)v129;
    v6 = v17 + 1;
    v17[1] = v1;
    v25 = 2 * (v129 + 0x7FFFFFFF);
    if ( v17 + 1 < &v3[v25 / 2u] )
    {
      v33 = src;
      v133 = v3;
      goto LABEL_38;
    }
    v26 = v6 - v3 + 1;
    if ( v129 >= 0x3E8
      || ((unsigned int)(v25 + 2) >= 0x3E8 ? (v27 = 1000) : (v27 = v25 + 2),
          v129 = v27,
          v28 = (__int16 *)sub_637E4(0, 10 * v27 + 7, 0, 0),
          (v29 = v28) == 0) )
    {
LABEL_105:
      v53 = v3;
      v54 = v6;
LABEL_106:
      v43 = v54;
      v42 = 2;
      v3 = v53;
      sub_19420("memory exhausted");
      goto LABEL_64;
    }
    v30 = v27;
    v31 = v26;
    v32 = 8 * v26;
    v33 = (char *)v28 + ((2 * v27 + 7) & 0xFFFFFFF8);
    v133 = v28;
    memcpy(v28, v3, v31 * 2);
    v2 = (int)memcpy(v33, src, v32);
    if ( v3 != ptr )
      free(v3);
    v6 = &v29[v31 - 1];
    v4 = (int *)&v33[v32 - 8];
    if ( yydebug )
      v2 = _fprintf_chk(stderr, 1, "Stack size increased to %lu\n", v129);
    if ( v6 >= &v29[v30 - 1] )
      break;
LABEL_38:
    src = v33;
    v3 = v133;
    if ( yydebug )
LABEL_39:
      v2 = _fprintf_chk(stderr, 1, "Entering state %d\n", v1);
  }
  v42 = 1;
  v43 = v6;
  v3 = v29;
LABEL_64:
  v34 = yychar;
  if ( yychar == -2 )
    goto LABEL_69;
  if ( (unsigned int)yychar > 0x1C9 )
  {
    v44 = 2;
    goto LABEL_68;
  }
LABEL_84:
  v44 = *((unsigned __int8 *)&asc_8DCA0[1100] + v34);
LABEL_68:
  sub_18F50("Cleanup: discarding lookahead", v44);
LABEL_69:
  if ( yydebug )
    sub_18DD8(v3, (unsigned int)v43);
  while ( v43 != v3 )
  {
    v45 = *v43--;
    sub_18F50("Cleanup: popping", word_8F0E4[v45 + 326]);
  }
  if ( v3 != ptr )
    free(v3);
  if ( v142 != v146 )
    free(v142);
  return v42;
}

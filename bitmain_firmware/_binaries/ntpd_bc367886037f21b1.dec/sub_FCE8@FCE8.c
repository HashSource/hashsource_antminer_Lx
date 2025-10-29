int __fastcall sub_FCE8(int a1)
{
  void *v2; // r0
  int *v3; // r2
  FILE *v4; // r0
  int v5; // r0
  int v6; // r4
  _DWORD *v7; // r3
  _DWORD *v8; // r4
  const char *v9; // r0
  int v10; // r10
  char *v11; // r5
  char *v12; // r0
  int v13; // r3
  char *v14; // r11
  int v15; // r0
  int v16; // r1
  char *v17; // r1
  _DWORD *v18; // r3
  _DWORD *v19; // r4
  char *v20; // r7
  int v21; // r0
  _DWORD *v22; // r3
  _DWORD *v23; // r7
  char *v24; // r9
  int v25; // r0
  _DWORD *v26; // r2
  int v27; // r3
  int v28; // r5
  _DWORD *v29; // r12
  int v30; // r1
  int v31; // r1
  _DWORD *v32; // r3
  _DWORD *v33; // r4
  int v34; // r0
  int v35; // r1
  int v36; // r1
  int v37; // r3
  int v38; // r3
  _DWORD *v39; // r0
  _DWORD *v40; // r3
  int v41; // r0
  int v42; // r2
  int v43; // r6
  bool v44; // r1
  int v46; // r2
  int v47; // r2
  _DWORD *v48; // r3
  _DWORD *v49; // r4
  int v50; // r9
  bool v51; // cc
  int v52; // r3
  int v53; // r8
  int v54; // r2
  double **v55; // r0
  int v56; // r6
  int v57; // r5
  int v58; // r7
  double *v59; // r4
  double v60; // d16
  int v61; // r3
  bool v62; // cc
  _DWORD *v63; // r3
  _DWORD *v64; // r4
  int v65; // r1
  int v66; // r0
  double v67; // d16
  int v68; // r0
  int **v69; // r3
  int *v70; // r4
  int v71; // r0
  _DWORD *v72; // r3
  _DWORD *v73; // r4
  int v74; // r0
  int v75; // r0
  int v76; // r3
  int ***v77; // r1
  unsigned int v78; // r3
  int v79; // r3
  int v80; // r3
  int ***v81; // r3
  int **i; // r11
  int *v83; // r3
  int v84; // r9
  _DWORD *v85; // r2
  int v86; // r5
  int v87; // r7
  int v88; // r1
  int *v89; // r3
  const char *v90; // r6
  int *v91; // r2
  int v92; // r0
  int *v93; // r0
  int v94; // r12
  const char *v95; // r0
  struct addrinfo *v96; // r4
  int v97; // r1
  int v98; // r3
  int *v99; // r3
  int v100; // r0
  _DWORD *v101; // r3
  _DWORD *v102; // r4
  int v103; // r0
  int v104; // r1
  unsigned int v105; // r2
  const char *v106; // r0
  _DWORD *v107; // r3
  _DWORD *v108; // r4
  int v109; // r1
  int v110; // r2
  double v111; // r0
  int ***v112; // r3
  int **j; // r4
  int v114; // r1
  _DWORD *v115; // r3
  _DWORD *v116; // r4
  unsigned int v117; // r5
  int ***v118; // r3
  int **v119; // r4
  void *v120; // r6
  size_t v121; // r5
  size_t v122; // r5
  _DWORD *v123; // r3
  _DWORD *v124; // r4
  unsigned int v125; // r5
  int v126; // r3
  double **v127; // r3
  double *k; // r4
  int v129; // r2
  const char *v130; // r6
  int v131; // r6
  int v132; // r0
  const char *v133; // r3
  int result; // r0
  _DWORD *v135; // r3
  _DWORD *v136; // r4
  _DWORD *v137; // r3
  _DWORD *v138; // r5
  unsigned int v139; // r11
  int v140; // r6
  int v141; // r7
  int v142; // r3
  int v143; // r2
  _DWORD *v144; // r0
  _DWORD *v145; // r6
  int v146; // t1
  int v147; // r2
  int v148; // r3
  int v149; // r12
  int v150; // r2
  int v151; // r3
  int v152; // r1
  int **v153; // r3
  int *m; // r4
  int v155; // r0
  void **v156; // r3
  _DWORD *v157; // r4
  int v158; // r0
  _DWORD *v159; // r3
  int v160; // r3
  int *v161; // r0
  int v162; // lr
  int v163; // r0
  int **v164; // r3
  int *v165; // r4
  int v166; // r8
  int v167; // r0
  int v168; // r1
  unsigned int v169; // r0
  int v170; // r3
  int v171; // r0
  __int64 v172; // r2
  int v173; // r6
  unsigned int v174; // r0
  int v175; // r2
  int v176; // r3
  int v177; // r0
  int v178; // r7
  int v179; // r0
  int ***v180; // r3
  int **n; // r4
  int *v182; // r3
  const char *v183; // r6
  _DWORD *v184; // r5
  const char *v185; // r0
  int v186; // lr
  _DWORD *v187; // r3
  _DWORD *v188; // r8
  int v189; // r10
  int v190; // r1
  _DWORD *v191; // r3
  _DWORD *v192; // r4
  char v193; // r2
  _DWORD *v194; // r3
  _DWORD *v195; // r3
  _DWORD *v196; // r4
  int v197; // r3
  bool v198; // zf
  int v199; // r6
  unsigned int v200; // r0
  unsigned int v201; // r0
  char v202; // r2
  char v203; // r2
  char v204; // r2
  const char *v205; // r11
  const char *v206; // r0
  int *v207; // r0
  int v208; // r4
  int v209; // r0
  int v210; // r2
  int v211; // r3
  int v212; // r6
  const char *v213; // r0
  int v214; // r6
  int v215; // r0
  int v216; // r3
  int v217; // r2
  int v218; // r5
  const char *v219; // r0
  bool v220; // cc
  _DWORD *v221; // r2
  _DWORD *v222; // r4
  int v223; // r6
  unsigned int v224; // r0
  int v225; // r0
  char *v226; // r1
  int v227; // r2
  int v228; // r0
  const char *v229; // r0
  int v230; // r0
  int v231; // r0
  int v232; // [sp+0h] [bp-DCh]
  const char *v233; // [sp+4h] [bp-D8h]
  int v234; // [sp+24h] [bp-B8h]
  _DWORD *v235; // [sp+30h] [bp-ACh]
  struct addrinfo *pai; // [sp+44h] [bp-98h] BYREF
  _BYTE req[72]; // [sp+48h] [bp-94h] BYREF
  __int64 v238; // [sp+94h] [bp-48h] BYREF
  int v239; // [sp+9Ch] [bp-40h]
  __int64 v240; // [sp+A0h] [bp-3Ch]
  __int64 v241; // [sp+A8h] [bp-34h]
  _DWORD v242[7]; // [sp+B0h] [bp-2Ch] BYREF
  char v243[8]; // [sp+CCh] [bp-10h] BYREF

  v235 = (_DWORD *)sub_637E4(0, 184, 0, 0);
  memcpy(v235, &cfgt, 0xB8u);
  v2 = memset(&cfgt, 0, 0xB8u);
  v3 = (int *)cfg_tree_history;
  if ( cfg_tree_history )
  {
    while ( *v3 )
      v3 = (int *)*v3;
  }
  else
  {
    v3 = &cfg_tree_history;
  }
  *v235 = 0;
  *v3 = (int)v235;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B511C) & 0xF) != 0 )
  {
    v4 = (FILE *)fopen64(*(int *)((char *)&elf_hash_bucket[263] + (_DWORD)off_B511C), "w");
    if ( v4 )
    {
      v5 = sub_ED04(v4, 0);
      v6 = v5;
      if ( v5 )
        _fprintf_chk(
          stderr,
          1,
          "--saveconfigquit %s error %d\n",
          *(const char **)((char *)&elf_hash_bucket[263] + (_DWORD)off_B511C),
          v5);
      else
        _fprintf_chk(
          stderr,
          1,
          "configuration saved to %s\n",
          *(const char **)((char *)&elf_hash_bucket[263] + (_DWORD)off_B511C));
      exit(v6);
    }
    v207 = _errno_location();
    v208 = *v207;
    sub_648DC(
      stderr,
      "can not create save file %s, error %d %m\n",
      *(const char **)((char *)&elf_hash_bucket[263] + (_DWORD)off_B511C),
      *v207);
    exit(v208);
  }
  if ( a1 )
  {
    v221 = (_DWORD *)v235[14];
    if ( v221 && (v222 = (_DWORD *)*v221) != 0 )
    {
      v223 = 0;
      do
      {
        while ( v222[1] != 267 )
        {
          v222 = (_DWORD *)*v222;
          if ( !v222 )
            goto LABEL_615;
        }
        v223 = a1;
        v2 = (void *)sub_66C40(v222[4]);
        v222 = (_DWORD *)*v222;
      }
      while ( v222 );
LABEL_615:
      v224 = sub_66BEC(v2);
      if ( v224 <= 0x63DF )
      {
        v225 = sub_66A2C();
        v224 = sub_66C40(v225 - 11);
      }
      if ( v223 )
        sub_5FF08(v224);
    }
    else if ( (unsigned int)sub_66BEC(v2) <= 0x63DF )
    {
      v228 = sub_66A2C();
      sub_66C40(v228 - 11);
    }
  }
  v7 = (_DWORD *)v235[41];
  if ( v7 )
  {
    v8 = (_DWORD *)*v7;
    if ( *v7 )
    {
      if ( (*(int *)((_BYTE *)&elf_hash_bucket[133] + (_DWORD)off_B511C) & 0xF) == 0
        && (*(int *)((_BYTE *)&elf_hash_bucket[85] + (_DWORD)off_B511C) & 0xF) == 0 )
      {
        while ( 1 )
        {
          v11 = (char *)v8[2];
          *(_DWORD *)req = -1;
          if ( !v11 )
          {
            v10 = v8[1];
            if ( v10 == 324 )
            {
              v15 = 1;
              goto LABEL_34;
            }
            if ( v10 <= 324 )
            {
              if ( !v10 )
LABEL_652:
                sub_6E8F0("ntp_config.c", 3051, 2, "if_name != ((void *)0)");
              if ( v10 != 260 )
LABEL_663:
                sub_C954((int)"config_nic_rules: match-class-token=%d", v10);
              v15 = 0;
LABEL_554:
              v16 = v8[3];
              if ( v16 != 313 )
              {
                if ( v16 != 338 )
                {
LABEL_548:
                  if ( v16 != 291 )
LABEL_37:
                    sub_C954((int)"config_nic_rules: action-token=%d", v16);
                  v210 = *(_DWORD *)req;
                  goto LABEL_550;
                }
                v210 = *(_DWORD *)req;
                v211 = 0;
LABEL_546:
                sub_15C24(v15, v11, v210, v211);
                sub_40BDC(current_time + 2);
                if ( !v11 )
                  goto LABEL_27;
                goto LABEL_26;
              }
LABEL_544:
              v210 = *(_DWORD *)req;
            }
            else
            {
              if ( v10 == 326 )
              {
                v15 = 2;
              }
              else
              {
                if ( v10 != 443 )
                  goto LABEL_663;
                v15 = 3;
              }
LABEL_34:
              v16 = v8[3];
              if ( v16 != 313 )
              {
                if ( v16 == 338 )
                {
                  sub_15C24(v15, 0, -1, 0);
                  sub_40BDC(current_time + 2);
                  goto LABEL_27;
                }
                if ( v16 != 291 )
                  goto LABEL_37;
                v210 = -1;
LABEL_550:
                v211 = 2;
                goto LABEL_546;
              }
              v210 = -1;
            }
            v211 = 1;
            goto LABEL_546;
          }
          v9 = (const char *)sub_63948(v11);
          v10 = v8[1];
          v11 = (char *)v9;
          if ( v10 == 324 )
          {
            v15 = 1;
            goto LABEL_554;
          }
          if ( v10 > 324 )
          {
            if ( v10 == 326 )
            {
              v15 = 2;
            }
            else
            {
              if ( v10 != 443 )
                goto LABEL_663;
              v15 = 3;
            }
            goto LABEL_554;
          }
          if ( v10 )
          {
            if ( v10 != 260 )
              goto LABEL_663;
            v15 = 0;
            goto LABEL_554;
          }
          if ( !v9 )
            goto LABEL_652;
          v12 = strchr(v9, 47);
          v14 = v12;
          if ( !v12 )
            break;
          *v12 = 0;
          if ( !sub_63C8C(v11, 0, v242, v13) )
          {
            v15 = 4;
            *v14 = 47;
            goto LABEL_23;
          }
          if ( sscanf(v14 + 1, "%d", req) != 1 )
            goto LABEL_580;
          v15 = 5;
          v216 = *(_DWORD *)req;
          if ( LOWORD(v242[0]) == 2 )
            v217 = 32;
          else
            v217 = 128;
          if ( *(int *)req < -1 )
            v216 = -1;
          if ( v216 >= v217 )
            v216 = v217;
          *(_DWORD *)req = v216;
LABEL_23:
          v16 = v8[3];
          if ( v16 == 313 )
            goto LABEL_544;
          if ( v16 != 338 )
            goto LABEL_548;
          sub_15C24(v15, v11, *(_DWORD *)req, 0);
          sub_40BDC(current_time + 2);
LABEL_26:
          free(v11);
LABEL_27:
          v8 = (_DWORD *)*v8;
          if ( !v8 )
            goto LABEL_39;
        }
        if ( !sub_63C8C(v11, 0, v242, v13) )
        {
          v15 = 4;
          goto LABEL_554;
        }
LABEL_580:
        v15 = 5;
        goto LABEL_23;
      }
      if ( a1 )
      {
        sub_64A18(3, "interface/nic rules are not allowed with --interface (-I) or --novirtualips (-L)%s", ", exiting");
        exit(1);
      }
      sub_64A18(3, "interface/nic rules are not allowed with --interface (-I) or --novirtualips (-L)%s", byte_97B44);
    }
  }
LABEL_39:
  v17 = (char *)v235[16];
  if ( v17 )
    sub_426A8(2, v17);
  v18 = (_DWORD *)v235[15];
  if ( v18 )
  {
    v19 = (_DWORD *)*v18;
    if ( *v18 )
    {
      do
      {
        while ( 1 )
        {
          v20 = (char *)sub_1BE60(v19[1]);
          v21 = sub_2C418(v20);
          if ( !v21 )
            break;
          sub_2C270(v21, statsdir, (int)v20, *(unsigned __int8 *)(v21 + 20), *(unsigned __int8 *)(v21 + 21) | 0x80);
          v19 = (_DWORD *)*v19;
          if ( !v19 )
            goto LABEL_47;
        }
        sub_64A18(3, "stats %s unrecognized", v20);
        v19 = (_DWORD *)*v19;
      }
      while ( v19 );
    }
  }
LABEL_47:
  v22 = (_DWORD *)v235[17];
  if ( v22 )
  {
    v23 = (_DWORD *)*v22;
    if ( *v22 )
    {
      do
      {
        v24 = (char *)sub_1BE60(v23[1]);
        v25 = sub_2C418(v24);
        if ( v25 )
        {
          v26 = (_DWORD *)v23[2];
          v27 = *(unsigned __int8 *)(v25 + 20);
          v28 = *(unsigned __int8 *)(v25 + 21) | 0x80;
          if ( v26 )
          {
            v29 = (_DWORD *)*v26;
            if ( *v26 )
            {
              do
              {
                v30 = v29[1];
                if ( v30 == 433 )
                {
                  v31 = v29[4];
                  if ( v31 == 371 )
                  {
                    v27 = 255;
                  }
                  else if ( v31 >= 372 )
                  {
                    switch ( v31 )
                    {
                      case 442:
                        v27 = 3;
                        break;
                      case 445:
                        v27 = 5;
                        break;
                      case 390:
                        v27 = 1;
                        break;
                      default:
LABEL_61:
                        sub_C954((int)"config-monitor: type-token=%d", v31);
                    }
                  }
                  else
                  {
                    switch ( v31 )
                    {
                      case 283:
                        v27 = 2;
                        break;
                      case 364:
                        v27 = 4;
                        break;
                      case 259:
                        v27 = 6;
                        break;
                      default:
                        goto LABEL_61;
                    }
                  }
                }
                else if ( v30 == 446 )
                {
                  v36 = v29[4];
                  if ( v36 == 294 )
                  {
                    v28 |= 0x80u;
                  }
                  else if ( v36 <= 294 )
                  {
                    if ( v36 != 286 )
                    {
LABEL_641:
                      sub_64A18(3, "Unknown filegen flag token %d", v29[4]);
                      exit(1);
                    }
                    v28 &= ~0x80u;
                  }
                  else if ( v36 == 337 )
                  {
                    v28 |= 1u;
                  }
                  else
                  {
                    if ( v36 != 368 )
                      goto LABEL_641;
                    v28 &= ~1u;
                  }
                }
                else
                {
                  if ( v30 != 298 )
                  {
                    sub_64A18(3, "Unknown filegen option token %d", v29[1]);
                    exit(1);
                  }
                  v24 = (char *)v29[4];
                }
                v29 = (_DWORD *)*v29;
              }
              while ( v29 );
            }
          }
          sub_2C270(v25, statsdir, (int)v24, v27, v28);
        }
        else
        {
          sub_64A18(3, "filegen category '%s' unrecognized", v24);
        }
        v23 = (_DWORD *)*v23;
      }
      while ( v23 );
    }
  }
  v32 = (_DWORD *)v235[28];
  if ( v32 )
  {
    v33 = (_DWORD *)*v32;
    if ( *v32 )
    {
      do
      {
        v35 = v33[1];
        if ( v35 == 312 )
        {
          v34 = 2;
        }
        else if ( v35 <= 312 )
        {
          if ( v35 == 285 )
          {
            v34 = 9;
          }
          else
          {
            if ( v35 != 309 )
              goto LABEL_662;
            v34 = 1;
          }
        }
        else if ( v35 == 397 )
        {
          v34 = 8;
        }
        else
        {
          if ( v35 != 398 )
LABEL_662:
            sub_C954((int)"config_auth: attr-token=%d", v35);
          v34 = 4;
        }
        sub_2B9CC(v34, v33[4]);
        v33 = (_DWORD *)*v33;
      }
      while ( v33 );
    }
  }
  v37 = v235[30];
  if ( v37 )
  {
    if ( keysdir[0] != default_keysdir )
    {
      free(keysdir[0]);
      v37 = v235[30];
    }
    keysdir[0] = (char *)sub_63948(v37);
  }
  v38 = v235[34];
  if ( v38 )
  {
    if ( ntp_signd_socket != &unk_B760C )
    {
      free(ntp_signd_socket);
      v38 = v235[34];
    }
    ntp_signd_socket = (_UNKNOWN *)sub_63948(v38);
  }
  if ( v235[27] && !cryptosw )
  {
    sub_2B164();
    cryptosw = 1;
  }
  v39 = (_DWORD *)v235[33];
  if ( v39 )
  {
    v40 = (_DWORD *)*v39;
    if ( *v39 )
    {
      v41 = 0;
      do
      {
        while ( 1 )
        {
          v46 = v40[2];
          if ( v46 != 319 )
            break;
          v47 = v40[4];
          v40 = (_DWORD *)*v40;
          if ( (unsigned int)(v47 - 2) <= 0xFFFD )
            ++v41;
          if ( !v40 )
            goto LABEL_128;
        }
        if ( v46 != 321 )
          sub_6E8F0("ntp_config.c", 2012, 0, "321 == my_val->type");
        v42 = v40[5];
        v43 = v40[4];
        v40 = (_DWORD *)*v40;
        v44 = v43 <= v42;
        if ( v43 <= 0 )
          v44 = 0;
        if ( v42 <= 0xFFFF && v44 )
          v41 += v42 + 1 - v43;
      }
      while ( v40 );
    }
  }
LABEL_128:
  sub_619F8();
  if ( v235[29] )
    sub_424A0();
  if ( v235[26] )
    ctl_auth_keyid = v235[26];
  if ( v235[31] )
    info_auth_keyid = v235[31];
  v48 = (_DWORD *)v235[33];
  if ( v48 )
  {
    v49 = (_DWORD *)*v48;
    if ( *v48 )
    {
      while ( 1 )
      {
        v53 = v49[4];
        if ( v49[2] != 319 )
          break;
        if ( (unsigned int)(v53 - 1) > 0xFFFE )
        {
          sub_64A18(5, "Ignoring invalid trustedkey %d, min 1 max %d.", v49[4], 0xFFFF);
LABEL_146:
          v49 = (_DWORD *)*v49;
          if ( !v49 )
            goto LABEL_150;
        }
        else
        {
          sub_61DF8(v49[4], 1);
          v49 = (_DWORD *)*v49;
          if ( !v49 )
            goto LABEL_150;
        }
      }
      v50 = v49[5];
      v51 = v50 <= v53;
      if ( v50 >= v53 )
        v51 = v53 <= 0;
      v52 = v51;
      if ( v50 > 0xFFFF )
        v52 |= 1u;
      if ( v52 )
      {
        sub_64A18(5, "Ignoring invalid trustedkey range %d ... %d, min 1 max %d.", v53, v50, 0xFFFF);
      }
      else
      {
        do
        {
          v66 = v53++;
          sub_61DF8(v66, 1);
        }
        while ( v50 >= v53 );
      }
      goto LABEL_146;
    }
  }
LABEL_150:
  v54 = v235[32];
  if ( (unsigned int)(v54 - 3) <= 0x1C )
  {
    sys_revoke = v235[32];
  }
  else if ( v54 )
  {
    sub_64A18(3, "'revoke' value %d ignored", v54);
  }
  v55 = (double **)v235[14];
  v56 = sys_maxclock;
  v57 = sys_minclock;
  v58 = sys_minsane;
  if ( v55 )
  {
    v59 = *v55;
    if ( *v55 )
    {
      while ( 1 )
      {
        v61 = *((_DWORD *)v59 + 1);
        if ( v61 == 347 )
        {
          v56 = (int)v59[2];
          if ( v56 <= 0 )
          {
            v59[2] = 1.0;
            v56 = 1;
          }
          goto LABEL_161;
        }
        if ( v61 < 348 )
        {
          if ( v61 == 269 )
          {
            v67 = v59[2];
            if ( v67 > 4.0 )
            {
              sub_64A18(4, "Using maximum bcpollbstep ceiling %d, %d requested", 4, (int)v67);
              v59[2] = 4.0;
            }
            else if ( v67 < 0.0 )
            {
              sub_64A18(4, "Using minimum bcpollbstep floor %d, %d requested", 0, (int)v67);
              v59[2] = 0.0;
            }
          }
          else if ( v61 == 276 )
          {
            v60 = v59[2];
            if ( v60 > 15.0 )
            {
              sub_64A18(4, "Using maximum tos ceiling %d, %d requested", 15, (int)v60);
              v59[2] = 15.0;
            }
            else if ( v60 < 1.0 )
            {
              sub_64A18(4, "Using minimum tos floor %d, %d requested", 1, (int)v60);
              v59[2] = 1.0;
            }
          }
          goto LABEL_161;
        }
        if ( v61 == 355 )
          break;
        if ( v61 == 360 )
        {
          v58 = (int)v59[2];
          if ( v58 < 0 )
          {
            v59[2] = 0.0;
            v58 = 0;
          }
          v59 = *(double **)v59;
          if ( !v59 )
          {
LABEL_169:
            v62 = v56 <= v57;
            if ( v56 >= v57 )
              v62 = v57 <= v58;
            if ( !v62 )
            {
LABEL_172:
              v63 = (_DWORD *)v235[14];
              if ( v63 )
              {
                v64 = (_DWORD *)*v63;
                if ( *v63 )
                {
                  while ( 2 )
                  {
                    v65 = v64[1];
                    switch ( v65 )
                    {
                      case 267:
                        goto LABEL_189;
                      case 269:
                        v68 = 33;
                        goto LABEL_188;
                      case 270:
                        v68 = 25;
                        goto LABEL_188;
                      case 276:
                        v68 = 18;
                        goto LABEL_188;
                      case 278:
                        v68 = 19;
                        goto LABEL_188;
                      case 306:
                        v68 = 17;
                        goto LABEL_188;
                      case 347:
                        v68 = 15;
                        goto LABEL_188;
                      case 349:
                        v68 = 22;
                        goto LABEL_188;
                      case 355:
                        v68 = 14;
                        goto LABEL_188;
                      case 357:
                        v68 = 21;
                        goto LABEL_188;
                      case 360:
                        v68 = 16;
                        goto LABEL_188;
                      case 383:
                        v68 = 26;
                        goto LABEL_188;
                      case 384:
                        v68 = 27;
LABEL_188:
                        sub_384FC(v68, 0, 0);
LABEL_189:
                        v64 = (_DWORD *)*v64;
                        if ( !v64 )
                          goto LABEL_190;
                        continue;
                      default:
                        sub_C954((int)"config-tos: attr-token=%d", v65);
                    }
                  }
                }
              }
              goto LABEL_190;
            }
LABEL_608:
            sub_64A18(
              3,
              "tos error: must have minsane (%d) < minclock (%d) <= maxclock (%d) - daemon will not operate properly!",
              v58,
              v57,
              v56);
            goto LABEL_172;
          }
        }
        else
        {
LABEL_161:
          v59 = *(double **)v59;
          if ( !v59 )
            goto LABEL_169;
        }
      }
      v57 = (int)v59[2];
      if ( v57 <= 0 )
      {
        v59[2] = 1.0;
        v57 = 1;
      }
      goto LABEL_161;
    }
  }
  v220 = sys_maxclock <= sys_minclock;
  if ( sys_maxclock >= sys_minclock )
    v220 = sys_minclock <= sys_minsane;
  if ( v220 )
    goto LABEL_608;
LABEL_190:
  v69 = (int **)v235[19];
  if ( v69 )
  {
    v70 = *v69;
    if ( *v69 )
    {
      while ( 2 )
      {
        v71 = v70[1];
        switch ( v71 )
        {
          case 314:
            if ( v70[4] < 0 )
              goto LABEL_312;
            mru_incalloc[0] = (int *)v70[4];
            goto LABEL_206;
          case 315:
            v80 = v70[4];
            if ( v80 < 0 )
              goto LABEL_312;
            v78 = v80 << 10;
            v77 = &mru_incalloc_ptr;
            goto LABEL_215;
          case 316:
            if ( v70[4] < 0 )
              goto LABEL_312;
            mru_initalloc = (int *)v70[4];
            goto LABEL_206;
          case 317:
            v79 = v70[4];
            if ( v79 < 0 )
              goto LABEL_312;
            v78 = v79 << 10;
            v77 = &mru_initalloc_ptr;
            goto LABEL_215;
          case 346:
            mru_maxage = (int *)v70[4];
            goto LABEL_206;
          case 348:
            if ( v70[4] < 0 )
              goto LABEL_319;
            mru_maxdepth = v70[4];
            goto LABEL_206;
          case 350:
            v76 = v70[4];
            if ( v76 < 0 )
            {
LABEL_319:
              mru_maxdepth = -1;
            }
            else
            {
              v77 = (int ***)&mru_maxdepth_ptr;
              v78 = v76 << 10;
LABEL_215:
              **v77 = (int *)(v78 / 0x48);
            }
LABEL_206:
            v70 = (int *)*v70;
            if ( !v70 )
              break;
            continue;
          case 356:
            if ( v70[4] < 0 )
            {
LABEL_312:
              v106 = (const char *)sub_1BE60(v71);
              sub_64A18(3, "mru %s %d out of range, ignored.", v106, v70[4]);
            }
            else
            {
              mru_mindepth = (_UNKNOWN *)v70[4];
            }
            goto LABEL_206;
          default:
            v231 = sub_1BE60(v71);
            sub_64A18(3, "Unknown mru option %s (%d)", v231, v70[1]);
            goto LABEL_654;
        }
        break;
      }
    }
  }
  v72 = (_DWORD *)v235[18];
  if ( v72 )
  {
    v73 = (_DWORD *)*v72;
    if ( *v72 )
    {
      do
      {
        v74 = v73[1];
        if ( v74 == 358 )
        {
          ntp_minpkt = v73[4];
        }
        else if ( v74 == 363 )
        {
          mon_age = (_UNKNOWN *)v73[4];
        }
        else
        {
          if ( v74 != 266 )
          {
            v75 = sub_1BE60(v74);
            sub_64A18(3, "Unknown discard option %s (%d)", v75, v73[1]);
LABEL_654:
            exit(1);
          }
          v105 = v73[4];
          if ( v105 > 0xFF )
            sub_64A18(3, "discard average %d out of range, ignored.", v105);
          else
            ntp_minpoll = v73[4];
        }
        v73 = (_DWORD *)*v73;
      }
      while ( v73 );
    }
  }
  v81 = (int ***)v235[20];
  if ( v81 )
  {
    for ( i = *v81; i; i = (int **)*i )
    {
      v83 = i[3];
      v84 = *((__int16 *)i + 10);
      if ( v83 && (v85 = (_DWORD *)*v83) != 0 )
      {
        v86 = 0;
        v87 = 0;
        do
        {
          v88 = v85[1];
          switch ( v88 )
          {
            case 305:
              v86 |= 0x2000u;
              break;
            case 313:
              v86 |= 1u;
              break;
            case 332:
              v86 |= 0x800u;
              break;
            case 333:
              v86 |= 0x1000u;
              break;
            case 336:
              v86 |= 0x40u;
              break;
            case 342:
              v86 |= 0x400u;
              break;
            case 369:
              v86 |= 0x100u;
              break;
            case 370:
              v86 |= 0x4000u;
              break;
            case 373:
              v86 |= 0x20u;
              break;
            case 374:
              v86 |= 0x10u;
              break;
            case 375:
              v86 |= 0x80u;
              break;
            case 377:
              v86 |= 2u;
              break;
            case 378:
              v86 |= 0x200u;
              break;
            case 379:
              v86 |= 4u;
              break;
            case 381:
              v87 |= 0x2000u;
              break;
            case 409:
              v87 |= 0x4000u;
              break;
            case 440:
              v86 |= 8u;
              break;
            default:
              sub_C954((int)"config_access: flag-type-token=%d", v88);
          }
          v85 = (_DWORD *)*v85;
        }
        while ( v85 );
        if ( (v86 & 0x1000) != 0 && !dword_B7610 )
        {
          dword_B7610 = 1;
          _fprintf_chk(
            stderr,
            1,
            "%s\n",
            "mssntp restrict bit ignored, this ntpd was configured without --enable-ntp-signd.");
          sub_64A18(4, "%s", "mssntp restrict bit ignored, this ntpd was configured without --enable-ntp-signd.");
        }
        if ( (v86 & 0x840) == 0x800 )
        {
          v89 = i[1];
          if ( v89 )
          {
            v90 = (const char *)v89[1];
          }
          else if ( (v87 & 0x4000) != 0 )
          {
            v90 = "source";
          }
          else
          {
            v90 = "default";
          }
          _fprintf_chk(stderr, 1, "restrict %s: %s\n", v90, "KOD does nothing without LIMITED.");
          sub_64A18(4, "restrict %s: %s", v90, "KOD does nothing without LIMITED.");
        }
        v238 = 0;
        v239 = 0;
        pai = 0;
        v240 = 0;
        v241 = 0;
        v91 = i[1];
        if ( !v91 )
        {
          memset(v242, 0, sizeof(v242));
          if ( (v87 & 0x4000) == 0 )
            goto LABEL_301;
          sub_3FF90(1, 0, 0, v84, v87, v86, 0);
          continue;
        }
      }
      else
      {
        v87 = 0;
        v238 = 0;
        v239 = 0;
        pai = 0;
        v240 = 0;
        v241 = 0;
        v91 = i[1];
        if ( !v91 )
        {
          v87 = 0;
          v86 = 0;
          memset((char *)v242 + 2, 0, 26);
LABEL_301:
          LOWORD(v238) = 2;
          LOWORD(v242[0]) = 2;
          sub_3FF90(1, &v238, v242, v84, v87, v86, 0);
          LOWORD(v238) = 10;
          strcpy((char *)v242, "\n");
          sub_3FF90(1, &v238, v242, v84, v87, v86, 0);
LABEL_302:
          if ( pai )
            freeaddrinfo(pai);
          continue;
        }
        v86 = 0;
      }
      v92 = v91[1];
      LOWORD(v238) = *((_WORD *)v91 + 4);
      if ( sub_CE18(v92, (unsigned __int16 *)&v238) == 1 )
      {
        v98 = (unsigned __int16)v238;
        v96 = 0;
      }
      else
      {
        memset(req, 0, 32);
        pai = 0;
        v93 = i[1];
        *(_DWORD *)&req[12] = 17;
        *(_DWORD *)&req[8] = 2;
        v94 = *((unsigned __int16 *)v93 + 4);
        v95 = (const char *)v93[1];
        *(_DWORD *)&req[4] = v94;
        if ( getaddrinfo(v95, "ntp", (const struct addrinfo *)req, &pai) )
        {
          sub_64A18(3, "restrict: ignoring line %d, address/host '%s' unusable.", i[4], (const char *)i[1][1]);
          continue;
        }
        v96 = pai;
        if ( !pai )
          sub_6E8F0("ntp_config.c", 2767, 2, "ai_list != ((void *)0)");
        v97 = *(int *)((char *)&dword_14 + (_DWORD)pai);
        if ( !v97 )
          sub_6E8F0("ntp_config.c", 2769, 2, "pai->ai_addr != ((void *)0)");
        if ( *(_DWORD *)((char *)&word_10 + (_DWORD)pai) > 0x1Cu )
          sub_6E8F0("ntp_config.c", 2771, 2, "sizeof(addr) >= pai->ai_addrlen");
        _memcpy_chk(&v238, v97);
        v98 = (unsigned __int16)v238;
        if ( (v238 & 0xFFF7) != 2 )
          sub_6E8F0("ntp_config.c", 2775, 2, "2 == ((&addr)->sa.sa_family) || 10 == ((&addr)->sa.sa_family)");
      }
      memset((char *)v242 + 2, 0, 26);
      LOWORD(v242[0]) = v98;
      if ( v98 == 10 )
        memset(&v242[2], 255, 16);
      else
        v242[1] = -1;
      if ( !i[2]
        || (memset(v242, 0, sizeof(v242)),
            v99 = i[2],
            v100 = v99[1],
            LOWORD(v242[0]) = *((_WORD *)v99 + 4),
            sub_CE18(v100, (unsigned __int16 *)v242) == 1) )
      {
        while ( 1 )
        {
          sub_3FF90(1, &v238, v242, v84, v87, v86, 0);
          if ( !v96 )
            break;
          v96 = v96->ai_next;
          if ( !v96 )
            break;
          if ( !v96->ai_addr )
            sub_6E8F0("ntp_config.c", 2810, 2, "pai->ai_addr != ((void *)0)");
          if ( v96->ai_addrlen > 0x1C )
            sub_6E8F0("ntp_config.c", 2812, 2, "sizeof(addr) >= pai->ai_addrlen");
          v238 = 0;
          v239 = 0;
          v240 = 0;
          v241 = 0;
          _memcpy_chk(&v238, v96->ai_addr);
          if ( (v238 & 0xFFF7) != 2 )
            sub_6E8F0("ntp_config.c", 2817, 2, "2 == ((&addr)->sa.sa_family) || 10 == ((&addr)->sa.sa_family)");
          memset((char *)v242 + 2, 0, 26);
          LOWORD(v242[0]) = v238;
          if ( (unsigned __int16)v238 == 10 )
            memset(&v242[2], 255, 16);
          else
            v242[1] = -1;
        }
        goto LABEL_302;
      }
      sub_64A18(3, "restrict: ignoring line %d, mask '%s' unusable.", i[4], i[2][1]);
    }
  }
  v101 = (_DWORD *)v235[23];
  if ( v101 )
  {
    v102 = (_DWORD *)*v101;
    if ( *v101 )
    {
      do
      {
        v104 = v102[1];
        if ( v104 == 386 )
        {
          v103 = 6;
        }
        else if ( v104 > 386 )
        {
          if ( v104 == 416 )
          {
            v103 = 5;
          }
          else if ( v104 > 416 )
          {
            if ( v104 == 417 )
            {
              v103 = 8;
            }
            else
            {
              if ( v104 != 422 )
                goto LABEL_661;
              v103 = 15;
            }
          }
          else if ( v104 == 414 )
          {
            v103 = 3;
          }
          else
          {
            if ( v104 != 415 )
              goto LABEL_661;
            v103 = 4;
          }
        }
        else if ( v104 == 288 )
        {
          v103 = 7;
        }
        else if ( v104 <= 288 )
        {
          if ( v104 != 261 )
LABEL_661:
            sub_C954((int)"config_tinker: attr-token=%d", v104);
          v103 = 10;
        }
        else if ( v104 == 307 )
        {
          v103 = 12;
        }
        else
        {
          if ( v104 != 310 )
            goto LABEL_661;
          v103 = 11;
        }
        sub_302F0(v103);
        v102 = (_DWORD *)*v102;
      }
      while ( v102 );
    }
  }
  v107 = (_DWORD *)v235[22];
  if ( v107 )
  {
    v108 = (_DWORD *)*v107;
    if ( *v107 )
    {
      do
      {
        v109 = v108[1];
        switch ( v109 )
        {
          case 354:
            if ( (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B511C) & 0xF) == 0 )
            {
              v110 = v108[4];
              if ( v110 == -1 )
              {
                if ( cur_memlock && munlockall() == -1 )
                  sub_64A18(3, "munlockall() failed: %m");
                cur_memlock = 0;
              }
              else if ( v110 < 0 )
              {
                sub_64A18(4, "'rlimit memlock' value of %d is unexpected!", v110);
              }
              else
              {
                if ( cur_memlock != 1 )
                {
                  if ( mlockall(3) == -1 )
                    sub_64A18(3, "mlockall() failed: %m");
                  v110 = v108[4];
                }
                v233 = "MB";
                v232 = 0x100000;
                sub_FB60(8, v110 << 20);
                cur_memlock = 1;
              }
            }
            break;
          case 410:
            v232 = 4096;
            v233 = "4k";
            sub_FB60(3, (int)(v108[4] << 12));
            break;
          case 300:
            v232 = 1;
            v233 = byte_97B44;
            sub_FB60(7, (int)v108[4]);
            break;
          default:
            sub_C954((int)"config-rlimit: value-token=%d", v109);
        }
        v108 = (_DWORD *)*v108;
      }
      while ( v108 );
    }
  }
  sub_C9A0((_DWORD *)v235[24], 1);
  LODWORD(v111) = sub_C9A0((_DWORD *)v235[25], 0);
  v112 = (int ***)v235[35];
  if ( v112 )
  {
    for ( j = *v112; j; j = (int **)*j )
    {
      v114 = (int)j[1];
      switch ( v114 )
      {
        case '-':
          LODWORD(v111) = sub_D578((char *)j[4]);
          ntp_syslogmask &= ~LODWORD(v111);
          break;
        case '=':
          LODWORD(v111) = sub_D578((char *)j[4]);
          ntp_syslogmask = LODWORD(v111);
          break;
        case '+':
          LODWORD(v111) = sub_D578((char *)j[4]);
          ntp_syslogmask |= LODWORD(v111);
          break;
        default:
          sub_C954((int)"config-logconfig: modifier='%c'", v114);
      }
    }
  }
  v115 = (_DWORD *)v235[36];
  if ( v115 )
  {
    v116 = (_DWORD *)*v115;
    if ( *v115 )
    {
      v117 = 0;
      do
      {
        while ( v117 <= 8 )
        {
          LODWORD(v111) = sub_63948(v116[1]);
          v116 = (_DWORD *)*v116;
          sys_phone[v117++] = LODWORD(v111);
          sys_phone[v117] = 0;
          if ( !v116 )
            goto LABEL_356;
        }
        LODWORD(v111) = sub_64A18(
                          6,
                          "phone: Number of phone entries exceeds %zu. Ignoring phone %s...",
                          9u,
                          (const char *)v116[1]);
        v116 = (_DWORD *)*v116;
      }
      while ( v116 );
    }
  }
LABEL_356:
  v118 = (int ***)v235[37];
  if ( v118 )
  {
    v119 = *v118;
    if ( *v118 )
    {
      v120 = 0;
      do
      {
        v121 = strlen((const char *)v119[1]);
        v122 = v121 + strlen((const char *)v119[2]) + 2;
        v120 = (void *)sub_637E4(v120, v122, 0, 0);
        sub_6BCB0(v120, v122, "%s=%s", (const char *)v119[1], (const char *)v119[2]);
        LODWORD(v111) = sub_24370(v120, v122);
        v119 = (int **)*v119;
      }
      while ( v119 );
      if ( v120 )
        free(v120);
    }
  }
  v123 = (_DWORD *)v235[38];
  if ( v123 )
  {
    v124 = (_DWORD *)*v123;
    if ( *v123 )
    {
      v125 = 0;
      do
      {
        while ( 1 )
        {
          v126 = v124[1];
          if ( v125 > 7 )
            break;
          sys_ttl[v125++] = v126;
          v124 = (_DWORD *)*v124;
          if ( !v124 )
            goto LABEL_368;
        }
        LODWORD(v111) = sub_64A18(6, "ttl: Number of TTL entries exceeds %zu. Ignoring TTL %d...", 8u, v126);
        v124 = (_DWORD *)*v124;
      }
      while ( v124 );
LABEL_368:
      sys_ttlmax = v125 - 1;
    }
  }
  v127 = (double **)v235[40];
  if ( v127 )
  {
    for ( k = *v127; k; k = *(double **)k )
    {
      v129 = *((_DWORD *)k + 1);
      if ( v129 == 334 )
      {
        LODWORD(v111) = sub_426A8(4, *((char **)k + 4));
        continue;
      }
      if ( v129 <= 334 )
      {
        if ( v129 == 290 )
        {
          v226 = (char *)*((_DWORD *)k + 4);
          if ( *v226 )
          {
            LODWORD(v111) = sub_426A8(1, v226);
          }
          else
          {
            stats_drift_file = (unsigned __int8)*v226;
            LODWORD(v111) = sub_64A18(6, "config: driftfile disabled");
          }
          continue;
        }
        if ( v129 > 290 )
        {
          if ( v129 == 292 )
          {
            qos = (int *)(4 * *((_DWORD *)k + 4));
            continue;
          }
          if ( v129 != 312 )
          {
LABEL_626:
            LODWORD(v111) = sub_64A18(3, "config_vars(): unexpected token %d", v129);
            continue;
          }
          sys_ident = *((_DWORD *)k + 4);
        }
        else
        {
          if ( v129 == 265 )
          {
            v227 = *((_DWORD *)k + 4);
            if ( (unsigned int)(v227 - 3) > 0x1C )
              LODWORD(v111) = sub_64A18(3, "'automax' value %d ignored", v227);
            else
              sys_automax = *((_DWORD *)k + 4);
            continue;
          }
          if ( v129 != 273 )
            goto LABEL_626;
          LODWORD(v111) = sub_384FC(4, 0, 0);
        }
      }
      else
      {
        if ( v129 == 391 )
        {
          LODWORD(v111) = sub_426A8(3, *((char **)k + 4));
          continue;
        }
        if ( v129 < 392 )
        {
          if ( v129 == 340 )
          {
            LODWORD(v111) = sub_64C04(*((_DWORD *)k + 4), 1);
            if ( LODWORD(v111) == -1 )
              LODWORD(v111) = sub_64A18(3, "Cannot open logfile %s: %m", *((const char **)k + 4));
            continue;
          }
          if ( v129 != 372 )
            goto LABEL_626;
LABEL_622:
          v111 = k[2];
          wander_threshold = v111;
          continue;
        }
        if ( v129 == 422 )
        {
          LODWORD(v111) = sub_302F0(15);
          continue;
        }
        if ( v129 == 441 )
          goto LABEL_622;
        if ( v129 != 406 )
          goto LABEL_626;
        if ( saveconfigdir )
          free((void *)saveconfigdir);
        v130 = (const char *)*((_DWORD *)k + 4);
        LODWORD(v111) = strlen(v130);
        if ( !LODWORD(v111) )
          goto LABEL_637;
        if ( v130[LODWORD(v111) - 1] == 47 )
        {
          LODWORD(v111) = sub_63948(v130);
LABEL_637:
          saveconfigdir = LODWORD(v111);
          continue;
        }
        v131 = LODWORD(v111) + 2;
        v132 = sub_637E4(0, LODWORD(v111) + 2, 0, 0);
        v133 = (const char *)*((_DWORD *)k + 4);
        saveconfigdir = v132;
        LODWORD(v111) = sub_6BCB0(v132, v131, "%s%c", v133, 47);
      }
    }
  }
  result = sub_18248(LODWORD(v111), HIDWORD(v111));
  v135 = (_DWORD *)v235[39];
  LOWORD(v238) = 0;
  if ( v135 )
  {
    v136 = (_DWORD *)*v135;
    if ( *v135 )
    {
      while ( 1 )
      {
        v137 = (_DWORD *)v136[2];
        if ( !v137 )
          break;
        v138 = (_DWORD *)*v137;
        if ( !*v137 )
          break;
        v139 = 0;
        v140 = 0;
        v141 = 0;
        do
        {
          while ( 1 )
          {
            v142 = v138[1];
            if ( v142 != 393 )
              break;
            v143 = v138[4];
            if ( (unsigned int)(v143 - 1) > 0xFFFE )
            {
              result = sub_64A18(3, "invalid port number %d, trap ignored");
              v141 = 1;
              v143 = v138[4];
            }
            v138 = (_DWORD *)*v138;
            v139 = (unsigned __int16)v143;
            if ( !v138 )
              goto LABEL_403;
          }
          if ( v142 == 320 )
          {
            v238 = 0;
            v239 = 0;
            v240 = 0;
            v241 = 0;
            result = sub_CE18(v138[4], (unsigned __int16 *)&v238);
            if ( result != 1 )
              goto LABEL_411;
            result = sub_176E8(&v238);
            v140 = result;
            if ( !result )
            {
              v141 = 1;
              v209 = sub_6BF44(&v238);
              result = sub_64A18(3, "can't find interface with address %s", v209);
            }
          }
          v138 = (_DWORD *)*v138;
        }
        while ( v138 );
LABEL_403:
        if ( v141 )
          goto LABEL_411;
        memset(v242, 0, 16);
        if ( !v139 )
          v139 = 18447;
        memset(&v242[3], 0, 16);
        if ( sub_CE18(*(_DWORD *)(v136[1] + 4), (unsigned __int16 *)v242) != 1 )
        {
          *(_QWORD *)req = 0;
          memset(&req[16], 0, 16);
          *(_DWORD *)&req[12] = 17;
          *(_DWORD *)&req[8] = 2;
          sub_6BCB0(v243, 8, "%u", v139);
          *(_DWORD *)req = 1024;
          v144 = (_DWORD *)sub_637E4(0, 32, 0, 1);
          if ( v140 )
          {
            *(_DWORD *)&req[4] = *(unsigned __int16 *)(v140 + 140);
            v144[7] = 1;
            v146 = *(_DWORD *)(v140 + 24);
            v145 = (_DWORD *)(v140 + 24);
            v147 = v145[1];
            v148 = v145[2];
            v149 = v145[3];
            *v144 = v146;
            v144[1] = v147;
            v144[2] = v148;
            v144[3] = v149;
            v150 = v145[5];
            v151 = v145[6];
            v144[4] = v145[4];
            v144[5] = v150;
            v144[6] = v151;
          }
          goto LABEL_409;
        }
        HIWORD(v242[0]) = __rev16(v139);
        if ( !v140 )
          goto LABEL_573;
        LOWORD(v242[0]) = v238;
LABEL_575:
        result = sub_23B44(v242, v140, 0, 4);
        if ( result )
        {
LABEL_411:
          v136 = (_DWORD *)*v136;
          if ( !v136 )
            goto LABEL_412;
        }
        else
        {
          v214 = sub_18D68(v140);
          v215 = sub_6BF44(v242);
          result = sub_64A18(3, "set trap %s -> %s failed.", v214, v215);
          v136 = (_DWORD *)*v136;
          if ( !v136 )
            goto LABEL_412;
        }
      }
      memset(v242, 0, sizeof(v242));
      if ( sub_CE18(*(_DWORD *)(v136[1] + 4), (unsigned __int16 *)v242) != 1 )
      {
        memset(&req[16], 0, 16);
        *(_QWORD *)req = 0;
        *(_DWORD *)&req[8] = 2;
        *(_DWORD *)&req[12] = 17;
        sub_6BCB0(v243, 8, "%u", 18447);
        *(_DWORD *)req = 1024;
        v144 = (_DWORD *)sub_637E4(0, 32, 0, 1);
LABEL_409:
        result = sub_68134(*(_DWORD *)(v136[1] + 4), v243, req, 2, sub_D018, v144);
        if ( !result )
          result = sub_64A18(3, "config_trap: getaddrinfo_sometime(%s,%s): %m", *(const char **)(v136[1] + 4), v243);
        goto LABEL_411;
      }
      HIWORD(v242[0]) = 3912;
LABEL_573:
      if ( LOWORD(v242[0]) == 2 )
        v140 = any_interface;
      else
        v140 = any6_interface;
      goto LABEL_575;
    }
  }
LABEL_412:
  v152 = v235[11];
  if ( v152 )
    result = sub_384FC(1, v152, 0);
  v153 = (int **)v235[12];
  if ( v153 )
  {
    for ( m = *v153; m; sys_manycastserver = 1 )
    {
      while ( 1 )
      {
        memset(v242, 0, sizeof(v242));
        v155 = m[1];
        LOWORD(v242[0]) = *((_WORD *)m + 4);
        result = sub_CE18(v155, (unsigned __int16 *)v242);
        if ( result == 1 )
          break;
        m = (int *)*m;
        if ( !m )
          goto LABEL_420;
      }
      result = sub_384FC(6, 0, v242);
      m = (int *)*m;
    }
  }
LABEL_420:
  v156 = (void **)v235[13];
  if ( v156 )
  {
    v157 = *v156;
    if ( *v156 )
    {
      do
      {
        while ( 1 )
        {
          memset(v242, 0, sizeof(v242));
          v158 = v157[1];
          LOWORD(v242[0]) = *((_WORD *)v157 + 4);
          if ( sub_CE18(v158, (unsigned __int16 *)v242) == 1 )
            break;
          v157 = (_DWORD *)*v157;
          if ( !v157 )
            goto LABEL_426;
        }
        sub_384FC(6, 0, v242);
        v157 = (_DWORD *)*v157;
      }
      while ( v157 );
LABEL_426:
      result = sub_384FC(6, 1, v157);
    }
  }
  if ( cmdline_server_count > 0 )
  {
    v159 = (_DWORD *)cmdline_servers;
    do
    {
      memset(v242, 0, sizeof(v242));
      if ( sub_63C8C(*v159, 0, v242, v159) )
      {
        HIWORD(v242[0]) = 31488;
        result = sub_CC70((unsigned __int16 *)v242, 407);
        if ( result )
          result = sub_3259C(v242, 0, 0, -1, 3, 4, 0, 0, 256, 0, 0, 0);
      }
      else
      {
        v160 = sub_637E4(0, 28, 0, 1);
        v161 = (int *)cmdline_servers;
        *(_WORD *)(v160 + 8) = 0;
        *(_WORD *)(v160 + 16) = 1027;
        *(_DWORD *)(v160 + 4) = 407;
        *(_DWORD *)v160 = 256;
        memset(req, 0, 32);
        v162 = *(unsigned __int16 *)(v160 + 8);
        v163 = *v161;
        *(_DWORD *)&req[8] = 2;
        *(_DWORD *)&req[4] = v162;
        *(_DWORD *)&req[12] = 17;
        result = sub_67B50(v163, "ntp", req, 2, sub_D1A0, v160, 0);
      }
      --cmdline_server_count;
      v159 = (_DWORD *)(cmdline_servers + 4);
      cmdline_servers += 4;
    }
    while ( cmdline_server_count > 0 );
  }
  v164 = (int **)v235[9];
  if ( v164 )
  {
    v165 = *v164;
    if ( *v164 )
    {
      while ( 1 )
      {
        memset(v242, 0, sizeof(v242));
        v170 = v165[1];
        if ( v170 == 387 )
          break;
        if ( v170 >= 388 )
        {
          if ( v170 != 392 && v170 != 407 )
LABEL_504:
            sub_6E8F0("ntp_config.c", 4057, 2, "hmode != 0");
        }
        else
        {
          if ( v170 == 271 )
          {
            v166 = 5;
            v167 = v165[2];
            goto LABEL_441;
          }
          if ( v170 != 343 )
            goto LABEL_504;
        }
        v167 = v165[2];
        v198 = v170 == 392;
        v199 = *(_DWORD *)(v167 + 4);
        v170 = *(unsigned __int16 *)(v167 + 8);
        if ( v198 )
        {
          v200 = v165[3];
          LOWORD(v242[0]) = v170;
          v201 = sub_CEEC(v200);
          result = sub_3259C(
                     v242,
                     v199,
                     0,
                     -1,
                     3,
                     *((unsigned __int8 *)v165 + 24),
                     *((unsigned __int8 *)v165 + 16),
                     *((unsigned __int8 *)v165 + 17),
                     v201,
                     v165[5],
                     v165[7],
                     v165[8]);
LABEL_444:
          v165 = (int *)*v165;
          if ( !v165 )
            goto LABEL_448;
        }
        else
        {
          v166 = 3;
LABEL_441:
          if ( sub_63C8C(*(_DWORD *)(v167 + 4), *(unsigned __int16 *)(v167 + 8), v242, v170) )
          {
            v168 = v165[1];
            HIWORD(v242[0]) = 31488;
            result = sub_CC70((unsigned __int16 *)v242, v168);
            if ( result )
            {
              v169 = sub_CEEC(v165[3]);
              result = sub_3259C(
                         v242,
                         0,
                         0,
                         -1,
                         v166,
                         *((unsigned __int8 *)v165 + 24),
                         *((unsigned __int8 *)v165 + 16),
                         *((unsigned __int8 *)v165 + 17),
                         v169,
                         v165[5],
                         v165[7],
                         v165[8]);
            }
            goto LABEL_444;
          }
          v171 = sub_637E4(0, 28, 0, 1);
          v172 = *(_QWORD *)(v165 + 1);
          WORD2(v172) = *(_WORD *)(HIDWORD(v172) + 8);
          *(_DWORD *)(v171 + 4) = v172;
          v173 = v171;
          *(_BYTE *)(v171 + 16) = v166;
          *(_WORD *)(v171 + 8) = WORD2(v172);
          *(_BYTE *)(v171 + 17) = *((_BYTE *)v165 + 24);
          *(_BYTE *)(v171 + 18) = *((_BYTE *)v165 + 16);
          *(_BYTE *)(v171 + 19) = *((_BYTE *)v165 + 17);
          v174 = sub_CEEC(v165[3]);
          v175 = v165[7];
          v176 = v165[8];
          *(_DWORD *)(v173 + 20) = v165[5];
          *(_DWORD *)(v173 + 12) = v175;
          *(_DWORD *)(v173 + 24) = v176;
          *(_DWORD *)v173 = v174;
          memset(req, 0, 32);
          v177 = v165[2];
          v178 = *(unsigned __int16 *)(v173 + 8);
          *(_DWORD *)&req[8] = 2;
          v179 = *(_DWORD *)(v177 + 4);
          *(_DWORD *)&req[4] = v178;
          *(_DWORD *)&req[12] = 17;
          result = sub_67B50(v179, "ntp", req, 2, sub_D1A0, v173, 0);
          v165 = (int *)*v165;
          if ( !v165 )
            goto LABEL_448;
        }
      }
      v166 = 1;
      v167 = v165[2];
      goto LABEL_441;
    }
  }
LABEL_448:
  v180 = (int ***)v235[10];
  if ( v180 )
  {
    for ( n = *v180; n; n = (int **)*n )
    {
      if ( n[2] )
      {
        memset(v242, 0, sizeof(v242));
        v182 = n[2];
        v183 = (const char *)v182[1];
        LOWORD(v242[0]) = *((_WORD *)v182 + 4);
        if ( sub_CE18((int)v183, (unsigned __int16 *)v242) > 0 )
        {
          v233 = 0;
          v232 = 0;
          result = sub_31748(v242, 0);
          v212 = result;
          if ( result )
          {
            v213 = (const char *)sub_6BF44(v242);
            sub_64A18(5, "unpeered %s", v213);
            sub_35EE4(v212, "GONE");
            result = sub_31CC8(v212);
          }
        }
        else
        {
          v184 = (_DWORD *)peer_list;
          if ( peer_list )
          {
            while ( 1 )
            {
              v185 = (const char *)v184[11];
              if ( v185 )
              {
                if ( !strcasecmp(v185, v183) )
                  break;
              }
              v184 = (_DWORD *)*v184;
              if ( !v184 )
                goto LABEL_456;
            }
            sub_64A18(5, "unpeered %s", v183);
            sub_35EE4(v184, "GONE");
            sub_31CC8(v184);
          }
LABEL_456:
          memset(req, 0, 32);
          v186 = *((unsigned __int16 *)n[2] + 4);
          *(_DWORD *)&req[8] = 2;
          *(_DWORD *)&req[4] = v186;
          *(_DWORD *)&req[12] = 17;
          result = sub_68134(v183, "ntp", req, 2, sub_D360, 0);
        }
      }
      else
      {
        result = sub_3197C(*((unsigned __int16 *)n + 2));
        v218 = result;
        if ( result )
        {
          v219 = (const char *)sub_6BF44(result + 16);
          sub_64A18(5, "unpeered %s", v219);
          sub_35EE4(v218, "GONE");
          result = sub_31CC8(v218);
        }
      }
    }
  }
  v187 = (_DWORD *)v235[21];
  if ( !v187 )
    goto LABEL_483;
  v188 = (_DWORD *)*v187;
  if ( !*v187 )
    goto LABEL_483;
  do
  {
    v189 = v188[1];
    memset(v242, 0, sizeof(v242));
    if ( sub_CE18(*(_DWORD *)(v189 + 4), (unsigned __int16 *)v242) != 1 )
    {
      sub_64A18(3, "unrecognized fudge reference clock address %s, line ignored", *(const char **)(v189 + 4));
LABEL_462:
      result = (int)memset(req, 0, sizeof(req));
      v191 = (_DWORD *)v188[2];
      if ( v191 )
      {
        v192 = (_DWORD *)*v191;
        if ( *v191 )
        {
          v234 = 1;
          goto LABEL_471;
        }
      }
      goto LABEL_482;
    }
    if ( LOWORD(v242[0]) != 2 || LOWORD(v242[1]) != 32639 )
    {
      v206 = (const char *)sub_6BF44(v242);
      sub_64A18(3, "inappropriate address %s for the fudge command, line ignored", v206);
      goto LABEL_462;
    }
    memset(req, 0, sizeof(req));
    v194 = (_DWORD *)v188[2];
    if ( !v194 || (v192 = (_DWORD *)*v194) == 0 )
    {
LABEL_481:
      result = sub_3A084(v242, req, 0, v194, v232, v233);
      goto LABEL_482;
    }
    v234 = 0;
    do
    {
      while ( 1 )
      {
LABEL_471:
        result = v192[1];
        if ( result == 304 )
        {
          req[2] = ~((unsigned int)~(req[2] << 25) >> 25);
          if ( v192[4] )
            v202 = req[1] | 8;
          else
            v202 = req[1] & 0xF7;
          req[1] = v202;
          goto LABEL_470;
        }
        if ( result <= 304 )
          break;
        if ( result == 418 )
        {
          req[2] |= 4u;
          *(_DWORD *)&req[56] = v192[4];
        }
        else if ( result <= 418 )
        {
          if ( result != 400 )
          {
LABEL_645:
            v229 = (const char *)sub_1B95C(result, v190);
            sub_64A18(3, "Unexpected fudge flag %s (%d) for %s", v229, v192[1], *(const char **)(v189 + 4));
            v230 = v192[1];
            if ( !v230 )
              v230 = 1;
            exit(v230);
          }
          req[2] |= 8u;
          v205 = (const char *)v192[4];
          *(_DWORD *)&req[60] = 0;
          strlen(v205);
          result = _memcpy_chk(&req[60], v205);
        }
        else if ( result == 423 )
        {
          req[2] |= 1u;
          *(_QWORD *)&req[40] = *((_QWORD *)v192 + 2);
        }
        else
        {
          if ( result != 424 )
            goto LABEL_645;
          req[2] |= 2u;
          *(_QWORD *)&req[48] = *((_QWORD *)v192 + 2);
        }
LABEL_470:
        v192 = (_DWORD *)*v192;
        if ( !v192 )
          goto LABEL_480;
      }
      if ( result == 302 )
      {
        req[2] |= 0x20u;
        if ( v192[4] )
          v204 = req[1] | 2;
        else
          v204 = req[1] & 0xFD;
        req[1] = v204;
        goto LABEL_470;
      }
      if ( result > 302 )
      {
        req[2] |= 0x40u;
        if ( v192[4] )
          v203 = req[1] | 4;
        else
          v203 = req[1] & 0xFB;
        req[1] = v203;
        goto LABEL_470;
      }
      if ( result != 301 )
        goto LABEL_645;
      req[2] |= 0x10u;
      if ( v192[4] )
        v193 = req[1] | 1;
      else
        v193 = req[1] & 0xFE;
      req[1] = v193;
      v192 = (_DWORD *)*v192;
    }
    while ( v192 );
LABEL_480:
    v194 = (_DWORD *)v234;
    if ( !v234 )
      goto LABEL_481;
LABEL_482:
    v188 = (_DWORD *)*v188;
  }
  while ( v188 );
LABEL_483:
  v195 = (_DWORD *)v235[42];
  if ( v195 )
  {
    v196 = (_DWORD *)*v195;
    if ( *v195 )
    {
      while ( 1 )
      {
        v197 = v196[1];
        if ( v197 == 322 )
        {
          result = sub_18ACC(result);
          goto LABEL_490;
        }
        if ( v197 <= 322 )
        {
          switch ( v197 )
          {
            case 263:
              result = sub_3A530(result);
              break;
            case 282:
              result = sub_23F70(result);
              break;
            case 262:
              result = sub_328A0();
              break;
          }
          goto LABEL_490;
        }
        if ( v197 == 420 )
        {
          result = sub_38960(result);
          goto LABEL_490;
        }
        if ( v197 == 425 )
          break;
        if ( v197 == 353 )
        {
          result = sub_32774(result);
          v196 = (_DWORD *)*v196;
          if ( !v196 )
            return result;
        }
        else
        {
LABEL_490:
          v196 = (_DWORD *)*v196;
          if ( !v196 )
            return result;
        }
      }
      result = sub_413A8(result);
      goto LABEL_490;
    }
  }
  return result;
}

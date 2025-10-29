int __fastcall sub_34568(int a1)
{
  float v1; // s0
  int v3; // r6
  int v5; // r3
  int v6; // r9
  unsigned int v7; // r8
  _DWORD **v8; // r6
  int v9; // r5
  int v10; // r5
  char *v11; // r8
  char *v12; // r1
  const char *v13; // r1
  int v14; // r5
  _DWORD *v15; // r3
  unsigned int v16; // r1
  char *v17; // r8
  char *v18; // r9
  int v19; // r5
  int v20; // r5
  int v21; // r12
  int v22; // r5
  int v23; // r1
  unsigned int v24; // r1
  int v25; // r5
  unsigned int v26; // r0
  _BYTE *v27; // r2
  int v28; // r12
  int v29; // t1
  unsigned int v30; // r1
  int v31; // r6
  int i; // r3
  int v33; // r8
  unsigned int v34; // r9
  int k; // r5
  int v36; // r0
  unsigned int v37; // r8
  int v38; // r3
  int v39; // r2
  int v40; // t1
  __int64 v41; // r6
  bool v42; // cc
  int v43; // r6
  _DWORD *v44; // r5
  int v45; // r7
  int v46; // r1
  int v47; // r3
  int v48; // r3
  float v49; // s14
  int v50; // r6
  unsigned int v51; // lr
  int v52; // r0
  int v53; // r12
  _DWORD *v54; // r3
  int v55; // t1
  _DWORD *v56; // r1
  int v57; // t1
  int v58; // r0
  unsigned int v59; // r1
  int v60; // lr
  int v61; // t1
  int v62; // r5
  int v63; // t1
  signed int v64; // r1
  signed int v65; // s17
  unsigned int v66; // s15
  unsigned int v67; // r7
  int v68; // r5
  int v69; // r0
  int v70; // r6
  int v71; // r3
  _DWORD *v72; // r2
  int v73; // lr
  int v74; // r12
  int v75; // t1
  _DWORD *v76; // r1
  int v77; // t1
  int v78; // r12
  int v79; // lr
  unsigned int v80; // r6
  int v81; // r5
  int v82; // r1
  int v83; // t1
  int v84; // r0
  int v85; // t1
  int v86; // lr
  unsigned int v87; // r0
  char *v88; // r1
  int v89; // t1
  char *v90; // r12
  int v91; // t1
  __int64 v92; // r0
  unsigned int v93; // r6
  int v94; // r2
  int v95; // r3
  int v96; // r3
  unsigned int v97; // r2
  int v98; // r7
  int v99; // r1
  int v100; // r7
  int j; // r6
  int v102; // r5
  int v103; // r3
  int v104; // r2
  int v105; // r5
  int v106; // r12
  int v107; // r2
  unsigned int v108; // r0
  int m; // r3
  int v110; // r1
  int v111; // t1
  bool v112; // zf
  unsigned int v113; // r0
  int v114; // r2
  unsigned int v115; // r3
  const char *v116; // r12
  int v117; // r0
  int v118; // r1
  int v119; // r2
  int v120; // r3
  int *v121; // r12
  int v122; // r0
  int v123; // r1
  int v124; // r2
  int v125; // r3
  int v126; // r1
  int v127; // r2
  int v128; // r7
  int v129; // r6
  int v130; // lr
  int v131; // r1
  int v132; // r5
  int v133; // t1
  int v134; // r12
  int v135; // r0
  unsigned int v136; // t1
  unsigned int v137; // r0
  int v138; // lr
  int *v139; // r5
  int v140; // t1
  int v141; // r2
  int v142; // t1
  unsigned int v143; // r6
  unsigned int *v144; // r1
  int v145; // r5
  int v146; // r2
  unsigned int v147; // r6
  int v148; // r0
  char *v149; // r3
  int v150; // t1
  int v151; // r8
  int v152; // r3
  int v153; // r1
  int v154; // r2
  unsigned int v155; // r0
  int v156; // r12
  char *v157; // r2
  int v158; // t1
  int v159; // [sp+18h] [bp-1044h]
  int v160; // [sp+1Ch] [bp-1040h]
  unsigned int v161; // [sp+2Ch] [bp-1030h]
  char *v162; // [sp+2Ch] [bp-1030h]
  int v163; // [sp+2Ch] [bp-1030h]
  unsigned int v164; // [sp+30h] [bp-102Ch]
  char *v165; // [sp+30h] [bp-102Ch]
  unsigned int v166; // [sp+30h] [bp-102Ch]
  char *v167; // [sp+30h] [bp-102Ch]
  char *v168; // [sp+30h] [bp-102Ch]
  char *v169; // [sp+30h] [bp-102Ch]
  int v170; // [sp+34h] [bp-1028h]
  int v171; // [sp+34h] [bp-1028h]
  pthread_t newthread; // [sp+3Ch] [bp-1020h] BYREF
  struct timeval v173; // [sp+40h] [bp-101Ch] BYREF
  _DWORD v174[2]; // [sp+48h] [bp-1014h] BYREF
  int (__fastcall *v175)(unsigned int); // [sp+50h] [bp-100Ch]
  _BYTE s[64]; // [sp+54h] [bp-1008h] BYREF
  _BYTE v177[1988]; // [sp+94h] [bp-FC8h] BYREF
  _DWORD v178[513]; // [sp+858h] [bp-804h] BYREF

  if ( sub_344E0() )
  {
    v3 = 0;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy((char *)v178, "Sweep already done, exit.\n");
      sub_47AB4(3, (const char *)v178, 0);
    }
    return v3;
  }
  sub_4A60C(&v173);
  dword_1AEA74 = 2;
  v3 = sub_33E28(a1);
  if ( v3 )
  {
    dword_1AEA74 = 1;
    return v3;
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_8;
  strcpy((char *)v178, "Sweep start...\n");
  sub_47AB4(3, (const char *)v178, 0);
  v10 = *(_DWORD *)(dword_1AEA6C + 8);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf((char *)v178, 0x800u, "%-40s : %s\n", "proj_type", *(const char **)v10);
    sub_47EC8(3, (const char *)v178, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_8;
    snprintf((char *)v178, 0x800u, "%-40s : %d\n", "work_mode_count", *(_DWORD *)(v10 + 4));
    sub_47EC8(3, (const char *)v178, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_68;
    v11 = "false";
    if ( *(_BYTE *)(v10 + 8) )
      v12 = "true";
    else
      v12 = "false";
    snprintf((char *)v178, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol", v12);
    sub_47EC8(3, (const char *)v178, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_8;
    if ( *(_BYTE *)(v10 + 9) )
      v11 = "true";
    snprintf((char *)v178, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", v11);
    sub_47EC8(3, (const char *)v178, 0);
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_71;
  v13 = "true";
  if ( !*(_DWORD *)(v10 + 12) )
    v13 = "false";
  snprintf((char *)v178, 0x800u, "%-40s : %s\n", "is_board_init_with_power_off", v13);
  sub_47EC8(3, (const char *)v178, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_8;
  snprintf((char *)v178, 0x800u, "%-40s : %.4f\n", "hw_threshold", *(float *)(v10 + 16));
  sub_47EC8(3, (const char *)v178, 0);
LABEL_68:
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_74;
  snprintf((char *)v178, 0x800u, "%-40s : %.2f\n", "nonce_rate_threshold", *(float *)(v10 + 20));
  sub_47EC8(3, (const char *)v178, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_8;
  snprintf((char *)v178, 0x800u, "%-40s : %.2f\n", "nonce_rate_ideal_threshold", *(float *)(v10 + 24));
  sub_47EC8(3, (const char *)v178, 0);
LABEL_71:
  if ( (unsigned int)dword_9E31C <= 3 )
  {
LABEL_77:
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "pm_read_freq", *(_DWORD *)(v10 + 44));
      sub_47EC8(3, (const char *)v178, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf((char *)v178, 0x800u, "%-40s : %d\n", "pm_grade_step", *(_DWORD *)(v10 + 48));
        sub_47EC8(3, (const char *)v178, 0);
        goto LABEL_80;
      }
    }
    goto LABEL_8;
  }
  snprintf((char *)v178, 0x800u, "%-40s : %.2f\n", "nonce_rate_ideal_threshold", *(float *)(v10 + 24));
  sub_47EC8(3, (const char *)v178, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_8;
  snprintf((char *)v178, 0x800u, "%-40s : %s\n", "pattern_path", *(const char **)(v10 + 32));
  sub_47EC8(3, (const char *)v178, 0);
LABEL_74:
  if ( (unsigned int)dword_9E31C <= 3 )
  {
LABEL_80:
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "r2_back_step", *(_DWORD *)(v10 + 52));
      sub_47EC8(3, (const char *)v178, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy((char *)v178, "\n");
        sub_47EC8(3, (const char *)v178, 0);
      }
    }
    goto LABEL_8;
  }
  snprintf((char *)v178, 0x800u, "%-40s : %d\n", "fan_pwm", *(_DWORD *)(v10 + 36));
  sub_47EC8(3, (const char *)v178, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf((char *)v178, 0x800u, "%-40s : %d\n", "pm_read_voltage", *(_DWORD *)(v10 + 40));
    sub_47EC8(3, (const char *)v178, 0);
    goto LABEL_77;
  }
LABEL_8:
  v5 = *(_DWORD *)(dword_1AEA6C + 8);
  if ( *(_DWORD *)(v5 + 4) )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = (_DWORD **)(*(_DWORD *)(v5 + 56) + v6);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v178, 0x800u, "[work mode %d]\n", v7);
      sub_47EC8(3, (const char *)v178, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf((char *)v178, 0x800u, "%-40s : %d\n", "voltage_base", **v8);
        sub_47EC8(3, (const char *)v178, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          goto LABEL_10;
        snprintf((char *)v178, 0x800u, "%-40s : %d\n", "voltage_step", (*v8)[1]);
        sub_47EC8(3, (const char *)v178, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          goto LABEL_20;
        snprintf((char *)v178, 0x800u, "%-40s : %d\n", "voltage_threshold", (*v8)[2]);
        sub_47EC8(3, (const char *)v178, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          goto LABEL_10;
        snprintf((char *)v178, 0x800u, "%-40s : %d\n", "voltage_apply_inc", (*v8)[3]);
        sub_47EC8(3, (const char *)v178, 0);
      }
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_23;
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "voltage_apply_max", (*v8)[4]);
      sub_47EC8(3, (const char *)v178, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "voltage_unbalance_inc", (*v8)[5]);
      sub_47EC8(3, (const char *)v178, 0);
LABEL_20:
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_26;
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "voltage_r2_inc", (*v8)[6]);
      sub_47EC8(3, (const char *)v178, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "freq_base", *v8[1]);
      sub_47EC8(3, (const char *)v178, 0);
LABEL_23:
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_29;
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "freq_threshold", v8[1][1]);
      sub_47EC8(3, (const char *)v178, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "freq_serial_threshold", v8[1][2]);
      sub_47EC8(3, (const char *)v178, 0);
LABEL_26:
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_32;
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "freq_diff_threshold", v8[1][3]);
      sub_47EC8(3, (const char *)v178, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "freq_high_vol_threshold_dec", v8[1][4]);
      sub_47EC8(3, (const char *)v178, 0);
LABEL_29:
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_35;
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "freq_basic_step", v8[1][5]);
      sub_47EC8(3, (const char *)v178, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "freq_pm_grade_step", v8[1][6]);
      sub_47EC8(3, (const char *)v178, 0);
LABEL_32:
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_38;
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "freq_pm_grade_bad_asic_dec", v8[1][7]);
      sub_47EC8(3, (const char *)v178, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_10;
      snprintf((char *)v178, 0x800u, "%-40s : %d\n", "freq_tempeture_dec", v8[1][8]);
      sub_47EC8(3, (const char *)v178, 0);
LABEL_35:
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf((char *)v178, 0x800u, "%-40s : %d\n", "freq_basic_retry", v8[1][9]);
        sub_47EC8(3, (const char *)v178, 0);
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf((char *)v178, 0x800u, "%-40s : %d\n", "hash_rate_target", *v8[2]);
          sub_47EC8(3, (const char *)v178, 0);
LABEL_38:
          if ( (unsigned int)dword_9E31C > 3 )
          {
            snprintf((char *)v178, 0x800u, "%-40s : %d\n", "hash_rate_for_vol_inc", v8[2][1]);
            sub_47EC8(3, (const char *)v178, 0);
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf((char *)v178, 0x800u, "%-40s : %d\n", "hash_rate_rank_step", v8[2][2]);
              sub_47EC8(3, (const char *)v178, 0);
            }
          }
        }
      }
LABEL_10:
      ++v7;
      v6 += 12;
      v5 = *(_DWORD *)(dword_1AEA6C + 8);
    }
    while ( v7 < *(_DWORD *)(v5 + 4) );
  }
  v3 = sub_371E8(a1, *(const char **)(v5 + 32));
  if ( v3 )
  {
    dword_1AEA74 = 1;
    sub_33B7C();
    return v3;
  }
  pthread_create(&newthread, 0, (void *(*)(void *))sub_33988, 0);
  pthread_detach(newthread);
  v3 = sub_24B88();
  if ( v3 )
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy((char *)v178, "Board init failed.\n");
      sub_47AB4(3, (const char *)v178, 0);
    }
    goto LABEL_45;
  }
  *(float *)(dword_1AEA6C + 4) = (float)sub_17308();
  sub_21F2C();
  usleep(0x2710u);
  sub_13EE8(*(unsigned __int8 *)(*(_DWORD *)(dword_1AEA6C + 8) + 36));
  sub_1A0F0(*(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 40));
  sub_30770(
    255,
    (unsigned __int8)byte_A0D79,
    *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 44),
    *(unsigned __int8 *)(*(_DWORD *)(dword_1AEA6C + 8) + 8));
  v14 = sub_1A1C0();
  if ( v14 != sub_1A1B0() )
  {
    v3 = sub_1A3B8();
    if ( v3 )
    {
LABEL_45:
      dword_1AEA74 = 1;
      goto LABEL_46;
    }
  }
  sub_38EEC((char *)(dword_1AEA6C + 5272), dword_1AEA6C + 5896, *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 48));
  v15 = *(_DWORD **)(dword_1AEA6C + 8);
  if ( !v15[1] )
  {
    v16 = dword_9E31C;
LABEL_154:
    if ( v16 > 3 )
    {
      strcpy((char *)v178, "Flush result.\n");
      sub_47AB4(3, (const char *)v178, 0);
    }
    goto LABEL_93;
  }
  v16 = dword_9E31C;
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    v159 = v15[14];
    if ( v16 > 3 )
    {
      snprintf((char *)v178, 0x800u, "Do single work mode pattern test, work_mode = %d.\n", v18);
      sub_47AB4(3, (const char *)v178, 0);
    }
    memset(v177, 0, sizeof(v177));
    v19 = dword_1AEA6C;
    memset((void *)(dword_1AEA6C + 5072), 0, 0x40u);
    memset((void *)(v19 + 5136), 0, 0x40u);
    memset((void *)(v19 + 5200), 0, 0x40u);
    v20 = v19 + 4 * (_DWORD)v18 + 4096;
    *(_DWORD *)(v20 + 1168) = 0;
    *(_DWORD *)(v20 + 1172) = 0;
    if ( sub_3997C() )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy((char *)v178, "Freq tuning basic init failed.\n");
        sub_47AB4(3, (const char *)v178, 0);
      }
      goto LABEL_92;
    }
    v160 = v159 + 12 * (_DWORD)v18;
    memset(s, 0, sizeof(s));
    v24 = sub_33C2C(v160, (int)s);
    if ( v24 )
      goto LABEL_92;
    v25 = dword_A0D68;
    v26 = 0;
    v27 = s;
    v28 = dword_A0D68;
    do
    {
      v29 = *(_DWORD *)(v28 + 4);
      v28 += 4;
      v27 += 4;
      if ( v29 == 1 )
      {
        ++v24;
        v26 += *((_DWORD *)v27 - 1);
      }
    }
    while ( v27 != v177 );
    if ( v24 )
      v26 /= v24;
    v30 = *(_DWORD *)(*(_DWORD *)(v160 + 4) + 36);
    if ( v30 > v26 )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf((char *)v178, 0x800u, "freq_avg = %d, freq_basic_retry = %d, is_need_retry = %d\n", v26, v30, 1);
        sub_47AB4(3, (const char *)v178, 0);
        v25 = dword_A0D68;
      }
      v41 = 3435973837LL
          * (*(_DWORD *)(*(_DWORD *)(v160 + 8) + 8)
           * 1000
           * *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 52)
           / 0x74B2u
           / *(unsigned __int8 *)(v25 + 12935));
      **(_DWORD **)(v159 + 12 * (_DWORD)v18) += *(_DWORD *)(*(_DWORD *)(v159 + 12 * (_DWORD)v18) + 24);
      v42 = (unsigned int)dword_9E31C > 3;
      *(_DWORD *)(*(_DWORD *)(v160 + 4) + 4) -= 5 * (HIDWORD(v41) >> 2);
      if ( v42 )
      {
        snprintf((char *)v178, 0x800u, "voltage_base = %d\n", **(_DWORD **)(v159 + 12 * (_DWORD)v18));
        sub_47AB4(3, (const char *)v178, 0);
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf((char *)v178, 0x800u, "freq_threshold = %d\n", *(_DWORD *)(*(_DWORD *)(v160 + 4) + 4));
          sub_47AB4(3, (const char *)v178, 0);
        }
      }
      memset(s, 0, sizeof(s));
      if ( sub_33C2C(v160, (int)s) )
        goto LABEL_92;
      v25 = dword_A0D68;
    }
    else if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf((char *)v178, 0x800u, "freq_avg = %d, freq_basic_retry = %d, is_need_retry = %d\n", v26, v30, 0);
      sub_47AB4(3, (const char *)v178, 0);
      v25 = dword_A0D68;
    }
    v31 = 0;
    for ( i = v25; ; i = dword_A0D68 )
    {
      if ( *(_DWORD *)(i + 4 * v31 + 4) == 1 )
      {
        sub_39BEC(v31);
        if ( v1 > *(float *)(dword_1AEA6C + 4 * v31 + 5072) )
          *(float *)(dword_1AEA6C + 4 * v31 + 5072) = v1;
      }
      if ( ++v31 == 16 )
        break;
    }
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy((char *)v178, "Build tuning PM grade config.\n");
      sub_47AB4(3, (const char *)v178, 0);
    }
    v38 = 4;
    v39 = dword_A0D68;
    *(_DWORD *)v177 = **(_DWORD **)(v159 + 12 * (_DWORD)v18);
    do
    {
      v40 = *(_DWORD *)(v39 + 4);
      v39 += 4;
      if ( v40 == 1 )
        *(_DWORD *)&v177[v38] = *(_DWORD *)&s[v38 - 4];
      v38 += 4;
    }
    while ( v38 != 68 );
    *(_DWORD *)&v177[68] = *(_DWORD *)(*(_DWORD *)(v160 + 4) + 4);
    *(_DWORD *)&v177[72] = *(_DWORD *)(*(_DWORD *)(v160 + 4) + 8);
    *(_DWORD *)&v177[76] = *(_DWORD *)(*(_DWORD *)(v160 + 4) + 12);
    *(_DWORD *)&v177[80] = *(_DWORD *)(*(_DWORD *)(v160 + 4) + 24);
    *(_DWORD *)&v177[84] = *(_DWORD *)(*(_DWORD *)(v160 + 4) + 28);
    v177[88] = *(_BYTE *)(*(_DWORD *)(dword_1AEA6C + 8) + 8);
    v177[89] = *(_BYTE *)(*(_DWORD *)(dword_1AEA6C + 8) + 9);
    *(_DWORD *)&v177[92] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 12);
    *(_DWORD *)&v177[96] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 16);
    *(_DWORD *)&v177[100] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 20);
    *(_DWORD *)&v177[104] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 28);
    *(_DWORD *)&v177[108] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 48);
    *(_DWORD *)&v177[112] = (unsigned int)(*(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 48) + 5)
                          / *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 48);
    memcpy(&v177[116], (const void *)(dword_1AEA6C + 5272), 0x270u);
    memcpy(&v177[740], (const void *)(dword_1AEA6C + 5896), 0x4E0u);
    if ( sub_3BBE8((int)v177) )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy((char *)v178, "PM grade init failed.\n");
        sub_47AB4(3, (const char *)v178, 0);
      }
      goto LABEL_92;
    }
    v43 = sub_3BD34();
    if ( v43 )
      break;
    v44 = &v177[4];
    do
    {
      v45 = 4 * v43;
      if ( *(_DWORD *)(dword_A0D68 + 4 * v43 + 4) == 1 )
      {
        if ( sub_3B5A8(v43) )
        {
          sub_3B5C4(v43, dword_1AEA6C + 312 * v43 + 12);
        }
        else
        {
          v46 = dword_1AEA6C + 320 + 312 * v43;
          v47 = dword_1AEA6C + 312 * v43 + 8;
          do
          {
            *(_DWORD *)(v47 + 4) = *v44;
            v47 += 4;
          }
          while ( v47 != v46 );
          if ( (unsigned int)dword_9E31C > 3 )
          {
            snprintf((char *)v178, 0x800u, "Chain %d freq result is invalid, using freq_base as default.\n", v43);
            sub_47AB4(3, (const char *)v178, 0);
          }
        }
        sub_3B658(v43);
        if ( v1 > *(float *)(dword_1AEA6C + v45 + 5072) )
          *(float *)(dword_1AEA6C + v45 + 5072) = v1;
      }
      ++v43;
      ++v44;
    }
    while ( v43 != 16 );
    v48 = dword_1AEA6C;
    v49 = *(float *)(dword_1AEA6C + 4);
    if ( v49 < 35.0 )
    {
      if ( v49 < 25.0 || v49 >= 35.0 )
      {
        if ( v49 >= 15.0 )
        {
          if ( v49 >= 25.0 )
            v50 = 10;
          else
            v50 = 20;
        }
        else
        {
          v50 = 10;
        }
      }
      else
      {
        v50 = 30;
      }
    }
    else
    {
      v50 = 40;
    }
    v51 = dword_9E31C;
    if ( (unsigned int)dword_9E31C > 4 )
    {
      snprintf((char *)v178, 0x800u, "env_temp = %.2f, freq_sub = %d.\n", v49, v50);
      sub_47AB4(4, (const char *)v178, 0);
      v48 = dword_1AEA6C;
      v51 = dword_9E31C;
    }
    v52 = dword_A0D68;
    v53 = v48 + 5000;
    v54 = (_DWORD *)(v48 + 8);
    do
    {
      v55 = *(_DWORD *)(v52 + 4);
      v52 += 4;
      v56 = v54 + 78;
      if ( v55 == 1 )
      {
        do
        {
          v57 = v54[1];
          *++v54 = v57 - v50;
        }
        while ( v54 != v56 );
      }
      v54 = v56;
    }
    while ( v56 != (_DWORD *)v53 );
    if ( v51 > 3 )
    {
      snprintf((char *)v178, 0x800u, "Sub runtime freq directly, freq_sub = %d.\n", v50);
      sub_47AB4(3, (const char *)v178, 0);
    }
    sub_3143C(v174);
    v58 = dword_A0D68;
    v59 = 0;
    v60 = dword_1AEA6C + 8;
    v164 = 149370 * (unsigned int)*(unsigned __int8 *)(dword_A0D68 + 12935) / 0x3E8;
    do
    {
      v61 = *(_DWORD *)(v58 + 4);
      v58 += 4;
      v62 = v60 + 312;
      if ( v61 == 1 )
      {
        do
        {
          v63 = *(_DWORD *)(v60 + 4);
          v60 += 4;
          v59 += 383 * v63;
        }
        while ( v60 != v62 );
      }
      v60 = v62;
    }
    while ( v58 != dword_A0D68 + 64 );
    v64 = v59 / 0x3E8;
    v65 = v64;
    v66 = (unsigned int)((double)v64 * 0.97);
    if ( v66 < v174[1] )
      v161 = 1000 * (v66 / 0x3E8);
    else
      v161 = v175((unsigned int)((double)v64 * 0.97));
    v67 = dword_9E31C;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf((char *)v178, 0x800u, "hash_rate_unit_GH    = %d\n", v164);
      sub_47AB4(3, (const char *)v178, 0);
      v67 = dword_9E31C;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf((char *)v178, 0x800u, "hash_rate_curr_GH     = %d\n", v65);
        sub_47AB4(3, (const char *)v178, 0);
        v67 = dword_9E31C;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf((char *)v178, 0x800u, "hash_rate_for_sale_GH = %d\n", v66);
          sub_47AB4(3, (const char *)v178, 0);
          v67 = dword_9E31C;
          if ( (unsigned int)dword_9E31C > 3 )
          {
            snprintf((char *)v178, 0x800u, "hash_rate_sale_GH     = %d\n", v161);
            sub_47AB4(3, (const char *)v178, 0);
            v67 = dword_9E31C;
          }
        }
      }
    }
    v68 = dword_A0D68;
    v69 = v66 - v161;
    v162 = (char *)dword_1AEA6C;
    if ( v69 <= 0 )
    {
      v71 = 0;
      v70 = dword_1AEA6C + 8;
    }
    else
    {
      v70 = dword_1AEA6C + 8;
      v71 = 5 * (v69 / v164);
      v72 = (_DWORD *)(dword_1AEA6C + 8);
      v73 = dword_1AEA6C + 5000;
      v74 = dword_A0D68;
      do
      {
        v75 = *(_DWORD *)(v74 + 4);
        v74 += 4;
        v76 = v72 + 78;
        if ( v75 == 1 )
        {
          do
          {
            v77 = v72[1];
            *++v72 = v77 - v71;
          }
          while ( v76 != v72 );
        }
        v72 = v76;
      }
      while ( v76 != (_DWORD *)v73 );
    }
    v78 = v70;
    v79 = v68;
    v80 = 0;
    v81 = v68 + 64;
    v82 = v78;
    v165 = v162 + 12;
    do
    {
      v83 = *(_DWORD *)(v79 + 4);
      v79 += 4;
      v84 = v82 + 312;
      if ( v83 == 1 )
      {
        do
        {
          v85 = *(_DWORD *)(v82 + 4);
          v82 += 4;
          v80 += 383 * v85;
        }
        while ( v82 != v84 );
      }
      v82 = v84;
    }
    while ( v81 != v79 );
    if ( v67 > 3 )
    {
      snprintf(
        (char *)v178,
        0x800u,
        "Sub runtime freq by hash rate, freq_sub = %d, hash_rate_now = %d.\n",
        v71,
        v80 / 0x3E8);
      sub_47AB4(3, (const char *)v178, 0);
      v162 = (char *)dword_1AEA6C;
      v165 = (char *)(dword_1AEA6C + 12);
    }
    sub_3143C(v174);
    v86 = dword_A0D68;
    v87 = 0;
    v88 = v165 - 4;
    do
    {
      v89 = *(_DWORD *)(v86 + 4);
      v86 += 4;
      v90 = v88 + 312;
      if ( v89 == 1 )
      {
        do
        {
          v91 = *((_DWORD *)v88 + 1);
          v88 += 4;
          v87 += 383 * v91;
        }
        while ( v90 != v88 );
      }
      v88 = v90;
    }
    while ( v86 != dword_A0D68 + 64 );
    v92 = 274877907LL * v87;
    v93 = HIDWORD(v92) >> 6;
    if ( (unsigned int)dword_9E31C <= 3
      || (snprintf(
            (char *)v178,
            0x800u,
            "hash_rate_curr = %d, hash_rate_for_vol_inc = %d\n",
            HIDWORD(v92) >> 6,
            *(_DWORD *)(*(_DWORD *)(v160 + 8) + 4)),
          sub_47AB4(3, (const char *)v178, 0),
          (unsigned int)dword_9E31C <= 3) )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v159 + 12 * (_DWORD)v18) + 8) <= **(_DWORD **)(v159 + 12 * (_DWORD)v18) )
        goto LABEL_272;
    }
    else
    {
      snprintf(
        (char *)v178,
        0x800u,
        "voltage_base = %d, voltage_threshold = %d\n",
        **(_DWORD **)(v159 + 12 * (_DWORD)v18),
        *(_DWORD *)(*(_DWORD *)(v159 + 12 * (_DWORD)v18) + 8));
      sub_47AB4(3, (const char *)v178, 0);
      if ( **(_DWORD **)(v159 + 12 * (_DWORD)v18) >= *(_DWORD *)(*(_DWORD *)(v159 + 12 * (_DWORD)v18) + 8) )
      {
        if ( (unsigned int)dword_9E31C > 3 )
        {
          strcpy((char *)v178, "Pass: voltage is reach threshold.\n");
          sub_47AB4(3, (const char *)v178, 0);
          v94 = 1;
          goto LABEL_220;
        }
        goto LABEL_272;
      }
    }
    if ( (unsigned int)v175(v93) >= *(_DWORD *)(*(_DWORD *)(v160 + 8) + 4) && !sub_33A7C() )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy((char *)v178, "Pass: hash rate is enough.\n");
        sub_47AB4(3, (const char *)v178, 0);
      }
LABEL_272:
      v94 = 1;
      goto LABEL_220;
    }
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy((char *)v178, "Not pass: hash rate is not enough.\n");
      sub_47AB4(3, (const char *)v178, 0);
    }
    v94 = 0;
LABEL_220:
    v95 = dword_1AEA6C + 4096;
    *((_DWORD *)v162 + 1267) = v94;
    if ( *(_DWORD *)(v95 + 972) )
    {
      v98 = sub_33A7C();
      if ( v98 )
      {
        v99 = dword_1AEA6C;
        v100 = 12;
        for ( j = 0; j != 16; ++j )
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * j + 4) == 1 )
          {
            if ( *(_DWORD *)(v99 + 4 * (j + 1300)) )
              v102 = 250;
            else
              v102 = 300;
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf((char *)v178, 0x800u, "Mark unqualified, chain = %d, freq = %d\n", j, v102);
              sub_47AB4(3, (const char *)v178, 0);
            }
            v99 = dword_1AEA6C;
            v103 = dword_1AEA6C + v100 - 4;
            v104 = dword_1AEA6C + v100 + 308;
            do
            {
              *(_DWORD *)(v103 + 4) = v102;
              v103 += 4;
            }
            while ( v104 != v103 );
            *(_DWORD *)(v99 + 4 * (j + 1250) + 4) = 29874 * v102 / 0x3E8u;
          }
          v100 += 312;
        }
        *(_DWORD *)(v99 + 4 * (_DWORD)(v18 + 1316) + 4) = 1;
      }
      else
      {
        if ( sub_3405C((int **)v160, *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 12), 0) )
        {
          if ( (unsigned int)dword_9E31C <= 3 )
            goto LABEL_92;
          v116 = "Get ideal hash rate failed, round 0, exit.\n";
          goto LABEL_276;
        }
        if ( sub_378DC() )
        {
          if ( sub_3405C((int **)v160, 1, 1) )
          {
            if ( (unsigned int)dword_9E31C <= 3 )
              goto LABEL_92;
            v116 = "Get ideal hash rate failed, round 1, exit.\n";
            goto LABEL_276;
          }
          v163 = 1;
        }
        else
        {
          v163 = 0;
        }
        if ( sub_378DC() )
        {
          sub_3143C(v174);
          v137 = 0;
          v138 = 0;
          v139 = (int *)(dword_A0D68 + 4);
          do
          {
            v140 = *v139++;
            if ( v140 == 1 )
            {
              v141 = dword_1AEA6C + 8 + v138;
              do
              {
                v142 = *(_DWORD *)(v141 + 4);
                v141 += 4;
                v137 += 383 * v142;
              }
              while ( dword_1AEA6C + 320 + v138 != v141 );
            }
            v138 += 312;
          }
          while ( v138 != 4992 );
          v166 = v137 / 0x3E8;
          v143 = v175(v137 / 0x3E8);
          if ( (unsigned int)dword_9E31C > 3 )
          {
            snprintf((char *)v178, 0x800u, "hash_rate_curr_GH = %d\n", v166);
            sub_47AB4(3, (const char *)v178, 0);
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf((char *)v178, 0x800u, "hash_rate_sale_GH = %d\n", v143);
              sub_47AB4(3, (const char *)v178, 0);
            }
          }
          v144 = *(unsigned int **)(v160 + 8);
          if ( v143 > *v144 )
          {
            v145 = dword_A0D68;
            v146 = dword_1AEA6C;
            v147 = 5 * (v144[2] / (((unsigned int)&loc_24778 + 2) * *(unsigned __int8 *)(dword_A0D68 + 12935) / 0x3E8));
            v148 = 1;
            v167 = (char *)(dword_1AEA6C - 304);
            v170 = dword_1AEA6C + 8;
            do
            {
              if ( *(_DWORD *)(v145 + 4 * v148) == 1 )
              {
                v149 = &v167[312 * v148];
                do
                {
                  v150 = *((_DWORD *)v149 + 1);
                  v149 += 4;
                  *(_DWORD *)v149 = v150 - v147;
                }
                while ( v149 != (char *)(v170 + 312 * v148) );
              }
              ++v148;
            }
            while ( v148 != 17 );
            v155 = 0;
            v169 = (char *)(v146 - 304);
            v156 = 1;
            v171 = v146 + 8;
            do
            {
              if ( *(_DWORD *)(v145 + 4 * v156) == 1 )
              {
                v157 = &v169[312 * v156];
                do
                {
                  v158 = *((_DWORD *)v157 + 1);
                  v157 += 4;
                  v155 += 383 * v158;
                }
                while ( (char *)(v171 + 312 * v156) != v157 );
              }
              ++v156;
            }
            while ( v156 != 17 );
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf(
                (char *)v178,
                0x800u,
                "Sub runtime freq to low rank, freq_sub = %d, hash_rate_now = %d.\n",
                v147,
                v155 / 0x3E8);
              sub_47AB4(3, (const char *)v178, 0);
            }
          }
          else
          {
            **(_DWORD **)(v159 + 12 * (_DWORD)v18) += *(_DWORD *)(*(_DWORD *)(v159 + 12 * (_DWORD)v18) + 20);
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf((char *)v178, 0x800u, "Inc voltage, voltage_base = %d\n", **(_DWORD **)(v159 + 12 * (_DWORD)v18));
              sub_47AB4(3, (const char *)v178, 0);
            }
          }
          if ( sub_3405C((int **)v160, 1, v163 + 1) )
          {
            if ( (unsigned int)dword_9E31C <= 3 )
              goto LABEL_92;
            v116 = "Get ideal hash rate failed, round 2, exit.\n";
LABEL_276:
            v117 = *(_DWORD *)v116;
            v118 = *((_DWORD *)v116 + 1);
            v119 = *((_DWORD *)v116 + 2);
            v120 = *((_DWORD *)v116 + 3);
            v121 = (int *)(v116 + 16);
            v178[0] = v117;
            v178[1] = v118;
            v178[2] = v119;
            v178[3] = v120;
            v122 = *v121;
            v123 = v121[1];
            v124 = v121[2];
            v125 = v121[3];
            v121 += 4;
            v178[4] = v122;
            v178[5] = v123;
            v178[6] = v124;
            v178[7] = v125;
            v126 = v121[1];
            v127 = v121[2];
            v178[8] = *v121;
            v178[9] = v126;
            v178[10] = v127;
            sub_47AB4(3, (const char *)v178, 0);
            goto LABEL_92;
          }
          if ( sub_378DC() )
          {
            *(_DWORD *)(dword_1AEA6C + 4 * (_DWORD)(v18 + 1316)) = 1;
            v168 = v17;
            do
            {
              if ( *(_DWORD *)(dword_A0D68 + 4 * v98 + 4) == 1 )
              {
                if ( sub_37834(v98) )
                  v151 = 250;
                else
                  v151 = 300;
                if ( (unsigned int)dword_9E31C > 3 )
                {
                  snprintf((char *)v178, 0x800u, "Mark unbalance, chain = %d, freq = %d\n", v98, v151);
                  sub_47AB4(3, (const char *)v178, 0);
                }
                v152 = dword_1AEA6C;
                v153 = dword_1AEA6C + 320 + 312 * v98;
                v154 = dword_1AEA6C + 312 * v98 + 8;
                do
                {
                  *(_DWORD *)(v154 + 4) = v151;
                  v154 += 4;
                }
                while ( v153 != v154 );
                *(_DWORD *)(v152 + 4 * (v98 + 1250) + 4) = 29874 * v151 / 0x3E8u;
              }
              ++v98;
            }
            while ( v98 != 16 );
            v17 = v168;
          }
        }
      }
      v128 = dword_1AEA6C;
      v129 = dword_A0D68;
      v130 = 0;
      v131 = dword_1AEA6C + 8;
      v132 = dword_1AEA6C + 1376 * (_DWORD)v18 + 7143;
      do
      {
        v133 = *(_DWORD *)(v129 + 4);
        v129 += 4;
        v134 = v131 + 312;
        if ( v133 == 1 )
        {
          v135 = v132;
          do
          {
            v136 = *(_DWORD *)(v131 + 4);
            v131 += 4;
            *(_BYTE *)++v135 = v136 / 5;
          }
          while ( v134 != v131 );
          *(_WORD *)(v132 + 79) = **(_DWORD **)v160;
          *(_DWORD *)(v128 + 1376 * (_DWORD)v18 + 86 * v130 + 7224) = *(_DWORD *)(v128 + 4 * v130 + 5004);
        }
        ++v130;
        v131 = v134;
        v132 += 86;
      }
      while ( v130 != 16 );
    }
    sub_39AB4();
    sub_3B4EC();
    v96 = dword_1AEA6C;
    if ( *(_DWORD *)(dword_1AEA6C + 5068) )
    {
      v15 = *(_DWORD **)(dword_1AEA6C + 8);
      v97 = v15[1];
      if ( (char *)(v97 - 1) == v18 )
      {
        v16 = dword_9E31C;
      }
      else
      {
        sub_385EC(v15[3]);
        v16 = dword_9E31C;
        v15 = *(_DWORD **)(dword_1AEA6C + 8);
        v97 = v15[1];
      }
    }
    else
    {
      **(_DWORD **)(v159 + 12 * (_DWORD)v18) += *(_DWORD *)(*(_DWORD *)(v159 + 12 * (_DWORD)v18) + 4);
      v16 = dword_9E31C;
      v42 = (unsigned int)dword_9E31C > 3;
      *(_DWORD *)(*(_DWORD *)(v160 + 4) + 4) -= *(_DWORD *)(*(_DWORD *)(v160 + 4) + 16);
      if ( v42 )
      {
        snprintf(
          (char *)v178,
          0x800u,
          "Not pass, try again, voltage = %d, freq_threshold = %d\n",
          **(_DWORD **)(v159 + 12 * (_DWORD)v18),
          *(_DWORD *)(*(_DWORD *)(v160 + 4) + 4));
        sub_47AB4(3, (const char *)v178, 0);
        v96 = dword_1AEA6C;
        v16 = dword_9E31C;
      }
      v15 = *(_DWORD **)(v96 + 8);
      --v17;
      v97 = v15[1];
    }
    v18 = ++v17;
    if ( (unsigned int)v17 >= v97 )
      goto LABEL_154;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy((char *)v178, "Do freq tuning PM grade failed.\n");
    sub_47AB4(3, (const char *)v178, 0);
  }
LABEL_92:
  sub_39AB4();
  sub_3B4EC();
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy((char *)v178, "Do single work mode pattern test failed, exit.\n");
    sub_47AB4(3, (const char *)v178, 0);
    v16 = dword_9E31C;
    goto LABEL_154;
  }
LABEL_93:
  v21 = dword_1AEA6C;
  v22 = 0;
  v23 = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 4);
  do
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * v22 + 4) == 1 )
    {
      sub_19190(v22, v23);
      v21 = dword_1AEA6C;
      v23 = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 4);
    }
    ++v22;
  }
  while ( v22 != 16 );
  if ( v23 )
  {
    v33 = 0;
    v34 = 0;
    while ( 2 )
    {
      for ( k = 0; k != 16; ++k )
      {
        if ( *(_DWORD *)(dword_A0D68 + 4 * k + 4) == 1 )
        {
          v36 = sub_19098(k, (unsigned __int8)v34, (void *)(v21 + v33 + 7144 + 86 * k));
          if ( v36 )
          {
            v3 = v36;
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf((char *)v178, 0x800u, "Flush result to eeprom failed, work_mode = %d, chain = %d.\n", v34, k);
              sub_47AB4(3, (const char *)v178, 0);
            }
            goto LABEL_123;
          }
          v21 = dword_1AEA6C;
        }
      }
      ++v34;
      v33 += 1376;
      if ( v34 < *(_DWORD *)(*(_DWORD *)(v21 + 8) + 4) )
        continue;
      break;
    }
  }
  v3 = sub_18650();
LABEL_123:
  if ( *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 4) )
  {
    if ( *(_DWORD *)(dword_1AEA6C + 5268) )
    {
      sub_31794(14, 255);
    }
    else
    {
      v37 = *(_DWORD *)(dword_1AEA6C + 5264);
      if ( v37 )
      {
        sub_31794(21, 255);
      }
      else
      {
        v105 = 0;
        while ( 1 )
        {
          sub_3143C(v178);
          v106 = dword_1AEA6C;
          v107 = dword_A0D68;
          v108 = 0;
          for ( m = 0; m != 16; ++m )
          {
            v111 = *(_DWORD *)(v107 + 4);
            v107 += 4;
            v110 = v111;
            v112 = v111 == 1;
            if ( v111 == 1 )
              v110 = 1376 * v37 + 86 * m;
            if ( v112 )
              v108 += *(_DWORD *)(dword_1AEA6C + v110 + 7224);
          }
          if ( v178[1] > v108 )
          {
            v113 = 1000 * (v108 / 0x3E8);
          }
          else
          {
            v113 = ((int (*)(void))v178[2])();
            v106 = dword_1AEA6C;
          }
          v114 = *(_DWORD *)(v106 + 8);
          v115 = **(_DWORD **)(*(_DWORD *)(v114 + 56) + v105 + 8);
          if ( v115 > v113 )
            break;
          ++v37;
          v105 += 12;
          if ( v37 >= *(_DWORD *)(v114 + 4) )
            goto LABEL_127;
        }
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(
            (char *)v178,
            0x800u,
            "Under target hash rate: work_mode = %d, hash_rate_sale = %d, hash_rate_target = %d.\n",
            v37,
            v113,
            v115);
          sub_47AB4(3, (const char *)v178, 0);
        }
        sub_31794(6, 255);
      }
    }
  }
LABEL_127:
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy((char *)v178, "Mark sweep done.\n");
    sub_47AB4(3, (const char *)v178, 0);
  }
  system("touch /config/scanfreqdone");
  if ( v3 || dword_1AEA74 != 2 )
    goto LABEL_45;
  dword_1AEA74 = 0;
LABEL_46:
  pthread_cancel(newthread);
  sub_374D4();
  sub_373BC();
  sub_33B7C();
  sub_4A60C((struct timeval *)v177);
  v9 = *(_DWORD *)v177 - v173.tv_sec;
  if ( *(_DWORD *)&v177[4] - v173.tv_usec < 0 )
    --v9;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy((char *)v178, "\n");
    sub_47AB4(3, (const char *)v178, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf((char *)v178, 0x800u, "*** Sweep done, time cost %ld minutes. ***\n", v9 / 60);
      sub_47AB4(3, (const char *)v178, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy((char *)v178, "\n");
        sub_47AB4(3, (const char *)v178, 0);
      }
    }
  }
  return v3;
}

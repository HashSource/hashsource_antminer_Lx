int __fastcall sub_5C898(_DWORD *a1)
{
  pthread_t v2; // r0
  char *v3; // r0
  const struct timespec *v4; // r1
  int v5; // r6
  __int64 v6; // r4
  int v7; // r0
  int v8; // r1
  __int64 v9; // r2
  bool v10; // zf
  char v11; // r7
  int v12; // r7
  void ***v13; // r6
  void **v14; // r4
  time_t v15; // r0
  void **v16; // r3
  int v17; // r2
  void **v18; // r8
  size_t v19; // r0
  int v20; // r3
  int v21; // r12
  int v22; // r1
  void ***v23; // r5
  int v24; // r3
  unsigned int v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r1
  int v28; // r3
  unsigned int v29; // r2
  unsigned int v30; // r1
  int v31; // r3
  unsigned int v32; // r4
  void **v33; // r3
  int v34; // r2
  void **v35; // r3
  char *v36; // r3
  int v37; // r1
  void ****v38; // r3
  __int64 v39; // r2
  time_t v40; // r0
  void **v41; // r2
  int v42; // r3
  int v43; // r0
  _DWORD *v45; // r7
  void **v46; // r3
  unsigned int v47; // r4
  int v48; // r11
  _DWORD *v49; // r5
  _DWORD *v50; // r8
  int v51; // r4
  char *v52; // r9
  unsigned int v53; // r3
  int v54; // r3
  void **v55; // r3
  void *v56; // r2
  unsigned int v57; // r1
  bool v58; // cc
  char *v59; // r2
  char *v60; // lr
  char *v61; // r12
  int v62; // r0
  int v63; // r1
  int v64; // r2
  int v65; // r3
  _DWORD *v66; // lr
  char *v67; // r12
  int v68; // r1
  int v69; // r2
  int v70; // r3
  void **v71; // r0
  void **v72; // r7
  void *v73; // r0
  int *v74; // r0
  int v75; // r3
  const char *v76; // r1
  int v77; // r3
  int v78; // r3
  int v79; // r3
  __int64 v80; // kr00_8
  int v81; // r3
  int v82; // r3
  int v83; // r3
  int v84; // r3
  unsigned int v85; // [sp+20h] [bp-C7Ch]
  int v86; // [sp+24h] [bp-C78h]
  __int64 v87; // [sp+28h] [bp-C74h]
  _DWORD *v88; // [sp+4Ch] [bp-C50h]
  int v89; // [sp+54h] [bp-C48h] BYREF
  void **v90; // [sp+58h] [bp-C44h] BYREF
  int v91; // [sp+5Ch] [bp-C40h] BYREF
  __int64 v92; // [sp+60h] [bp-C3Ch] BYREF
  char v93[12]; // [sp+68h] [bp-C34h] BYREF
  char s[16]; // [sp+74h] [bp-C28h] BYREF
  char v95[20]; // [sp+84h] [bp-C18h] BYREF
  char v96[1024]; // [sp+98h] [bp-C04h] BYREF
  char v97[2052]; // [sp+498h] [bp-804h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  snprintf(s, 0x10u, "%d/SStratum", *a1);
  sub_4BD10(s);
  v3 = sub_49F68();
  a1[182] = v3;
  if ( !v3 )
  {
    v60 = " stratum_q in stratum_sthread";
    qmemcpy(v97, "Failed to create", 16);
    v61 = &v97[16];
    goto LABEL_84;
  }
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
  {
    snprintf(v97, 0x800u, "in %s ", "stratum_sthread");
    sub_47AB4(5, v97, 0);
    v3 = (char *)a1[182];
  }
  v4 = (const struct timespec *)*((unsigned __int8 *)a1 + 105);
  v5 = 0;
  v6 = 0;
  if ( *((_BYTE *)a1 + 105) )
    goto LABEL_48;
  do
  {
    v7 = sub_4A110((int)v3, v4);
    v90 = (void **)v7;
    if ( !v7 )
    {
      v60 = "Stratum q returned empty work";
      v61 = v97;
LABEL_84:
      v62 = *(_DWORD *)v60;
      v63 = *((_DWORD *)v60 + 1);
      v64 = *((_DWORD *)v60 + 2);
      v65 = *((_DWORD *)v60 + 3);
      v66 = v60 + 16;
      *(_DWORD *)v61 = v62;
      *((_DWORD *)v61 + 1) = v63;
      *((_DWORD *)v61 + 2) = v64;
      *((_DWORD *)v61 + 3) = v65;
      v67 = v61 + 16;
      v68 = v66[1];
      v69 = v66[2];
      v70 = v66[3];
      *(_DWORD *)v67 = *v66;
      *((_DWORD *)v67 + 1) = v68;
      *((_DWORD *)v67 + 2) = v69;
      *((_WORD *)v67 + 6) = v70;
      sub_47AB4(3, v97, 1);
      sub_54CCC(1, 1);
    }
    if ( *(_DWORD *)(v7 + 304) > 8u )
    {
      if ( (byte_244080 || byte_1AECC4 || dword_9E320 > 2)
        && ((snprintf(
               v97,
               0x800u,
               "Pool %d asking for inappropriately long nonce2 length %d",
               *a1,
               *(_DWORD *)(v7 + 304)),
             sub_47AB4(3, v97, 0),
             byte_244080)
         || byte_1AECC4)
        || dword_9E320 > 2 )
      {
        strcpy(v97, "Not attempting to submit shares");
        sub_47AB4(3, v97, 0);
      }
      sub_53084(&v90, "cgminer.c", "stratum_sthread", 7650);
      goto LABEL_47;
    }
    v8 = *(_DWORD *)(v7 + 76);
    v9 = *(_QWORD *)(v7 + 296);
    v86 = v8;
    v10 = HIDWORD(v9) == HIDWORD(v6);
    v87 = v9;
    if ( HIDWORD(v9) == HIDWORD(v6) )
      v10 = (_DWORD)v9 == (_DWORD)v6;
    v89 = *(_DWORD *)(v7 + 76);
    v11 = v10;
    if ( v8 == v5 )
      v12 = v11 & 1;
    else
      v12 = 0;
    v92 = v9;
    if ( v12 )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
      {
        snprintf(v97, 0x800u, "Filtering duplicate share to pool %d", *a1);
        sub_47AB4(6, v97, 0);
      }
      sub_53084(&v90, "cgminer.c", "stratum_sthread", 7662);
      goto LABEL_47;
    }
    sub_4981C(v93, (int)&v89, 4);
    sub_4981C(v95, (int)&v92, (int)v90[76]);
    v13 = (void ***)sub_496AC(0x34u, 1u, "cgminer.c", "stratum_sthread", 7671);
    v14 = v90;
    v15 = time(0);
    v16 = v90;
    v13[11] = (void **)v15;
    v13[9] = v16;
    memset(v96, 0, sizeof(v96));
    if ( pthread_mutex_lock(&stru_1AF200) )
    {
      v74 = _errno_location();
      snprintf(
        v97,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v74,
        "cgminer.c",
        "stratum_sthread",
        7680);
      goto LABEL_99;
    }
    v17 = dword_24400C;
    v13[10] = (void **)dword_24400C;
    dword_24400C = v17 + 1;
    if ( pthread_mutex_unlock(&stru_1AF200) )
    {
      v75 = *_errno_location();
      snprintf(
        v97,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        v75,
        "cgminer.c",
        "stratum_sthread",
        7683);
      goto LABEL_99;
    }
    off_9E444();
    v91 = 0;
    sub_49940(&v91, (unsigned __int8 *)a1 + 1780, 4);
    if ( *((_BYTE *)a1 + 644) )
      snprintf(
        v96,
        0x400u,
        "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%08x\"], \"id\": %d, \"method\": \"mining.submit\"}",
        (const char *)a1[43],
        (const char *)v90[72],
        v95,
        (const char *)v90[77],
        v93,
        bswap32((unsigned int)v90[111] & ~v91),
        v13[10]);
    else
      snprintf(
        v96,
        0x400u,
        "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
        (const char *)a1[43],
        (const char *)v90[72],
        v95,
        (const char *)v90[77],
        v93,
        v13[10]);
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
    {
      snprintf(v97, 0x800u, "Submitting share %08lx to pool %d", v14[54], *a1);
      sub_47AB4(6, v97, 0);
    }
    while ( 1 )
    {
      v18 = v13[11];
      if ( (int)v18 + 119 < time(0) )
        goto LABEL_119;
      v19 = strlen(v96);
      if ( sub_4B10C((int)a1, v96, v19) )
      {
        if ( pthread_mutex_lock(&stru_1AF200) )
        {
          v78 = *_errno_location();
          snprintf(
            v97,
            0x800u,
            "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
            v78,
            "cgminer.c",
            "stratum_sthread",
            7727);
          goto LABEL_99;
        }
        v20 = *((unsigned __int8 *)v13 + 40);
        v21 = *((unsigned __int8 *)v13 + 43);
        v22 = *((unsigned __int8 *)v13 + 42);
        v13[5] = (void **)(v13 + 10);
        v23 = (void ***)dword_1AF218;
        v24 = v20 + 17973517 + (v21 << 24) + (v22 << 16) + (*((unsigned __int8 *)v13 + 41) << 8);
        v13[6] = (void **)4;
        v25 = v24 ^ (unsigned int)&unk_7F76D;
        v26 = (-1622558010 - v25) ^ (v25 << 8);
        v27 = (-17973517 - v25 - v26) ^ (v26 >> 13);
        v28 = (v25 - v26 - v27) ^ (v27 >> 12);
        v29 = (v26 - v27 - v28) ^ (v28 << 16);
        v30 = (v27 - v28 - v29) ^ (v29 >> 5);
        v31 = (v28 - v29 - v30) ^ (v30 >> 3);
        v32 = (v30 - v31 - ((v29 - v30 - v31) ^ (v31 << 10))) ^ (((v29 - v30 - v31) ^ (v31 << 10)) >> 15);
        v13[7] = (void **)v32;
        if ( v23 )
        {
          v33 = *v23;
          v13[2] = 0;
          *v13 = v33;
          v13[1] = (void **)((_BYTE *)(*v23)[4] - (_BYTE *)(*v23)[5]);
          *((_DWORD *)(*v23)[4] + 2) = v13;
          (*v23)[4] = v13;
        }
        else
        {
          v13[2] = 0;
          v13[1] = 0;
          dword_1AF218 = (int)v13;
          v71 = (void **)malloc(0x2Cu);
          *v13 = v71;
          if ( !v71 )
            goto LABEL_145;
          memset(v71, 0, 0x2Cu);
          (*v13)[4] = v13;
          (*v13)[1] = (void *)32;
          (*v13)[2] = (void *)5;
          (*v13)[5] = 0;
          v72 = *v13;
          *v72 = malloc(0x180u);
          v73 = **v13;
          if ( !v73 )
            goto LABEL_145;
          memset(v73, 0, 0x180u);
          v23 = v13;
          (*v13)[10] = (void *)-1609490463;
        }
        (*v23)[3] = (char *)(*v23)[3] + 1;
        v34 = 12 * (v32 & ((unsigned int)(*v23)[1] - 1));
        ++*(_DWORD *)((char *)**v23 + v34 + 4);
        v35 = *(void ***)((char *)**v23 + v34);
        v13[3] = 0;
        v13[4] = v35;
        v36 = (char *)**v23;
        v37 = *(_DWORD *)&v36[v34];
        v38 = (void ****)&v36[v34];
        if ( v37 )
        {
          *(_DWORD *)(v37 + 12) = v13;
          v38 = (void ****)((char *)**v23 + v34);
        }
        *v38 = v13;
        v39 = *(_QWORD *)((char *)**v23 + v34 + 4);
        if ( (unsigned int)v39 < 10 * (HIDWORD(v39) + 1) || (*v13)[9] == (void *)1 )
          goto LABEL_33;
        v45 = calloc(24 * (_DWORD)(*v13)[1], 1u);
        if ( v45 )
        {
          (*v13)[6] = (void *)((((2 * (_DWORD)(*v13)[1] - 1) & (unsigned int)(*v13)[3]) != 0)
                             + ((unsigned int)(*v13)[3] >> (*((_BYTE *)*v13 + 8) + 1)));
          (*v13)[7] = 0;
          v46 = *v13;
          v47 = (unsigned int)(*v13)[1];
          if ( v47 )
          {
            v48 = 0;
            v85 = 0;
            v88 = a1;
            do
            {
              v49 = *(_DWORD **)((char *)*v46 + v48);
              if ( v49 )
              {
                while ( 1 )
                {
                  v50 = (_DWORD *)v49[4];
                  v51 = 3 * ((2 * v47 - 1) & v49[7]);
                  v52 = (char *)&v45[v51];
                  v53 = *((_DWORD *)v52 + 1) + 1;
                  *((_DWORD *)v52 + 1) = v53;
                  if ( v53 > (unsigned int)(*v13)[6] )
                  {
                    (*v13)[7] = (char *)(*v13)[7] + 1;
                    *((_DWORD *)v52 + 2) = *((_DWORD *)v52 + 1) / (unsigned int)(*v13)[6];
                  }
                  v49[3] = 0;
                  v49[4] = v45[v51];
                  v54 = v45[v51];
                  if ( v54 )
                    *(_DWORD *)(v54 + 12) = v49;
                  v45[v51] = v49;
                  v46 = *v13;
                  if ( !v50 )
                    break;
                  v47 = (unsigned int)v46[1];
                  v49 = v50;
                }
                v47 = (unsigned int)v46[1];
              }
              v48 += 12;
              ++v85;
            }
            while ( v85 < v47 );
            a1 = v88;
          }
          free(*v46);
          (*v13)[1] = (void *)(2 * (_DWORD)(*v13)[1]);
          (*v13)[2] = (char *)(*v13)[2] + 1;
          **v13 = v45;
          v55 = *v13;
          v56 = (*v13)[7];
          v57 = (unsigned int)(*v13)[3];
          v58 = (unsigned int)v56 > v57 >> 1;
          if ( (unsigned int)v56 <= v57 >> 1 )
            v59 = 0;
          else
            v59 = (char *)v55[8];
          if ( v58 )
            ++v59;
          v55[8] = v59;
          if ( (unsigned int)(*v13)[8] > 1 )
            (*v13)[9] = (void *)1;
LABEL_33:
          ++a1[183];
          if ( !pthread_mutex_unlock(&stru_1AF200) )
          {
            off_9E444();
            if ( sub_551DC((int)a1, (_BYTE *)a1 + 96) )
            {
              if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3 )
              {
                if ( !byte_1AECC5 )
                {
LABEL_39:
                  v40 = time(0);
                  v41 = v13[11];
                  v42 = (unsigned __int8)byte_1AECC5;
                  v13[12] = (void **)v40;
                  v43 = v40 - (_DWORD)v41;
                  if ( v43 > 0 )
                    v42 |= 1u;
                  if ( v42 && (byte_244080 || byte_1AECC4 || dword_9E320 > 5) )
                  {
                    snprintf(v97, 0x800u, "Pool %d stratum share submission lag time %d seconds", *a1, v43);
                    sub_47AB4(6, v97, 0);
                  }
                  goto LABEL_46;
                }
                goto LABEL_81;
              }
              snprintf(v97, 0x800u, "Pool %d communication resumed, submitting work", *a1);
              sub_47AB4(4, v97, 0);
            }
            if ( !byte_1AECC5 )
              goto LABEL_39;
            if ( byte_244080 || byte_1AECC4 )
            {
LABEL_53:
              strcpy(v97, "Successfully submitted, adding to stratum_shares db");
              sub_47AB4(7, v97, 0);
              goto LABEL_39;
            }
LABEL_81:
            if ( dword_9E320 <= 6 )
              goto LABEL_39;
            goto LABEL_53;
          }
          v79 = *_errno_location();
          snprintf(
            v97,
            0x800u,
            "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
            v79,
            "cgminer.c",
            "stratum_sthread",
            7730);
LABEL_99:
          sub_47AB4(3, v97, 1);
          sub_54CCC(1, 1);
        }
LABEL_145:
        exit(-1);
      }
      if ( !sub_55170((int)a1, (_BYTE *)a1 + 96) && sub_584B4((int)a1) )
      {
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
        {
          snprintf(v97, 0x800u, "Pool %d stratum share submission failure", *a1);
          sub_47AB4(4, v97, 0);
        }
        v81 = a1[33] + 1;
        ++dword_244014;
        a1[33] = v81;
      }
      if ( byte_245204 )
        break;
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
      {
        v82 = *_errno_location();
        snprintf(
          v97,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          v82,
          "cgminer.c",
          "stratum_sthread",
          7752);
        goto LABEL_99;
      }
      if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 59)) )
      {
        v83 = *_errno_location();
        snprintf(
          v97,
          0x800u,
          "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          v83,
          "cgminer.c",
          "stratum_sthread",
          7752);
        goto LABEL_99;
      }
      if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
      {
        v84 = *_errno_location();
        snprintf(
          v97,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          v84,
          "cgminer.c",
          "stratum_sthread",
          7752);
        goto LABEL_99;
      }
      v76 = (const char *)a1[153];
      if ( !v76 || strcmp((const char *)v90[80], v76) )
      {
        if ( !pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
        {
          off_9E444();
          if ( !byte_1AECC5 )
            goto LABEL_124;
          if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
          {
            strcpy(v97, "No matching session id for resubmitting stratum share");
            sub_47AB4(7, v97, 0);
            goto LABEL_119;
          }
LABEL_121:
          if ( byte_1AECC4 || dword_9E320 > 6 )
            goto LABEL_123;
          goto LABEL_124;
        }
LABEL_111:
        v77 = *_errno_location();
        snprintf(
          v97,
          0x800u,
          "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
          v77,
          "cgminer.c",
          "stratum_sthread",
          7754);
        goto LABEL_99;
      }
      if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
        goto LABEL_111;
      off_9E444();
      sleep(2u);
    }
    if ( !byte_1AECC5 )
      goto LABEL_124;
    if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 6 )
      goto LABEL_121;
    strcpy(v97, "Lowmem option prevents resubmitting stratum share");
    sub_47AB4(7, v97, 0);
LABEL_119:
    if ( byte_1AECC5 )
    {
      if ( !byte_244080 )
        goto LABEL_121;
LABEL_123:
      strcpy(v97, "Failed to submit stratum share, discarding");
      sub_47AB4(7, v97, 0);
    }
LABEL_124:
    sub_53084(&v90, "cgminer.c", "stratum_sthread", 7769);
    free(v13);
    v80 = qword_242E98;
    ++a1[30];
    qword_242E98 = v80 + 1;
LABEL_46:
    v5 = v86;
    v6 = v87;
LABEL_47:
    v4 = (const struct timespec *)*((unsigned __int8 *)a1 + 105);
    v3 = (char *)a1[182];
  }
  while ( !*((_BYTE *)a1 + 105) );
LABEL_48:
  sub_4A02C((int)v3);
  return 0;
}

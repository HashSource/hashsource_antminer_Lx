int __fastcall main(int a1, const char **a2, char **a3)
{
  const char *v4; // r8
  FILE *v5; // r6
  char *v6; // r11
  size_t v7; // r0
  FILE *v8; // r0
  size_t v9; // r5
  int v10; // r6
  size_t v11; // r4
  unsigned __int8 *v12; // r7
  const unsigned __int16 **v13; // r0
  int v14; // t1
  int v15; // r3
  void *v16; // r4
  _DWORD *v17; // r5
  _DWORD *v18; // r0
  int v19; // r4
  int v20; // r4
  int v21; // r2
  int v22; // r9
  __int64 v23; // r10
  __int64 v24; // r6
  int v25; // r3
  int *v26; // r8
  int *v27; // r7
  int v28; // r1
  int v29; // r0
  int v30; // r9
  double v31; // r10
  unsigned __int64 v32; // r8
  int v33; // r1
  int v34; // r0
  unsigned __int64 v35; // r2
  unsigned __int64 v36; // r8
  int v37; // r1
  int v38; // r0
  unsigned __int64 v39; // r2
  int v40; // r1
  __int64 v41; // r2
  __int64 v42; // r2
  int v43; // r1
  unsigned int v44; // r1
  char *v45; // r2
  void ***v46; // r1
  unsigned int v47; // t1
  unsigned __int64 v48; // r2
  int *v49; // r3
  unsigned int v51; // r1
  int v52; // r9
  unsigned int v53; // r0
  __int64 v54; // r0
  int *v56; // r0
  int *v57; // r0
  int *v58; // r0
  int *v59; // r0
  char *v61; // [sp+1Ch] [bp-9C8h]
  int v62; // [sp+24h] [bp-9C0h]
  unsigned int v63; // [sp+28h] [bp-9BCh]
  int v64; // [sp+28h] [bp-9BCh]
  __int64 v65; // [sp+30h] [bp-9B4h]
  int *v66; // [sp+38h] [bp-9ACh]
  __int64 v67; // [sp+48h] [bp-99Ch]
  void **v68; // [sp+5Ch] [bp-988h] BYREF
  unsigned int v69[6]; // [sp+60h] [bp-984h] BYREF
  unsigned int v70; // [sp+78h] [bp-96Ch]
  int v71; // [sp+7Ch] [bp-968h] BYREF
  char dest[32]; // [sp+80h] [bp-964h] BYREF
  _BYTE command[64]; // [sp+A0h] [bp-944h] BYREF
  _QWORD s[32]; // [sp+E0h] [bp-904h] BYREF
  char v75[2048]; // [sp+1E0h] [bp-804h] BYREF

  v4 = *a2;
  memset(s, 0, sizeof(s));
  memset(command, 0, sizeof(command));
  snprintf(command, 0x40u, "pidof %s", v4);
  v5 = popen(command, "r");
  if ( !v5 )
  {
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      v6 = v75;
      snprintf(v75, 0x800u, " app-service:%s Not Found!!!", v4);
      sub_47AB4(7, v75, 0);
    }
    else
    {
      v6 = v75;
    }
    goto LABEL_31;
  }
  v6 = v75;
  while ( fgets((char *)s, 256, v5) )
  {
    if ( byte_1AECC5 )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
      {
        snprintf(v75, 0x800u, "pidof %s command result is: %s\n", v4, (const char *)s);
        sub_47AB4(7, v75, 0);
        if ( byte_1AECC5 )
        {
          if ( byte_244080 )
            goto LABEL_12;
          goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        if ( byte_1AECC4 || dword_9E320 > 6 )
        {
LABEL_12:
          v7 = strlen((const char *)s);
          snprintf(v75, 0x800u, "strlen is: %d\n", v7);
          sub_47AB4(7, v75, 0);
        }
      }
    }
  }
  v8 = v5;
  v9 = 0;
  v10 = 0;
  pclose(v8);
  v11 = 1;
  v12 = (unsigned __int8 *)s;
  while ( strlen((const char *)s) >= v11 )
  {
    memset(dest, 0, sizeof(dest));
    v13 = _ctype_b_loc();
    v14 = *v12++;
    if ( ((*v13)[v14] & 0x2000) != 0 )
    {
      strncpy(dest, (const char *)s + v9, v11 - v9 - 1);
      v15 = strtol(dest, 0, 10);
      if ( v15 > 0 && (++v10, byte_1AECC5) && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        v9 = v11;
        snprintf(v75, 0x800u, "Parsed proc id is: %d\n", v15);
        sub_47AB4(7, v75, 0);
      }
      else
      {
        v9 = v11;
      }
    }
    ++v11;
  }
  if ( v10 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(v75, 0x800u, " %d instance of %s is  already Running on this machine", v10, v4);
      sub_47AB4(3, v75, 0);
    }
    if ( v10 != 1 )
    {
      snprintf(v75, 0x800u, "%s is forbidden to start twice, will exit immediately!", *a2);
      sub_47AB4(3, v75, 1);
      sub_62EC0(-1);
    }
  }
LABEL_31:
  v16 = calloc(1u, 0x1798u);
  dword_241D64 = (int)v16;
  v17 = calloc(1u, 0x188u);
  dword_241D5C = (int)v17;
  v18 = calloc(1u, 0x40u);
  v18[9] = v17;
  v17[5] = v16;
  dword_241D58 = (int)v18;
  sub_26D84(a1, a2);
  sub_25FA8();
  v19 = *(_DWORD *)(*(_DWORD *)(dword_241D58 + 36) + 20);
  if ( pthread_mutex_init((pthread_mutex_t *)(v19 + 420), 0) )
    sub_25B64(309);
  sub_25BC4(v19, 310);
  sub_25BC4(v19 + 692, 311);
  sub_25BC4(v19 + 2540, 312);
  sub_25BC4(v19 + 4388, 313);
  memset(v75, 0, 0x20u);
  *(_WORD *)&v75[2] = 26;
  v75[4] = ~(~((v75[4] & 0xFD | (2 * (byte_1B0B1A & 1u))) << 30) >> 30);
  v75[0] = 81;
  v75[5] = v75[5] & 0xF0 | 7 | (8 * (byte_1B0B18 & 1));
  *(_WORD *)&v75[8] = 13833;
  v75[10] = dword_1B0B1C;
  *(_WORD *)&v75[12] = dword_9EE44;
  *(_WORD *)&v75[14] = dword_9EE40;
  v75[11] = 80;
  *(_WORD *)&v75[16] = 2570;
  *(_WORD *)&v75[26] = 400;
  v75[24] = 4;
  *(_WORD *)&v75[28] = 600;
  *(_WORD *)&v75[30] = sub_514F8((int)v75, 30);
  if ( !sub_25098(
          *(int *)v75,
          *(int *)&v75[4],
          *(int *)&v75[8],
          *(int *)&v75[12],
          *(int *)&v75[16],
          *(int *)&v75[20],
          *(int *)&v75[24],
          *(int *)&v75[28]) )
    sub_226C0(3u, "soc init failed!");
  sub_226C0(0, 0);
  if ( sub_25A5C() )
    sub_226C0(3u, "socket init failed!");
  sub_226C0(1u, 0);
  dword_241D60 = (int)calloc(1u, 0x40u);
  pthread_attr_init((pthread_attr_t *)command);
  pthread_attr_setstacksize((pthread_attr_t *)command, 0x200000u);
  if ( sub_4BDCC(dword_241D60, (const pthread_attr_t *)command, (void *(*)(void *))sub_26C30, (void *)dword_241D60)
    && (byte_244080 || byte_1AECC4 || dword_9E320 > 2) )
  {
    snprintf(v75, 0x800u, "%s: create thread for get api status failed\n", "main");
    sub_47AB4(3, v75, 0);
  }
  pthread_detach(*(_DWORD *)(dword_241D60 + 12));
  sub_23D44();
  while ( 2 )
  {
    v61 = v6;
LABEL_43:
    if ( !*(_BYTE *)(dword_241D5C + 364) )
    {
      v66 = (int *)dword_241D58;
      v20 = *(_DWORD *)(*(_DWORD *)(dword_241D58 + 36) + 20);
      pthread_mutex_lock(&stru_138564);
      if ( pthread_mutex_lock((pthread_mutex_t *)v20) )
      {
        v57 = _errno_location();
        snprintf(
          v61,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          *v57,
          "bmminer.c",
          "bitmain_c5_scanhash",
          440);
        sub_47AB4(3, v61, 1);
        sub_62EC0(1);
      }
      if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(v20 + 24)) )
      {
        v59 = _errno_location();
        snprintf(
          v61,
          0x800u,
          "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          *v59,
          "bmminer.c",
          "bitmain_c5_scanhash",
          440);
        sub_47AB4(3, v61, 1);
        sub_62EC0(1);
      }
      if ( pthread_mutex_unlock((pthread_mutex_t *)v20) )
      {
        v58 = _errno_location();
        snprintf(
          v61,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v58,
          "bmminer.c",
          "bitmain_c5_scanhash",
          440);
        sub_47AB4(3, v61, 1);
        sub_62EC0(1);
      }
      v65 = 0;
LABEL_48:
      if ( !dword_23A2B8 )
      {
LABEL_77:
        qword_241D50 += v65;
        if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v20 + 24)) )
        {
          v56 = _errno_location();
          snprintf(
            v61,
            0x800u,
            "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
            *v56,
            "bmminer.c",
            "bitmain_c5_scanhash",
            533);
          sub_47AB4(3, v61, 1);
          sub_62EC0(1);
        }
        off_9E444();
        pthread_mutex_unlock(&stru_138564);
        sub_4A804();
        if ( v65 )
        {
          v67 = 0xFFFFFFFFLL * v65;
          if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
          {
            snprintf(v61, 0x800u, "%s: hashes %llu ...\n", "bitmain_c5_scanhash", v67);
            sub_47AB4(7, v61, 0);
          }
          if ( v67 )
          {
            v6 = v61;
            qword_138600 += v67;
            continue;
          }
        }
        goto LABEL_43;
      }
      while ( 2 )
      {
        v21 = 0;
        LODWORD(v24) = dword_23A2B0[15 * dword_23A2B4 + 8];
        v22 = dword_23A2B0[15 * dword_23A2B4 + 3];
        v23 = *(_QWORD *)&dword_23A2B0[15 * dword_23A2B4 + 6];
        v62 = dword_23A2B0[15 * dword_23A2B4 + 9];
        HIDWORD(v24) = dword_23A2B0[15 * dword_23A2B4 + 4];
        v63 = (dword_23A2B0[15 * dword_23A2B4 + 5] << 24)
            | HIBYTE(dword_23A2B0[15 * dword_23A2B4 + 5])
            | ((unsigned int)dword_23A2B0[15 * dword_23A2B4 + 5] >> 8) & 0xFF00
            | (dword_23A2B0[15 * dword_23A2B4 + 5] << 8) & 0xFF0000;
        do
          ++v21;
        while ( v21 != 32 );
        if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
        {
          snprintf(
            v61,
            0x800u,
            "%s: job_id:0x%x   work_id:0x%x   nonce2:0x%llx nonce3:0x%x   version:0x%x\n",
            "bitmain_c5_scanhash",
            v22,
            HIDWORD(v24),
            v23,
            (_DWORD)v24,
            v63);
          sub_47AB4(7, v61, 0);
        }
        if ( (unsigned int)dword_23A2B4 > 0x1FD )
          v25 = 0;
        else
          v25 = dword_23A2B4;
        v26 = (int *)(v20 + 480);
        if ( (unsigned int)dword_23A2B4 <= 0x1FD )
          ++v25;
        dword_23A2B4 = v25;
        --dword_23A2B8;
        if ( v24 == qword_138608 )
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * v62 + 4) == 1 )
          {
            if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
            {
              strcpy(v61, "reepat nonce error");
              sub_47AB4(3, v61, 0);
            }
            sub_593C8((int)v66);
            ++*(_DWORD *)(dword_A0D68 + 4 * v62 + 1206);
          }
          goto LABEL_48;
        }
        qword_138608 = v24;
        if ( !byte_1AECC5 )
        {
          v27 = &dword_9C550;
          goto LABEL_87;
        }
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
        {
          snprintf(v61, 0x800u, "%s: Chain ID J%d ...\n", "bitmain_c5_scanhash", v62 + 1);
          LOWORD(v27) = (unsigned __int16)&dword_9C550;
          sub_47AB4(7, v61, 0);
          if ( byte_1AECC5 )
          {
            HIWORD(v27) = (unsigned int)&dword_9C550 >> 16;
            v28 = *v27;
            v29 = *v27 - v22;
            if ( !byte_244080 )
              goto LABEL_68;
            goto LABEL_86;
          }
          HIWORD(v27) = (unsigned int)&dword_9C550 >> 16;
        }
        else
        {
          v27 = &dword_9C550;
          v28 = dword_9C550;
          v29 = dword_9C550 - v22;
LABEL_68:
          if ( !byte_1AECC4 && dword_9E320 <= 6 )
          {
            switch ( v29 )
            {
              case 1:
                goto LABEL_146;
              case 0:
                goto LABEL_91;
              case 2:
LABEL_90:
                v26 = (int *)(v20 + 4176);
                goto LABEL_91;
            }
            goto LABEL_73;
          }
LABEL_86:
          snprintf(v61, 0x800u, "%s: given_id:%d job_id:%d switch:%d  ...\n", "bitmain_c5_scanhash", v28, v22, v29);
          sub_47AB4(7, v61, 0);
        }
LABEL_87:
        v30 = *v27 - v22;
        switch ( v30 )
        {
          case 1:
LABEL_146:
            v26 = (int *)(v20 + 2328);
LABEL_91:
            sub_5AFA8(v66, (int *)&v68, (int)v26, (int)v26, v23, v63);
            HIDWORD(v24) = v68;
            v31 = *((double *)v68 + 39);
            v64 = *v26;
            v32 = (unsigned __int64)v31;
            if ( (unsigned __int64)v31 != qword_138610 )
            {
              v33 = 0;
              qword_138610 = (unsigned __int64)v31;
              v34 = 0;
              if ( v32 )
              {
                v35 = (unsigned __int64)v31;
                while ( 1 )
                {
                  v35 >>= 1;
                  if ( !v35 )
                    break;
                  v34 = (__PAIR64__(v34, v33++) + 1) >> 32;
                }
              }
              else
              {
                v33 = -1;
                v34 = -1;
              }
              LODWORD(qword_138618) = v33;
              HIDWORD(qword_138618) = v34;
              if ( byte_1AECC5 )
              {
                if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
                {
                  snprintf(
                    v61,
                    0x800u,
                    "%s: pool_diff:%lld work_diff:%f pool_diff_bit:%lld ...\n",
                    "hashtest_submit",
                    v32,
                    v31,
                    __PAIR64__(v34, v33));
                  sub_47AB4(7, v61, 0);
                }
              }
            }
            v36 = (unsigned __int64)dbl_9ED90;
            if ( (unsigned __int64)dbl_9ED90 != *(_QWORD *)&dword_138620 )
            {
              v37 = 0;
              *(_QWORD *)&dword_138620 = (unsigned __int64)dbl_9ED90;
              v38 = 0;
              if ( v36 )
              {
                v39 = (unsigned __int64)dbl_9ED90;
                while ( 1 )
                {
                  v39 >>= 1;
                  if ( !v39 )
                    break;
                  v38 = (__PAIR64__(v38, v37++) + 1) >> 32;
                }
              }
              else
              {
                v37 = -1;
                v38 = -1;
              }
              dword_138628 = v37;
              dword_13862C = v38;
              if ( byte_1AECC5 )
              {
                if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
                {
                  snprintf(
                    v61,
                    0x800u,
                    "%s:net_diff:%lld current_diff:%f net_diff_bit %lld ...\n",
                    "hashtest_submit",
                    v36,
                    dbl_9ED90,
                    __PAIR64__(v38, v37));
                  sub_47AB4(7, v61, 0);
                }
              }
            }
            v40 = *(_DWORD *)(HIDWORD(v24) + 132);
            v41 = *(_QWORD *)(HIDWORD(v24) + 136);
            LODWORD(s[1]) = *(_DWORD *)(HIDWORD(v24) + 128);
            HIDWORD(s[1]) = v40;
            s[2] = v41;
            v42 = *(_QWORD *)(HIDWORD(v24) + 152);
            v43 = *(_DWORD *)(HIDWORD(v24) + 148);
            LODWORD(s[3]) = *(_DWORD *)(HIDWORD(v24) + 144);
            HIDWORD(s[3]) = v43;
            s[4] = v42;
            s[0] = 80;
            v44 = *(_DWORD *)(HIDWORD(v24) + 68);
            LODWORD(v42) = *(_DWORD *)(HIDWORD(v24) + 72);
            v69[0] = *(_DWORD *)(HIDWORD(v24) + 64);
            v69[1] = v44;
            v69[2] = v42;
            sub_5162C((int)&s[5], v69, 0xCu);
            v69[0] = v24;
            sub_5162C((int)&s[6] + 4, v69, 4u);
            sub_1E58C((int)s, v69);
            memset(s, 0, 0xE8u);
            sub_1E740(v69, 32, dest);
            v45 = (char *)&v71;
            v46 = &v68;
            do
            {
              v47 = *((_DWORD *)v45 + 1);
              v45 += 4;
              v46[1] = (void **)bswap32(v47);
              ++v46;
            }
            while ( &dest[28] != v45 );
            LODWORD(v48) = v71;
            if ( v71 )
            {
              if ( *(_DWORD *)(dword_A0D68 + 4 * v62 + 4) == 1 )
              {
                if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
                {
                  strcpy(v61, "hash2_32 error");
                  sub_47AB4(3, v61, 0);
                }
                sub_593C8((int)v66);
                ++*(_DWORD *)(dword_A0D68 + 4 * v62 + 1206);
              }
              if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
              {
                snprintf(v61, 0x800u, "%s: HASH2_32[7] != 0", "hashtest_submit");
                sub_47AB4(7, v61, 0);
              }
            }
            else
            {
              v49 = &v71;
              while ( !*--v49 )
              {
                LODWORD(v48) = v48 + 1;
                if ( (_DWORD)v48 == 7 )
                {
                  v48 = 7;
                  goto LABEL_129;
                }
              }
              v48 = (int)v48;
LABEL_129:
              if ( (unsigned __int64)qword_138618 >> 5 <= v48 )
              {
                v51 = *(unsigned __int8 *)(dword_A0D68 + 12954);
                if ( !*(_BYTE *)(dword_A0D68 + 12954) )
                  v51 = 3;
                v52 = sub_75CF4(v24, v51);
                v53 = sub_75CEC(v24);
                if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
                {
                  snprintf(
                    v61,
                    0x800u,
                    "%s: chain %d which_asic_nonce %d which_core_nonce %d",
                    "hashtest_submit",
                    v62,
                    v52,
                    v53);
                  sub_47AB4(7, v61, 0);
                }
                v54 = qword_138618;
                ++*(_QWORD *)(dword_A0D68 + 8 * (v52 + 78 * v62) + 1270);
                if ( bswap32(*(&v70 - (v54 >> 5))) < 0xFFFFFFFF >> (v54 & 0x1F) )
                {
                  qword_241A80[v62] += 256LL;
                  sub_25DA0((int)v66, (const char **)HIDWORD(v24), v24, v64);
                  v65 += 256;
                }
                else if ( bswap32(v70) <= 0xFFFFFE )
                {
                  qword_241A80[v62] += 256LL;
                  v65 += 256;
                }
              }
            }
            sub_53084(&v68, "bmminer.c", "bitmain_c5_scanhash", 530);
            goto LABEL_48;
          case 0:
            goto LABEL_91;
          case 2:
            goto LABEL_90;
        }
        if ( byte_244080 || byte_1AECC4 )
        {
LABEL_74:
          snprintf(v61, 0x800u, "%s: job_id non't found ...\n", "bitmain_c5_scanhash");
          sub_47AB4(3, v61, 0);
        }
        else
        {
LABEL_73:
          if ( dword_9E320 > 2 )
            goto LABEL_74;
        }
        if ( *(_DWORD *)(dword_A0D68 + 4 * v62 + 4) != 1 )
          goto LABEL_48;
        sub_593C8((int)v66);
        ++*(_DWORD *)(dword_A0D68 + 4 * v62 + 1206);
        if ( !dword_23A2B8 )
          goto LABEL_77;
        continue;
      }
    }
    return 0;
  }
}

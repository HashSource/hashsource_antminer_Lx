void __fastcall sub_5E2EC(int a1, unsigned __int64 a2)
{
  double v3; // d0
  int v5; // r4
  char *v6; // r0
  int v7; // r11
  double v8; // d9
  int v9; // r6
  int v10; // r4
  double v11; // r0
  double v12; // r0
  double v13; // r0
  double v14; // r0
  double v15; // r0
  double v16; // d10
  int v17; // r3
  int *v18; // r11
  int v19; // r3
  int v20; // r8
  unsigned __int64 v21; // r0
  double v22; // d8
  double v23; // r0
  int v24; // r10
  int v25; // r3
  double v26; // d5
  int v27; // r0
  int v28; // r4
  double v29; // r0
  int v30; // r1
  double v31; // r0
  double v32; // d10
  double v33; // d6
  double v34; // d5
  double v35; // d7
  double v36; // d7
  double v37; // r0
  double v38; // r0
  double v39; // r0
  double v40; // r0
  double v41; // r0
  double v42; // r0
  int *v43; // r0
  int *v44; // r0
  int v45; // r3
  int v46; // r12
  int v47; // r3
  int v48; // r12
  char v50[16]; // [sp+20h] [bp-884h] BYREF
  char v51[16]; // [sp+30h] [bp-874h] BYREF
  char v52[16]; // [sp+40h] [bp-864h] BYREF
  char v53[16]; // [sp+50h] [bp-854h] BYREF
  struct sysinfo info; // [sp+60h] [bp-844h] BYREF
  char s[2052]; // [sp+A0h] [bp-804h] BYREF

  if ( sysinfo(&info) )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
    {
      v5 = *_errno_location();
      v6 = strerror(v5);
      snprintf(s, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v5, v6);
      sub_47AB4(6, s, 0);
    }
    dword_244004 = time(0);
  }
  else
  {
    dword_244004 = info.uptime;
  }
  sub_4A60C((struct timeval *)&dword_1AF0EC);
  sub_4A8FC();
  v7 = dword_1AF0EC;
  v8 = v3;
  if ( dword_9ED78 > dword_1AF0EC - dword_1B064C )
  {
    if ( a1 < 0 )
      return;
    v24 = 0;
    sub_4C460(algn_1AF148, &dword_1AF0EC);
  }
  else
  {
    dword_1B064C = dword_1AF0EC;
    sub_4C460(algn_1AF148, &dword_1AF0EC);
    if ( a1 < 0 )
    {
      v9 = pthread_mutex_lock(&stru_2463B8);
      if ( !v9 )
      {
        if ( dword_245108 > 0 )
        {
          do
          {
            while ( 1 )
            {
              v10 = *(_DWORD *)(sub_57BAC(v9) + 36);
              sub_4A8FC();
              sub_4C460((void *)(v10 + 140), &dword_1AF0EC);
              if ( v3 > 0.0 )
                break;
              if ( dword_245108 <= ++v9 )
                goto LABEL_15;
            }
            LODWORD(v11) = v10 + 48;
            v12 = sub_529E0(v11);
            LODWORD(v12) = v10 + 56;
            v13 = sub_529E0(v12);
            LODWORD(v13) = v10 + 64;
            v14 = sub_529E0(v13);
            LODWORD(v14) = v10 + 72;
            ++v9;
            v3 = 0.0;
            sub_529E0(v14);
          }
          while ( dword_245108 > v9 );
        }
LABEL_15:
        if ( pthread_mutex_unlock(&stru_2463B8) )
        {
          v47 = *_errno_location();
          v48 = 7100;
          goto LABEL_74;
        }
        off_9E444();
        if ( !pthread_mutex_lock(&stru_2463B8) )
        {
          LODWORD(v15) = sub_778A4(a2);
          v16 = v15;
          v17 = dword_1AF1B0;
          dbl_245228 = dbl_245228 + v15;
          goto LABEL_18;
        }
LABEL_68:
        v43 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v43, "cgminer.c", "hashmeter", 7103);
        goto LABEL_69;
      }
      v45 = *_errno_location();
      v46 = 7085;
LABEL_72:
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v45, "cgminer.c", "hashmeter", v46);
      goto LABEL_69;
    }
    v24 = 1;
  }
  v27 = sub_57BAC(a1);
  v28 = *(_DWORD *)(v27 + 36);
  sub_4C460((void *)(v27 + 44), &dword_1AF0EC);
  *(_DWORD *)(v28 + 240) = v7;
  sub_4A8FC();
  sub_4C460((void *)(v28 + 140), &dword_1AF0EC);
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    LODWORD(v29) = sub_778A4(a2);
    snprintf(s, 0x800u, "[thread %d: %llu hashes, %.1f mhash/sec]", a1, a2, v29 / v3 / 1000000.0);
    sub_47AB4(7, s, 0);
  }
  LODWORD(a2) = sub_77910(a2, (unsigned int)&unk_F4240);
  HIDWORD(a2) = v30;
  if ( pthread_mutex_lock(&stru_2463B8) )
  {
    v45 = *_errno_location();
    v46 = 7056;
    goto LABEL_72;
  }
  LODWORD(v31) = sub_778A4(a2);
  v16 = v31;
  *(double *)(v28 + 80) = *(double *)(v28 + 80) + v31;
  if ( v3 > 0.0 )
  {
    LODWORD(v31) = v28 + 48;
    v37 = sub_529E0(v31);
    LODWORD(v37) = v28 + 56;
    v38 = sub_529E0(v37);
    LODWORD(v38) = v28 + 64;
    v39 = sub_529E0(v38);
    LODWORD(v39) = v28 + 72;
    sub_529E0(v39);
  }
  if ( pthread_mutex_unlock(&stru_2463B8) )
  {
    v47 = *_errno_location();
    v48 = 7063;
    goto LABEL_74;
  }
  off_9E444();
  if ( ((unsigned __int8)v24 & (unsigned __int8)byte_242F08) != 0 )
  {
    sub_54DA8(s, 0x100u, v28);
    printf("%s          \r", s);
    fflush((FILE *)stdout);
    if ( pthread_mutex_lock(&stru_2463B8) )
      goto LABEL_68;
    v17 = dword_1AF1B0;
    dbl_245228 = dbl_245228 + v16;
    goto LABEL_18;
  }
  if ( pthread_mutex_lock(&stru_2463B8) )
    goto LABEL_68;
  v17 = dword_1AF1B0;
  dbl_245228 = dbl_245228 + v16;
  if ( v24 )
  {
LABEL_18:
    v18 = (int *)&unk_1AF150;
    v19 = v17 + 1;
    v20 = 0;
    *(double *)&v21 = 0.0;
    if ( v19 > 11 )
      v19 = 0;
    dword_1AF1B0 = v19;
    do
    {
      v22 = *(double *)v18;
      v18 += 2;
      if ( v22 >= 0.0 )
      {
        LODWORD(v23) = sub_778A4(v21);
        ++v20;
        v21 = (unsigned __int64)(v23 + v22);
      }
    }
    while ( v18 != &dword_1AF1B0 );
    if ( v20 )
    {
      LODWORD(a2) = sub_77910(v21, v20);
      HIDWORD(a2) = HIDWORD(v21);
    }
    if ( (double)dword_9ED78 > 0.0 )
    {
      sub_778A4(a2);
      LODWORD(v42) = &dbl_245110;
      *(double *)&v21 = sub_529E0(v42);
      if ( v8 <= 0.0 )
        goto LABEL_28;
    }
    else if ( v8 <= 0.0 )
    {
LABEL_28:
      v24 = 1;
      *(_QWORD *)&dword_242FF0 = (unsigned __int64)(dbl_245110 * 1000000.0);
      v25 = dword_1AF1B0;
      v26 = 0.0;
      dbl_1AF158[dword_1AF1B0 - 1] = 0.0;
      goto LABEL_44;
    }
    LODWORD(v21) = &dbl_245210;
    v40 = sub_529E0(*(double *)&v21);
    LODWORD(v40) = &dbl_245208;
    v41 = sub_529E0(v40);
    if ( v8 > 0.0 )
    {
      LODWORD(v41) = &dbl_245218;
      sub_529E0(v41);
    }
    goto LABEL_28;
  }
  v25 = dword_1AF1B0;
  v26 = dbl_1AF158[dword_1AF1B0 - 1];
LABEL_44:
  v32 = v16 + v26;
  v33 = (double)dword_244004;
  v34 = dbl_9ED88;
  v35 = (double)dword_242EA0;
  dbl_1AF158[v25 - 1] = v32;
  v36 = v33 - v35;
  dbl_9ED68 = v36;
  if ( v36 - v34 > 86400.0 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(s, 0x800u, "cgminer time error total_secs = %f last_total_secs = %f", v36, v34);
      sub_47AB4(3, s, 0);
    }
    if ( !pthread_mutex_unlock(&stru_2463B8) )
    {
      off_9E444();
      sub_58E30();
      if ( !pthread_mutex_lock(&stru_2463B8) )
      {
        if ( !v24 )
          goto LABEL_51;
LABEL_56:
        sub_51B18((unsigned __int64)(dbl_245228 / dbl_9ED68 * 1000000.0), v50, 0x10u, 4);
        dbl_1B0650 = (double)((int)dbl_245110 / 10) / 100.0;
        sub_51B18((unsigned __int64)(dbl_245110 * 1000000.0), v51, 0x10u, 4);
        sub_51B18((unsigned __int64)(dbl_245210 * 1000000.0), v52, 0x10u, 4);
        sub_51B18((unsigned __int64)(dbl_245208 * 1000000.0), v53, 0x10u, 4);
        sub_51B18((unsigned __int64)(dbl_245218 * 1000000.0), s, 0x10u, 4);
        snprintf(
          byte_1B0658,
          0x100u,
          "(%ds):%s (1m):%s (5m):%s (15m):%s (avg):%sh/s",
          dword_9ED78,
          v51,
          v52,
          v53,
          s,
          v50);
        if ( !pthread_mutex_unlock(&stru_2463B8) )
        {
          off_9E444();
          printf("%s          \r", byte_1B0658);
          fflush((FILE *)stdout);
          return;
        }
        goto LABEL_70;
      }
      v45 = *_errno_location();
      v46 = 7153;
      goto LABEL_72;
    }
    v47 = *_errno_location();
    v48 = 7151;
LABEL_74:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v47, "cgminer.c", "hashmeter", v48);
LABEL_69:
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
  dbl_9ED88 = v36;
  if ( v24 )
    goto LABEL_56;
LABEL_51:
  if ( pthread_mutex_unlock(&stru_2463B8) )
  {
LABEL_70:
    v44 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v44, "cgminer.c", "hashmeter", 7194);
    goto LABEL_69;
  }
  off_9E444();
}

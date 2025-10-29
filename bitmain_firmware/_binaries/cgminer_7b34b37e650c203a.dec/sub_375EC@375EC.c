void __fastcall sub_375EC(int a1, unsigned __int64 a2)
{
  double v3; // d0
  int v5; // r4
  char *v6; // r0
  int v7; // r5
  double v8; // d9
  int v9; // r6
  int v10; // r5
  double v11; // r0
  double v12; // r0
  double v13; // r0
  double v14; // r0
  double v15; // r0
  double v16; // d10
  int v17; // r3
  int v18; // r3
  int v19; // r6
  unsigned __int64 v20; // r0
  int *v21; // r11
  double v22; // d8
  double v23; // r0
  int v24; // r11
  int v25; // r3
  double v26; // d5
  int v27; // r0
  int v28; // r6
  double v29; // r0
  int v30; // r1
  double v31; // r0
  double v32; // d10
  double v33; // d6
  double v34; // d7
  double v35; // d5
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
  char v50[16]; // [sp+28h] [bp-884h] BYREF
  char v51[16]; // [sp+38h] [bp-874h] BYREF
  char v52[16]; // [sp+48h] [bp-864h] BYREF
  char v53[16]; // [sp+58h] [bp-854h] BYREF
  struct sysinfo info; // [sp+68h] [bp-844h] BYREF
  char s[2052]; // [sp+A8h] [bp-804h] BYREF

  if ( sysinfo(&info) )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
    {
      v5 = *_errno_location();
      v6 = strerror(v5);
      snprintf(s, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v5, v6);
      sub_20F58(6, s, 0);
    }
    dword_74484 = time(0);
  }
  else
  {
    dword_74484 = info.uptime;
  }
  sub_239A4((struct timeval *)&dword_69018);
  sub_23C94();
  v7 = dword_69018;
  v8 = v3;
  if ( dword_68730 > dword_69018 - dword_6A5B0 )
  {
    if ( a1 < 0 )
      return;
    v24 = 0;
    sub_257F8(&stru_6907C, &dword_69018);
  }
  else
  {
    dword_6A5B0 = dword_69018;
    sub_257F8(&stru_6907C, &dword_69018);
    if ( a1 < 0 )
    {
      v9 = pthread_mutex_lock(&stru_76838);
      if ( !v9 )
      {
        if ( dword_75588 > 0 )
        {
          do
          {
            while ( 1 )
            {
              v10 = *(_DWORD *)(sub_31B04(v9) + 36);
              sub_23C94();
              sub_257F8((void *)(v10 + 140), &dword_69018);
              if ( v3 > 0.0 )
                break;
              if ( dword_75588 <= ++v9 )
                goto LABEL_15;
            }
            LODWORD(v11) = v10 + 48;
            v12 = sub_2C538(v11);
            LODWORD(v12) = v10 + 56;
            v13 = sub_2C538(v12);
            LODWORD(v13) = v10 + 64;
            v14 = sub_2C538(v13);
            LODWORD(v14) = v10 + 72;
            ++v9;
            v3 = 0.0;
            sub_2C538(v14);
          }
          while ( dword_75588 > v9 );
        }
LABEL_15:
        if ( pthread_mutex_unlock(&stru_76838) )
        {
          v47 = *_errno_location();
          v48 = 7106;
          goto LABEL_74;
        }
        off_67ED8();
        if ( !pthread_mutex_lock(&stru_76838) )
        {
          LODWORD(v15) = sub_4A10C(a2);
          v16 = v15;
          v17 = dword_690E8;
          dbl_756A8 = dbl_756A8 + v15;
          goto LABEL_18;
        }
LABEL_68:
        v43 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v43, "cgminer.c", "hashmeter", 7109);
        goto LABEL_69;
      }
      v45 = *_errno_location();
      v46 = 7091;
LABEL_72:
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v45, "cgminer.c", "hashmeter", v46);
      goto LABEL_69;
    }
    v24 = 1;
  }
  v27 = sub_31B04(a1);
  v28 = *(_DWORD *)(v27 + 36);
  sub_257F8((void *)(v27 + 44), &dword_69018);
  *(_DWORD *)(v28 + 240) = v7;
  sub_23C94();
  sub_257F8((void *)(v28 + 140), &dword_69018);
  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    LODWORD(v29) = sub_4A10C(a2);
    snprintf(s, 0x800u, "[thread %d: %llu hashes, %.1f mhash/sec]", a1, a2, v29 / v3 / 1000000.0);
    sub_20F58(7, s, 0);
  }
  LODWORD(a2) = sub_4A178(a2, 0xF4240u);
  HIDWORD(a2) = v30;
  if ( pthread_mutex_lock(&stru_76838) )
  {
    v45 = *_errno_location();
    v46 = 7062;
    goto LABEL_72;
  }
  LODWORD(v31) = sub_4A10C(a2);
  v16 = v31;
  *(double *)(v28 + 80) = *(double *)(v28 + 80) + v31;
  if ( v3 > 0.0 )
  {
    LODWORD(v31) = v28 + 48;
    v37 = sub_2C538(v31);
    LODWORD(v37) = v28 + 56;
    v38 = sub_2C538(v37);
    LODWORD(v38) = v28 + 64;
    v39 = sub_2C538(v38);
    LODWORD(v39) = v28 + 72;
    sub_2C538(v39);
  }
  if ( pthread_mutex_unlock(&stru_76838) )
  {
    v47 = *_errno_location();
    v48 = 7069;
    goto LABEL_74;
  }
  off_67ED8();
  if ( ((unsigned __int8)v24 & (unsigned __int8)byte_73388) != 0 )
  {
    sub_2E7D0(s, 0x100u, v28);
    printf("%s          \r", s);
    fflush((FILE *)stdout);
    if ( pthread_mutex_lock(&stru_76838) )
      goto LABEL_68;
    v17 = dword_690E8;
    dbl_756A8 = dbl_756A8 + v16;
    goto LABEL_18;
  }
  if ( pthread_mutex_lock(&stru_76838) )
    goto LABEL_68;
  v17 = dword_690E8;
  dbl_756A8 = dbl_756A8 + v16;
  if ( v24 )
  {
LABEL_18:
    v18 = v17 + 1;
    v19 = 0;
    LODWORD(v20) = 0;
    if ( v18 > 11 )
      v18 = 0;
    HIDWORD(v20) = 0;
    dword_690E8 = v18;
    v21 = (int *)dbl_69088;
    do
    {
      v22 = *(double *)v21;
      v21 += 2;
      if ( v22 >= 0.0 )
      {
        LODWORD(v23) = sub_4A10C(v20);
        ++v19;
        v20 = (unsigned __int64)(v23 + v22);
      }
    }
    while ( v21 != &dword_690E8 );
    if ( v19 )
    {
      LODWORD(a2) = sub_4A178(v20, v19);
      HIDWORD(a2) = HIDWORD(v20);
    }
    if ( (double)dword_68730 > 0.0 )
    {
      sub_4A10C(a2);
      LODWORD(v42) = &dbl_75590;
      *(double *)&v20 = sub_2C538(v42);
      if ( v8 <= 0.0 )
        goto LABEL_28;
    }
    else if ( v8 <= 0.0 )
    {
LABEL_28:
      v24 = 1;
      *(_QWORD *)&dword_73470 = (unsigned __int64)(dbl_75590 * 1000000.0);
      v25 = dword_690E8;
      v26 = 0.0;
      dbl_69088[dword_690E8] = 0.0;
      goto LABEL_44;
    }
    LODWORD(v20) = &dbl_75690;
    v40 = sub_2C538(*(double *)&v20);
    LODWORD(v40) = &dbl_75688;
    v41 = sub_2C538(v40);
    if ( v8 > 0.0 )
    {
      LODWORD(v41) = &dbl_75698;
      sub_2C538(v41);
    }
    goto LABEL_28;
  }
  v25 = dword_690E8;
  v26 = dbl_69088[dword_690E8];
LABEL_44:
  v32 = v16 + v26;
  v33 = (double)dword_74484;
  v34 = (double)dword_73320;
  v35 = dbl_68740;
  dbl_69088[v25] = v32;
  v36 = v33 - v34;
  dbl_68720 = v36;
  if ( v36 - v35 > 86400.0 )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
    {
      snprintf(s, 0x800u, "cgminer time error total_secs = %f last_total_secs = %f", v36, v35);
      sub_20F58(3, s, 0);
    }
    if ( !pthread_mutex_unlock(&stru_76838) )
    {
      off_67ED8();
      sub_32DA0();
      if ( !pthread_mutex_lock(&stru_76838) )
      {
        if ( !v24 )
          goto LABEL_51;
LABEL_56:
        sub_2AEF8((unsigned __int64)(dbl_756A8 / dbl_68720 * 1000000.0), v50, 0x10u, 4);
        dbl_6A5B8 = (double)((int)dbl_75590 / 10) / 100.0;
        sub_2AEF8((unsigned __int64)(dbl_75590 * 1000000.0), v51, 0x10u, 4);
        sub_2AEF8((unsigned __int64)(dbl_75690 * 1000000.0), v52, 0x10u, 4);
        sub_2AEF8((unsigned __int64)(dbl_75688 * 1000000.0), v53, 0x10u, 4);
        sub_2AEF8((unsigned __int64)(dbl_75698 * 1000000.0), s, 0x10u, 4);
        snprintf(
          byte_6A5C0,
          0x100u,
          "(%ds):%s (1m):%s (5m):%s (15m):%s (avg):%sh/s",
          dword_68730,
          v51,
          v52,
          v53,
          s,
          v50);
        if ( !pthread_mutex_unlock(&stru_76838) )
        {
          off_67ED8();
          printf("%s          \r", byte_6A5C0);
          fflush((FILE *)stdout);
          return;
        }
        goto LABEL_70;
      }
      v45 = *_errno_location();
      v46 = 7159;
      goto LABEL_72;
    }
    v47 = *_errno_location();
    v48 = 7157;
LABEL_74:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v47, "cgminer.c", "hashmeter", v48);
LABEL_69:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  dbl_68740 = v36;
  if ( v24 )
    goto LABEL_56;
LABEL_51:
  if ( pthread_mutex_unlock(&stru_76838) )
  {
LABEL_70:
    v44 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v44, "cgminer.c", "hashmeter", 7200);
    goto LABEL_69;
  }
  off_67ED8();
}

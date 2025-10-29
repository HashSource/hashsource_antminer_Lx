int __fastcall sub_5A7E8(int a1, int a2)
{
  pthread_mutex_t *v2; // r8
  size_t v5; // r11
  int v6; // lr
  int v7; // r0
  int v8; // r3
  int v9; // r2
  int v10; // r6
  const void *v11; // r1
  int *v12; // r2
  char *v13; // r0
  unsigned int v14; // t1
  int v15; // r1
  int *v16; // r2
  unsigned int v17; // t1
  double v18; // d8
  int v19; // r0
  double v20; // r0
  double v21; // d8
  double v22; // r0
  double v23; // d8
  double v24; // r0
  double v25; // d8
  double v26; // r0
  double v27; // d7
  unsigned __int64 v28; // r0
  double v29; // d7
  double v30; // d7
  char *v32; // r9
  const char *v33; // r0
  char *v34; // r8
  int *v35; // r0
  int *v36; // r0
  int *v37; // r0
  int *v38; // r0
  int *v39; // r0
  int *v40; // r0
  __int64 v41; // [sp+18h] [bp-8ACh] BYREF
  _BYTE v42[28]; // [sp+20h] [bp-8A4h] BYREF
  char v43; // [sp+3Ch] [bp-888h] BYREF
  char v44[28]; // [sp+40h] [bp-884h] BYREF
  int v45; // [sp+5Ch] [bp-868h] BYREF
  _BYTE v46[28]; // [sp+60h] [bp-864h] BYREF
  char v47; // [sp+7Ch] [bp-848h] BYREF
  char v48[60]; // [sp+80h] [bp-844h] BYREF
  int v49; // [sp+BCh] [bp-808h] BYREF
  char s[136]; // [sp+C0h] [bp-804h] BYREF
  _BYTE v51[1916]; // [sp+148h] [bp-77Ch] BYREF

  v2 = (pthread_mutex_t *)(a1 + 212);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 212)) )
  {
    v35 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v35, "cgminer.c", "gen_stratum_work", 8354);
    goto LABEL_47;
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v36 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v36, "cgminer.c", "gen_stratum_work", 8354);
    goto LABEL_47;
  }
  v5 = *(_DWORD *)(a1 + 632);
  v6 = *(_DWORD *)(a1 + 1568);
  v7 = *(_DWORD *)(a1 + 1576);
  v41 = *(_QWORD *)(a1 + 624);
  sub_4C150((void *)(v6 + v7), &v41, v5, (int)"cgminer.c", (int)"gen_stratum_work", 8359);
  v8 = *(_DWORD *)(a1 + 624);
  v9 = *(_DWORD *)(a1 + 628);
  ++*(_QWORD *)(a1 + 624);
  *(_DWORD *)(a2 + 296) = v8;
  *(_DWORD *)(a2 + 300) = v9;
  *(_DWORD *)(a2 + 304) = *(_DWORD *)(a1 + 632);
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v37 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v37,
      "cgminer.c",
      "gen_stratum_work",
      8365);
    goto LABEL_47;
  }
  if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v38 = _errno_location();
    snprintf(s, 0x800u, "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v38, "cgminer.c", "gen_stratum_work", 8365);
    goto LABEL_47;
  }
  v10 = pthread_mutex_unlock(v2);
  if ( v10 )
  {
    v39 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v39,
      "cgminer.c",
      "gen_stratum_work",
      8365);
    goto LABEL_47;
  }
  sub_4889C(*(char **)(a1 + 1568), *(_DWORD *)(a1 + 1572), s);
  sub_4889C(s, 0x20u, v42);
  sub_4C150(v44, v42, 0x20u, (int)"cgminer.c", (int)"gen_stratum_work", 8369);
  if ( *(int *)(a1 + 1708) > 0 )
  {
    do
    {
      v11 = *(const void **)(*(_DWORD *)(a1 + 676) + 4 * v10++);
      sub_4C150(v46, v11, 0x20u, (int)"cgminer.c", (int)"gen_stratum_work", 8373);
      sub_4889C(v44, 0x40u, s);
      sub_4889C(s, 0x20u, v42);
      sub_4C150(v44, v42, 0x20u, (int)"cgminer.c", (int)"gen_stratum_work", 8375);
    }
    while ( *(_DWORD *)(a1 + 1708) > v10 );
  }
  v12 = (int *)&v43;
  v13 = (char *)&v41 + 4;
  do
  {
    v14 = v12[1];
    ++v12;
    *((_DWORD *)v13 + 1) = bswap32(v14);
    v13 += 4;
  }
  while ( v12 != &v45 );
  sub_4C150((void *)a2, (const void *)(a1 + 1580), 0x70u, (int)"cgminer.c", (int)"gen_stratum_work", 8384);
  sub_4C150((void *)(a2 + 36), v42, 0x20u, (int)"cgminer.c", (int)"gen_stratum_work", 8385);
  *(_QWORD *)(a2 + 312) = *(_QWORD *)(a1 + 1824);
  *(_DWORD *)(a2 + 288) = _strdup(*(const char **)(a1 + 672));
  *(_DWORD *)(a2 + 320) = _strdup(*(const char **)(a1 + 612));
  *(_DWORD *)(a2 + 308) = _strdup((const char *)(a1 + 1804));
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v40 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v40,
      "cgminer.c",
      "gen_stratum_work",
      8396);
LABEL_47:
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
  off_9E444();
  if ( byte_1AECC5 )
  {
    v32 = sub_4988C(a2, 112);
    v33 = sub_4988C((int)v42, 32);
    v34 = (char *)v33;
    if ( byte_1AECC5 )
    {
      if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 6 )
      {
LABEL_35:
        if ( !byte_1AECC4 && dword_9E320 <= 6 )
        {
LABEL_37:
          if ( !byte_1AECC4 && dword_9E320 <= 6 )
            goto LABEL_40;
LABEL_39:
          snprintf(
            s,
            0x800u,
            "Work job_id %s nonce2 %llu ntime %s",
            *(const char **)(a2 + 288),
            *(_QWORD *)(a2 + 296),
            *(const char **)(a2 + 308));
          sub_47AB4(7, s, 0);
          goto LABEL_40;
        }
LABEL_43:
        snprintf(s, 0x800u, "Generated stratum header %s", v32);
        sub_47AB4(7, s, 0);
        if ( !byte_1AECC5 )
          goto LABEL_40;
        if ( byte_244080 )
          goto LABEL_39;
        goto LABEL_37;
      }
      snprintf(s, 0x800u, "Generated stratum merkle %s", v33);
      sub_47AB4(7, s, 0);
      if ( byte_1AECC5 )
      {
        if ( byte_244080 )
          goto LABEL_43;
        goto LABEL_35;
      }
    }
LABEL_40:
    free(v32);
    free(v34);
  }
  v15 = a2 - 4;
  v16 = (int *)&v47;
  do
  {
    v17 = *(_DWORD *)(v15 + 4);
    v15 += 4;
    v16[1] = bswap32(v17);
    ++v16;
  }
  while ( &v49 != v16 );
  sub_486D4(s);
  sub_48704((unsigned __int8 *)s, v48, 0x40u);
  sub_4C150((void *)(a2 + 128), v51, 0x20u, (int)"cgminer.c", (int)"calc_midstate", 2251);
  sub_53E30((void *)(a2 + 160));
  ++dword_246360;
  if ( time(0) - dword_1AF21C > 5 )
  {
    dword_1AF21C = time(0);
    dword_1AF220 = dword_246360;
  }
  v18 = *(double *)(a2 + 312);
  v19 = dword_1AF224;
  *(_BYTE *)(a2 + 284) = 1;
  *(_DWORD *)(a2 + 260) = a1;
  *(_DWORD *)(a2 + 336) = v19;
  *(_DWORD *)(a2 + 248) = 0;
  *(_BYTE *)(a2 + 280) = 0;
  *(_BYTE *)(a2 + 440) = 83;
  *(_DWORD *)(a2 + 244) = 60;
  if ( v18 == 0.0 )
  {
    LODWORD(v20) = sub_778A4(*(_QWORD *)(a2 + 184));
    v21 = v20 * 6.27710174e57;
    LODWORD(v22) = sub_778A4(*(_QWORD *)(a2 + 176));
    v23 = v21 + v22 * 3.40282367e38;
    LODWORD(v24) = sub_778A4(*(_QWORD *)(a2 + 168));
    v25 = v23 + v24 * 1.84467441e19;
    LODWORD(v26) = sub_778A4(*(_QWORD *)(a2 + 160));
    v27 = v26 + v25;
    if ( v26 + v25 == 0.0 )
    {
      v18 = 2.69595353e67;
      v28 = -1;
    }
    else
    {
      v18 = 2.69595353e67 / v27;
      round();
      v28 = (unsigned __int64)(2.69595353e67 / v27);
    }
    *(double *)(a2 + 376) = v18;
  }
  else
  {
    *(double *)(a2 + 376) = v18;
    round();
    v28 = (unsigned __int64)v18;
  }
  *(double *)(a1 + 480) = v18;
  sub_51B18(v28, (char *)(*(_DWORD *)(a2 + 260) + 48), 8u, 0);
  v29 = *(double *)(a1 + 464);
  if ( v29 == v18 )
  {
    ++*(_DWORD *)(a1 + 488);
    goto LABEL_22;
  }
  if ( v29 <= v18 && v29 != 0.0 )
  {
LABEL_22:
    v30 = *(double *)(a1 + 472);
    if ( v30 != v18 )
      goto LABEL_23;
LABEL_29:
    ++*(_DWORD *)(a1 + 492);
    return sub_4A60C((struct timeval *)(a2 + 264));
  }
  v30 = *(double *)(a1 + 472);
  *(double *)(a1 + 464) = v18;
  *(_DWORD *)(a1 + 488) = 1;
  if ( v30 == v18 )
    goto LABEL_29;
LABEL_23:
  if ( v30 < v18 )
  {
    *(double *)(a1 + 472) = v18;
    *(_DWORD *)(a1 + 492) = 1;
  }
  return sub_4A60C((struct timeval *)(a2 + 264));
}

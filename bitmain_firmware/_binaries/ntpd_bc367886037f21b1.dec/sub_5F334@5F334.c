int __fastcall sub_5F334(int *a1)
{
  int tv_nsec; // r3
  int v3; // r2
  __time_t tv_sec; // r4
  __time_t v5; // r0
  int v6; // r1
  __time_t v7; // r12
  int v8; // r2
  int v9; // r0
  bool v10; // cc
  int v11; // r1
  int v12; // r1
  bool v13; // cc
  __int64 v14; // r0
  int v15; // r9
  int v16; // r1
  int v17; // r0
  double v18; // d0
  double v19; // r0
  int v20; // r2
  __int64 v21; // r10
  bool v22; // cf
  unsigned int v23; // r9
  int v24; // r2
  int v25; // r3
  int v26; // lr
  int v27; // r2
  int result; // r0
  int v29; // r1
  int v30; // r1
  int v31; // r9
  int v32; // r1
  int v33; // r1
  int v34; // lr
  int v35; // r9
  bool v36; // cc
  struct timespec tp; // [sp+4h] [bp-10h] BYREF
  int v38; // [sp+Ch] [bp-8h]

  if ( clock_gettime(0, &tp) < 0 )
    sub_C5C4();
  tv_nsec = tp.tv_nsec;
  if ( trunc_os_clock )
  {
    tv_nsec = (int)((double)(int)((double)tp.tv_nsec * 0.000000001 / sys_tick) * 1000000000.0 * sys_tick);
    tp.tv_nsec = tv_nsec;
  }
  v3 = tv_nsec + 50000000;
  tv_sec = tp.tv_sec;
  if ( tv_nsec + 50000000 < 0 )
  {
    v5 = tp.tv_sec;
    do
    {
      v3 += 1000000000;
      --v5;
    }
    while ( v3 < 0 );
  }
  else if ( v3 > 999999999 )
  {
    v3 = tv_nsec - 950000000;
    if ( tv_nsec - 950000000 > 999999999 )
    {
      v5 = tp.tv_sec + 2;
      v3 = tv_nsec - 1950000000;
    }
    else
    {
      v5 = tp.tv_sec + 1;
    }
  }
  else
  {
    v5 = tp.tv_sec;
  }
  if ( (int)qword_105F20 < v5 )
    v6 = (int)qword_105F20 <= v5;
  else
    v6 = -((int)qword_105F20 > v5);
  if ( !v6 )
  {
    if ( v3 > SHIDWORD(qword_105F20) )
      v6 = v3 >= SHIDWORD(qword_105F20);
    else
      v6 = -(v3 < SHIDWORD(qword_105F20));
  }
  if ( v6 == -1 )
  {
    dword_105F28 = 1;
    ++sys_lamport;
  }
  qword_105F20 = (__int64)tp;
  v7 = qword_105F2C;
  v8 = LODWORD(sys_fuzz_nsec) + HIDWORD(qword_105F2C);
  if ( LODWORD(sys_fuzz_nsec) + HIDWORD(qword_105F2C) < 0 )
  {
    do
    {
      v8 += 1000000000;
      --v7;
    }
    while ( v8 < 0 );
  }
  else if ( v8 > 999999999 )
  {
    v9 = v8 - 1000000000;
    v10 = v8 - 1000000000 <= 999999999;
    if ( v8 - 1000000000 <= 999999999 )
      v7 = qword_105F2C + 1;
    else
      v8 -= 2013265920;
    if ( v10 )
    {
      v8 = v9;
    }
    else
    {
      v7 += 2;
      v8 += 13265920;
    }
  }
  if ( v7 < tp.tv_sec )
    v11 = v7 <= tp.tv_sec;
  else
    v11 = -(v7 > tp.tv_sec);
  if ( v11 )
  {
    if ( v11 != -1 )
      goto LABEL_29;
  }
  else
  {
    if ( v8 < tv_nsec )
      v32 = v8 <= tv_nsec;
    else
      v32 = -(v8 > tv_nsec);
    if ( v32 != -1 )
      goto LABEL_29;
  }
  v33 = v8 - tv_nsec;
  v34 = v7 - tp.tv_sec;
  if ( v8 - tv_nsec < 0 )
  {
    do
    {
      v33 += 1000000000;
      --v34;
    }
    while ( v33 < 0 );
  }
  else if ( v33 > 999999999 )
  {
    v35 = v33 - 1000000000;
    v36 = v33 - 1000000000 <= 999999999;
    if ( v33 - 1000000000 <= 999999999 )
      ++v34;
    else
      v33 -= 2013265920;
    if ( v36 )
      v33 = v35;
    else
      v33 += 13238272;
    if ( !v36 )
    {
      v34 += 2;
      v33 += 27648;
    }
  }
  if ( v34 <= 0 )
  {
    if ( !dword_105F28 )
    {
      tp.tv_sec = v7;
      tp.tv_nsec = v8;
      tv_sec = v7;
      LODWORD(qword_105F2C) = v7;
      HIDWORD(qword_105F2C) = v8;
      tv_nsec = v8;
      if ( v8 >= 0 )
        goto LABEL_37;
      do
      {
LABEL_79:
        tv_nsec += 1000000000;
        --tv_sec;
      }
      while ( tv_nsec < 0 );
      goto LABEL_37;
    }
  }
  else if ( !dword_105F28 )
  {
    sub_64A18(3, "get_systime Lamport advance exceeds one second (%.9f)", (double)v34 + (double)v33 * 0.000000001);
    exit(1);
  }
LABEL_29:
  qword_105F2C = (__int64)tp;
  if ( tv_nsec < 0 )
    goto LABEL_79;
  if ( tv_nsec > 999999999 )
  {
    v12 = tv_nsec - 1000000000;
    v13 = tv_nsec - 1000000000 <= 999999999;
    if ( tv_nsec - 1000000000 <= 999999999 )
      tv_sec = tp.tv_sec + 1;
    else
      tv_nsec -= 2013265920;
    if ( v13 )
    {
      tv_nsec = v12;
    }
    else
    {
      tv_sec += 2;
      tv_nsec += 13265920;
    }
  }
LABEL_37:
  v14 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(tv_nsec).n64_i64[0], 0x20u), 0x20u) + 500000000;
  v15 = sub_8BB68(v14, HIDWORD(v14), 1000000000, 0);
  v17 = sub_686F8(v15, v16);
  v18 = ((double)v17 + (double)v17) * 2.32830644e-10 * sys_fuzz;
  LODWORD(v19) = 32;
  ldexp(v19, v20);
  if ( v18 < 0.0 )
    v21 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v18), HIDWORD(COERCE_UNSIGNED_INT64(-v18)));
  else
    v21 = sub_8BBA8(LODWORD(v18), HIDWORD(v18));
  v22 = __CFADD__((_DWORD)v21, v15);
  v23 = v21 + v15;
  v24 = v22;
  v25 = tv_sec - 2085978496 + HIDWORD(v21) + v24;
  v26 = dword_105F28;
  v27 = v23;
  if ( qword_105F34 )
  {
    if ( dword_105F28 )
    {
      LODWORD(qword_105F34) = v25;
      HIDWORD(qword_105F34) = v23;
      goto LABEL_44;
    }
    if ( sys_fuzz > 0.0 )
    {
      v29 = v23 < HIDWORD(qword_105F34) ? v25 - 1 : v25;
      v30 = v29 - qword_105F34;
      v31 = v23 == HIDWORD(qword_105F34) ? v30 - 1 : v30;
      if ( v31 < 0 )
      {
        v27 = HIDWORD(qword_105F34) + 1;
        if ( HIDWORD(qword_105F34) == -1 )
          v26 = 1;
        v25 = v26 + qword_105F34;
        ++sys_tsrounding;
      }
    }
    LODWORD(qword_105F34) = v25;
    HIDWORD(qword_105F34) = v27;
  }
  else
  {
    LODWORD(qword_105F34) = v25;
    HIDWORD(qword_105F34) = v23;
    if ( dword_105F28 )
LABEL_44:
      dword_105F28 = 0;
  }
  result = v38;
  a1[1] = v27;
  *a1 = v25;
  return result;
}

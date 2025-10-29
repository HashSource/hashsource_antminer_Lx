int __fastcall sub_65B4(int *a1)
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
  int v16; // r0
  double v17; // d0
  double v18; // r0
  int v19; // r2
  __int64 v20; // r10
  bool v21; // cf
  unsigned int v22; // r9
  int v23; // r2
  int v24; // r3
  int v25; // lr
  int v26; // r2
  int result; // r0
  int v28; // r1
  int v29; // r1
  int v30; // r9
  int v31; // r1
  int v32; // r1
  int v33; // lr
  int v34; // r9
  bool v35; // cc
  struct timespec tp; // [sp+4h] [bp-10h] BYREF
  int v37; // [sp+Ch] [bp-8h]

  if ( clock_gettime(0, &tp) < 0 )
    sub_3530();
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
  if ( (int)qword_332B8 < v5 )
    v6 = (int)qword_332B8 <= v5;
  else
    v6 = -((int)qword_332B8 > v5);
  if ( !v6 )
  {
    if ( v3 > SHIDWORD(qword_332B8) )
      v6 = v3 >= SHIDWORD(qword_332B8);
    else
      v6 = -(v3 < SHIDWORD(qword_332B8));
  }
  if ( v6 == -1 )
  {
    dword_332C0 = 1;
    ++sys_lamport;
  }
  qword_332B8 = (__int64)tp;
  v7 = qword_332C4;
  v8 = LODWORD(sys_fuzz_nsec) + HIDWORD(qword_332C4);
  if ( LODWORD(sys_fuzz_nsec) + HIDWORD(qword_332C4) < 0 )
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
      v7 = qword_332C4 + 1;
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
      v31 = v8 <= tv_nsec;
    else
      v31 = -(v8 > tv_nsec);
    if ( v31 != -1 )
      goto LABEL_29;
  }
  v32 = v8 - tv_nsec;
  v33 = v7 - tp.tv_sec;
  if ( v8 - tv_nsec < 0 )
  {
    do
    {
      v32 += 1000000000;
      --v33;
    }
    while ( v32 < 0 );
  }
  else if ( v32 > 999999999 )
  {
    v34 = v32 - 1000000000;
    v35 = v32 - 1000000000 <= 999999999;
    if ( v32 - 1000000000 <= 999999999 )
      ++v33;
    else
      v32 -= 2013265920;
    if ( v35 )
      v32 = v34;
    else
      v32 += 13238272;
    if ( !v35 )
    {
      v33 += 2;
      v32 += 27648;
    }
  }
  if ( v33 <= 0 )
  {
    if ( !dword_332C0 )
    {
      tp.tv_sec = v7;
      tp.tv_nsec = v8;
      tv_sec = v7;
      LODWORD(qword_332C4) = v7;
      HIDWORD(qword_332C4) = v8;
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
  else if ( !dword_332C0 )
  {
    sub_A848(3, "get_systime Lamport advance exceeds one second (%.9f)", (double)v33 + (double)v32 * 0.000000001);
    exit(1);
  }
LABEL_29:
  qword_332C4 = (__int64)tp;
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
  v15 = sub_1C480(v14, HIDWORD(v14), 1000000000, 0);
  v16 = sub_CC4C();
  v17 = ((double)v16 + (double)v16) * 2.32830644e-10 * sys_fuzz;
  LODWORD(v18) = 32;
  ldexp(v18, v19);
  if ( v17 < 0.0 )
    v20 = -sub_1C4C0(COERCE_UNSIGNED_INT64(-v17), HIDWORD(COERCE_UNSIGNED_INT64(-v17)));
  else
    v20 = sub_1C4C0(LODWORD(v17), HIDWORD(v17));
  v21 = __CFADD__((_DWORD)v20, v15);
  v22 = v20 + v15;
  v23 = v21;
  v24 = tv_sec - 2085978496 + HIDWORD(v20) + v23;
  v25 = dword_332C0;
  v26 = v22;
  if ( qword_332CC )
  {
    if ( dword_332C0 )
    {
      LODWORD(qword_332CC) = v24;
      HIDWORD(qword_332CC) = v22;
      goto LABEL_44;
    }
    if ( sys_fuzz > 0.0 )
    {
      v28 = v22 < HIDWORD(qword_332CC) ? v24 - 1 : v24;
      v29 = v28 - qword_332CC;
      v30 = v22 == HIDWORD(qword_332CC) ? v29 - 1 : v29;
      if ( v30 < 0 )
      {
        v26 = HIDWORD(qword_332CC) + 1;
        if ( HIDWORD(qword_332CC) == -1 )
          v25 = 1;
        v24 = v25 + qword_332CC;
        ++sys_tsrounding;
      }
    }
    LODWORD(qword_332CC) = v24;
    HIDWORD(qword_332CC) = v26;
  }
  else
  {
    LODWORD(qword_332CC) = v24;
    HIDWORD(qword_332CC) = v22;
    if ( dword_332C0 )
LABEL_44:
      dword_332C0 = 0;
  }
  result = v37;
  a1[1] = v26;
  *a1 = v24;
  return result;
}

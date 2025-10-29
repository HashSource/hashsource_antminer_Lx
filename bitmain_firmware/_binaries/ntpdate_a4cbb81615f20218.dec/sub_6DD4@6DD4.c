int sub_6DD4()
{
  double v0; // d0
  double v1; // d8
  double v2; // d0
  __int64 v3; // r0
  int v4; // r2
  __int64 v5; // kr08_8
  __int64 v6; // r2
  int v7; // r4
  _BOOL4 v8; // r7
  int v9; // r6
  int tv_nsec; // r2
  __time_t tv_sec; // r8
  int v12; // r8
  __int64 v13; // r0
  int v14; // r0
  bool v15; // cf
  unsigned int v16; // r4
  int v17; // r1
  int v18; // r0
  __int64 v19; // r2
  int result; // r0
  int v21; // r1
  bool v22; // cc
  double v23; // d0
  int v24; // [sp+8h] [bp-24h] BYREF
  time_t timer; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v26[2]; // [sp+14h] [bp-18h] BYREF
  struct timespec tp; // [sp+1Ch] [bp-10h] BYREF

  v1 = v0;
  timer = 0x7FFFFFFF;
  v2 = sys_residual;
  if ( sys_residual < 0.0 )
  {
    v23 = -sys_residual;
    ldexp(NAN, _stack_chk_guard);
    v3 = -sub_1C4C0(LODWORD(v23), HIDWORD(v23));
  }
  else
  {
    ldexp(NAN, _stack_chk_guard);
    v3 = sub_1C4C0(LODWORD(v2), HIDWORD(v2));
  }
  v5 = v3;
  LODWORD(v3) = 32;
  ldexp(*(double *)&v3, v4);
  if ( v1 < 0.0 )
    v6 = -sub_1C4C0(COERCE_UNSIGNED_INT64(-v1), HIDWORD(COERCE_UNSIGNED_INT64(-v1)));
  else
    v6 = sub_1C4C0(LODWORD(v1), HIDWORD(v1));
  v7 = v5 + v6;
  v8 = __CFADD__((_DWORD)v5, (_DWORD)v6);
  v9 = HIDWORD(v5) - 2085978496 + HIDWORD(v6);
  if ( clock_gettime(0, &tp) < 0 )
    sub_3530();
  tv_nsec = tp.tv_nsec;
  if ( trunc_os_clock )
  {
    tv_nsec = (int)((double)(int)((double)tp.tv_nsec * 0.000000001 / sys_tick) * 1000000000.0 * sys_tick);
    tp.tv_nsec = tv_nsec;
  }
  tv_sec = tp.tv_sec;
  if ( tv_nsec < 0 )
  {
    do
    {
      tv_nsec += 1000000000;
      --tv_sec;
    }
    while ( tv_nsec < 0 );
  }
  else if ( tv_nsec > 999999999 )
  {
    v21 = tv_nsec - 1000000000;
    v22 = tv_nsec - 1000000000 <= 999999999;
    if ( tv_nsec - 1000000000 <= 999999999 )
      tv_sec = tp.tv_sec + 1;
    else
      tv_nsec -= 2013265920;
    if ( v22 )
      tv_nsec = v21;
    else
      tv_nsec += 13238272;
    if ( !v22 )
    {
      tv_sec += 2;
      tv_nsec += 27648;
    }
  }
  v12 = v8 + v9 + tv_sec;
  v13 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(tv_nsec).n64_i64[0], 0x20u), 0x20u) + 500000000;
  v14 = sub_1C480(v13, HIDWORD(v13), 1000000000, 0);
  v15 = __CFADD__(v7, v14);
  v16 = v7 + v14;
  v17 = v15;
  sub_B17C((int)&v24, v12 + v17, &timer);
  v18 = v24;
  v19 = 1000000LL * v16 + 0x80000000LL;
  if ( HIDWORD(v19) == 1000000 )
    v18 = v24 + 1;
  v26[0] = v18;
  if ( HIDWORD(v19) == 1000000 )
    HIDWORD(v19) = 0;
  v26[1] = HIDWORD(v19);
  if ( sub_9DEC(v26, 0, v19) )
  {
    sub_A848(3, "step-systime: %m");
    result = enable_panic_check;
    if ( enable_panic_check )
    {
      result = allow_panic;
      if ( allow_panic )
      {
        sub_A848(3, "step_systime: allow_panic is TRUE!");
        return 0;
      }
    }
  }
  else
  {
    sys_residual = 0.0;
    dword_332C0 = v1 < 0.0;
    if ( step_callback )
      ((void (*)(void))step_callback)();
    if ( enable_panic_check && allow_panic )
    {
      sub_A848(3, "step_systime: allow_panic is TRUE!");
      if ( allow_panic )
        sub_10788("systime.c", 589, 2, "!allow_panic");
    }
    return 1;
  }
  return result;
}

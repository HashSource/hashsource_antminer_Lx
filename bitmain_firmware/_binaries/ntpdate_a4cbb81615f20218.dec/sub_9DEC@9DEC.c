int __fastcall sub_9DEC(const struct timeval *a1, const struct timezone *a2)
{
  int v2; // r4
  int *v5; // r0
  int v6; // r3
  int v7; // r8
  int *v8; // r6
  bool v9; // zf
  int v11; // r0
  __suseconds_t tv_usec; // r12
  __time_t tv_sec; // r1
  int v14; // r0
  __time_t v15; // r3
  int v16; // r0
  int v17; // [sp+4h] [bp-18h]
  int v18; // [sp+4h] [bp-18h]
  int v19; // [sp+4h] [bp-18h]
  int v20; // [sp+4h] [bp-18h]
  struct timespec tp; // [sp+Ch] [bp-10h] BYREF

  if ( debug > 0 )
    sub_A770("In ntp_set_tod\n");
  v5 = _errno_location();
  v7 = dword_33304;
  if ( (unsigned int)dword_33304 > 1 )
  {
    v6 = 0;
    v2 = -1;
  }
  v8 = v5;
  if ( (unsigned int)dword_33304 <= 1 )
  {
    tv_usec = a1->tv_usec;
    tv_sec = a1->tv_sec;
    *v5 = 0;
    tp.tv_sec = tv_sec;
    tp.tv_nsec = 1000 * tv_usec;
    v14 = clock_settime(0, &tp);
    v6 = *v8;
    v2 = v14;
    if ( debug > 0 )
    {
      v19 = *v8;
      sub_A770("ntp_set_tod: clock_settime: %d %m\n", v14);
      v7 = dword_33304;
      v6 = v19;
      if ( !(v2 | dword_33304) )
        goto LABEL_21;
    }
    else if ( !(v14 | v7) )
    {
LABEL_21:
      dword_33304 = 1;
      goto LABEL_17;
    }
    if ( !v2 )
    {
LABEL_17:
      *v8 = v6;
      if ( debug > 0 )
        sub_A770("ntp_set_tod: Final result: %s: %d %m\n", set_tod_used[dword_33304], 0);
      goto LABEL_27;
    }
  }
  if ( (v7 & 0xFFFFFFFD) == 0 )
  {
    tp.tv_nsec = 0;
    tp.tv_sec = 0;
    adjtime((const struct timeval *)&tp, 0);
    *v8 = v7 & 0xFFFFFFFD;
    v11 = settimeofday(a1, a2);
    v6 = *v8;
    v2 = v11;
    if ( debug > 0 )
    {
      v18 = *v8;
      sub_A770("ntp_set_tod: settimeofday: %d %m\n", v11);
      v6 = v18;
      v7 = dword_33304;
      if ( v2 | dword_33304 )
      {
LABEL_16:
        if ( !v2 )
          goto LABEL_17;
        goto LABEL_8;
      }
    }
    else if ( v11 | v7 )
    {
      goto LABEL_16;
    }
    dword_33304 = 2;
    goto LABEL_17;
  }
LABEL_8:
  v9 = v7 == 0;
  if ( v7 )
    v9 = v7 == 3;
  if ( !v9 )
  {
    *v8 = v6;
    if ( debug <= 0 )
    {
LABEL_12:
      *v8 = v6;
      return v2;
    }
    goto LABEL_37;
  }
  v15 = a1->tv_sec;
  *v8 = 0;
  tp.tv_sec = v15;
  v16 = stime(&tp.tv_sec);
  v6 = *v8;
  v2 = v16;
  if ( debug > 0 )
  {
    v17 = *v8;
    sub_A770("ntp_set_tod: stime: %d %m\n", v16);
    v6 = v17;
    v7 = dword_33304;
  }
  *v8 = v6;
  if ( !(v7 | v2) )
  {
    dword_33304 = 3;
    if ( debug > 0 )
      sub_A770("ntp_set_tod: Final result: %s: %d %m\n", "stime", v7 | v2);
    goto LABEL_27;
  }
  if ( debug > 0 )
  {
LABEL_37:
    v20 = v6;
    sub_A770("ntp_set_tod: Final result: %s: %d %m\n", set_tod_used[v7], v2);
    v6 = v20;
  }
  if ( v2 )
    goto LABEL_12;
LABEL_27:
  v2 = (int)set_tod_using;
  if ( set_tod_using )
  {
    set_tod_using(set_tod_used[dword_33304]);
    v2 = 0;
    set_tod_using = 0;
  }
  return v2;
}

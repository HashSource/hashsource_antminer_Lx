void __fastcall __noreturn sub_1D0DC(int a1, int *a2)
{
  int v2; // r0
  int v3; // r4
  __mode_t v4; // r0
  int *v5; // r8
  int v6; // r12
  const char *v7; // r4
  int v8; // r5
  const char *v9; // r3
  __uid_t v10; // r0
  void *v11; // r3
  int *v12; // r5
  int v13; // r4
  int *v14; // r5
  int v15; // t1
  int v16; // r0
  int v17; // r4
  int v18; // r4
  int v19; // r5
  int v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  __int64 v30; // r0
  int v31; // r0
  _BYTE *v32; // r0
  int *v33; // r1
  _BYTE *v34; // r4
  void (__fastcall *v35)(_BYTE *); // r3
  int v36; // r1
  int v37; // r0
  int *v38; // r0
  const char *v39; // r1
  int v40; // r4
  char *v41; // r0
  char *v42; // r0
  int v43; // r0
  int tv_sec; // r5
  int v45; // r3
  __pid_t v46; // r0
  __time_t priority_min; // r0
  int v48; // r4
  const char *v49; // r0
  __int64 v50; // r0
  int v51; // r7
  time_t v52; // r0
  int v53; // r3
  int v54; // r11
  time_t v55; // r0
  fd_set *v56; // r3
  int v57; // r0
  int v58; // r0
  int v59; // r3
  int i; // r3
  int v61; // r0
  int v62; // [sp+Ch] [bp-4C8h]
  int v63; // [sp+Ch] [bp-4C8h]
  int v64; // [sp+24h] [bp-4B0h]
  int *v65; // [sp+28h] [bp-4ACh] BYREF
  int v66; // [sp+2Ch] [bp-4A8h] BYREF
  _DWORD v67[2]; // [sp+34h] [bp-4A0h] BYREF
  struct timeval th; // [sp+3Ch] [bp-498h] BYREF
  int v69; // [sp+44h] [bp-490h] BYREF
  int v70; // [sp+48h] [bp-48Ch] BYREF
  fd_set v71; // [sp+4Ch] [bp-488h] BYREF
  char v72[1024]; // [sp+CCh] [bp-408h] BYREF

  v66 = a1;
  v65 = a2;
  pthread_attr_init((pthread_attr_t *)&v71);
  v2 = pthread_attr_setstacksize((pthread_attr_t *)&v71, 0x8000u);
  if ( v2 )
  {
    v42 = strerror(v2);
    sub_64A18(3, "my_pthread_warmup: pthread_attr_setstacksize() -> %s", v42);
  }
  v3 = pthread_create((pthread_t *)&th, (const pthread_attr_t *)&v71, (void *(*)(void *))sub_1CFF4, 0);
  pthread_attr_destroy((pthread_attr_t *)&v71);
  if ( v3 )
  {
    v41 = strerror(v3);
    sub_64A18(3, "my_pthread_warmup: pthread_create() -> %s", v41);
  }
  else
  {
    pthread_cancel(th.tv_sec);
    pthread_join(th.tv_sec, 0);
  }
  v4 = umask(0);
  if ( !v4 )
    v4 = 18;
  umask(v4);
  v5 = &saved_argc;
  saved_argc = v66;
  v6 = *v65;
  saved_argv = (int)v65;
  progname = v6;
  initializing = 1;
  sub_1D028(&v66, (int *)&v65);
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[165] + (_DWORD)off_B511C) & 0xF) != 0
    || (*(int *)((_BYTE *)&elf_hash_bucket[229] + (_DWORD)off_B511C) & 0xF) != 0
    || (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B511C) & 0xF) != 0 )
  {
    nofork = 1;
  }
  sub_64B14((char *)progname);
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[117] + (_DWORD)off_B511C) & 0xF) != 0 )
  {
    v43 = *(int *)((char *)&elf_hash_bucket[119] + (_DWORD)off_B511C);
    v64 = v43;
    syslogit = 0;
    sub_64C04(v43, 0);
  }
  else
  {
    if ( nofork )
      msyslog_term = 1;
    v64 = 0;
    if ( (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B511C) & 0xF) != 0 )
      syslogit = 0;
  }
  sub_64A18(5, "%s: Starting", Version);
  sub_6BCB0(v72, 1024, "Command line:");
  v7 = &v72[strlen(v72)];
  if ( saved_argc > 0 )
  {
    v8 = 0;
    do
    {
      v9 = *(const char **)(saved_argv + 4 * v8++);
      sub_6BCB0(v7, 1024 - (v7 - v72), " %s", v9);
      v7 += strlen(v7);
    }
    while ( saved_argc > v8 );
  }
  sub_64A18(6, "%s", v72);
  sub_6E930(sub_1CF70);
  sub_6F108(sub_1CEC8);
  sub_6F08C(sub_1CDE8);
  v10 = getuid();
  v11 = off_B511C;
  if ( v10 && (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B511C) & 0xF) == 0 )
  {
    msyslog_term = 1;
    sub_64A18(3, "must be run as root, not uid %ld", v10);
    exit(1);
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[133] + (_DWORD)off_B511C) & 0xF) != 0 )
    listen_to_virtual_ips = 0;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[85] + (_DWORD)off_B511C) & 0xF) != 0 )
  {
    v12 = *(int **)((char *)&elf_hash_bucket[88] + (_DWORD)off_B511C);
    v13 = *v12 - 1;
    if ( *v12 > 0 )
    {
      v14 = v12 + 1;
      do
      {
        v15 = v14[1];
        ++v14;
        --v13;
        if ( sub_63C8C(v15, 0, &v71, v11) )
          v16 = 5;
        else
          v16 = 4;
        sub_15C24(v16, *v14, -1, 0);
      }
      while ( v13 != -1 );
      v11 = off_B511C;
    }
  }
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[181] + (_DWORD)v11) & 0xF) != 0 )
    priority_done = 0;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[213] + (_DWORD)v11) & 0xF) != 0 )
  {
    config_priority = *(int *)((char *)&elf_hash_bucket[215] + (_DWORD)v11);
    config_priority_override = 1;
    priority_done = 0;
  }
  v17 = *(int *)((char *)&elf_hash_bucket[373] + (_DWORD)v11);
  v69 = -1;
  v18 = v17 & 0xF;
  v70 = -1;
  if ( v18 )
  {
    v18 = *(int *)((char *)&elf_hash_bucket[375] + (_DWORD)v11);
    if ( v18 > 0 )
    {
      nofork = 0;
      if ( pipe(&v69) )
      {
        v38 = _errno_location();
        v39 = "Pipe creation failed for --wait-sync: %m";
        goto LABEL_58;
      }
      waitsync_fd_to_close = v70;
    }
    else
    {
      v18 = 0;
    }
  }
  sub_63E5C();
  sub_5F334(v67);
  sub_6879C(v67[1] * v67[0]);
  v19 = nofork;
  if ( nofork )
  {
LABEL_38:
    sub_FB60(3, 0x32000u);
    sub_FB60(8, 0xFFFFFFFFFFF00000LL);
    sub_6D340(1, sub_1CD1C);
    sub_6D340(2, sub_1CD1C);
    sub_6D340(3, sub_1CD1C);
    sub_6D340(15, sub_1CD1C);
    sub_6D340(7, sub_1CD1C);
    sub_6D340(10, sub_1CD78);
    sub_6D340(12, sub_1CD78);
    v20 = sub_6D340(13, 1);
    if ( !ssl_init_done )
      v20 = sub_6C30C(v20);
    v22 = sub_61750(v20, v21);
    v23 = sub_41608(v22);
    v24 = sub_3FD14(v23);
    v25 = sub_30958(v24);
    v26 = sub_40A4C(v25);
    v27 = sub_3F120(v26);
    v28 = sub_240B8(v27);
    v29 = sub_31660(v28);
    LODWORD(v30) = sub_3929C(v29);
    if ( !priority_done )
    {
      th.tv_sec = sched_get_priority_max(1);
      tv_sec = th.tv_sec;
      if ( config_priority_override )
      {
        priority_min = sched_get_priority_min(1);
        if ( tv_sec >= config_priority )
        {
          if ( priority_min < config_priority )
            priority_min = config_priority;
          th.tv_sec = priority_min;
        }
        else
        {
          th.tv_sec = tv_sec;
        }
      }
      LODWORD(v30) = sched_setscheduler(0, 1, (const struct sched_param *)&th);
      if ( (_DWORD)v30 == -1 )
      {
        LODWORD(v30) = sub_64A18(3, "sched_setscheduler(): %m");
        HIDWORD(v30) = priority_done;
      }
      else
      {
        HIDWORD(v30) = ++priority_done;
      }
      if ( !HIDWORD(v30) )
      {
        LODWORD(v30) = setpriority(0, 0, -12);
        if ( (_DWORD)v30 == -1 )
        {
          v30 = sub_64A18(3, "setpriority() error: %m");
          v45 = priority_done;
        }
        else
        {
          v45 = ++priority_done;
        }
        if ( !v45 )
          v30 = sub_64A18(3, "set_process_priority: No way found to improve our priority");
      }
    }
    sub_38A88(v30, HIDWORD(v30));
    v31 = sub_15B10();
    sub_2F104(v31);
    sub_309C4(1);
    sub_131EC(v66, (int)v65);
    sub_302F0(1);
    v32 = (_BYTE *)sub_25C8C(6, 0);
    v33 = &initializing;
    initializing = 0;
    was_alarmed = 0;
    while ( 1 )
    {
LABEL_42:
      if ( dword_B83E0 )
      {
        v48 = dword_B83E4;
        v49 = (const char *)strsignal(dword_B83E4);
        if ( !v49 )
          v49 = byte_97B44;
        v50 = sub_64A18(5, "%s exiting on signal %d (%s)", (const char *)progname, v48, v49);
        sub_32B70(v50, HIDWORD(v50));
        exit(0);
      }
      if ( alarm_flag )
      {
        alarm_flag = 0;
        was_alarmed = 1;
      }
      else
      {
        if ( was_alarmed )
          goto LABEL_67;
        v32 = (_BYTE *)sub_690D4(v32);
        if ( !was_alarmed )
        {
          v32 = (_BYTE *)sub_69FD0(v32);
          if ( !v32 )
            v32 = sub_16B10();
LABEL_67:
          if ( !alarm_flag )
          {
            if ( !was_alarmed )
              goto LABEL_47;
            goto LABEL_46;
          }
LABEL_70:
          alarm_flag = 0;
          was_alarmed = 1;
          goto LABEL_46;
        }
      }
      if ( alarm_flag )
        goto LABEL_70;
LABEL_46:
      v32 = (_BYTE *)sub_40C30(v32, v33);
      was_alarmed = 0;
LABEL_47:
      v32 = (_BYTE *)sub_69DD4(v32);
      v34 = v32;
      if ( v32 )
      {
        while ( 1 )
        {
          if ( alarm_flag )
          {
            was_alarmed = 1;
            alarm_flag = 0;
          }
          else if ( !was_alarmed )
          {
            v35 = (void (__fastcall *)(_BYTE *))*((_DWORD *)v34 + 20);
            if ( !v35 )
            {
LABEL_55:
              sub_64A18(3, "fatal: receive buffer callback NULL");
              abort();
            }
            goto LABEL_50;
          }
          sub_40C30(v32, v33);
          v35 = (void (__fastcall *)(_BYTE *))*((_DWORD *)v34 + 20);
          was_alarmed = 0;
          if ( !v35 )
            goto LABEL_55;
LABEL_50:
          v35(v34);
          v37 = sub_69BD8(v34, v36);
          v32 = (_BYTE *)sub_69DD4(v37);
          v34 = v32;
          if ( !v32 )
            goto LABEL_42;
        }
      }
    }
  }
  v46 = fork();
  if ( v46 != -1 )
  {
    if ( v46 > 0 )
    {
      v51 = v69;
      if ( !v18 )
        goto LABEL_106;
      close(waitsync_fd_to_close);
      v52 = time(0);
      LOBYTE(v53) = v51 & 0x1F;
      if ( v51 <= 0 )
        v53 = -(-v51 & 0x1F);
      v54 = 1 << v53;
      v62 = v18 + v52;
      while ( 1 )
      {
        v55 = time(0);
        th.tv_usec = 0;
        if ( v62 > v55 )
          v5 = (int *)(v62 - v55);
        v56 = (fd_set *)&v70;
        if ( v62 <= v55 )
          v5 = 0;
        th.tv_sec = (__time_t)v5;
        do
        {
          v56->__fds_bits[1] = 0;
          v56 = (fd_set *)((char *)v56 + 4);
        }
        while ( &v71.__fds_bits[31] != (__fd_mask *)v56 );
        v57 = _fdelt_chk(v51);
        v71.__fds_bits[v57] |= v54;
        v58 = select(v51 + 1, &v71, 0, 0, &th);
        if ( v58 != -1 )
          break;
        v59 = *_errno_location();
        if ( v59 != 4 )
        {
          if ( !v59 )
            v59 = -1;
          v63 = v59;
          sub_64A18(3, "--wait-sync select failed: %m");
          v19 = v63;
          goto LABEL_106;
        }
        if ( !v5 )
          goto LABEL_127;
      }
      if ( !v58 )
      {
        for ( i = 0; i != 32; ++i )
          v71.__fds_bits[i] = 0;
        v61 = _fdelt_chk(v51);
        th.tv_sec = 0;
        th.tv_usec = 0;
        v71.__fds_bits[v61] |= v54;
        if ( !select(v51 + 1, &v71, 0, 0, &th) )
        {
LABEL_127:
          v19 = 110;
          _fprintf_chk(stderr, 1, "%s: -w/--wait-sync %ld timed out.\n", (const char *)progname, v18);
        }
      }
LABEL_106:
      exit(v19);
    }
    closelog();
    if ( syslog_file )
    {
      fclose((FILE *)syslog_file);
      syslog_file = 0;
      syslogit = 1;
    }
    sub_68C38(waitsync_fd_to_close);
    if ( open64("/dev/null", 0) || dup2(0, 1) != 1 || dup2(0, 2) != 2 )
      sub_6E8F0("ntpd.c", 580, 2, "0 == open(\"/dev/null\", 0) && 1 == dup2(0, 1) && 2 == dup2(0, 2)");
    sub_64B14((char *)progname);
    sub_64F9C(v64);
    if ( setsid() == -1 )
      sub_64A18(3, "setsid(): %m");
    goto LABEL_38;
  }
  v38 = _errno_location();
  v39 = "fork: %m";
LABEL_58:
  v40 = *v38;
  if ( !*v38 )
    v40 = -1;
  sub_64A18(3, v39);
  exit(v40);
}

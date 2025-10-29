int __fastcall sub_3DF0(int a1, int *a2)
{
  int v2; // r0
  int v3; // r3
  int i; // r3
  struct _IO_FILE *v5; // r6
  const char *v6; // r0
  const char *v7; // r0
  const char *v8; // r5
  int v9; // r0
  int v10; // r4
  struct addrinfo *tv_sec; // r4
  int v12; // r0
  int v13; // r9
  socklen_t v14; // r2
  int v15; // r9
  int *v16; // r2
  int v17; // r0
  int v18; // r4
  struct addrinfo *ai_next; // r3
  unsigned int v20; // r3
  bool v21; // cc
  int v22; // r0
  struct addrinfo *v23; // r1
  int v24; // r4
  int ai_family; // r2
  socklen_t v26; // r2
  int v27; // r0
  int v28; // r0
  Elf32_Dyn **v29; // r9
  int v30; // r3
  int v31; // r0
  int v32; // r4
  int *v33; // r0
  int v34; // r3
  int v35; // r0
  int v36; // r4
  int v37; // r0
  int v38; // r5
  int v39; // r9
  unsigned int v40; // r8
  int v41; // r7
  const char *v42; // r0
  int v43; // r6
  int v44; // r10
  int v45; // r8
  _BOOL4 v46; // r2
  _DWORD *v47; // r0
  int v48; // r7
  _DWORD *v49; // r12
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int v53; // r1
  int v54; // r2
  int v55; // r0
  int v56; // r3
  unsigned int v57; // r7
  unsigned int v58; // r8
  unsigned int v59; // r10
  Elf32_Dyn **v60; // r11
  _DWORD *v61; // r4
  int v62; // r6
  int v63; // r8
  int *v64; // lr
  int *v65; // r2
  int v66; // r3
  int j; // r11
  int *v68; // r1
  int v69; // r2
  int v70; // t1
  int v71; // r3
  int v72; // r0
  int v73; // r12
  _BOOL4 v74; // r3
  int v75; // r3
  _DWORD *v76; // r2
  int v77; // r1
  int *v78; // r3
  int v79; // r1
  int v80; // r3
  unsigned int v81; // r3
  unsigned int v82; // r1
  bool v83; // cc
  int v84; // r0
  int k; // r1
  _DWORD *v86; // r3
  int v87; // r3
  int v88; // r5
  int v89; // r1
  unsigned int v90; // r2
  unsigned int v91; // r3
  unsigned int v92; // r0
  unsigned int v93; // r3
  int v94; // r12
  unsigned int v95; // r0
  unsigned int v96; // r0
  char *v97; // r3
  int *v98; // r1
  int v99; // r2
  int v100; // r0
  int v101; // r3
  struct addrinfo **v102; // r6
  struct addrinfo **v103; // r12
  char *v104; // r7
  char *v105; // r2
  struct addrinfo *v106; // r3
  struct addrinfo *v107; // r1
  struct addrinfo **v108; // r0
  struct addrinfo *v109; // t1
  int v110; // r11
  _DWORD *v111; // lr
  _DWORD *v112; // r7
  _DWORD *v113; // r5
  _DWORD *v114; // r0
  int v115; // r1
  int v116; // r3
  _DWORD *m; // r1
  int v118; // r0
  int *v119; // r8
  int v120; // r12
  _DWORD *v121; // r7
  unsigned int v122; // r3
  unsigned int v123; // r1
  int v124; // lr
  int v125; // t1
  int v126; // r5
  unsigned int v127; // t1
  int v128; // lr
  unsigned int v129; // r3
  struct addrinfo **v130; // r3
  struct addrinfo *v131; // t1
  int v132; // r10
  int *v133; // r7
  int v134; // r0
  int v135; // r6
  const char *v136; // r5
  const char *v137; // r8
  const char *v138; // r0
  int v139; // r0
  FILE *d_tag; // r4
  int v141; // r0
  int v142; // r12
  int v143; // r12
  int *v144; // r3
  int v145; // r6
  FILE *v146; // r7
  int v147; // r4
  int *v148; // r8
  __int16 v149; // r5
  int v150; // t1
  const char *v151; // r5
  const char *v152; // r6
  const char *v153; // r0
  int v154; // r3
  const char *v155; // r0
  const char *v156; // r0
  const char *v157; // r0
  int n; // r6
  const char *v159; // r3
  unsigned int v160; // r8
  char v161; // r1
  unsigned int v162; // r3
  unsigned int v163; // r5
  unsigned int v164; // r12
  unsigned int v165; // r2
  unsigned int v166; // r0
  unsigned int v167; // r12
  unsigned int v168; // r2
  unsigned int v169; // r0
  unsigned int v170; // r2
  unsigned int v171; // r0
  unsigned int v172; // r3
  unsigned int v173; // r12
  unsigned int v174; // r2
  unsigned int v175; // r5
  unsigned int v176; // r0
  int v177; // lr
  int v178; // r8
  bool v179; // cf
  int v180; // r8
  unsigned int v181; // r12
  unsigned int v182; // r7
  int v183; // lr
  int v184; // r2
  int v185; // r7
  unsigned int v186; // r5
  int v187; // r9
  unsigned int v188; // r10
  int v189; // r5
  int v190; // r5
  unsigned int v191; // r2
  int v192; // r1
  int v193; // r3
  unsigned __int16 v194; // r3
  unsigned int v195; // r2
  const char *v196; // r0
  const char *v197; // r0
  const char *v198; // r0
  int ai_protocol; // r3
  int v200; // r12
  double v201; // r0
  int v202; // r2
  double v203; // r0
  const char *v204; // r4
  const char *v205; // r0
  const char *v206; // r0
  int v207; // r0
  unsigned int v208; // r3
  int v209; // r0
  int **v210; // r2
  int **v211; // r3
  int v212; // r0
  const char *v213; // r0
  const char *v214; // r5
  const char *v215; // r0
  const char *v216; // r0
  int v217; // lr
  int v218; // r2
  unsigned int ai_socktype; // r3
  unsigned int v220; // r12
  unsigned int v221; // r4
  bool v222; // zf
  __suseconds_t v223; // r3
  unsigned __int64 v224; // r0
  int v225; // r12
  __time_t v226; // r2
  const char *v227; // r4
  const char *v228; // r0
  int v230; // r8
  int v231; // r6
  const char *v232; // r3
  const char *v233; // r0
  const char *v234; // r0
  _BOOL4 v235; // r12
  unsigned int v236; // r0
  _DWORD *v237; // lr
  int *v238; // r6
  int v239; // t1
  int v240; // t1
  unsigned int v241; // r0
  unsigned int v242; // r2
  int v243; // lr
  int v244; // r0
  int v245; // r3
  int v246; // r3
  int v247; // r3
  unsigned int v248; // r5
  int v249; // r8
  int v250; // r0
  const char *v251; // r0
  _DWORD *v252; // r0
  const char *v253; // r0
  char *v254; // r3
  const char *v255; // r0
  const char *v256; // r0
  int v257; // [sp+4h] [bp-E0h]
  int v259; // [sp+14h] [bp-D0h]
  struct addrinfo *v260; // [sp+14h] [bp-D0h]
  struct addrinfo *v262; // [sp+18h] [bp-CCh]
  struct addrinfo *v263; // [sp+18h] [bp-CCh]
  struct addrinfo *v264; // [sp+18h] [bp-CCh]
  int v265; // [sp+1Ch] [bp-C8h]
  Elf32_Dyn **v266; // [sp+1Ch] [bp-C8h]
  const char *s1; // [sp+2Ch] [bp-B8h]
  unsigned int v268; // [sp+38h] [bp-ACh]
  int v269; // [sp+3Ch] [bp-A8h]
  struct addrinfo *v270; // [sp+50h] [bp-94h] BYREF
  int v271; // [sp+54h] [bp-90h] BYREF
  int v272; // [sp+58h] [bp-8Ch]
  struct timeval ai; // [sp+5Ch] [bp-88h] BYREF
  struct addrinfo req; // [sp+64h] [bp-80h] BYREF
  _DWORD v275[9]; // [sp+84h] [bp-60h] BYREF
  _BYTE v276[4]; // [sp+A8h] [bp-3Ch] BYREF
  int domain[2]; // [sp+ACh] [bp-38h] BYREF
  int v278; // [sp+B4h] [bp-30h]
  __int64 v279; // [sp+B8h] [bp-2Ch]
  __int64 v280; // [sp+C0h] [bp-24h]
  char v281[16]; // [sp+D4h] [bp-10h] BYREF

  sub_9D4C();
  if ( !ipv6_works )
    ai_fam_templ = 2;
  v265 = 0;
  progname = *a2;
  syslogit = 0;
  while ( 1 )
  {
    v2 = sub_9924(a1, a2, "46a:bBde:k:o:p:qst:uv");
    if ( v2 == -1 )
      break;
    switch ( v2 )
    {
      case '4':
        ai_fam_templ = 2;
        break;
      case '6':
        ai_fam_templ = 10;
        break;
      case '?':
        ++v265;
        break;
      case 'B':
        v210 = &never_step_ptr;
        v211 = always_step_ptr;
        goto LABEL_356;
      case 'a':
        v212 = strtol((const char *)ntp_optarg, 0, 10);
        sys_authenticate = 1;
        sys_authkey = v212;
        break;
      case 'b':
        v210 = always_step_ptr;
        v211 = &never_step_ptr;
LABEL_356:
        ++**v210;
        **v211 = 0;
        break;
      case 'd':
        ++debug;
        break;
      case 'e':
        if ( sub_71D0(ntp_optarg, &v271) && !v271 )
        {
          sys_authdelay = v272;
        }
        else
        {
          ++v265;
          _fprintf_chk(
            stderr,
            1,
            "%s: encryption delay %s is unlikely\n",
            (const char *)progname,
            (const char *)ntp_optarg);
        }
        break;
      case 'k':
        key_file[0] = (char *)ntp_optarg;
        break;
      case 'o':
        sys_version = strtol((const char *)ntp_optarg, 0, 10);
        break;
      case 'p':
        v209 = strtol((const char *)ntp_optarg, 0, 10);
        if ( (unsigned int)(v209 - 1) > 7 )
        {
          ++v265;
          _fprintf_chk(stderr, 1, "%s: number of samples (%d) is invalid\n", (const char *)progname, v209);
        }
        else
        {
          sys_samples = v209;
        }
        break;
      case 'q':
        simple_query = 1;
        break;
      case 's':
        syslogit = 1;
        break;
      case 't':
        if ( sub_71D0(ntp_optarg, &v271) )
        {
          if ( (unsigned int)(v271 + 0xFFFF) <= 0x1FFFE )
          {
            v208 = (5 * (HIWORD(v272) | (unsigned int)(v271 << 16)) + 0x8000) >> 16;
            if ( v208 < 5 )
              v208 = 5;
          }
          else
          {
            v208 = 0x8000;
          }
          sys_timeout = v208;
        }
        else
        {
          ++v265;
          _fprintf_chk(stderr, 1, "%s: timeout %s is undecodeable\n", (const char *)progname, (const char *)ntp_optarg);
        }
        break;
      case 'u':
        unpriv_port = 1;
        break;
      case 'v':
        verbose = 1;
        break;
      default:
        continue;
    }
  }
  if ( v265 )
  {
    _fprintf_chk(
      stderr,
      1,
      "usage: %s [-46bBdqsuv] [-a key#] [-e delay] [-k file] [-p samples] [-o version#] [-t timeo] server ...\n",
      (const char *)progname);
    exit(2);
  }
  if ( !sys_samples )
  {
    if ( simple_query )
      v3 = 1;
    else
      v3 = 4;
    sys_samples = v3;
  }
  if ( !debug && !simple_query )
  {
    if ( !syslogit )
      goto LABEL_16;
    goto LABEL_333;
  }
  setvbuf(stdout, byte_3127C, 1, 0x2000u);
  if ( syslogit )
  {
LABEL_333:
    openlog("ntpdate", 9, 24);
    if ( debug )
      v207 = 255;
    else
      v207 = 127;
    setlogmask(v207);
    if ( debug )
      goto LABEL_40;
LABEL_16:
    if ( !verbose )
      goto LABEL_17;
    goto LABEL_40;
  }
  if ( !debug )
    goto LABEL_16;
LABEL_40:
  sub_A848(5, "%s", Version);
LABEL_17:
  for ( i = ntp_optind; i < a1; ntp_optind = i )
  {
    v8 = (const char *)a2[i];
    sub_10410(v281, "ntp", 5);
    req.ai_flags = 0;
    memset(&req.ai_protocol, 0, 20);
    req.ai_family = ai_fam_templ;
    req.ai_socktype = 2;
    v9 = getaddrinfo(v8, v281, &req, (struct addrinfo **)&ai);
    v10 = v9;
    if ( v9 )
    {
      v5 = stderr;
      if ( (unsigned int)(v9 + 4) <= 1 )
      {
        v255 = gai_strerror(v9);
        _fprintf_chk(v5, 1, "Exiting, name server cannot be used: %s (%d)", v255, v10);
        v256 = gai_strerror(v10);
        sub_A848(3, "name server cannot be used: %s (%d)", v256, v10);
        exit(1);
      }
      v6 = gai_strerror(v9);
      _fprintf_chk(v5, 1, "Error resolving %s: %s (%d)\n", v8, v6, v10);
      v7 = gai_strerror(v10);
      sub_A848(3, "Can't find host %s: %s (%d)", v8, v7, v10);
    }
    else
    {
      tv_sec = (struct addrinfo *)ai.tv_sec;
      if ( ai.tv_sec )
      {
        do
        {
          *(_QWORD *)domain = 0;
          v278 = 0;
          v279 = 0;
          v280 = 0;
          if ( tv_sec->ai_addrlen > 0x1C )
            sub_10788("ntpdate.c", 1400, 2, "ptr->ai_addrlen <= sizeof(addr)");
          _memcpy_chk(domain, tv_sec->ai_addr);
          v12 = socket(LOWORD(domain[0]), 2, 0);
          v13 = v12;
          if ( v12 != -1 )
          {
            if ( LOWORD(domain[0]) == 2 )
              v14 = 16;
            else
              v14 = 28;
            if ( connect(v12, (const struct sockaddr *)domain, v14) )
            {
              close(v13);
            }
            else
            {
              close(v13);
              v15 = sub_96BC(0, 272, 0, 1);
              memcpy((void *)(v15 + 4), tv_sec->ai_addr, tv_sec->ai_addrlen);
              *(_DWORD *)(v15 + 60) = ++sys_numservers;
              v16 = (int *)sys_servers;
              if ( sys_servers )
              {
                while ( *v16 )
                  v16 = (int *)*v16;
                *v16 = v15;
              }
              else
              {
                sys_servers = v15;
              }
            }
          }
          tv_sec = tv_sec->ai_next;
        }
        while ( tv_sec );
        tv_sec = (struct addrinfo *)ai.tv_sec;
      }
      freeaddrinfo(tv_sec);
    }
    i = ntp_optind + 1;
  }
  v17 = sys_numservers;
  if ( !sys_numservers )
  {
    sub_A848(3, "no servers can be used, exiting");
    exit(1);
  }
  if ( sys_authenticate )
  {
    sub_79BC();
    if ( !sub_89D0(key_file[0]) )
    {
      sub_A848(3, "no key file <%s>, exiting", key_file[0]);
      exit(1);
    }
    sub_8064(sys_authkey, 1);
    if ( !sub_8188(sys_authkey) )
    {
      sub_A848(3, "authentication key %lu unknown", sys_authkey);
      exit(1);
    }
    v17 = sys_numservers;
  }
  ai.tv_sec = 1;
  if ( !debug )
  {
    if ( simple_query )
      v265 = 0;
    else
      v265 = unpriv_port == 0;
  }
  sub_D5A0(v17 + 2);
  sub_10410(v281, "ntp", 5);
  memset(&req.ai_protocol, 0, 20);
  req.ai_flags = 1;
  req.ai_socktype = 2;
  req.ai_family = ai_fam_templ;
  v269 = getaddrinfo(0, v281, &req, &v270);
  if ( v269 )
  {
    sub_A848(3, "getaddrinfo() failed: %m");
    exit(1);
  }
  v18 = 0;
  v262 = v270;
  ai_next = v270;
  nbsock = 0;
  if ( v270 )
  {
    do
    {
      fd[v18] = socket(ai_next->ai_family, ai_next->ai_socktype, ai_next->ai_protocol);
      v18 = nbsock;
      v22 = fd[nbsock];
      if ( v22 == -1 )
      {
        v20 = *_errno_location();
        v21 = v20 > 0x5D;
        if ( v20 != 93 )
          v21 = v20 - 96 > 1;
        if ( v21 )
        {
          sub_A848(3, "socket() failed: %m");
          exit(1);
        }
      }
      else
      {
        if ( setsockopt(v22, 1, 2, &ai, 4u) < 0 )
        {
          sub_A848(3, "setsockopt() SO_REUSEADDR failed: %m");
          exit(1);
        }
        v23 = v270;
        v24 = nbsock;
        ai_family = v270->ai_family;
        if ( ai_family == 10 )
        {
          if ( setsockopt(fd[nbsock], 41, 26, &ai, 4u) < 0 )
          {
            sub_A848(3, "setsockopt() IPV6_V6ONLY failed: %m");
            exit(1);
          }
          v23 = v270;
          v24 = nbsock;
          ai_family = v270->ai_family;
        }
        fd_family[v24] = ai_family;
        if ( v265 )
        {
          *(_QWORD *)domain = 0;
          v278 = 0;
          v279 = 0;
          v280 = 0;
          if ( v23->ai_addrlen > 0x1C )
            sub_10788("ntpdate.c", 1766, 2, "res->ai_addrlen <= sizeof(addr)");
          _memcpy_chk(domain, v23->ai_addr);
          if ( LOWORD(domain[0]) == 2 )
            v26 = 16;
          else
            v26 = 28;
          if ( bind(fd[v24], (const struct sockaddr *)domain, v26) < 0 )
          {
            if ( *_errno_location() == 98 )
              sub_A848(3, "the NTP socket is in use, exiting");
            else
              sub_A848(3, "bind() fails: %m");
            exit(1);
          }
          v24 = nbsock;
        }
        v27 = fd[v24];
        *((_DWORD *)&fdmask + 2 * v24) = v27;
        *((_WORD *)&fdmask + 4 * v24 + 2) = 1;
        if ( fcntl(v27, 4, 2048) < 0 )
        {
          sub_A848(3, "fcntl(FNDELAY|FASYNC) fails: %m");
          exit(1);
        }
        v18 = ++nbsock;
      }
      ai_next = v270->ai_next;
      v270 = ai_next;
    }
    while ( v18 <= 1 && ai_next );
  }
  freeaddrinfo(v262);
  alarm_flag = 0;
  sub_10624(14, sub_36D4);
  req.ai_flags = 0;
  req.ai_socktype = 0;
  req.ai_family = (int)&EVP_DigestFinal_ptr;
  req.ai_protocol = 100000;
  setitimer(0, (const struct itimerval *)&req, 0);
  v28 = setpriority(0, 0, -12);
  initializing = 0;
  v29 = &GLOBAL_OFFSET_TABLE_;
  while ( complete_servers < sys_numservers )
  {
    v30 = alarm_flag;
    if ( alarm_flag )
    {
      alarm_flag = 0;
      v30 = 1;
    }
    v259 = v30;
    v31 = sub_D4A4(v28);
    if ( v31 | v259 )
    {
      v28 = sub_D89C(v31);
      v36 = v28;
      if ( v28 )
      {
        v263 = (struct addrinfo *)v29;
        goto LABEL_89;
      }
LABEL_100:
      if ( v259 )
LABEL_101:
        v28 = sub_3B8C();
    }
    else
    {
      v32 = _poll_chk(v29[207], nbsock, 1000 * v29[235]->d_tag, 16);
      if ( v32 > 0 )
      {
        v33 = sub_3C3C();
      }
      else
      {
        v33 = _errno_location();
        v34 = *v33;
        if ( v32 == -1 )
        {
          if ( v34 != 4 )
            v33 = (int *)sub_A848(3, "poll() error: %m");
        }
        else if ( v34 )
        {
          v33 = (int *)sub_A848(7, "poll(): nfound = %d, error: %m", v32);
        }
      }
      if ( alarm_flag )
      {
        alarm_flag = 0;
        v35 = sub_D4A4(v33);
        v36 = sub_D89C(v35);
        if ( v36 )
        {
          v263 = (struct addrinfo *)v29;
          v259 = 1;
          goto LABEL_89;
        }
        goto LABEL_101;
      }
      v55 = sub_D4A4(v33);
      v28 = sub_D89C(v55);
      v36 = v28;
      if ( v28 )
      {
        v259 = 0;
        v263 = (struct addrinfo *)v29;
        while ( 1 )
        {
LABEL_89:
          if ( debug )
          {
            v42 = (const char *)sub_F6BC(v36 + 4);
            _printf_chk(1, "receive(%s)\n", v42);
          }
          v38 = *(_DWORD *)(v36 + 84);
          if ( v38 == 48 )
          {
            v39 = 0;
          }
          else
          {
            if ( v38 <= 47 )
            {
              if ( debug )
                _printf_chk(1, "receive: packet length %d\n", *(_DWORD *)(v36 + 84));
              goto LABEL_88;
            }
            v39 = 1;
          }
          v40 = *(unsigned __int8 *)(v36 + 88);
          if ( ((v40 >> 3) & 7) - 1 > 3 )
            goto LABEL_88;
          v41 = ((v40 & 7) - 2) & 0xFD;
          if ( (((v40 & 7) - 2) & 0xFD) != 0 || *(unsigned __int8 *)(v36 + 89) > 0xFu )
          {
            if ( debug )
              _printf_chk(1, "receive: mode %d stratum %d\n", v40 & 7, *(unsigned __int8 *)(v36 + 89));
            goto LABEL_88;
          }
          if ( *(_WORD *)(v36 + 6) != 31488 )
            goto LABEL_124;
          v43 = sys_servers;
          if ( !sys_servers )
            goto LABEL_124;
          v268 = *(unsigned __int8 *)(v36 + 88);
          v44 = *(unsigned __int16 *)(v36 + 4);
          v45 = *(unsigned __int8 *)(v36 + 89);
          do
          {
            while ( *(unsigned __int16 *)(v43 + 4) != v44 )
            {
              v43 = *(_DWORD *)v43;
              if ( !v43 )
                goto LABEL_117;
            }
            if ( v44 == 2 )
            {
              if ( *(_DWORD *)(v36 + 8) == *(_DWORD *)(v43 + 8) )
                goto LABEL_132;
              v46 = (*(_DWORD *)(v43 + 8) & 0xF0) == 224;
            }
            else
            {
              if ( !memcmp((const void *)(v36 + 12), (const void *)(v43 + 12), 0x10u)
                && *(_DWORD *)(v36 + 28) == *(_DWORD *)(v43 + 28) )
              {
LABEL_132:
                v56 = v45;
                v57 = bswap32(*(_DWORD *)(v36 + 112));
                v58 = v268;
                v59 = bswap32(*(_DWORD *)(v36 + 116));
                if ( v57 != *(_DWORD *)(v43 + 244) || v59 != *(_DWORD *)(v43 + 248) )
                {
                  if ( debug )
                    puts("receive: pkt.org and peer.xmt differ");
                  goto LABEL_88;
                }
                if ( !sys_authenticate )
                {
                  *(_BYTE *)(v43 + 36) *= 2;
                  goto LABEL_267;
                }
                if ( debug <= 3 )
                {
                  if ( v39 )
                    goto LABEL_421;
LABEL_426:
                  v245 = debug;
                  goto LABEL_427;
                }
                v247 = v38 - 48;
                v248 = bswap32(*(_DWORD *)(v36 + 136));
                v249 = *(_DWORD *)v263[19].ai_addrlen;
                v250 = sub_8700(v249, v36 + 88, 48, v247);
                _printf_chk(1, "receive: rpkt keyid=%ld sys_authkey=%ld decrypt=%ld\n", v248, v249, v250);
                if ( !v39 )
                  goto LABEL_426;
LABEL_421:
                if ( bswap32(*(_DWORD *)(v36 + 136)) != *(_DWORD *)v263[19].ai_addrlen )
                  goto LABEL_426;
                v244 = ((int (*)(void))sub_8700)();
                v245 = debug;
                if ( v244 )
                {
                  if ( debug )
                    _printf_chk(1, "receive: authentication %s\n", "passed");
                  *(_BYTE *)(v43 + 36) *= 2;
                  v58 = *(unsigned __int8 *)(v36 + 88);
                  v56 = *(unsigned __int8 *)(v36 + 89);
LABEL_267:
                  v160 = v58 >> 6;
                  if ( v160 != 3 )
                  {
LABEL_268:
                    *(_BYTE *)(v43 + 33) = v160;
                    if ( !v56 )
                      LOBYTE(v56) = 16;
LABEL_270:
                    *(_BYTE *)(v43 + 34) = v56;
                    v161 = *(_BYTE *)(v36 + 91);
                    *(_BYTE *)(v43 + 35) = v161;
                    v162 = bswap32(*(_DWORD *)(v36 + 120));
                    v163 = bswap32(*(_DWORD *)(v36 + 124));
                    v164 = *(_DWORD *)(v36 + 92);
                    v165 = *(_DWORD *)(v36 + 96);
                    *(_DWORD *)(v43 + 48) = *(_DWORD *)(v36 + 100);
                    v166 = *(_DWORD *)(v36 + 104);
                    *(_DWORD *)(v43 + 40) = bswap32(v164);
                    v167 = *(_DWORD *)(v36 + 108);
                    *(_DWORD *)(v43 + 44) = bswap32(v165);
                    v168 = *(_DWORD *)(v36 + 128);
                    *(_DWORD *)(v43 + 52) = bswap32(v166);
                    v169 = *(_DWORD *)(v36 + 132);
                    v170 = bswap32(v168);
                    *(_DWORD *)(v43 + 56) = bswap32(v167);
                    v171 = bswap32(v169);
                    *(_DWORD *)(v43 + 236) = v170;
                    *(_DWORD *)(v43 + 240) = v171;
                    if ( !(v162 | v163) )
                      goto LABEL_401;
                    if ( v162 >= v170 )
                    {
                      v235 = v162 != v170;
                      if ( v163 > v171 )
                        v235 = 1;
                      if ( v235 )
                      {
LABEL_401:
                        *(_DWORD *)(v43 + 60) = *(_DWORD *)v263[18].ai_addr + *(_DWORD *)v263[24].ai_socktype;
                        goto LABEL_88;
                      }
                    }
                    v172 = v162 - v57;
                    v173 = *(_DWORD *)(v36 + 76);
                    if ( v163 < v59 )
                      --v172;
                    v174 = v170 - *(_DWORD *)(v36 + 72);
                    v175 = v163 - v59;
                    if ( v171 < v173 )
                      --v174;
                    v176 = v171 - v173;
                    v177 = (v172 << 31) | (v175 >> 1);
                    v178 = (v174 << 31) | (v176 >> 1);
                    v179 = __CFADD__(v178, v177);
                    v180 = v178 + v177;
                    v181 = v174 & 0x80000000 | (v174 >> 1);
                    v182 = v172 & 0x80000000 | (v172 >> 1);
                    v183 = v179;
                    if ( v175 < v176 )
                      --v172;
                    v184 = v172 - v174;
                    v185 = v181 + v182 + v183;
                    v186 = v175 - v176;
                    v187 = v185;
                    v188 = v180;
                    if ( v184 < 0x10000 )
                    {
                      if ( v184 <= -65536 )
                        v189 = 0x80000000;
                      else
                        v189 = HIWORD(v186) | (v184 << 16);
                    }
                    else
                    {
                      v189 = 0x7FFFFFFF;
                    }
                    if ( debug > 3 )
                    {
                      s1 = (const char *)sub_95DC(v185, v180, 6);
                      v251 = (const char *)sub_923C(v189, 5);
                      _printf_chk(1, "offset: %s, delay %s\n", s1, v251);
                      v161 = *(_BYTE *)(v43 + 35);
                    }
                    v190 = (0x10000 >> -v161) + 1679 + v189;
                    v191 = *(unsigned __int16 *)(v43 + 74);
                    v192 = v191;
                    if ( v190 <= 0 )
                    {
                      if ( v191 > 7 )
                        goto LABEL_296;
                      v187 = 0;
                      v252 = (_DWORD *)(v43 + 8 * v191 + 108);
                      v188 = 0;
                      *(_DWORD *)(v43 + 4 * (v191 + 18) + 4) = 0;
                      *v252 = 0;
                      v252[1] = 0;
                    }
                    else
                    {
                      if ( v190 < 1311 )
                        v190 = 1311;
                      if ( v191 > 7 )
                        goto LABEL_296;
                      v193 = 8 * v191 + 108;
                      if ( v185 >= 0x10000 )
                        v187 = 0x7FFFFFFF;
                      *(_DWORD *)(v43 + 4 * v191 + 76) = v190;
                      *(_DWORD *)(v43 + v193) = v185;
                      *(_DWORD *)(v43 + v193 + 4) = v180;
                      if ( v185 >= 0x10000 )
                      {
LABEL_295:
                        v194 = v191 + 1;
                        v195 = v43 + 4 * v191;
                        *(_DWORD *)(v195 + 204) = 0;
                        *(_DWORD *)(v195 + 172) = v187;
                        v192 = v194;
                        *(_WORD *)(v43 + 74) = v194;
LABEL_296:
                        if ( sys_samples > v192 )
                          goto LABEL_401;
LABEL_297:
                        *(_DWORD *)(v43 + 60) = 0;
                        ++complete_servers;
                        goto LABEL_88;
                      }
                      if ( v185 <= -65536 )
                      {
                        v187 = 0x80000000;
                        goto LABEL_295;
                      }
                    }
                    v187 = HIWORD(v188) | (v187 << 16);
                    goto LABEL_295;
                  }
                }
                else
                {
LABEL_427:
                  if ( v245 )
                  {
                    _printf_chk(1, "receive: authentication %s\n", "failed");
                    LOBYTE(v246) = 2 * *(_BYTE *)(v43 + 36);
                  }
                  else
                  {
                    v246 = (unsigned __int8)(2 * *(_BYTE *)(v43 + 36));
                  }
                  *(_BYTE *)(v43 + 36) = v246 | 1;
                  v56 = *(unsigned __int8 *)(v36 + 89);
                  v160 = *(unsigned __int8 *)(v36 + 88) >> 6;
                  if ( v160 != 3 )
                    goto LABEL_268;
                }
                if ( v56 )
                {
                  *(_BYTE *)(v43 + 33) = v160;
                  goto LABEL_270;
                }
                if ( *(_BYTE *)(v36 + 100) != 82
                  || *(_BYTE *)(v36 + 101) != 65
                  || *(_BYTE *)(v36 + 102) != 84
                  || *(_BYTE *)(v36 + 103) != 69 )
                {
                  *(_BYTE *)(v43 + 33) = 3;
                  LOBYTE(v56) = 16;
                  goto LABEL_270;
                }
                v253 = (const char *)sub_F6BC(v36 + 4);
                sub_A848(v160, "%s rate limit response from server.", v253);
                goto LABEL_297;
              }
              v46 = *(unsigned __int8 *)(v43 + 12) == 255;
            }
            if ( v46 )
              v41 = v43;
            v43 = *(_DWORD *)v43;
          }
          while ( v43 );
LABEL_117:
          if ( v41 )
          {
            if ( *(_DWORD *)(v41 + 60) )
            {
              *(_DWORD *)(v41 + 60) = v43;
              ++complete_servers;
            }
            v47 = (_DWORD *)sub_96BC(0, 272, 0, 1);
            v48 = ++sys_numservers;
            v49 = (_DWORD *)sys_servers;
            v50 = *(_DWORD *)(v36 + 8);
            v51 = *(_DWORD *)(v36 + 12);
            v52 = *(_DWORD *)(v36 + 16);
            v47[1] = *(_DWORD *)(v36 + 4);
            v47[2] = v50;
            v47[3] = v51;
            v47[4] = v52;
            v53 = *(_DWORD *)(v36 + 24);
            v54 = *(_DWORD *)(v36 + 28);
            v47[5] = *(_DWORD *)(v36 + 20);
            v47[6] = v53;
            v47[7] = v54;
            v47[15] = v48;
            while ( *v49 )
              v49 = (_DWORD *)*v49;
            *v49 = v47;
            sub_3A94((int)v47);
          }
LABEL_124:
          if ( debug )
            puts("receive: server not found");
LABEL_88:
          v37 = sub_D6A0(v36);
          v28 = sub_D89C(v37);
          v36 = v28;
          if ( !v28 )
          {
            v29 = (Elf32_Dyn **)v263;
            goto LABEL_100;
          }
        }
      }
    }
  }
  v60 = v29;
  v61 = (_DWORD *)sys_servers;
  if ( !sys_servers )
    goto LABEL_402;
  v62 = sys_samples;
  v63 = sys_samples - 1;
  if ( (unsigned int)(sys_samples - 1) > 7 )
LABEL_171:
    sub_10788("ntpdate.c", 966, 2, "(0 < sys_samples) && (sys_samples <= 8)");
  while ( 2 )
  {
    v64 = domain;
    v65 = domain;
    v66 = 0;
    do
      *v65++ = v66++;
    while ( v62 > v66 );
    for ( j = 0; j < v63; ++v64 )
    {
      if ( v62 > ++j )
      {
        v68 = v64;
        do
        {
          v70 = v68[1];
          ++v68;
          v69 = v70;
          v71 = v61[v70 + 19];
          if ( v71 )
          {
            v72 = *v64;
            v73 = v61[*v64 + 19];
            v74 = v71 < v73;
            if ( !v73 )
              v74 = 1;
            if ( v74 )
            {
              *v64 = v69;
              *v68 = v72;
            }
          }
        }
        while ( &v276[4 * v62] != (_BYTE *)v68 );
      }
    }
    v75 = domain[0];
    v76 = &v61[domain[0]];
    v77 = v76[19];
    if ( !v77 )
    {
      v61[63] = 0;
      v61[66] = 0;
      v61[65] = 0;
      v61[67] = 0;
      v61[64] = 0x400000;
      v61 = (_DWORD *)*v61;
      if ( !v61 )
        break;
      goto LABEL_170;
    }
    v61[63] = v77;
    v78 = &v61[2 * v75 + 27];
    v79 = v78[1];
    v21 = *v78 < 0x10000;
    v80 = *v78;
    v61[65] = v80;
    v61[66] = v79;
    if ( v21 )
    {
      v82 = -65535;
      v83 = v80 < -65535;
      if ( v80 < -65535 )
      {
        v81 = 0x80000000;
      }
      else
      {
        v81 = v80 << 16;
        v82 = v61[66];
      }
      if ( !v83 )
        v81 |= HIWORD(v82);
    }
    else
    {
      v81 = 0x7FFFFFFF;
    }
    v61[67] = v81;
    v61[64] = 0;
    if ( v62 != 1 )
    {
      v84 = 0;
      for ( k = 1; k != v62; ++k )
      {
        v86 = &v61[domain[k]];
        if ( v86[19] )
        {
          v87 = v86[43] - v76[43];
          if ( v87 < 0 )
            v87 = -v87;
          if ( v87 >= 0x400000 )
            v87 = 0x400000;
        }
        else
        {
          v87 = 0x400000;
        }
        v84 += (unsigned int)v87 >> k;
      }
      v61[64] = v84;
    }
    v61 = (_DWORD *)*v61;
    if ( v61 )
    {
LABEL_170:
      v62 = sys_samples;
      v63 = sys_samples - 1;
      if ( (unsigned int)(sys_samples - 1) > 7 )
        goto LABEL_171;
      continue;
    }
    break;
  }
  v60 = v29;
  v88 = sys_servers;
  v89 = debug;
  if ( !sys_servers )
  {
LABEL_402:
    v264 = (struct addrinfo *)debug;
    if ( !debug )
      goto LABEL_304;
    goto LABEL_403;
  }
  do
  {
    while ( 2 )
    {
      v90 = *(unsigned __int8 *)(v88 + 34);
      if ( !*(_BYTE *)(v88 + 34) )
      {
        if ( v89 )
        {
          v196 = (const char *)sub_F6BC(v88 + 4);
          _printf_chk(1, "%s: Server dropped: no data\n", v196);
          v89 = debug;
        }
        goto LABEL_300;
      }
      if ( v90 > 0xF )
      {
        if ( v89 )
        {
          v197 = (const char *)sub_F6BC(v88 + 4);
          _printf_chk(1, "%s: Server dropped: strata too high\n", v197);
          v89 = debug;
        }
        goto LABEL_300;
      }
      if ( *(_DWORD *)(v88 + 252) > 0x80000u )
      {
        if ( v89 )
        {
          v198 = (const char *)sub_F6BC(v88 + 4);
          _printf_chk(1, "%s: Server dropped: server too far away\n", v198);
          v89 = debug;
        }
        goto LABEL_300;
      }
      if ( *(_BYTE *)(v88 + 33) == 3 )
      {
        if ( v89 )
        {
          v233 = (const char *)sub_F6BC(v88 + 4);
          _printf_chk(1, "%s: Server dropped: leap not in sync\n", v233);
          v89 = debug;
        }
        goto LABEL_300;
      }
      v91 = *(_DWORD *)(v88 + 236);
      v92 = *(_DWORD *)(v88 + 52);
      if ( v91 <= v92 && (v91 != v92 || *(_DWORD *)(v88 + 240) < *(_DWORD *)(v88 + 56)) )
      {
        if ( v89 )
        {
          v206 = (const char *)sub_F6BC(v88 + 4);
          _printf_chk(1, "%s: Server dropped: server is very broken\n", v206);
          v89 = debug;
        }
        goto LABEL_300;
      }
      if ( v91 - v92 > (unsigned int)&loc_1517C + 3 )
      {
        if ( v89 )
        {
          v234 = (const char *)sub_F6BC(v88 + 4);
          _printf_chk(1, "%s: Server dropped: server has gone too long without sync\n", v234);
          v89 = debug;
        }
        goto LABEL_300;
      }
      v93 = *(unsigned __int8 *)(v88 + 36);
      if ( *(_BYTE *)(v88 + 36) )
      {
        if ( v89 )
        {
          v213 = (const char *)sub_F6BC(v88 + 4);
          _printf_chk(1, "%s: Server dropped: Server is untrusted\n", v213);
          v89 = debug;
        }
        goto LABEL_300;
      }
      v94 = 2 * *(_DWORD *)(v88 + 256);
      if ( !v61 )
      {
        v275[0] = v88;
        domain[0] = v94;
        goto LABEL_190;
      }
      v95 = *(unsigned __int8 *)(v275[0] + 34);
      if ( v90 <= v95 )
      {
        if ( v90 < v95 || domain[0] > v94 )
        {
LABEL_414:
          v241 = (unsigned int)v61;
          v242 = (unsigned int)v61;
          do
          {
            --v242;
            if ( v241 <= 4 )
            {
              v243 = domain[v242];
              v275[v241] = v275[v242];
              domain[v241] = v243;
            }
            --v241;
          }
          while ( v242 > v93 );
LABEL_189:
          v97 = &v281[4 * v93 + 12];
          *((_DWORD *)v97 - 23) = v88;
          *((_DWORD *)v97 - 13) = v94;
          if ( (unsigned int)v61 <= 4 )
            goto LABEL_190;
          goto LABEL_300;
        }
LABEL_408:
        v236 = v93 + 1;
        v237 = &v275[v93];
        v238 = &domain[v93];
        while ( 1 )
        {
          v93 = v236;
          if ( v236 >= (unsigned int)v61 )
            goto LABEL_188;
          v240 = v237[1];
          ++v237;
          if ( *(unsigned __int8 *)(v240 + 34) > v90 )
            break;
          v239 = v238[1];
          ++v238;
          if ( v239 > v94 )
            break;
          ++v236;
        }
        if ( v236 <= 4 )
          goto LABEL_414;
LABEL_300:
        v88 = *(_DWORD *)v88;
        if ( v88 )
          continue;
        v264 = (struct addrinfo *)v89;
        v60 = v29;
        if ( (unsigned int)v61 <= 1 )
          goto LABEL_302;
LABEL_192:
        v98 = v275;
        v99 = 1;
        while ( 1 )
        {
          v100 = v98[1];
          v101 = *v98++;
          if ( *(unsigned __int8 *)(v100 + 34) > (unsigned int)*(unsigned __int8 *)(v101 + 34) )
            break;
LABEL_196:
          if ( (_DWORD *)++v99 == v61 )
            goto LABEL_197;
        }
        if ( v88 != 1 )
        {
          v88 = 1;
          goto LABEL_196;
        }
        v61 = (_DWORD *)v99;
        if ( v99 == 1 )
        {
LABEL_397:
          v260 = (struct addrinfo *)v275[0];
          goto LABEL_233;
        }
LABEL_198:
        v102 = &req.ai_next + (_DWORD)v61;
        v103 = (struct addrinfo **)v275;
        v104 = 0;
        v105 = (char *)v61 - 1;
        do
        {
          while ( 1 )
          {
            if ( ++v104 < (char *)v61 )
            {
              v106 = *v103;
              v107 = v103[1];
              if ( BYTE2(v107[1].ai_flags) <= (unsigned int)BYTE2((*v103)[1].ai_flags) )
                break;
            }
            ++v103;
            if ( v104 == v105 )
              goto LABEL_208;
          }
          v108 = v103 + 1;
          do
          {
            if ( v106[7].ai_next >= v107[7].ai_next )
            {
              *v103 = v107;
              *v108 = v106;
            }
            if ( v102 == v108 )
              break;
            v106 = *v103;
            v109 = v108[1];
            ++v108;
            v107 = v109;
          }
          while ( BYTE2((*v103)[1].ai_flags) >= (unsigned int)BYTE2(v109[1].ai_flags) );
          ++v103;
        }
        while ( v104 != v105 );
LABEL_208:
        v266 = v60;
        v110 = v275[0];
        do
        {
          v111 = v276;
          v112 = v275;
          v113 = 0;
          do
          {
            v114 = 0;
            v111[1] = 0;
            ++v111;
            do
            {
              if ( v113 != v114 )
              {
                v115 = *(_DWORD *)(*v112 + 268);
                v116 = *(_DWORD *)(v275[(_DWORD)v114] + 268) - v115;
                if ( v116 < 0 )
                  v116 = v115 - *(_DWORD *)(v275[(_DWORD)v114] + 268);
                if ( v114 )
                {
                  for ( m = 0; m != v114; m = (_DWORD *)((char *)m + 1) )
                    v116 = (v116 >> 2) + (v116 >> 1);
                }
                *v111 += v116;
              }
              v114 = (_DWORD *)((char *)v114 + 1);
            }
            while ( v114 != v61 );
            v113 = (_DWORD *)((char *)v113 + 1);
            ++v112;
          }
          while ( v113 != v61 );
          v118 = *(char *)(v110 + 35);
          v119 = domain;
          v120 = domain[0];
          v121 = v275;
          v122 = 0;
          v123 = 1;
          do
          {
            v125 = v121[1];
            ++v121;
            v124 = v125;
            v127 = v119[1];
            ++v119;
            v126 = v127;
            v128 = *(char *)(v124 + 35);
            if ( v127 >= v120 )
            {
              v122 = v123;
              v120 = v126;
            }
            ++v123;
            if ( v118 >= v128 )
              v118 = v128;
          }
          while ( v123 < (unsigned int)v61 );
          if ( v120 < (0x10000 >> -(char)v118) + 1679 )
            break;
          v129 = v122 + 1;
          if ( v129 < (unsigned int)v61 )
          {
            v130 = (struct addrinfo **)&v275[v129 - 1];
            do
            {
              v131 = v130[1];
              *v130++ = v131;
            }
            while ( v102 != v130 );
            v110 = v275[0];
          }
          v61 = (_DWORD *)((char *)v61 - 1);
          --v102;
        }
        while ( v61 != (int *)((char *)&dword_0 + 1) );
        v260 = (struct addrinfo *)v110;
        v60 = v266;
LABEL_233:
        if ( v264 )
        {
          putchar(10);
          v132 = sys_servers;
          if ( sys_servers )
            goto LABEL_236;
        }
        else if ( v60[172]->d_tag )
        {
          v132 = sys_servers;
          if ( sys_servers )
          {
LABEL_236:
            v133 = &sys_samples;
            do
            {
              if ( *(_BYTE *)(v132 + 34) )
              {
                v139 = v132 + 4;
                d_tag = (FILE *)v60[218]->d_tag;
                if ( debug )
                {
                  v141 = sub_F6BC(v139);
                  _fprintf_chk(
                    d_tag,
                    1,
                    "server %s, port %d\n",
                    v141,
                    (unsigned __int16)__rev16(*(unsigned __int16 *)(v132 + 6)));
                  if ( (*(_BYTE *)(v132 + 33) & 2) != 0 )
                    v142 = 49;
                  else
                    v142 = 48;
                  v257 = v142;
                  if ( (*(_BYTE *)(v132 + 33) & 1) != 0 )
                    v143 = 49;
                  else
                    v143 = 48;
                  _fprintf_chk(
                    d_tag,
                    1,
                    "stratum %d, precision %d, leap %c%c, trust %03o\n",
                    *(unsigned __int8 *)(v132 + 34),
                    *(char *)(v132 + 35),
                    v257,
                    v143,
                    *(unsigned __int8 *)(v132 + 36));
                  if ( (unsigned int)*(unsigned __int8 *)(v132 + 34) - 2 <= 0xD )
                  {
                    v151 = (const char *)sub_CDD4(*(_DWORD *)(v132 + 48));
                  }
                  else
                  {
                    v144 = v133;
                    v145 = 0;
                    v146 = d_tag;
                    v147 = v132 + 47;
                    v148 = v144;
                    do
                    {
                      v150 = *(unsigned __int8 *)++v147;
                      v149 = v150;
                      if ( !v150 )
                        break;
                      if ( ((*_ctype_b_loc())[v149] & 0x4000) == 0 )
                        LOBYTE(v149) = 46;
                      v281[v145++] = v149;
                    }
                    while ( v145 != 4 );
                    v151 = v281;
                    d_tag = v146;
                    v133 = v148;
                    v281[v145] = 0;
                  }
                  v152 = (const char *)sub_923C(*(_DWORD *)(v132 + 40), 6);
                  v153 = (const char *)sub_8FD8(*(_DWORD *)(v132 + 44), 0, 6);
                  _fprintf_chk(d_tag, 1, "refid [%s], root delay %s, root dispersion %s\n", v151, v152, v153);
                  v154 = *(unsigned __int16 *)(v132 + 68);
                  if ( v154 != *(unsigned __int16 *)(v132 + 74) )
                    _fprintf_chk(d_tag, 1, "transmitted %d, in filter %d\n", v154, *(unsigned __int16 *)(v132 + 74));
                  v155 = (const char *)sub_D34C(v132 + 52);
                  _fprintf_chk(d_tag, 1, "reference time:      %s\n", v155);
                  v156 = (const char *)sub_D34C(v132 + 236);
                  _fprintf_chk(d_tag, 1, "originate timestamp: %s\n", v156);
                  v157 = (const char *)sub_D34C(v132 + 244);
                  _fprintf_chk(d_tag, 1, "transmit timestamp:  %s\n", v157);
                  if ( *v133 > 1 )
                  {
                    fwrite("filter delay: ", 1u, 0xEu, d_tag);
                    for ( n = 0; n == 4; ++n )
                    {
                      fwrite("\n              ", 1u, 0xFu, d_tag);
                      if ( *v133 > 4 )
                        goto LABEL_263;
                      _fprintf_chk(d_tag, 1, " %-10.10s", "----");
LABEL_260:
                      ;
                    }
                    if ( *v133 <= n )
                      v159 = "----";
                    else
LABEL_263:
                      v159 = (const char *)sub_923C(*(_DWORD *)(v132 + 4 * (n + 1) + 72), 5);
                    _fprintf_chk(d_tag, 1, " %-10.10s", v159);
                    if ( n != 7 )
                      goto LABEL_260;
                    fputc(10, d_tag);
                    v230 = v132;
                    fwrite("filter offset:", 1u, 0xEu, d_tag);
                    v231 = 0;
                    while ( 2 )
                    {
                      if ( v231 == 4 )
                      {
                        fwrite("\n              ", 1u, 0xFu, d_tag);
                        if ( *v133 > 4 )
                        {
LABEL_390:
                          v232 = (const char *)sub_95DC(*(_DWORD *)(v230 + 108), *(_DWORD *)(v230 + 112), 6);
                          goto LABEL_386;
                        }
                        _fprintf_chk(d_tag, 1, " %-10.10s", "----");
                      }
                      else
                      {
                        if ( *v133 > v231 )
                          goto LABEL_390;
                        v232 = "----";
LABEL_386:
                        _fprintf_chk(d_tag, 1, " %-10.10s", v232);
                        if ( v231 == 7 )
                        {
                          fputc(10, d_tag);
                          break;
                        }
                      }
                      v230 += 8;
                      ++v231;
                      continue;
                    }
                  }
                  v214 = (const char *)sub_923C(*(_DWORD *)(v132 + 252), 5);
                  v215 = (const char *)sub_8FD8(*(_DWORD *)(v132 + 256), 0, 5);
                  _fprintf_chk(d_tag, 1, "delay %s, dispersion %s, ", v214, v215);
                  v216 = (const char *)sub_95DC(*(_DWORD *)(v132 + 260), *(_DWORD *)(v132 + 264), 6);
                  _fprintf_chk(d_tag, 1, "offset %s\n\n", v216);
                }
                else
                {
                  v134 = sub_F6BC(v139);
                  v135 = *(unsigned __int8 *)(v132 + 34);
                  v136 = (const char *)v134;
                  v137 = (const char *)sub_95DC(*(_DWORD *)(v132 + 260), *(_DWORD *)(v132 + 264), 6);
                  v138 = (const char *)sub_923C(*(_DWORD *)(v132 + 252), 5);
                  _fprintf_chk(d_tag, 1, "server %s, stratum %d, offset %s, delay %s\n", v136, v135, v137, v138);
                }
              }
              v132 = *(_DWORD *)v132;
            }
            while ( v132 );
          }
        }
        if ( !v260 )
          goto LABEL_307;
        if ( v60[203]->d_tag )
          goto LABEL_486;
        if ( v60[191]->d_tag )
          goto LABEL_364;
        ai_protocol = v260[8].ai_protocol;
        if ( ai_protocol < 0 )
          ai_protocol = -ai_protocol;
        if ( (unsigned int)ai_protocol < 0x8000 )
        {
LABEL_364:
          v217 = v60[172]->d_tag;
          if ( !v217 )
          {
            v218 = v260[8].ai_family;
            ai_socktype = v260[8].ai_socktype;
            if ( v218 < 0 )
            {
              ai_socktype = -ai_socktype;
              v218 = ~v218;
              v217 = 1;
              if ( !ai_socktype )
                ++v218;
            }
            v220 = (v218 << 31) | (ai_socktype >> 1);
            LOWORD(v221) = 16960;
            v222 = v220 == 0x10000000;
            if ( v220 <= 0x10000000 )
              v222 = (unsigned int)v218 >> 1 == 0;
            HIWORD(v221) = 15;
            if ( !v222 )
              v220 = 0x10000000;
            v179 = __CFADD__(ai_socktype, v220);
            v223 = ai_socktype + v220;
            v224 = v221 * (unsigned __int64)(unsigned int)v223 + 0x80000000;
            v225 = v179;
            v226 = v225 + v218;
            ai.tv_sec = v226;
            if ( HIDWORD(v224) == v221 )
            {
              ai.tv_sec = v226 + 1;
              v223 = 0;
            }
            ai.tv_usec = HIDWORD(v224);
            if ( HIDWORD(v224) == v221 )
              ai.tv_usec = v223;
            if ( v217 )
            {
              ai.tv_usec = -ai.tv_usec;
              ai.tv_sec = -ai.tv_sec;
            }
            if ( !debug && ai.tv_usec && adjtime(&ai, (struct timeval *)&req) < 0 )
            {
              sub_A848(3, "Can't adjust the time of day: %m");
              exit(1);
            }
          }
          v269 = 0;
          v227 = (const char *)sub_F6BC(&v260->ai_family);
          v228 = (const char *)sub_95DC(v260[8].ai_family, v260[8].ai_socktype, 6);
          sub_A848(5, "adjust time server %s offset %s sec", v227, v228);
        }
        else
        {
LABEL_486:
          if ( v60[172]->d_tag
            || debug
            || ((v200 = v260[8].ai_family, v200 < 0)
              ? (v201 = COERCE_DOUBLE(
                          ((__int64 (__fastcall *)(int, _DWORD))sub_1C374)(
                            -v260[8].ai_socktype,
                            (unsigned __int64)-(__int64)(__PAIR64__(v200, 0) + (unsigned int)v260[8].ai_socktype) >> 32)))
              : (v201 = sub_1C374(v260[8].ai_socktype, (__PAIR64__(v200, 0) + (unsigned int)v260[8].ai_socktype) >> 32)),
                LODWORD(v201) = -32,
                v203 = ldexp(v201, v202),
                sub_6DD4(LODWORD(v203), HIDWORD(v203))) )
          {
            v204 = (const char *)sub_F6BC(&v260->ai_family);
            v205 = (const char *)sub_95DC(v260[8].ai_family, v260[8].ai_socktype, 6);
            sub_A848(5, "step time server %s offset %s sec", v204, v205);
          }
          else
          {
            return 0;
          }
        }
        return v269;
      }
      break;
    }
    do
    {
      if ( (_DWORD *)++v93 == v61 )
      {
LABEL_188:
        if ( v93 <= 4 )
          goto LABEL_189;
        goto LABEL_300;
      }
      v96 = *(unsigned __int8 *)(v275[v93] + 34);
    }
    while ( v90 > v96 );
    if ( v90 >= v96 && v94 >= domain[v93] )
      goto LABEL_408;
    if ( v93 > 4 )
      goto LABEL_300;
    if ( v93 < (unsigned int)v61 )
      goto LABEL_414;
    v254 = &v281[4 * v93 + 12];
    *((_DWORD *)v254 - 23) = v88;
    *((_DWORD *)v254 - 13) = v94;
LABEL_190:
    v88 = *(_DWORD *)v88;
    v61 = (_DWORD *)((char *)v61 + 1);
  }
  while ( v88 );
  v264 = (struct addrinfo *)v89;
  v60 = v29;
  if ( (unsigned int)v61 > 1 )
    goto LABEL_192;
LABEL_302:
  if ( v61 )
  {
LABEL_197:
    if ( v61 == (int *)((char *)&dword_0 + 1) )
      goto LABEL_397;
    goto LABEL_198;
  }
  if ( !v264 )
  {
LABEL_304:
    if ( v60[172]->d_tag )
    {
      v132 = sys_servers;
      if ( sys_servers )
      {
        v260 = v264;
        goto LABEL_236;
      }
    }
    goto LABEL_307;
  }
LABEL_403:
  putchar(10);
  v132 = sys_servers;
  if ( sys_servers )
  {
    v260 = 0;
    goto LABEL_236;
  }
LABEL_307:
  sub_A848(3, "no server suitable for synchronization found");
  return 1;
}

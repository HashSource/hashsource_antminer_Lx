int __fastcall sub_483F0(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _DWORD *v8; // r0
  const char *v9; // r10
  _DWORD *v10; // r0
  char *v11; // r7
  _DWORD *v12; // r0
  char *v13; // r8
  _DWORD *v14; // r0
  char *v15; // r9
  _DWORD *v16; // r0
  char *v17; // r11
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  int valid; // r4
  size_t v21; // r0
  void *v22; // r0
  void *v23; // r7
  void *v24; // r0
  void *v25; // r8
  size_t v26; // r0
  size_t v27; // r0
  size_t v28; // r0
  const char *v29; // r0
  size_t v30; // r0
  void *v31; // r9
  void *v32; // r0
  size_t v33; // r10
  void *v34; // r0
  void *v35; // r9
  char *v36; // r0
  int v37; // r9
  int v38; // r0
  int v39; // r1
  int v40; // r2
  int v41; // r3
  int v42; // lr
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r12
  int v48; // r2
  int v49; // r3
  signed int v50; // r9
  int v51; // r0
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r5
  int v56; // r0
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r12
  int v61; // r2
  _DWORD *v62; // r0
  unsigned __int8 *v63; // r0
  int v64; // r10
  unsigned __int8 *v65; // r4
  void *v66; // r0
  int v67; // [sp+10h] [bp-104Ch]
  char *s; // [sp+14h] [bp-1048h]
  char *sa; // [sp+14h] [bp-1048h]
  char *sb; // [sp+14h] [bp-1048h]
  char *v71; // [sp+18h] [bp-1044h]
  bool v72; // [sp+1Ch] [bp-1040h]
  size_t n; // [sp+20h] [bp-103Ch]
  size_t v74; // [sp+24h] [bp-1038h]
  int v75; // [sp+2Ch] [bp-1030h] BYREF
  int v76; // [sp+30h] [bp-102Ch] BYREF
  int v77; // [sp+34h] [bp-1028h] BYREF
  int v78; // [sp+38h] [bp-1024h] BYREF
  int v79; // [sp+3Ch] [bp-1020h]
  int v80; // [sp+40h] [bp-101Ch]
  int v81; // [sp+44h] [bp-1018h]
  int v82; // [sp+48h] [bp-1014h]
  int v83; // [sp+4Ch] [bp-1010h]
  int v84; // [sp+50h] [bp-100Ch]
  int v85; // [sp+54h] [bp-1008h]
  char v86[4100]; // [sp+58h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v67 = (int)json_array_size(v5);
  v8 = json_array_get(a3, 0);
  v9 = (const char *)json_string_value(v8);
  v10 = json_array_get(a3, 1u);
  v11 = (char *)json_string_value(v10);
  v12 = json_array_get(a3, 2u);
  v13 = (char *)json_string_value(v12);
  v14 = json_array_get(a3, 3u);
  v15 = (char *)json_string_value(v14);
  v16 = json_array_get(a3, 5u);
  v17 = (char *)json_string_value(v16);
  v18 = json_array_get(a3, 6u);
  s = (char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v71 = (char *)json_string_value(v19);
  if ( json_array_get(a3, 8u) )
    v72 = *json_array_get(a3, 8u) == 5;
  else
    v72 = 0;
  if ( valid_ascii(v9)
    && valid_hex(v11)
    && valid_hex(v13)
    && valid_hex(v15)
    && valid_hex(v17)
    && valid_hex(s)
    && (valid = valid_hex(v71)) != 0 )
  {
    v21 = strlen(v11);
    hex2bin((int)&v78, (unsigned __int8 *)v11, v21 >> 1);
    n = strlen(v13) >> 1;
    v22 = calloc(n, 1u);
    v23 = v22;
    if ( !v22 )
    {
      V_LOCK();
      logfmt_raw(v86, 0x1000u, 0, "Failed to calloc pool coinbase1");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/frontend/frontend_ltc/frontend_ltc.c",
        172,
        "stratum_notify_ltc",
        18,
        58,
        100,
        v86);
      return 0;
    }
    hex2bin((int)v22, (unsigned __int8 *)v13, n);
    v74 = strlen(v15) >> 1;
    v24 = calloc(v74, 1u);
    v25 = v24;
    if ( v24 )
    {
      hex2bin((int)v24, (unsigned __int8 *)v15, v74);
      v26 = strlen(v17);
      hex2bin((int)&v75, (unsigned __int8 *)v17, v26 >> 1);
      v27 = strlen(s);
      hex2bin((int)&v76, (unsigned __int8 *)s, v27 >> 1);
      v28 = strlen(v71);
      hex2bin((int)&v77, (unsigned __int8 *)v71, v28 >> 1);
      if ( a2 == (int *)-448 )
      {
        valid = 0;
      }
      else
      {
        v29 = (const char *)a2[400];
        if ( v29 && !strcmp(v29, v9) )
        {
          V_LOCK();
          logfmt_raw(v86, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[400], v9);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/frontend/frontend_ltc/frontend_ltc.c",
            172,
            "stratum_notify_ltc",
            18,
            75,
            80,
            v86);
        }
        if ( strlen(v9) > 0x3F )
        {
          V_LOCK();
          v30 = strlen(v9);
          logfmt_raw(v86, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= %d", v9, v30, 64);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/frontend/frontend_ltc/frontend_ltc.c",
            172,
            "stratum_notify_ltc",
            18,
            78,
            80,
            v86);
        }
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
        v31 = (void *)a2[400];
        a2[400] = (int)_strdup(v9);
        if ( v31 )
          free(v31);
        v32 = (void *)a2[73];
        if ( v32 )
          free(v32);
        v33 = a2[18];
        sa = (char *)(v33 + a2[20] + n);
        a2[72] = (int)&sa[v74];
        v34 = calloc((size_t)&sa[v74], 1u);
        v35 = v34;
        a2[73] = (int)v34;
        if ( v34 )
        {
          memcpy(v34, v23, n);
          memcpy((char *)v35 + n, (const void *)a2[19], v33);
          v36 = &sa[(_DWORD)v35];
          v37 = 0;
          memcpy(v36, v25, v74);
          v38 = v78;
          v39 = v79;
          v40 = v80;
          v41 = v81;
          a2[21] = n + v33;
          v42 = v75;
          a2[23] = v38;
          a2[24] = v39;
          a2[25] = v40;
          a2[26] = v41;
          v43 = v82;
          v44 = v83;
          v45 = v84;
          v46 = v85;
          v47 = v77;
          a2[81] = v42;
          a2[29] = v45;
          v48 = v76;
          a2[30] = v46;
          a2[27] = v43;
          a2[28] = v44;
          v49 = a2[79];
          a2[84] = v48;
          a2[87] = v47;
          while ( v37 < v49 )
          {
            if ( *(_DWORD *)(a2[80] + 4 * v37) )
            {
              free(*(void **)(a2[80] + 4 * v37));
              v49 = a2[79];
              *(_DWORD *)(a2[80] + 4 * v37) = 0;
            }
            ++v37;
          }
          v50 = 0;
          a2[79] = 0;
          if ( v67 )
          {
            sb = (char *)valid;
            a2[80] = (int)realloc((void *)a2[80], 4 * v67);
            while ( v50 < v67 )
            {
              v62 = json_array_get(v6, v50);
              v63 = (unsigned __int8 *)json_string_value(v62);
              v64 = a2[80];
              v65 = v63;
              v66 = malloc(0x20u);
              *(_DWORD *)(v64 + 4 * v50++) = v66;
              hex2bin((int)v66, v65, 32);
            }
            valid = (int)sb;
            a2[79] = v67;
          }
          memset(a2 + 114, 0, 0x50u);
          v51 = v78;
          v52 = v79;
          v53 = v80;
          v54 = v81;
          a2[114] = v75;
          v55 = v76;
          a2[115] = v51;
          a2[116] = v52;
          a2[117] = v53;
          a2[118] = v54;
          v56 = v82;
          v57 = v83;
          v58 = v84;
          v59 = v85;
          v60 = v77;
          a2[132] = v55;
          a2[121] = v58;
          v61 = *a2;
          a2[122] = v59;
          a2[120] = v57;
          *((_BYTE *)a2 + 436) = v72;
          a2[119] = v56;
          a2[131] = v60;
          *((_QWORD *)a2 + 56) = v61;
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 440));
        }
        else
        {
          V_LOCK();
          logfmt_raw(v86, 0x1000u, 0, "Failed to calloc pool coinbase");
          V_UNLOCK();
          valid = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/frontend/frontend_ltc/frontend_ltc.c",
            172,
            "stratum_notify_ltc",
            18,
            89,
            100,
            v86);
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 440));
        }
      }
      free(v25);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v86, 0x1000u, 0, "Failed to calloc pool coinbase2");
      V_UNLOCK();
      valid = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/frontend/frontend_ltc/frontend_ltc.c",
        172,
        "stratum_notify_ltc",
        18,
        65,
        100,
        v86);
    }
    free(v23);
    return valid;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v86, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_ltc/frontend_ltc.c",
      172,
      "stratum_notify_ltc",
      18,
      50,
      100,
      v86);
    return 0;
  }
}

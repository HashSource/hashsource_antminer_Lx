int __fastcall sub_1732C(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7, int a8, int a9, int *a10)
{
  int result; // r0
  int v12; // r0
  _DWORD *v13; // r11
  _DWORD *v14; // r3
  _BOOL4 v15; // r2
  int v16; // r6
  unsigned int v17; // r3
  int v18; // r7
  int v19; // r6
  int v20; // r0
  int v21; // r8
  int v22; // r9
  int v23; // r0
  int v24; // r1
  _DWORD *v25; // r5
  bool v26; // zf
  int v27; // r4
  int v28; // r3
  int v29; // r2
  int v30; // r3
  _BYTE *v31; // lr
  int v32; // r0
  int v33; // r3
  int v34; // lr
  __int64 v35; // r0
  int v36; // r12
  int v37; // r0
  int v38; // r3
  const char *v39; // r0
  const char *v40; // r0
  const char *v41; // r3
  const char *v42; // lr
  const char *v43; // r2
  const char *v44; // r6
  const char *v45; // r12
  const char *v46; // r1
  const char *v47; // r7
  const char *v48; // r8
  const char *v49; // r9
  int v50; // r0
  int v51; // r9
  size_t v52; // r6
  char *v53; // r0
  char *v54; // r8
  int v55; // r3
  int v56; // r0
  const char *v57; // r3
  const char *v58; // r12
  const char *v59; // r2
  const char *v60; // lr
  const char *v61; // r4
  const char *v62; // r1
  const char *v63; // r6
  const char *v64; // r7
  const char *v65; // r8
  const char *v66; // r0
  int v67; // r3
  int v68; // r2
  void *v69; // r0
  int v70; // r0
  bool v71; // zf
  int v74; // [sp+30h] [bp-16Ch]
  unsigned __int8 *v76; // [sp+3Ch] [bp-160h]
  pthread_mutex_t *mutex; // [sp+54h] [bp-148h]
  int v78; // [sp+58h] [bp-144h]
  int v79; // [sp+58h] [bp-144h]
  const char *v80; // [sp+5Ch] [bp-140h]
  const char *v81; // [sp+5Ch] [bp-140h]
  _BYTE v82[8]; // [sp+60h] [bp-13Ch] BYREF
  _BYTE v83[48]; // [sp+68h] [bp-134h] BYREF
  __int64 v84; // [sp+98h] [bp-104h]
  _BYTE v85[16]; // [sp+D0h] [bp-CCh] BYREF
  int v86; // [sp+E0h] [bp-BCh]
  __int64 v87; // [sp+100h] [bp-9Ch]
  _BYTE v88[24]; // [sp+13Ch] [bp-60h] BYREF
  _BYTE v89[64]; // [sp+154h] [bp-48h] BYREF

  v26 = a1 == 0;
  result = 768;
  v76 = (unsigned __int8 *)a9;
  if ( !v26 && *(_DWORD *)a1 != 1281586296 )
    sub_10788();
  if ( !a2 )
    sub_10788();
  if ( !a3 )
    sub_10788();
  if ( !a4 )
    sub_10788();
  if ( !a9 )
    sub_10788();
  if ( a1 )
  {
    if ( *(_DWORD *)(a2 + 4) >= *(_DWORD *)(a1 + 12) )
      sub_10788();
    if ( *(_DWORD *)(a3 + 4) >= *(_DWORD *)(a1 + 20) )
      sub_10788();
    result = sub_1729C(a1, a4);
    if ( result )
    {
      if ( a6 )
        v76 = (unsigned __int8 *)sub_11084(a6, a7, a8, a9);
      mutex = (pthread_mutex_t *)(a1 + 28);
      v89[0] = 0;
      v88[0] = 0;
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 28)) )
        sub_15154("./../lib/isc/log.c", 1452, "((pthread_mutex_lock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
      v12 = 0;
      v13 = *(_DWORD **)(a1 + 52);
      *(_BYTE *)(a1 + 56) = 0;
      v14 = *(_DWORD **)(v13[4] + 8 * *(_DWORD *)(a2 + 4));
      v15 = v14 == 0;
      while ( 1 )
      {
        if ( (v15 & (v12 ^ 1)) != 0 )
        {
          v14 = *(_DWORD **)v13[4];
          if ( !v14 )
            v14 = &unk_33374;
        }
        v25 = (_DWORD *)v14[3];
        v26 = *v14 == a3;
        if ( *v14 != a3 )
          v26 = *v14 == 0;
        if ( !v26 )
        {
          v24 = v12;
          goto LABEL_32;
        }
        v27 = v14[1];
        v28 = *(_DWORD *)(v27 + 12);
        if ( (v28 & 0x1000) != 0 && !*(_DWORD *)(a1 + 24) )
          goto LABEL_31;
        v29 = *(_DWORD *)(v27 + 8);
        if ( v29 )
        {
          if ( v29 < a4 )
            goto LABEL_31;
        }
        else if ( *(_DWORD *)(a1 + 24) < a4 )
        {
          goto LABEL_31;
        }
        if ( (v28 & 1) != 0 && !v89[0] )
        {
          if ( sub_19010(v85) )
            sub_15154("./../lib/isc/log.c", 1515, "isc_time_now((&isctime)) == 0");
          sub_19A3C(v85, v89, 64);
          v28 = *(_DWORD *)(v27 + 12);
        }
        if ( (v28 & 2) != 0 && !v88[0] )
        {
          if ( a4 < -5 )
          {
            v66 = (const char *)sub_11084((_DWORD *)isc_msgcat, 10, 802, (int)"level");
            sub_F658((int)v88, 0x18u, "%s %d: ", v66, a4);
          }
          else if ( a4 <= 0 )
          {
            sub_F658((int)v88, 0x18u, "%s: ", (const char *)*(&off_30B08 - a4));
          }
          else
          {
            sub_F658((int)v88, 0x18u, "%s %d: ", "debug", a4);
          }
        }
        v16 = *(unsigned __int8 *)(a1 + 56);
        if ( !*(_BYTE *)(a1 + 56) )
        {
          sub_ECF4(a1 + 56, 0x2000u, v76, a10);
          if ( a5 )
          {
            sub_18CCC(v85, v13[6], v16);
            if ( sub_19010(v82) )
              sub_15154("./../lib/isc/log.c", 1562, "isc_time_now((&oldest)) == 0");
            if ( !sub_195D0(v82, v85, v82) )
            {
              v51 = *(_DWORD *)(a1 + 8248);
              while ( v51 )
              {
                while ( sub_193A0(v51 + 4, v82) >= 0 )
                {
                  if ( !strcmp((const char *)(a1 + 56), *(const char **)v51) )
                  {
                    result = pthread_mutex_unlock(mutex);
                    if ( result )
                      sub_15154(
                        "./../lib/isc/log.c",
                        1614,
                        "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
                    return result;
                  }
                  v51 = *(_DWORD *)(v51 + 16);
                  if ( !v51 )
                    goto LABEL_86;
                }
                v67 = *(_DWORD *)(v51 + 16);
                if ( v67 )
                {
                  *(_DWORD *)(v67 + 12) = *(_DWORD *)(v51 + 12);
                  v68 = *(_DWORD *)(v51 + 12);
                }
                else
                {
                  if ( *(_DWORD *)(a1 + 8252) != v51 )
                    sub_10788();
                  v68 = *(_DWORD *)(v51 + 12);
                  *(_DWORD *)(a1 + 8252) = v68;
                }
                if ( v68 )
                {
                  *(_DWORD *)(v68 + 16) = v67;
                }
                else
                {
                  if ( *(_DWORD *)(a1 + 8248) != v51 )
                    sub_10788();
                  *(_DWORD *)(a1 + 8248) = v67;
                }
                v69 = (void *)v51;
                v51 = v67;
                free(v69);
              }
            }
LABEL_86:
            v52 = strlen((const char *)(a1 + 56));
            v53 = (char *)sub_96BC(0, v52 + 21, 0, 0);
            v54 = v53;
            if ( v53 )
            {
              *(_DWORD *)v53 = v53 + 20;
              sub_10410(v53 + 20, (unsigned __int8 *)(a1 + 56), v52 + 1);
              if ( sub_19010(v54 + 4) )
                sub_15154("./../lib/isc/log.c", 1637, "isc_time_now((&new->time)) == 0");
              v55 = *(_DWORD *)(a1 + 8252);
              if ( v55 )
                *(_DWORD *)(v55 + 16) = v54;
              else
                *(_DWORD *)(a1 + 8248) = v54;
              *((_DWORD *)v54 + 3) = v55;
              *((_DWORD *)v54 + 4) = 0;
              *(_DWORD *)(a1 + 8252) = v54;
            }
          }
        }
        v17 = *(_DWORD *)(v27 + 12);
        v18 = v17 & 0x10;
        v19 = v17 & 1;
        if ( (v17 & 0x10) != 0 )
          v18 = v13[8] != 0;
        v20 = *(_DWORD *)(v27 + 4);
        v21 = (v17 >> 2) & 1;
        v22 = (v17 >> 3) & 1;
        v74 = (v17 >> 1) & 1;
        if ( v20 != 3 )
        {
          if ( v20 == 4 )
          {
            v23 = *(_DWORD *)(v27 + 16);
            goto LABEL_64;
          }
          if ( v20 == 2 )
          {
            if ( a4 <= 0 )
            {
              if ( a4 >= -5 )
                v20 = *(_DWORD *)&asc_1E7E8[-4 * a4];
            }
            else
            {
              v20 = 7;
            }
            v56 = v20 | *(_DWORD *)(v27 + 16);
            if ( (v17 & 1) != 0 )
            {
              v57 = v89;
              v58 = " ";
            }
            else
            {
              v57 = "";
              v58 = "";
            }
            if ( v18 )
            {
              v59 = (const char *)v13[8];
              v60 = ": ";
            }
            else
            {
              v59 = "";
              v60 = "";
            }
            if ( v21 )
            {
              v61 = *(const char **)a2;
              v62 = ": ";
            }
            else
            {
              v61 = "";
              v62 = "";
            }
            if ( v22 )
            {
              v63 = *(const char **)a3;
              v64 = ": ";
            }
            else
            {
              v63 = "";
              v64 = "";
            }
            if ( v74 )
              v65 = v88;
            else
              v65 = "";
            _syslog_chk(
              v56,
              1,
              "%s%s%s%s%s%s%s%s%s%s",
              v57,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64,
              v65,
              (const char *)(a1 + 56));
            v24 = 1;
            v12 = 1;
            goto LABEL_32;
          }
          goto LABEL_31;
        }
        if ( *(_DWORD *)(v27 + 40) )
        {
          if ( *(_DWORD *)(v27 + 24) == -2
            && (!_xstat64(3, *(_DWORD *)(v27 + 20), v83) || *_errno_location() != 2)
            && v84 >= *(_QWORD *)(v27 + 32) )
          {
            goto LABEL_31;
          }
          fclose(*(FILE **)(v27 + 16));
          v30 = *(_DWORD *)(v27 + 4);
          *(_DWORD *)(v27 + 16) = 0;
          *(_DWORD *)(v27 + 40) = 0;
          if ( v30 != 3 )
            sub_10788();
        }
        else
        {
          v23 = *(_DWORD *)(v27 + 16);
          if ( v23 )
            goto LABEL_64;
        }
        v31 = *(_BYTE **)(v27 + 20);
        if ( !v31 || !*v31 )
          sub_10788();
        v78 = *(_DWORD *)(v27 + 20);
        v32 = _xstat64(3, v78, v85);
        v34 = v78;
        if ( !v32 )
        {
          v35 = *(_QWORD *)(v27 + 32);
          v33 = v35 | HIDWORD(v35);
          v36 = v86 & 0xF000;
          if ( v35 )
          {
            v33 = (unsigned __int64)(v35 - 1) >> 32;
            if ( v35 < 1 )
              goto LABEL_144;
            v33 = (unsigned __int64)(v87 - v35) >> 32;
            if ( v87 < v35 || v36 != 0x8000 )
              goto LABEL_144;
            if ( *(_DWORD *)(v27 + 24) == -2 )
              goto LABEL_31;
          }
          else if ( *(_DWORD *)(v27 + 24) == -2 || v36 != 0x8000 )
          {
            goto LABEL_144;
          }
          v37 = sub_154BC(v27);
          v34 = v78;
          v33 = v37;
          v79 = v37;
          if ( v37 )
          {
            v38 = *(_DWORD *)(v27 + 12);
            if ( (v38 & 0x8000) == 0 )
            {
              v80 = *(const char **)(v27 + 20);
              v39 = (const char *)sub_186F4(v37);
              _syslog_chk(3, 1, "isc_log_open: roll_log '%s' failed: %s", v80, v39);
              v38 = *(_DWORD *)(v27 + 12) | 0x8000;
              *(_DWORD *)(v27 + 12) = v38;
            }
            if ( v79 == 58 || (v38 & 0x8000) != 0 )
              goto LABEL_31;
LABEL_61:
            v81 = *(const char **)(v27 + 20);
            v40 = (const char *)sub_186F4(v79);
            _syslog_chk(3, 1, "isc_log_open '%s' failed: %s", v81, v40);
            *(_DWORD *)(v27 + 12) |= 0x8000u;
            goto LABEL_62;
          }
        }
LABEL_144:
        v70 = sub_188A8(v34, "a", v27 + 16, v33);
        v71 = v70 == 0;
        if ( v70 )
          v71 = v70 == 58;
        v79 = v70;
        if ( !v71 && (*(_DWORD *)(v27 + 12) & 0x8000) == 0 )
          goto LABEL_61;
LABEL_62:
        if ( !v79 )
        {
          v23 = *(_DWORD *)(v27 + 16);
          *(_DWORD *)(v27 + 12) &= ~0x8000u;
LABEL_64:
          if ( v19 )
          {
            v41 = v89;
            v42 = " ";
          }
          else
          {
            v41 = "";
            v42 = "";
          }
          if ( v18 )
          {
            v43 = (const char *)v13[8];
            v44 = ": ";
            if ( v21 )
              goto LABEL_68;
LABEL_108:
            v45 = "";
            v46 = "";
            if ( !v22 )
              goto LABEL_109;
LABEL_69:
            v47 = *(const char **)a3;
            v48 = ": ";
          }
          else
          {
            v43 = "";
            v44 = "";
            if ( !v21 )
              goto LABEL_108;
LABEL_68:
            v45 = *(const char **)a2;
            v46 = ": ";
            if ( v22 )
              goto LABEL_69;
LABEL_109:
            v48 = "";
            v47 = "";
          }
          if ( v74 )
            v49 = v88;
          else
            v49 = "";
          _fprintf_chk(
            v23,
            1,
            "%s%s%s%s%s%s%s%s%s%s\n",
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            (const char *)(a1 + 56));
          fflush(*(FILE **)(v27 + 16));
          if ( *(__int64 *)(v27 + 32) >= 1 )
          {
            if ( *(_DWORD *)(v27 + 4) != 3 )
              sub_10788();
            v50 = fileno(*(FILE **)(v27 + 16));
            if ( _fxstat64(3, v50, v83) >= 0 && *(_QWORD *)(v27 + 32) < v84 )
            {
              v24 = 1;
              *(_DWORD *)(v27 + 40) = 1;
              v12 = 1;
              goto LABEL_32;
            }
          }
        }
LABEL_31:
        v24 = 1;
        v12 = 1;
LABEL_32:
        v14 = v25;
        v15 = v25 == 0;
        if ( (v15 & v24) != 0 )
        {
          result = pthread_mutex_unlock(mutex);
          if ( result )
            sub_15154("./../lib/isc/log.c", 1766, "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
          return result;
        }
      }
    }
  }
  return result;
}

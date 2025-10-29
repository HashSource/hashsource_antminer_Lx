int __fastcall sub_87554(int a1, int a2, int a3)
{
  int v4; // r11
  int result; // r0
  int v7; // r3
  char *v8; // r4
  char *v9; // r0
  unsigned int v10; // r3
  unsigned int v11; // t1
  char *v12; // r0
  const char *v13; // r5
  size_t v14; // r6
  unsigned int v15; // r3
  char *v16; // r0
  char *v17; // r0
  char *v18; // r5
  int v19; // t1
  unsigned int v20; // r3
  const char *v21; // r7
  const char *v22; // r6
  size_t v23; // r0
  char *v24; // r0
  char *v25; // r4
  int v26; // r0
  char *v27; // r7
  char *v28; // r2
  size_t v29; // r0
  char *v30; // r3
  int v31; // t1
  int v32; // r3
  char *v33; // r5
  char *v34; // r6
  char *v35; // r0
  int v36; // t1
  char *v37; // r0
  int v38; // r3
  int v39; // t1
  bool v40; // zf
  unsigned int v41; // r2
  char *v42; // r12
  char *v43; // r2
  unsigned __int8 *v44; // r7
  char *v45; // r0
  char *v46; // r0
  const char *v47; // r5
  size_t v48; // r7
  int v49; // r2
  unsigned int v50; // r12
  size_t v51; // r5
  unsigned int v52; // r0
  char *v53; // r0
  int v54; // t1
  int v55; // t1
  char *v56; // r0
  const char *v57; // r3
  int v58; // t1
  const char *v59; // r0
  int v60; // r3
  int v61; // r3
  char *v62; // r2
  int v63; // r0
  char *v64; // r5
  char *v65; // r7
  char *v66; // r11
  int v67; // r3
  char v68; // r0
  int v69; // r1
  bool v70; // zf
  int v71; // r2
  unsigned int v72; // r3
  int v73; // r2
  int v74; // r2
  unsigned int v75; // r0
  size_t v76; // r5
  int v77; // r6
  char **v78; // r4
  const char *v79; // r1
  unsigned int v80; // r3
  int v81; // [sp+Ch] [bp-B8h]
  int v82; // [sp+14h] [bp-B0h]
  char *v83; // [sp+24h] [bp-A0h]
  int v84; // [sp+28h] [bp-9Ch]
  int v85; // [sp+28h] [bp-9Ch]
  char *v86; // [sp+28h] [bp-9Ch]
  int v87; // [sp+28h] [bp-9Ch]
  int v88; // [sp+2Ch] [bp-98h]
  char *v89; // [sp+2Ch] [bp-98h]
  int v90; // [sp+38h] [bp-8Ch] BYREF
  char *nptr; // [sp+3Ch] [bp-88h] BYREF
  int v92[2]; // [sp+40h] [bp-84h] BYREF
  int v93; // [sp+48h] [bp-7Ch]
  int v94; // [sp+4Ch] [bp-78h]
  _BYTE v95[32]; // [sp+50h] [bp-74h] BYREF
  int v96[3]; // [sp+70h] [bp-54h] BYREF
  char s[64]; // [sp+7Ch] [bp-48h] BYREF

  v82 = a3;
  v4 = 2;
  v81 = *(_DWORD *)(a1 + 12);
  v93 = 2;
  v92[0] = 0;
  v92[1] = 0;
  v94 = 0;
  result = sub_8727C(a2, 3, 2, (int)v95);
  if ( result != -1 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    v8 = (char *)result;
    if ( !a3 )
      v4 = 4;
    *(_DWORD *)(a1 + 12) = v7 & 0xFFFFFFFB;
    v9 = (char *)dword_106334;
    if ( !a3 )
      v82 = 1;
    if ( (v7 & 0x80000) == 0 )
      v4 = 1;
    v93 = v4;
    if ( dword_106334 )
      goto LABEL_9;
LABEL_22:
    v9 = sub_7DEE8(12);
    while ( 1 )
    {
LABEL_9:
      v10 = (unsigned __int8)*v8;
      if ( v9[v10] )
      {
        do
        {
          v11 = (unsigned __int8)*++v8;
          v10 = v11;
        }
        while ( v9[v11] );
      }
      if ( v10 <= 0x7F && (dword_9ED4C[v10] & 0x180040) != 0 )
      {
        v33 = v8 + 1;
        v34 = strchr(v8 + 1, 10);
        if ( !v34 )
        {
          v8 = &v33[strlen(v8 + 1)];
          goto LABEL_20;
        }
        v35 = (char *)dword_106374;
        if ( !dword_106374 )
          v35 = sub_7DEE8(28);
        if ( v35[(unsigned __int8)v8[1]] )
        {
          do
            v36 = (unsigned __int8)*++v33;
          while ( v35[v36] );
        }
        v37 = (char *)dword_106334;
        if ( !dword_106334 )
          v37 = sub_7DEE8(12);
        v38 = (unsigned __int8)*v33;
        if ( v37[v38] )
        {
          do
          {
            v39 = (unsigned __int8)*++v33;
            v38 = v39;
          }
          while ( v37[v39] );
        }
        if ( v34 < v33 )
        {
LABEL_86:
          v42 = v34 + 1;
          v43 = v8;
          *v34 = 0;
          goto LABEL_81;
        }
        v40 = v38 == 58;
        if ( v38 != 58 )
          v40 = v38 == 61;
        if ( v40 )
        {
          v44 = (unsigned __int8 *)(v33 + 1);
          v45 = (char *)dword_106334;
          if ( !dword_106334 )
            v45 = sub_7DEE8(12);
          if ( v45[(unsigned __int8)v33[1]] )
          {
            do
            {
              v54 = *++v44;
              if ( !v45[v54] )
                break;
              v55 = *++v44;
            }
            while ( v45[v55] );
          }
          if ( v34 < (char *)v44 )
            goto LABEL_86;
        }
        else
        {
          v41 = (unsigned __int8)*(v33 - 1);
          if ( v41 > 0x7F || (dword_9ED4C[v41] & 0xC01) == 0 )
            goto LABEL_16;
        }
        if ( *(v34 - 1) != 92 )
        {
          v42 = v34 + 1;
          *v34 = 0;
          goto LABEL_80;
        }
        v61 = (unsigned __int8)*v34;
        v62 = v34 - 1;
        v42 = v34 + 1;
        if ( v61 == 10 )
          goto LABEL_120;
        while ( 1 )
        {
          if ( v61 == 92 )
          {
            if ( v34[1] == 10 )
            {
              v42 = v34 + 2;
              LOBYTE(v61) = 10;
            }
          }
          else if ( !v61 )
          {
            v42 = 0;
LABEL_120:
            *v62 = 0;
LABEL_80:
            v43 = v8;
LABEL_81:
            v8 = v42;
            sub_85B00(a1, v92, v43, v82, 1);
            goto LABEL_20;
          }
          v34 = v42;
          *v62++ = v61;
          v61 = (unsigned __int8)*v42++;
          if ( v61 == 10 )
            goto LABEL_120;
        }
      }
      if ( v10 == 60 )
        break;
      if ( v10 != 91 )
      {
        if ( v10 != 35 )
          goto LABEL_16;
        v12 = v8 + 1;
LABEL_19:
        v8 = strchr(v12, 10);
        goto LABEL_20;
      }
      v13 = *(const char **)(a1 + 32);
      v14 = strlen(v13);
      if ( strncmp(v8 + 1, v13, v14) || v8[v14 + 1] != 93 )
      {
        if ( v14 > 0x10 )
          goto LABEL_16;
        sprintf(s, "[%s]", v13);
        v12 = strstr(v8, s);
        if ( !v12 )
          goto LABEL_16;
        goto LABEL_19;
      }
      v8 = strchr(&v8[v14 + 2], 10);
LABEL_20:
      if ( !v8 )
        goto LABEL_16;
      v9 = (char *)dword_106334;
      v93 = v4;
      if ( !dword_106334 )
        goto LABEL_22;
    }
    v15 = (unsigned __int8)v8[1];
    if ( v15 > 0x7F || (dword_9ED4C[v15] & 0x180040) == 0 )
    {
      if ( v15 == 47 )
      {
        v46 = strchr(v8 + 2, 62);
        v8 = v46 + 1;
        if ( !v46 )
          goto LABEL_16;
        goto LABEL_20;
      }
      if ( v15 != 63 )
      {
        if ( v15 != 33 )
          goto LABEL_16;
        v16 = strstr(v8, "-->");
        if ( !v16 )
          goto LABEL_16;
        v8 = v16 + 3;
        goto LABEL_20;
      }
      v47 = (const char *)dword_1063F4;
      if ( dword_1063F4 )
      {
        v48 = strlen((const char *)dword_1063F4);
      }
      else
      {
        v48 = 7;
        v47 = (const char *)&off_9F9B5;
        dword_1063F4 = (int)&off_9F9B5;
        dword_1063F8 = (int)"auto-options";
      }
      v49 = strncmp(v8 + 2, v47, v48);
      if ( v49 || (v50 = (unsigned __int8)v8[v48 + 2], v50 <= 0x7F) && (dword_9ED4C[v50] & 0x3B0060) != 0 )
      {
        v51 = strlen((const char *)dword_1063F8);
        if ( strncmp(v8 + 2, (const char *)dword_1063F8, v51)
          || (v52 = (unsigned __int8)v8[v51 + 2], v52 <= 0x7F) && (dword_9ED4C[v52] & 0x3B0060) != 0 )
        {
          v53 = strchr(v8 + 2, 62);
          if ( !v53 )
            goto LABEL_16;
LABEL_99:
          v8 = v53 + 1;
          goto LABEL_20;
        }
        v49 = 1;
      }
      v8 = (char *)((int (__fastcall *)(int))(&off_B4208)[v49 + 95])(a1);
      goto LABEL_20;
    }
    v83 = v8 + 1;
    v17 = (char *)dword_106374;
    v90 = dword_B7168[0];
    if ( !dword_106374 )
      v17 = sub_7DEE8(28);
    v18 = v8 + 1;
    if ( v17[(unsigned __int8)v8[1]] )
    {
      do
        v19 = (unsigned __int8)*++v18;
      while ( v17[v19] );
    }
    v96[0] = 1;
    v20 = (unsigned __int8)*v18;
    if ( v20 != 32 )
    {
      if ( v20 > 0x20 )
      {
        if ( v20 != 47 )
        {
          if ( v20 == 62 )
          {
            v21 = v18;
LABEL_44:
            *v18 = 0;
            v22 = v21 + 1;
            v23 = strlen(v83);
            v88 = v90;
            if ( v23 + 4 <= 0x3F )
            {
              v63 = sprintf(s, "</%s>", v83);
              *((_BYTE *)v21 + 1) = 32;
              v85 = v63;
              v27 = strstr(v21 + 1, s);
            }
            else
            {
              v84 = v23 + 4;
              v24 = (char *)malloc(v23 + 4);
              v25 = v24;
              if ( !v24 )
                sub_C610(v84);
              v26 = sprintf(v24, "</%s>", v83, v84);
              *((_BYTE *)v21 + 1) = 32;
              v85 = v26;
              v27 = strstr(v21 + 1, v25);
              free(v25);
            }
            if ( !v27 )
              goto LABEL_16;
            v8 = &v27[v85];
            if ( v88 != 1 )
            {
              v28 = (char *)dword_106334;
              if ( !dword_106334 )
                v28 = sub_7DEE8(12);
              if ( v22 < v27 || (v86 = v28, v29 = strlen(v22), v28 = v86, v27 = (char *)&v22[v29], v22 < &v22[v29]) )
              {
                if ( v28[(unsigned __int8)*(v27 - 1)] )
                {
                  v30 = v27 - 1;
                  do
                  {
                    v27 = v30;
                    if ( v22 >= v30 )
                      break;
                    v31 = (unsigned __int8)*--v30;
                  }
                  while ( v28[v31] );
                }
              }
            }
            *v27 = 0;
            if ( !v8 )
              goto LABEL_16;
            memset(v18, 32, v22 - v18);
            v32 = v90;
            if ( v96[0] != 1 || v90 )
              goto LABEL_59;
            v64 = (char *)v22;
            s[2] = 0;
            v65 = (char *)v22;
            v87 = v4;
            v66 = (char *)(v22 + 1);
            v89 = v8;
            v67 = *(unsigned __int8 *)v22;
            if ( v67 == 37 )
              goto LABEL_136;
            while ( 1 )
            {
              if ( v67 != 38 )
              {
                if ( v67 )
                {
                  v68 = v67;
                  v64 = v66;
                  goto LABEL_134;
                }
                v4 = v87;
                v8 = v89;
                *v65 = 0;
LABEL_143:
                v32 = v90;
LABEL_59:
                sub_85B00(a1, v92, v83, v82, v32);
                goto LABEL_20;
              }
              nptr = v66;
              v72 = (unsigned __int8)v64[1];
              if ( v72 == 35 )
              {
                nptr = v64 + 2;
              }
              else if ( v72 > 0x7F || (dword_9ED4C[v72] & 0x30000) == 0 )
              {
                v76 = 4;
                v77 = 0;
                v78 = &off_B432C;
                v79 = "amp;";
                while ( strncmp(v66, v79, v76) )
                {
                  ++v77;
                  v78 += 2;
                  if ( v77 == 12 )
                    goto LABEL_156;
                  v79 = *(v78 - 2);
                  v76 = *((unsigned __int16 *)v78 - 2);
                }
                v64 = &v66[v76];
                v80 = *((__int16 *)&off_B4324 + 4 * v77 + 3);
                goto LABEL_164;
              }
              v73 = (unsigned __int8)*nptr;
              if ( v73 == 88 || v73 == 120 )
              {
                v74 = 16;
                ++nptr;
              }
              else if ( v73 == 48 )
              {
                if ( nptr[1] == 48 )
                  v74 = 16;
                else
                  v74 = 10;
              }
              else
              {
                v74 = 10;
              }
              v75 = strtoul(nptr, &nptr, v74);
              if ( *nptr != 59 || v75 > 0x7F )
              {
LABEL_156:
                v4 = v87;
                v8 = v89;
                *v65 = 0;
                goto LABEL_143;
              }
              v64 = nptr + 1;
              v80 = v75;
LABEL_164:
              *v65 = v80;
              if ( !v80 )
              {
                v4 = v87;
                v8 = v89;
                goto LABEL_143;
              }
              while ( 1 )
              {
                v67 = (unsigned __int8)*v64;
                ++v65;
                v66 = v64 + 1;
                if ( v67 != 37 )
                  break;
LABEL_136:
                v69 = (unsigned __int8)v64[1];
                v70 = v69 == 0;
                s[0] = v64[1];
                v71 = (unsigned __int8)v64[2];
                if ( !v69 )
                  v69 = 1;
                s[1] = v64[2];
                if ( !v70 )
                  v69 = v71 == 0;
                if ( v69 )
                  goto LABEL_156;
                v64 += 3;
                v68 = strtoul(s, 0, 16);
LABEL_134:
                *v65 = v68;
              }
            }
          }
          goto LABEL_122;
        }
LABEL_112:
        if ( v18[1] != 62 )
          goto LABEL_16;
        *v18 = 0;
        v8 = v18 + 2;
        sub_85B00(a1, v92, v83, v82, v90);
        goto LABEL_20;
      }
      if ( v20 != 9 )
      {
LABEL_122:
        v53 = strchr(v18, 62);
        if ( !v53 )
          goto LABEL_16;
        goto LABEL_99;
      }
    }
    v56 = (char *)dword_106334;
    if ( !dword_106334 )
    {
      v56 = sub_7DEE8(12);
      v20 = (unsigned __int8)*v18;
    }
    v40 = v56[v20] == 0;
    v57 = v18;
    if ( !v40 )
    {
      do
        v58 = *(unsigned __int8 *)++v57;
      while ( v56[v58] );
    }
    v59 = sub_80F7C(v57, &v90, v96);
    v21 = v59;
    if ( !v59 )
    {
LABEL_16:
      result = sub_874C8((int)v95);
      *(_DWORD *)(a1 + 12) = v81;
      return result;
    }
    v60 = *(unsigned __int8 *)v59;
    if ( v60 == 62 )
      goto LABEL_44;
    if ( v60 != 47 )
      goto LABEL_16;
    v18 = (char *)v59;
    goto LABEL_112;
  }
  return result;
}

unsigned int __fastcall sub_88C2C(unsigned int a1, int a2, char **a3)
{
  int v6; // r3
  int v7; // r2
  int v8; // r2
  unsigned int v9; // r3
  int v10; // r7
  int v11; // r2
  void (*v12)(void); // r2
  unsigned int result; // r0
  int v14; // r3
  int v15; // r8
  int v16; // r2
  unsigned __int16 *v17; // lr
  int v18; // r12
  unsigned __int16 *i; // r1
  int v20; // r3
  int v21; // r0
  int v22; // r3
  int v23; // r3
  unsigned __int16 *v24; // r2
  int v25; // r2
  int v26; // t1
  int v27; // r3
  int v28; // r3
  int v29; // r2
  int v30; // t1
  unsigned __int16 *v31; // r2
  int v32; // r8
  _DWORD *v33; // r0
  unsigned int v34; // r2
  _DWORD *v35; // r10
  int v36; // r9
  unsigned int v37; // r8
  unsigned int v38; // r3
  int v39; // r0
  _DWORD *v40; // r12
  _BYTE *v41; // r7
  unsigned int v42; // r1
  int v43; // r0
  int v44; // r1
  int v45; // r12
  int v46; // r2
  int v47; // lr
  int v48; // r0
  unsigned int v49; // r9
  int v50; // r3
  int v51; // r2
  int v52; // r0
  int v53; // r1
  unsigned int v54; // r1
  _BYTE *v55; // r7
  unsigned int v56; // t1
  int v57; // r3
  _BYTE *v58; // r0
  int v59; // r12
  bool v60; // zf
  _BYTE *v61; // r1
  int v62; // r12
  _DWORD *v63; // r1
  _DWORD *v64; // r0
  _DWORD *v65; // r1
  int v66; // t1
  unsigned int v67; // [sp+8h] [bp-34h]
  _DWORD *src; // [sp+Ch] [bp-30h]
  int v69; // [sp+10h] [bp-2Ch]
  int v70; // [sp+24h] [bp-18h] BYREF
  int v71; // [sp+28h] [bp-14h]
  int v72; // [sp+2Ch] [bp-10h]
  int v73; // [sp+30h] [bp-Ch] BYREF

  if ( sub_8703C((int *)a1, *a3) )
    sub_7CAC8((int)off_B748C[0]);
  v6 = *(_DWORD *)(a1 + 12);
  if ( (v6 & 0x40) == 0 )
  {
    v7 = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 4) = a2;
    *(_DWORD *)(a1 + 12) = v6 | 0x40;
    *(_DWORD *)(a1 + 8) = a3;
    if ( v7 >= 139264 )
      off_B7604 = *(char **)(a1 + 124);
    if ( sub_86698(a1) )
      return 0;
    v8 = *(unsigned __int16 *)(a1 + 94);
    v9 = *(_DWORD *)(a1 + 12);
    if ( (v8 & 0x7FFF) != 0 )
    {
      v10 = *(_DWORD *)(a1 + 68) + ((v8 + 1) << 6);
      if ( (*(_DWORD *)(v10 + 16) & 0x20) != 0 )
        goto LABEL_12;
      v11 = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 12) = v9 | 0x80000;
      if ( v11 )
      {
        sub_88A18(a1, 1);
        if ( (*(_DWORD *)(v10 + 16) & 0x20) == 0 )
          sub_8806C(a1);
        goto LABEL_11;
      }
    }
    else
    {
      v16 = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 12) = v9 | 0x80000;
      if ( v16 )
      {
        sub_88A18(a1, 1);
LABEL_11:
        sub_88A18(a1, 2);
        v9 = *(_DWORD *)(a1 + 12) & 0xFFF7FFFF;
        *(_DWORD *)(a1 + 12) = v9;
LABEL_12:
        if ( (v9 & 0x2000) == 0 )
          goto LABEL_16;
        goto LABEL_13;
      }
    }
    sub_88A18(a1, 0);
    v9 = *(_DWORD *)(a1 + 12) & 0xFFF7FFFF;
    *(_DWORD *)(a1 + 12) = v9;
    if ( (v9 & 0x2000) == 0 )
      goto LABEL_16;
LABEL_13:
    v12 = *(void (**)(void))(a1 + 88);
    if ( v12 && (v9 & 0x30000) == 0x10000 )
    {
      *(_DWORD *)(a1 + 12) = v9 & 0xFFFEFFFF;
      v12();
      v9 = *(_DWORD *)(a1 + 12);
    }
LABEL_16:
    if ( (v9 & 0x800) != 0 )
    {
      v70 = 0;
      v71 = 0;
      v72 = 4;
      v73 = 0;
      if ( !getenv("POSIXLY_CORRECT") && (*(_DWORD *)(a1 + 12) & 3) != 0 )
      {
        v32 = 4 * *(_DWORD *)(a1 + 4);
        v67 = *(_DWORD *)(a1 + 4);
        src = malloc(v32);
        if ( !src || (v33 = malloc(v32), v34 = v67, (v35 = v33) == 0) )
          sub_C610(v32);
        v36 = 0;
        v37 = 0;
        v38 = 1;
        *(_DWORD *)(a1 + 20) = 0;
        *(_DWORD *)(a1 + 16) = 1;
LABEL_54:
        while ( 2 )
        {
          while ( 2 )
          {
            if ( v34 <= v38 )
            {
LABEL_64:
              *_errno_location() = 0;
              goto LABEL_65;
            }
            while ( 1 )
            {
              v39 = *(_DWORD *)(a1 + 8);
              v40 = (_DWORD *)(v39 + 4 * v38);
              v41 = (_BYTE *)*v40;
              if ( *(_BYTE *)*v40 != 45 || (v42 = (unsigned __int8)v41[1], !v41[1]) )
              {
                v35[v37] = v41;
                ++v38;
                ++v37;
                *(_DWORD *)(a1 + 16) = v38;
                goto LABEL_54;
              }
              if ( v42 == 45 )
              {
                if ( !v41[2] )
                {
                  v63 = src;
                  *(_DWORD *)(a1 + 16) = v38 + 1;
                  src[v36] = v41;
                  if ( v38 + 1 < v34 )
                    v63 = (_DWORD *)(v39 + 4 * v34);
                  ++v36;
                  if ( v38 + 1 < v34 )
                  {
                    v64 = &v35[v37];
                    v65 = v63 - 1;
                    do
                    {
                      v66 = v40[1];
                      ++v40;
                      *v64++ = v66;
                    }
                    while ( v65 != v40 );
                    v37 = v37 + v34 - 1 - v38;
                    *(_DWORD *)(a1 + 16) = v34;
                  }
                  goto LABEL_65;
                }
                v43 = sub_85654(a1, v41 + 2, &v70);
              }
              else
              {
                v43 = (*(_DWORD *)(a1 + 12) & 2) != 0 ? sub_7DBE0(a1, v42, &v70, &v73) : sub_85654(a1, v41 + 1, &v70);
              }
              if ( v43 < 0 )
                goto LABEL_105;
              v44 = *(_DWORD *)(a1 + 16);
              v45 = *(_DWORD *)(a1 + 8);
              v69 = v36;
              v46 = *(_DWORD *)(v70 + 16);
              v38 = v44 + 1;
              v47 = *(_DWORD *)(v45 + 4 * v44);
              v48 = v73;
              *(_DWORD *)(a1 + 16) = v44 + 1;
              src[v36] = v47;
              if ( (v46 & 0xF000) != 0 )
                break;
              if ( v48 == 1 )
              {
                v54 = (unsigned __int8)v41[2];
                v55 = v41 + 2;
                if ( v54 )
                {
                  while ( sub_7DBE0(a1, v54, &v70, &v73) >= 0 )
                  {
                    v56 = (unsigned __int8)*++v55;
                    v54 = v56;
                    v57 = *(_DWORD *)(v70 + 16);
                    if ( (v57 & 0xF000) != 0 )
                    {
                      v60 = (v57 & 0x10000) == 0;
                      v38 = *(_DWORD *)(a1 + 16);
                      v34 = *(_DWORD *)(a1 + 4);
                      if ( !v60 )
                      {
                        if ( !v54 )
                        {
                          v61 = *(_BYTE **)(*(_DWORD *)(a1 + 8) + 4 * v38);
                          if ( *v61 != 45 )
                          {
                            ++v38;
                            v36 += 2;
                            *(_DWORD *)(a1 + 16) = v38;
                            src[v69 + 1] = v61;
                            goto LABEL_54;
                          }
                        }
                        goto LABEL_91;
                      }
                      if ( v54 )
                        goto LABEL_91;
                      if ( v34 > v38 )
                      {
                        v36 += 2;
                        v62 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v38);
                        *(_DWORD *)(a1 + 16) = ++v38;
                        src[v69 + 1] = v62;
                        goto LABEL_54;
                      }
                      break;
                    }
                    if ( !v54 )
                    {
                      ++v36;
                      v38 = *(_DWORD *)(a1 + 16);
                      v34 = *(_DWORD *)(a1 + 4);
                      goto LABEL_54;
                    }
                  }
LABEL_105:
                  *_errno_location() = 22;
                  goto LABEL_69;
                }
              }
              v34 = *(_DWORD *)(a1 + 4);
              ++v36;
              if ( v34 <= v38 )
                goto LABEL_64;
            }
            if ( (v46 & 0x10000) != 0 )
            {
              if ( v48 == 1 )
              {
                v34 = *(_DWORD *)(a1 + 4);
                if ( v41[2] )
                  goto LABEL_91;
                goto LABEL_107;
              }
              if ( v48 != 2 )
                goto LABEL_99;
              v34 = *(_DWORD *)(a1 + 4);
              if ( v71 )
              {
LABEL_91:
                ++v36;
                continue;
              }
LABEL_107:
              if ( v34 > v38 )
              {
                v58 = *(_BYTE **)(v45 + 4 * v44 + 4);
                if ( *v58 == 45 )
                  goto LABEL_91;
                v59 = v36;
                v36 += 2;
                v38 = v44 + 2;
                *(_DWORD *)(a1 + 16) = v44 + 2;
                src[v59 + 1] = v58;
                continue;
              }
              ++v36;
              *_errno_location() = 0;
LABEL_65:
              if ( v36 )
                memcpy((void *)(*(_DWORD *)(a1 + 8) + 4), src, 4 * v36);
              if ( v37 )
                memcpy((void *)(*(_DWORD *)(a1 + 8) + 4 * (v36 + 1)), v35, 4 * v37);
LABEL_69:
              free(src);
              free(v35);
              goto LABEL_17;
            }
            break;
          }
          if ( v48 == 1 )
          {
            v34 = *(_DWORD *)(a1 + 4);
            if ( v41[2] )
              goto LABEL_91;
          }
          else
          {
            if ( v48 != 2 )
            {
LABEL_99:
              *_errno_location() = 5;
              goto LABEL_69;
            }
            v34 = *(_DWORD *)(a1 + 4);
            if ( v71 )
              goto LABEL_91;
          }
          if ( v34 > v38 )
          {
            v52 = v36;
            v36 += 2;
            v38 = v44 + 2;
            v53 = *(_DWORD *)(v45 + 4 * v44 + 4);
            *(_DWORD *)(a1 + 16) = v38;
            src[v52 + 1] = v53;
            continue;
          }
          goto LABEL_99;
        }
      }
    }
LABEL_17:
    *(_QWORD *)(a1 + 16) = 1;
    goto LABEL_18;
  }
  if ( !*(_DWORD *)(a1 + 16) )
    goto LABEL_17;
LABEL_18:
  if ( sub_86568(a1) )
    return *(_DWORD *)(a1 + 4);
  v14 = *(unsigned __int16 *)(a1 + 94);
  if ( *(_WORD *)(a1 + 94) && v14 != 0x8000 && (*(_DWORD *)(*(_DWORD *)(a1 + 68) + (v14 << 6) + 16) & 5) != 0 )
  {
    sub_84ED8((int *)a1);
    sub_7CA64(0);
  }
  v15 = *(_DWORD *)(a1 + 12);
  if ( (v15 & 4) == 0 )
    return *(_DWORD *)(a1 + 16);
  v17 = *(unsigned __int16 **)(a1 + 68);
  v18 = *(_DWORD *)(a1 + 104);
  for ( i = v17; ; i += 32 )
  {
    v21 = *((_DWORD *)i + 4);
    if ( (v21 & 5) != 0 )
    {
      v22 = *((_DWORD *)i + 8);
      if ( v22 )
      {
        v23 = v22 - 4;
        while ( 1 )
        {
          v26 = *(_DWORD *)(v23 + 4);
          v23 += 4;
          v25 = v26;
          if ( v26 == 0x8000 )
            break;
          v24 = &v17[32 * v25];
          if ( (*((_DWORD *)v24 + 4) & 0xF) == 0 )
          {
            fprintf(stderr, off_B753C[0], *(_DWORD *)(a1 + 28), *((_DWORD *)i + 13), *((_DWORD *)v24 + 13));
            goto LABEL_48;
          }
        }
      }
      v27 = *((_DWORD *)i + 9);
      if ( v27 )
      {
        v28 = v27 - 4;
        while ( 1 )
        {
          v30 = *(_DWORD *)(v28 + 4);
          v28 += 4;
          v29 = v30;
          if ( v30 == 0x8000 )
            break;
          v31 = &v17[32 * v29];
          if ( (*((_DWORD *)v31 + 4) & 5) != 0 )
          {
            fprintf(stderr, off_B74BC[0], *(_DWORD *)(a1 + 28), *((_DWORD *)i + 13), *((_DWORD *)v31 + 13));
            goto LABEL_48;
          }
        }
      }
    }
    v20 = i[4];
    if ( v20 == 0x8000 || *i == v20 )
    {
      v49 = i[5];
      if ( i[7] < v49 && ((v21 & 0x100000) == 0 || (v21 & 3) == 0) )
      {
        v50 = *((_DWORD *)i + 13);
        v51 = *(_DWORD *)(a1 + 28);
        if ( v49 <= 1 )
          fprintf(stderr, off_B74E8[0], v51, v50);
        else
          fprintf(stderr, off_B7518[0], v51, v50, v49);
        goto LABEL_48;
      }
    }
    if ( --v18 <= 0 )
      break;
  }
  result = *(_DWORD *)(a1 + 16);
  if ( (v15 & 0x200) != 0 )
  {
    if ( result < *(_DWORD *)(a1 + 4) )
    {
      fprintf(stderr, off_B74F0[0], *(_DWORD *)(a1 + 28));
      goto LABEL_48;
    }
  }
  else if ( (v15 & 0x400) != 0 && result >= *(_DWORD *)(a1 + 4) )
  {
    fprintf(stderr, off_B74A8[0], *(_DWORD *)(a1 + 28));
LABEL_48:
    (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
    return *(_DWORD *)(a1 + 16);
  }
  return result;
}

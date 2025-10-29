int __fastcall sub_336F8(double a1)
{
  unsigned int v1; // r4
  char v2; // r2
  char v3; // r3
  unsigned int v4; // r0
  unsigned int v5; // r0
  unsigned __int8 v6; // r3
  unsigned int v7; // r1
  unsigned int v8; // r2
  int v9; // r2
  char *v10; // r7
  int v11; // r3
  unsigned int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r12
  unsigned int v15; // r10
  int v16; // r0
  unsigned int v17; // r7
  struct sockaddr *v18; // r0
  unsigned int v19; // r2
  int v20; // r1
  int v21; // r2
  int v22; // r2
  int v23; // r3
  unsigned int v24; // r1
  _DWORD *v25; // r2
  __int64 v26; // r2
  double v27; // r0
  double v28; // d0
  int v29; // r2
  unsigned int v30; // r8
  int v31; // r0
  int v32; // r3
  int v33; // r3
  unsigned int v34; // r2
  unsigned int v35; // r3
  int v36; // r3
  double v37; // r0
  double v38; // d0
  int v39; // r2
  int v40; // r1
  _DWORD *v41; // r10
  unsigned int *v42; // r0
  int v43; // r3
  int v44; // r2
  int v45; // r1
  unsigned int v46; // r2
  unsigned int *v47; // r0
  int v48; // r3
  int v49; // r3
  unsigned int v50; // r1
  unsigned int v51; // r2
  unsigned int v52; // r12
  unsigned int v53; // r2
  unsigned int v54; // r2
  unsigned int v55; // r3
  unsigned int v56; // r2
  unsigned int v57; // r3
  unsigned int v58; // r2
  unsigned int v59; // r3
  int v60; // r0
  size_t n; // [sp+0h] [bp-86Ch]
  unsigned int v63; // [sp+Ch] [bp-860h] BYREF
  unsigned int v64; // [sp+10h] [bp-85Ch]
  int v65; // [sp+14h] [bp-858h] BYREF
  unsigned int v66; // [sp+18h] [bp-854h]
  unsigned __int8 v67[4]; // [sp+1Ch] [bp-850h] BYREF
  unsigned int v68; // [sp+20h] [bp-84Ch]
  unsigned int v69; // [sp+24h] [bp-848h]
  int v70; // [sp+28h] [bp-844h]
  unsigned int v71; // [sp+2Ch] [bp-840h]
  unsigned int v72; // [sp+30h] [bp-83Ch]
  unsigned int v73; // [sp+34h] [bp-838h]
  unsigned int v74; // [sp+38h] [bp-834h]
  unsigned int v75; // [sp+3Ch] [bp-830h]
  unsigned int v76; // [sp+40h] [bp-82Ch]
  unsigned int v77; // [sp+44h] [bp-828h]
  unsigned int v78; // [sp+48h] [bp-824h]

  if ( !*(_DWORD *)(LODWORD(a1) + 56) )
    return LODWORD(a1);
  v1 = LODWORD(a1);
  v2 = *(_BYTE *)(LODWORD(a1) + 62);
  v3 = *(_BYTE *)(LODWORD(a1) + 63) & 7 | (sys_leap << 6);
  v4 = *(_DWORD *)(LODWORD(a1) + 560);
  v67[0] = v3 | (8 * v2) & 0x38;
  v5 = bswap32(v4);
  v6 = sys_stratum;
  v67[2] = *(_BYTE *)(v1 + 64);
  if ( sys_stratum == 16 )
    v6 = 0;
  v67[1] = v6;
  v67[3] = sys_precision;
  v7 = bswap32(*(_DWORD *)(v1 + 564));
  v70 = sys_refid;
  v8 = bswap32(*(_DWORD *)(v1 + 576));
  v68 = bswap32((int)(sys_rootdelay * 65536.0));
  v69 = bswap32((unsigned int)(sys_rootdisp * 65536.0));
  v73 = v5;
  v74 = v7;
  v75 = v8;
  v72 = bswap32(dword_107C0C);
  v71 = bswap32(sys_reftime);
  v9 = *(_DWORD *)(v1 + 68);
  v76 = bswap32(*(_DWORD *)(v1 + 580));
  if ( (v9 & 0x800) != 0 )
  {
    while ( 1 )
    {
      v32 = *(_DWORD *)(v1 + 244);
      if ( v32 )
      {
        v33 = v32 - 1;
        *(_DWORD *)(v1 + 244) = v33;
      }
      else
      {
        sub_271F8(v1, *(_DWORD *)(v1 + 56));
        v33 = *(_DWORD *)(v1 + 244);
      }
      v30 = *(_DWORD *)(*(_DWORD *)(v1 + 240) + 4 * v33);
      v31 = sub_61F1C(v30);
      if ( v31 )
        break;
      sub_3364C((_DWORD *)v1);
    }
    v36 = *(unsigned __int8 *)(v1 + 63);
    *(_DWORD *)(v1 + 124) = v30;
    switch ( v36 )
    {
      case 1:
      case 2:
        v44 = *(_DWORD *)(v1 + 136);
        if ( !v44 )
          goto LABEL_95;
        if ( (v44 & 0x100) == 0 )
          goto LABEL_101;
        if ( (v44 & 0x200) == 0 )
          goto LABEL_102;
        if ( sys_leap != 3 && *(_BYTE *)(v1 + 91) != 3 && (v44 & 0x800) == 0 )
          goto LABEL_103;
        if ( (v44 & 0x1000) == 0 )
        {
          v41 = sub_27620(v1, 33816576, *(unsigned __int16 *)(v1 + 60), 0);
          goto LABEL_45;
        }
        if ( (*(_DWORD *)(v1 + 68) & 0x8000) == 0 )
        {
          if ( sys_leap != 3 )
            goto LABEL_58;
          goto LABEL_73;
        }
        if ( (v44 & 0x2000) != 0 )
        {
          v41 = sub_27620(v1, -2113667072, *(unsigned __int16 *)(v1 + 132), 0);
          goto LABEL_45;
        }
        if ( sys_leap == 3 )
          goto LABEL_73;
        goto LABEL_71;
      case 3:
        v44 = *(_DWORD *)(v1 + 136);
        if ( v44 )
        {
          if ( (v44 & 0x100) != 0 )
          {
            if ( (v44 & 0x200) != 0 )
            {
              if ( (v44 & 0x800) != 0 )
              {
                if ( (v44 & 0x1000) != 0 )
                {
                  if ( sys_leap == 3 )
                    goto LABEL_73;
LABEL_58:
                  if ( (v44 & 0x2000) != 0 )
                  {
                    if ( (v44 & 0x4000) == 0 )
                    {
                      v41 = sub_27620(v1, 33882112, *(unsigned __int16 *)(v1 + 60), 0);
                      goto LABEL_45;
                    }
LABEL_73:
                    v47 = *(unsigned int **)(v1 + 232);
                    if ( !v47 )
                      goto LABEL_6;
                    *v47 |= 0x80u;
                    v10 = (char *)sub_2951C(v1, (int)v67, 0, 48, v47, 0) + 48;
                    free(*(void **)(v1 + 232));
                    *(_DWORD *)(v1 + 232) = 0;
LABEL_50:
                    if ( (unsigned int)v10 > 0x30 )
                      sub_2706C((_DWORD *)(*(_DWORD *)(v1 + 56) + 24), v1 + 16, v30, 0, 2);
                    goto LABEL_7;
                  }
LABEL_71:
                  v45 = 33947648;
                  v46 = *(unsigned __int16 *)(v1 + 60);
                  goto LABEL_96;
                }
                v41 = sub_27620(v1, 33816576, *(unsigned __int16 *)(v1 + 132), 0);
              }
              else
              {
LABEL_103:
                v41 = sub_27620(v1, 33751040, *(unsigned __int16 *)(v1 + 60), 0);
              }
            }
            else
            {
LABEL_102:
              v60 = sub_27518(v1);
              v41 = sub_27620(v1, v60, *(unsigned __int16 *)(v1 + 60), 0);
            }
          }
          else
          {
LABEL_101:
            v41 = sub_27620(v1, 33685504, *(unsigned __int16 *)(v1 + 60), *(char **)(v1 + 152));
          }
LABEL_45:
          v42 = *(unsigned int **)(v1 + 232);
          if ( v42 )
          {
            *v42 |= 0x80u;
            v10 = (char *)sub_2951C(v1, (int)v67, 0, 48, v42, 0) + 48;
            free(*(void **)(v1 + 232));
            *(_DWORD *)(v1 + 232) = 0;
            if ( !v41 )
              goto LABEL_50;
            if ( !*v41 )
              goto LABEL_49;
            v43 = (int)v10;
          }
          else
          {
            if ( !v41 )
              goto LABEL_6;
            if ( !*v41 )
            {
              v10 = (char *)&word_30;
              free(v41);
              goto LABEL_7;
            }
            v43 = 48;
            v10 = (char *)&word_30;
          }
          v10 = (char *)sub_2951C(v1, (int)v67, 0, v43, v41, 0) + (_DWORD)v10;
LABEL_49:
          free(v41);
          goto LABEL_50;
        }
LABEL_95:
        v45 = 33619968;
        v46 = *(unsigned __int16 *)(v1 + 60);
LABEL_96:
        v41 = sub_27620(v1, v45, v46, (char *)dword_107274);
        goto LABEL_45;
      case 5:
        LOWORD(v40) = 0;
        if ( (*(_DWORD *)(v1 + 68) & 0x8000) != 0 )
        {
          v31 = v1;
          HIWORD(v40) = -32252;
        }
        else
        {
          HIWORD(v40) = -32255;
        }
        if ( (*(_DWORD *)(v1 + 68) & 0x8000) == 0 )
          v31 = v1;
        v41 = sub_27620(v31, v40, *(unsigned __int16 *)(v1 + 60), 0);
        goto LABEL_45;
      default:
        goto LABEL_73;
    }
  }
  if ( *(_DWORD *)(v1 + 124) )
  {
LABEL_6:
    v10 = (char *)&word_30;
LABEL_7:
    sub_5F334(&v63);
    v11 = *(_DWORD *)(v1 + 316);
    if ( v11 )
    {
      if ( *(_BYTE *)(v1 + 63) == 5 )
      {
        v77 = bswap32(v63);
        v78 = bswap32(v64);
        if ( v11 <= 0 )
        {
          v54 = *(_DWORD *)(v1 + 584);
          v55 = *(_DWORD *)(v1 + 588);
        }
        else
        {
          v54 = *(_DWORD *)(v1 + 592);
          v55 = *(_DWORD *)(v1 + 596);
        }
        v73 = bswap32(v54);
        v74 = bswap32(v55);
      }
      else
      {
        if ( v11 <= 0 )
        {
          v34 = *(_DWORD *)(v1 + 584);
          v35 = *(_DWORD *)(v1 + 588);
        }
        else
        {
          v34 = *(_DWORD *)(v1 + 592);
          v35 = *(_DWORD *)(v1 + 596);
        }
        v77 = bswap32(v34);
        v78 = bswap32(v35);
      }
    }
    else
    {
      v12 = v64;
      v13 = v64;
      v14 = bswap32(v63);
      *(_DWORD *)(v1 + 584) = v63;
      *(_DWORD *)(v1 + 588) = v12;
      v77 = v14;
      v78 = bswap32(v13);
    }
    v15 = *(_DWORD *)(v1 + 124);
    v16 = sub_623CC(v15, v67, v10);
    if ( !v16 )
    {
      LODWORD(a1) = sub_25C8C((__int16 *)&dword_8C, v1, "no key");
      v48 = *(_DWORD *)(v1 + 752);
      *(_DWORD *)(v1 + 300) |= 0x10u;
      *(_DWORD *)(v1 + 752) = v48 + 1;
      return LODWORD(a1);
    }
    v17 = (unsigned int)&v10[v16];
    if ( v15 >= 0x10000 )
      sub_61DF8(v15, 0);
    if ( v17 > 0x848 )
    {
      sub_64A18(3, "peer_xmit: buffer overflow %zu", v17);
      exit(-1);
    }
    *(_DWORD *)(v1 + 664) = v17;
    v18 = (struct sockaddr *)(v1 + 16);
    v19 = *(_DWORD *)(v1 + 76);
    n = v17;
    v20 = *(_DWORD *)(v1 + 56);
    if ( v19 >= sys_ttlmax )
      v19 = sys_ttlmax;
    v21 = (unsigned __int8)sys_ttl[v19];
    goto LABEL_16;
  }
  sub_5F334(&v63);
  v49 = *(_DWORD *)(v1 + 316);
  if ( v49 )
  {
    if ( *(_BYTE *)(v1 + 63) == 5 )
    {
      v77 = bswap32(v63);
      v78 = bswap32(v64);
      if ( v49 <= 0 )
      {
        v58 = *(_DWORD *)(v1 + 584);
        v59 = *(_DWORD *)(v1 + 588);
      }
      else
      {
        v58 = *(_DWORD *)(v1 + 592);
        v59 = *(_DWORD *)(v1 + 596);
      }
      v73 = bswap32(v58);
      v74 = bswap32(v59);
    }
    else
    {
      if ( v49 <= 0 )
      {
        v56 = *(_DWORD *)(v1 + 584);
        v57 = *(_DWORD *)(v1 + 588);
      }
      else
      {
        v56 = *(_DWORD *)(v1 + 592);
        v57 = *(_DWORD *)(v1 + 596);
      }
      v77 = bswap32(v56);
      v78 = bswap32(v57);
    }
  }
  else
  {
    v50 = v64;
    v51 = v64;
    v52 = bswap32(v63);
    *(_DWORD *)(v1 + 584) = v63;
    *(_DWORD *)(v1 + 588) = v50;
    v77 = v52;
    v78 = bswap32(v51);
  }
  *(_DWORD *)(v1 + 664) = 48;
  v53 = *(_DWORD *)(v1 + 76);
  n = 48;
  v18 = (struct sockaddr *)(v1 + 16);
  if ( v53 >= sys_ttlmax )
    v53 = sys_ttlmax;
  v20 = *(_DWORD *)(v1 + 56);
  v21 = (unsigned __int8)sys_ttl[v53];
LABEL_16:
  sub_16874(v18, v20, v21, v67, n);
  v22 = *(_DWORD *)(v1 + 740) + 1;
  *(_DWORD *)(v1 + 712) += (1 << *(_BYTE *)(v1 + 65)) - 2;
  *(_DWORD *)(v1 + 740) = v22;
  sub_5F334(&v65);
  v23 = *(_DWORD *)(v1 + 316);
  if ( v23 )
  {
    v24 = v66;
    if ( v23 <= 0 )
      v25 = (_DWORD *)(v1 + 592);
    else
      v25 = (_DWORD *)(v1 + 584);
    *v25 = v65;
    v25[1] = v24;
    *(_DWORD *)(v1 + 316) = -v23;
  }
  HIDWORD(v26) = v65 - v63;
  if ( v66 < v64 )
    --HIDWORD(v26);
  LODWORD(v26) = v66 - v64;
  v65 = HIDWORD(v26);
  v66 -= v64;
  if ( v26 < 0 )
  {
    v37 = COERCE_DOUBLE(sub_8BA5C(-(int)v26, (unsigned __int64)-v26 >> 32));
    v38 = v37;
    LODWORD(v37) = -32;
    a1 = ldexp(v37, v39);
    v28 = -v38;
  }
  else
  {
    v27 = COERCE_DOUBLE(sub_8BA5C(v26, HIDWORD(v26)));
    v28 = v27;
    LODWORD(v27) = -32;
    a1 = ldexp(v27, v29);
  }
  *(double *)(v1 + 640) = v28;
  return LODWORD(a1);
}

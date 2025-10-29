int __fastcall sub_E104(double a1, unsigned int a2, int a3, int a4, unsigned int a5, _DWORD *a6)
{
  double v6; // d0
  unsigned int *v7; // r6
  int v8; // r8
  double v9; // d9
  double v10; // d16
  __int64 v11; // r4
  int v12; // r7
  double v13; // d16
  int v14; // r3
  double v15; // d8
  __int64 v16; // r10
  double v17; // d16
  int v18; // r3
  int v19; // r3
  unsigned __int64 v20; // r8
  double v21; // d8
  double v22; // d8
  unsigned __int64 v23; // r2
  double v24; // d16
  _BOOL4 v25; // r1
  int v26; // r3
  const char *v27; // r1
  int v28; // r0
  int v29; // r2
  char *v30; // r12
  int v31; // t1
  _BOOL4 v32; // r3
  char *v33; // r4
  int v34; // r9
  int v35; // r2
  __int64 v36; // r0
  int v37; // r8
  int v38; // r10
  int v39; // lr
  int v40; // r3
  int v41; // r0
  int v42; // r3
  int v43; // r1
  int v44; // r2
  int v45; // r3
  bool v46; // cc
  bool v47; // cf
  unsigned int v48; // r2
  bool v49; // cf
  unsigned int v50; // r2
  bool v51; // r7
  unsigned int v52; // r1
  int v53; // r8
  unsigned int v54; // r2
  unsigned int v55; // r2
  unsigned int v56; // r2
  bool v57; // cf
  _BYTE *v58; // r2
  bool v59; // cf
  int v60; // r2
  char v61; // r1
  bool v62; // cf
  unsigned int v63; // r2
  bool v64; // cf
  _BYTE *v65; // r10
  int v66; // r7
  unsigned __int64 v67; // r4
  int v68; // r2
  unsigned __int64 v69; // r0
  _BYTE *v70; // r2
  int v71; // t1
  bool v72; // nf
  char v73; // r3
  int v74; // r8
  unsigned int v75; // r9
  int v76; // r2
  __int64 v77; // r0
  _BOOL4 v78; // r3
  char v79; // r3
  int v80; // r3
  int v83; // [sp+1Ch] [bp-90h]
  __int64 v84; // [sp+20h] [bp-8Ch]
  __int64 v85; // [sp+20h] [bp-8Ch]
  unsigned __int64 v86; // [sp+20h] [bp-8Ch]
  int v87; // [sp+20h] [bp-8Ch]
  int v89; // [sp+30h] [bp-7Ch]
  int v90; // [sp+34h] [bp-78h]
  char v91; // [sp+34h] [bp-78h]
  int v92; // [sp+40h] [bp-6Ch]
  _BYTE *v93; // [sp+44h] [bp-68h]
  _BYTE v94[3]; // [sp+48h] [bp-64h] BYREF
  char v95; // [sp+4Bh] [bp-61h] BYREF
  char v96[43]; // [sp+4Ch] [bp-60h] BYREF
  _BYTE v97[53]; // [sp+77h] [bp-35h] BYREF

  v7 = (unsigned int *)HIDWORD(a1);
  v83 = LODWORD(a1);
  LODWORD(a1) = &GLOBAL_OFFSET_TABLE_;
  v8 = a4;
  if ( a4 == -1 )
    v8 = 6;
  if ( v6 < 0.0 )
  {
    v89 = 45;
    goto LABEL_63;
  }
  if ( (a5 & 2) != 0 )
  {
    v89 = 43;
  }
  else
  {
    v26 = a5 & 4;
    if ( (a5 & 4) != 0 )
      v26 = 32;
    v89 = v26;
  }
  if ( v6 != 0.0 )
  {
LABEL_63:
    if ( v6 + v6 != v6 )
      goto LABEL_7;
    if ( (a5 & 0x40) != 0 )
      v27 = "INF";
    else
      v27 = "inf";
    v28 = v89;
    v29 = *(unsigned __int8 *)v27;
    if ( v89 )
    {
      if ( !*v27 )
        v28 = 1;
      v96[0] = v89;
      if ( !v29 )
        goto LABEL_69;
      v28 = 1;
    }
    v30 = &v96[v28 - 1];
    do
    {
      *++v30 = v29;
      ++v28;
      v31 = *(unsigned __int8 *)++v27;
      LOBYTE(v29) = v31;
    }
    while ( v31 );
LABEL_69:
    LODWORD(a1) = sub_DAF8(v83, v7, a2, v96, a3, v28, a5);
    return LODWORD(a1);
  }
LABEL_7:
  v9 = -v6;
  if ( (a5 & 0x300) == 0 )
  {
    if ( v6 >= 0.0 )
      v9 = v6;
    if ( v8 >= 19 )
      v12 = 19;
    else
      v12 = v8;
    HIDWORD(v11) = a5 & 0x200;
    if ( (a5 & 0x200) == 0 )
    {
      v92 = 0;
      LODWORD(v11) = 0;
      v15 = v9;
      goto LABEL_34;
    }
    v92 = a5 & 0x300;
    LODWORD(v11) = v92;
    v13 = 1.0;
    goto LABEL_33;
  }
  v92 = a5 & 0x100;
  if ( (a5 & 0x100) != 0 )
  {
    --v8;
    v92 = (a5 & 8) == 0;
  }
  if ( v6 >= 0.0 )
    v10 = v6;
  else
    v10 = -v6;
  if ( v10 >= 1.0 || v10 <= 0.0 )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    LODWORD(v11) = -1;
    do
    {
      v10 = v10 * 10.0;
      if ( v10 >= 1.0 )
        break;
      if ( v10 <= 0.0 )
        break;
      LODWORD(v11) = v11 - 1;
    }
    while ( (_DWORD)v11 != -99 );
  }
  if ( v10 < 10.0 )
  {
    if ( v6 >= 0.0 )
      v9 = v6;
    if ( v8 >= 19 )
      v12 = 19;
    else
      v12 = v8;
    goto LABEL_233;
  }
  LODWORD(v11) = v11 + 1;
  do
  {
    v10 = v10 / 10.0;
    if ( v10 < 10.0 )
      break;
    LODWORD(v11) = v11 + 1;
  }
  while ( (int)v11 <= 98 );
  if ( v6 >= 0.0 )
    v9 = v6;
  if ( v8 >= 19 )
    v12 = 19;
  else
    v12 = v8;
  if ( (int)v11 <= 0 )
  {
LABEL_233:
    v13 = 1.0;
    if ( (_DWORD)v11 )
    {
      v80 = v11;
      do
      {
        ++v80;
        v13 = v13 / 10.0;
      }
      while ( v80 );
    }
    goto LABEL_32;
  }
  v13 = 1.0;
  v14 = v11;
  do
  {
    --v14;
    v13 = v13 * 10.0;
  }
  while ( v14 );
LABEL_32:
  HIDWORD(v11) = 1;
LABEL_33:
  v15 = v9 / v13;
  while ( 1 )
  {
LABEL_34:
    if ( v15 >= 1.84467441e19 )
      goto LABEL_93;
    v16 = sub_1C4C0(LODWORD(v15), HIDWORD(v15));
    a1 = sub_1C374(v16, HIDWORD(v16));
    if ( v15 < a1 )
      --v16;
    if ( v16 == -1 )
    {
LABEL_93:
      *a6 = 1;
      return LODWORD(a1);
    }
    if ( v8 <= 0 )
    {
      v19 = v12;
      v17 = 1.0;
    }
    else
    {
      v17 = 1.0;
      v18 = v12;
      do
      {
        --v18;
        v17 = v17 * 10.0;
      }
      while ( v18 );
      if ( v12 < 1 )
        v19 = v12 - 1;
      else
        v19 = 0;
    }
    for ( ; v19; v17 = v17 / 10.0 )
      ++v19;
    v20 = sub_1C4C0(LODWORD(v17), HIDWORD(v17));
    v21 = v15 - sub_1C374(v16, HIDWORD(v16));
    a1 = sub_1C374(v20, HIDWORD(v20));
    v22 = v21 * a1;
    if ( v22 < 1.84467441e19 )
    {
      v84 = sub_1C4C0(LODWORD(v22), HIDWORD(v22));
      a1 = sub_1C374(v84, HIDWORD(v84));
      v23 = v84;
      v24 = a1;
      if ( v22 < a1 )
      {
        v85 = v84 - 1;
        a1 = sub_1C374(v85, HIDWORD(v85));
        v23 = v85;
        v24 = a1;
      }
      if ( v22 - v24 >= 0.5 )
        ++v23;
LABEL_51:
      if ( v20 > v23 )
        goto LABEL_52;
      goto LABEL_78;
    }
    if ( v22 - 1.84467441e19 >= 0.5 )
    {
      v23 = 0;
      goto LABEL_51;
    }
LABEL_78:
    v32 = ++v16 == 10;
    if ( !HIDWORD(v11) )
      v32 = 0;
    if ( v32 )
    {
      LODWORD(v11) = v11 + 1;
      v23 = 0;
      v16 = 1;
    }
    else
    {
      v23 = 0;
    }
LABEL_52:
    if ( (a5 & 0x100) == 0 )
      break;
    v25 = (int)v11 <= v12;
    if ( !HIDWORD(v11) )
      v25 = 0;
    if ( !v25 )
      break;
    if ( (int)v11 < -4 )
    {
      v86 = v23;
      goto LABEL_211;
    }
    v8 = v12 - v11;
    v15 = v9;
    HIDWORD(v11) = 0;
    if ( v12 - (int)v11 >= 19 )
      v12 = 19;
    else
      v12 -= v11;
  }
  v86 = v23;
  if ( !HIDWORD(v11) )
    goto LABEL_95;
LABEL_211:
  v72 = (int)v11 < 0;
  if ( (int)v11 < 0 )
    LODWORD(v11) = -(int)v11;
  if ( v72 )
    v73 = 45;
  else
    v73 = 43;
  v91 = v73;
  v11 = (int)v11;
  v74 = 0;
  do
  {
    v75 = v74 + 1;
    sub_1C480(v11, HIDWORD(v11), 10, 0);
    v94[v74] = a0123456789abcd_1[v76];
    v74 = 1;
    LODWORD(v77) = sub_1C480(v11, HIDWORD(v11), 10, 0);
    v78 = v75 <= 1;
    v11 = v77;
    if ( !v77 )
      v78 = 0;
  }
  while ( v78 );
  HIDWORD(v11) = 4;
  if ( v75 == 1 )
    v94[1] = 48;
  v94[2] = v91;
  if ( (a5 & 0x40) != 0 )
    v79 = 69;
  else
    v79 = 101;
  v95 = v79;
LABEL_95:
  v33 = &v95;
  v34 = 0;
  do
  {
    sub_1C480(v16, HIDWORD(v16), 10, 0);
    ++v34;
    *++v33 = a0123456789abcd_1[v35];
    LODWORD(v36) = sub_1C480(v16, HIDWORD(v16), 10, 0);
    v37 = (unsigned int)v34 <= 0x2A;
    v16 = v36;
    if ( !v36 )
      v37 = 0;
  }
  while ( v37 );
  LODWORD(v11) = v34;
  if ( v86 )
  {
    v65 = v97;
    v90 = v12;
    v66 = HIDWORD(v11);
    v67 = v86;
    v93 = v97;
    do
    {
      sub_1C480(v67, HIDWORD(v67), 10, 0);
      ++v37;
      *++v65 = a0123456789abcd_1[v68];
      LODWORD(v69) = sub_1C480(v67, HIDWORD(v67), 10, 0);
      v40 = (unsigned int)v37 <= 0x2A;
      v67 = v69;
      if ( !v69 )
        v40 = 0;
    }
    while ( v40 );
    HIDWORD(v11) = v66;
    v12 = v90;
    v38 = v37;
    LODWORD(v11) = v34;
    v39 = v90 - v37;
    if ( v92 )
    {
      if ( v37 <= 0 )
      {
        v39 = 0;
        goto LABEL_103;
      }
      v70 = v93;
      do
      {
        v71 = (unsigned __int8)*++v70;
        if ( v71 != 48 )
        {
          v12 = v90 - v40;
          v92 = v40;
          goto LABEL_196;
        }
        ++v40;
      }
      while ( v40 != v37 );
      v92 = v40;
      v12 = v90 - v40;
      v38 = v40;
    }
LABEL_196:
    if ( v12 <= 0 )
    {
      v40 = v12;
      v12 = v92;
      goto LABEL_103;
    }
    v87 = 1;
  }
  else
  {
    if ( !v92 )
    {
      v38 = 0;
      v39 = v12;
      goto LABEL_196;
    }
    v38 = 0;
    v39 = 0;
    v40 = 0;
LABEL_103:
    v92 = v12;
    v12 = v40;
    v87 = (a5 >> 3) & 1;
  }
  LODWORD(a1) = a5 & 0x20;
  if ( (a5 & 0x20) != 0 )
  {
    if ( v34 == 3 * (v34 / 3) )
      v41 = v34 - 1;
    else
      v41 = v34;
    LODWORD(a1) = v41 / 3;
  }
  v42 = a5 & 1;
  v43 = a3 - v34 - HIDWORD(v11) - v12 - LODWORD(a1) - v87;
  if ( v89 )
    --v43;
  if ( v43 < 0 )
  {
    v42 = 0;
    goto LABEL_140;
  }
  if ( (a5 & 1) != 0 )
  {
    v42 = -v43;
    goto LABEL_140;
  }
  if ( (a5 & 0x10) != 0 )
  {
    if ( !v43 )
      goto LABEL_140;
    v44 = *v7;
    if ( v89 )
    {
      v45 = v44 + 1;
      v46 = a2 > v44 + 1;
      if ( a2 <= v44 + 1 )
        ++v44;
      else
        v45 = v83;
      if ( v46 )
      {
        *(_BYTE *)(v45 + v44) = v89;
        v44 = *v7 + 1;
      }
      *v7 = v44;
    }
    v42 = v43;
    do
    {
      v47 = v44 + 1 >= a2;
      if ( v44 + 1 >= a2 )
      {
        ++v44;
      }
      else
      {
        *(_BYTE *)(v83 + v44) = 48;
        v44 = *v7;
      }
      if ( !v47 )
        ++v44;
      --v42;
      *v7 = v44;
    }
    while ( v42 );
  }
  else
  {
    if ( v43 )
    {
      v48 = *v7;
      v42 = v43;
      do
      {
        v49 = v48 + 1 >= a2;
        if ( v48 + 1 >= a2 )
        {
          ++v48;
        }
        else
        {
          *(_BYTE *)(v83 + v48) = 32;
          v48 = *v7;
        }
        if ( !v49 )
          ++v48;
        --v42;
        *v7 = v48;
      }
      while ( v42 );
    }
LABEL_140:
    if ( v89 )
    {
      v50 = *v7 + 1;
      if ( v50 < a2 )
      {
        *(_BYTE *)(v83 + *v7) = v89;
        v50 = *v7 + 1;
      }
      *v7 = v50;
    }
  }
  if ( v34 > 0 )
  {
    v51 = SLODWORD(a1) > 0;
    LODWORD(a1) = v96;
    do
    {
      while ( 1 )
      {
        v52 = *v7;
        LODWORD(v11) = v11 - 1;
        v53 = a2;
        v54 = *v7 + 1;
        if ( v54 < a2 )
        {
          v53 = v83;
          *(_BYTE *)(v83 + v52) = v96[v11];
          v52 = *v7;
          v54 = *v7 + 1;
        }
        if ( (int)v11 > 0 )
          v53 = v51;
        *v7 = v54;
        if ( (int)v11 <= 0 )
          v53 = 0;
        if ( !v53 )
          break;
        if ( (_DWORD)v11 == 3 * ((unsigned int)v11 / 3) )
        {
          if ( a2 > v52 + 2 )
          {
            *(_BYTE *)(v83 + v54) = 44;
            v54 = *v7;
          }
          *v7 = v54 + 1;
        }
      }
    }
    while ( (_DWORD)v11 );
  }
  if ( v87 )
  {
    LODWORD(a1) = a2;
    v55 = *v7 + 1;
    if ( v55 < a2 )
    {
      LODWORD(a1) = v83;
      *(_BYTE *)(v83 + *v7) = 46;
      v55 = *v7 + 1;
    }
    *v7 = v55;
  }
  if ( v39 > 0 )
  {
    v56 = *v7;
    LODWORD(a1) = 48;
    do
    {
      v57 = v56 + 1 >= a2;
      if ( v56 + 1 >= a2 )
      {
        ++v56;
      }
      else
      {
        *(_BYTE *)(v83 + v56) = 48;
        v56 = *v7;
      }
      if ( !v57 )
        ++v56;
      --v39;
      *v7 = v56;
    }
    while ( v39 );
  }
  if ( v38 > v92 )
  {
    HIDWORD(a1) = *v7;
    v58 = &v97[v38];
    do
    {
      LODWORD(a1) = HIDWORD(a1) + 1;
      --v58;
      v59 = HIDWORD(a1) + 1 >= a2;
      if ( HIDWORD(a1) + 1 >= a2 )
        ++HIDWORD(a1);
      else
        LODWORD(a1) = (unsigned __int8)v58[1];
      if ( !v59 )
      {
        *(_BYTE *)(v83 + HIDWORD(a1)) = LOBYTE(a1);
        HIDWORD(a1) = *v7 + 1;
      }
      *v7 = HIDWORD(a1);
    }
    while ( &v97[v92] != v58 );
  }
  if ( HIDWORD(v11) )
  {
    v60 = *v7;
    LODWORD(a1) = v94;
    do
    {
      v61 = v60 + 1;
      --HIDWORD(v11);
      v62 = v60 + 1 >= a2;
      if ( v60 + 1 >= a2 )
        ++v60;
      else
        v61 = v94[HIDWORD(v11)];
      if ( !v62 )
      {
        *(_BYTE *)(v83 + v60) = v61;
        v60 = *v7 + 1;
      }
      *v7 = v60;
    }
    while ( HIDWORD(v11) );
  }
  if ( v42 )
  {
    v63 = *v7;
    LODWORD(a1) = 32;
    do
    {
      v64 = v63 + 1 >= a2;
      if ( v63 + 1 >= a2 )
      {
        ++v63;
      }
      else
      {
        *(_BYTE *)(v83 + v63) = 32;
        v63 = *v7;
      }
      if ( !v64 )
        ++v63;
      ++v42;
      *v7 = v63;
    }
    while ( v42 );
  }
  return LODWORD(a1);
}

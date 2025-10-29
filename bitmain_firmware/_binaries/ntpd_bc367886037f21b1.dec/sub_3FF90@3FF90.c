int __fastcall sub_3FF90(__int64 a1, int a2, __int16 a3, unsigned __int16 a4, __int16 a5, int a6)
{
  unsigned int v6; // r8
  int v9; // r2
  __int64 *v10; // r6
  __int64 *v11; // r3
  int v12; // lr
  int v13; // r9
  __int64 v14; // r2
  char *v15; // r12
  char v16; // t1
  size_t v17; // r9
  int *v18; // r4
  int v19; // r10
  unsigned int v20; // r3
  __int16 v21; // r3
  int v22; // r2
  bool v23; // zf
  __int16 v24; // r3
  int v25; // r1
  __int64 v26; // r2
  int *v27; // r6
  int k; // r5
  int v29; // r3
  int *v30; // lr
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r3
  unsigned int v35; // r2
  unsigned int v36; // r3
  unsigned int v37; // r2
  unsigned int v38; // r3
  int v39; // r0
  int v40; // r1
  int *i; // r2
  int v42; // r0
  int v43; // r1
  int *j; // r2
  int v46; // [sp+Ch] [bp-40h]
  __int64 v47; // [sp+10h] [bp-3Ch] BYREF
  __int64 v48; // [sp+18h] [bp-34h]
  __int64 v49; // [sp+20h] [bp-2Ch] BYREF
  __int64 v50; // [sp+28h] [bp-24h]
  _DWORD v51[3]; // [sp+30h] [bp-1Ch] BYREF
  __int64 v52; // [sp+3Ch] [bp-10h] BYREF

  v6 = a1;
  LODWORD(a1) = _stack_chk_guard;
  if ( !HIDWORD(a1) )
  {
    if ( a2 )
      sub_6E8F0("ntp_restrict.c", 619, 0, "((void *)0) == resmask");
    if ( v6 != 1 )
      sub_6E8F0("ntp_restrict.c", 620, 0, "RESTRICT_FLAGS == op");
    word_BBBB8 = a5;
    word_BBBBA = a4;
    word_BBBBC = a3;
    dword_BBBC0 = 1;
    return a1;
  }
  v9 = (unsigned __int16)*(_WORD *)HIDWORD(a1);
  v10 = &v47;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  memset(v51, 0, sizeof(v51));
  v52 = 0;
  if ( v9 == 2 )
  {
    LODWORD(a1) = *(_DWORD *)(a2 + 4);
    v17 = 8;
    v46 = 0;
    v20 = bswap32(*(_DWORD *)(HIDWORD(a1) + 4));
    WORD2(v48) = a3;
    LOWORD(v48) = a5;
    LODWORD(v50) = bswap32(a1);
    HIDWORD(v49) = v20 & v50;
    WORD1(v48) = a4;
    LODWORD(v49) = a6;
    v18 = (int *)restrictlist4;
  }
  else
  {
    if ( v9 != 10 )
      sub_6E8F0("ntp_restrict.c", 658, 0, "0");
    v11 = (__int64 *)(a2 + 8);
    v12 = HIDWORD(a1) + 7;
    v13 = HIDWORD(a1) + 23;
    a1 = *v11;
    v14 = v11[1];
    *(_QWORD *)&v51[1] = a1;
    v52 = v14;
    v15 = (char *)&v49 + 3;
    do
    {
      v16 = *(_BYTE *)++v12;
      v15[1] = v16 & v15[17];
      ++v15;
    }
    while ( v12 != v13 );
    WORD2(v48) = a3;
    v17 = 32;
    v46 = 1;
    LOWORD(v48) = a5;
    WORD1(v48) = a4;
    LODWORD(v49) = a6;
    v18 = (int *)restrictlist6;
  }
  if ( v18 )
  {
    do
    {
      v19 = *((unsigned __int16 *)v18 + 5);
      if ( a4 == v19 )
      {
        LODWORD(a1) = memcmp(v18 + 5, (char *)&v49 + 4, v17);
        if ( !(_DWORD)a1 )
        {
          switch ( v6 )
          {
            case 1u:
              v21 = *((_WORD *)v18 + 4);
              if ( (a5 & 0x40) != 0 && (v21 & 0x40) == 0 )
              {
                v22 = dword_BBB40;
                if ( !dword_BBB40 )
                {
                  LODWORD(a1) = sub_309C4(2);
                  v22 = dword_BBB40;
                  v21 = *((_WORD *)v18 + 4);
                }
                dword_BBB40 = v22 + 1;
              }
              *((_WORD *)v18 + 4) = a5 | v21;
              goto LABEL_29;
            case 2u:
              v24 = *((_WORD *)v18 + 4);
              if ( (v24 & 0x40) != 0 && (a5 & 0x40) != 0 && !--dword_BBB40 )
              {
                LODWORD(a1) = sub_30AEC(2u);
                v24 = *((_WORD *)v18 + 4);
              }
              *((_WORD *)v18 + 4) = v24 & ~a5;
              return a1;
            case 3u:
            case 4u:
              if ( v6 == 4 || (v19 & 0x1000) == 0 )
              {
                v23 = v18 == &dword_BBB44;
                if ( v18 != &dword_BBB44 )
                  v23 = v18 == &dword_BBB78;
                if ( !v23 )
                  LODWORD(a1) = sub_3F804((int)v18, v46);
              }
              return a1;
            default:
              goto LABEL_22;
          }
        }
      }
      v18 = (int *)*v18;
    }
    while ( v18 );
    v10 = &v47;
  }
  if ( v6 != 1 )
  {
    if ( !v6 || v6 > 4 )
LABEL_22:
      sub_6E8F0("ntp_restrict.c", 734, 2, "0");
    return a1;
  }
  if ( v46 )
  {
    v18 = (int *)dword_BBB34;
    if ( dword_BBB34 )
    {
      dword_BBB34 = *(_DWORD *)dword_BBB34;
    }
    else
    {
      v39 = sub_638A8(0, 19, 52);
      v40 = dword_BBB34;
      v18 = (int *)v39;
      for ( i = (int *)(v39 + 936); ; i -= 13 )
      {
        *i = v40;
        v40 = (int)i;
        if ( (int *)v39 == i - 13 )
          break;
      }
      dword_BBB34 = (int)i;
    }
    v30 = v18;
    do
    {
      v30 += 4;
      v31 = *(_DWORD *)v10;
      v32 = *((_DWORD *)v10 + 1);
      v33 = *((_DWORD *)v10 + 2);
      v34 = *((_DWORD *)v10 + 3);
      v10 += 2;
      *(v30 - 4) = v31;
      *(v30 - 3) = v32;
      *(v30 - 2) = v33;
      *(v30 - 1) = v34;
    }
    while ( v10 != (__int64 *)((char *)&v52 + 4) );
    LODWORD(a1) = *(_DWORD *)v10;
    *v30 = *(_DWORD *)v10;
    v27 = &restrictlist6;
  }
  else
  {
    v18 = (int *)dword_BBB38;
    if ( dword_BBB38 )
    {
      dword_BBB38 = *(_DWORD *)dword_BBB38;
    }
    else
    {
      v42 = sub_638A8(0, 36, 28);
      v43 = dword_BBB38;
      v18 = (int *)v42;
      for ( j = (int *)(v42 + 980); ; j -= 7 )
      {
        *j = v43;
        v43 = (int)j;
        if ( (int *)v42 == j - 7 )
          break;
      }
      dword_BBB38 = (int)j;
    }
    v25 = HIDWORD(v47);
    v26 = v48;
    *v18 = v47;
    v18[1] = v25;
    v18[2] = v26;
    a1 = v49;
    LODWORD(v26) = v50;
    v18[3] = HIDWORD(v26);
    *((_QWORD *)v18 + 2) = a1;
    v18[6] = v26;
    v27 = &restrictlist4;
  }
  for ( k = *v27; ; k = *(_DWORD *)k )
  {
    if ( !k )
    {
LABEL_49:
      *v18 = k;
      *v27 = (int)v18;
      goto LABEL_50;
    }
    if ( !v46 )
    {
      v35 = v18[5];
      v36 = *(_DWORD *)(k + 20);
      if ( v35 > v36 )
        goto LABEL_49;
      if ( v35 < v36 )
        goto LABEL_64;
      v37 = v18[6];
      v38 = *(_DWORD *)(k + 24);
      if ( v37 > v38 )
        goto LABEL_49;
      if ( v37 < v38 )
        goto LABEL_64;
LABEL_63:
      if ( *((unsigned __int16 *)v18 + 5) > (unsigned int)*(unsigned __int16 *)(k + 10) )
        goto LABEL_49;
      goto LABEL_64;
    }
    LODWORD(a1) = memcmp(v18 + 5, (const void *)(k + 20), 0x10u);
    if ( (int)a1 > 0 )
      goto LABEL_49;
    if ( !(_DWORD)a1 )
    {
      LODWORD(a1) = memcmp(v18 + 9, (const void *)(k + 36), 0x10u);
      if ( (int)a1 > 0 )
        goto LABEL_49;
      if ( !(_DWORD)a1 )
        goto LABEL_63;
    }
LABEL_64:
    v27 = (int *)k;
    if ( !*(_DWORD *)k )
      break;
  }
  *v18 = 0;
  *(_DWORD *)k = v18;
LABEL_50:
  ++dword_BBB3C;
  if ( (a5 & 0x40) != 0 )
  {
    v29 = dword_BBB40;
    if ( !dword_BBB40 )
    {
      LODWORD(a1) = sub_309C4(2);
      v29 = dword_BBB40;
    }
    dword_BBB40 = v29 + 1;
  }
LABEL_29:
  *((_WORD *)v18 + 6) = WORD2(v48);
  return a1;
}

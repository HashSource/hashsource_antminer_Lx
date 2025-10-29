int __fastcall sub_3E7D0(struct sockaddr *a1, int a2, int a3)
{
  char v3; // lr
  char v4; // r3
  unsigned int v5; // r11
  int *v6; // r9
  __int16 v7; // r2
  int *v8; // r5
  int v9; // r3
  bool v10; // zf
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r4
  int *v21; // r3
  int v22; // r2
  __int16 v23; // r2
  Elf32_Dyn **v24; // r2
  int v25; // r3
  unsigned int v26; // r3
  int *v27; // r10
  int *v28; // r6
  char *v29; // r8
  int v30; // r1
  int v31; // r0
  double v32; // d17
  unsigned int v33; // r12
  unsigned int v34; // r1
  int v35; // r7
  unsigned int v36; // r12
  double v37; // d7
  __int64 v38; // r0
  int v39; // r7
  _DWORD *v40; // r5
  __int64 v41; // r0
  char v42; // t1
  char v43; // r3
  int v44; // r1
  double v45; // r0
  double v46; // d0
  double v47; // d0
  double v48; // r0
  double v49; // d16
  double v50; // d0
  double v51; // d9
  double v52; // d0
  unsigned int v53; // r3
  double v54; // d9
  bool v55; // zf
  int *v56; // r3
  int v57; // r0
  int v58; // r1
  int v59; // r2
  int v60; // r3
  int v61; // r1
  int v62; // r2
  int v63; // r3
  int v64; // r2
  unsigned int v66; // [sp+Ch] [bp-60h]
  int *v67; // [sp+10h] [bp-5Ch]
  _DWORD v69[5]; // [sp+28h] [bp-44h] BYREF
  __int64 v70; // [sp+3Ch] [bp-30h]
  int v71; // [sp+44h] [bp-28h]
  int v72; // [sp+48h] [bp-24h]
  int v73; // [sp+4Ch] [bp-20h]
  int v74; // [sp+50h] [bp-1Ch]
  int v75; // [sp+54h] [bp-18h]
  int v76; // [sp+58h] [bp-14h]
  int v77; // [sp+5Ch] [bp-10h]
  int v78; // [sp+60h] [bp-Ch]

  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  if ( (__rev16(*(unsigned __int16 *)(a3 + 6)) & 0xFFF) != 0x20 )
    return sub_3AA2C(a1, a2, v3, v4, 3);
  v5 = *(unsigned __int16 *)(a3 + 4);
  v6 = (int *)(a3 + 8);
  v7 = (__int16)a1;
  byte_BB927 = v4;
  v66 = __rev16(v5) & 0xFFF;
  v8 = &dword_BB92C;
  dword_BBB28 = (int)a1;
  byte_BB926 = v3;
  if ( dword_BBB2C )
    v9 = 280;
  else
    v9 = 240;
  dword_BB91C = v9;
  dword_BBB20 = 0;
  if ( !dword_BBB2C )
    v7 = -4096;
  dword_BB910 = 0;
  if ( dword_BBB2C )
    v7 = 6145;
  dword_BB914 = 0;
  dword_BB918 = 0;
  dword_BBB24 = a2;
  word_BB92A = v7;
  v10 = &dword_BB92C == 0;
  if ( &dword_BB92C )
    v10 = v66 == 0;
  if ( !v10 )
  {
    do
    {
      v11 = *v6;
      v12 = v6[1];
      v13 = v6[2];
      v14 = v6[3];
      memset(v69, 0, sizeof(v69));
      v71 = v11;
      v72 = v12;
      v73 = v13;
      v74 = v14;
      v15 = v6[4];
      v16 = v6[5];
      v17 = v6[6];
      v18 = v6[7];
      v70 = 0;
      v75 = v15;
      v76 = v16;
      v77 = v17;
      v78 = v18;
      HIWORD(v69[0]) = v72;
      if ( dword_BBB2C && v73 )
      {
        LOWORD(v69[0]) = 10;
        v69[2] = v75;
        v69[3] = v76;
        v69[4] = v77;
        LODWORD(v70) = v78;
      }
      else
      {
        LOWORD(v69[0]) = 2;
        v69[1] = v71;
      }
      v6 += 8;
      v19 = sub_31748((unsigned __int16 *)v69, 0, 0, -1, 0, 0);
      v20 = v19;
      if ( v19 )
      {
        v21 = *(int **)(v19 + 56);
        if ( a1->sa_family == 10 )
        {
          if ( v21 )
          {
            if ( *(_BYTE *)(v19 + 72) == 4 )
              v56 = v21 + 22;
            else
              v56 = v21 + 8;
            v57 = *v56;
            v58 = v56[1];
            v59 = v56[2];
            v60 = v56[3];
            v8[62] = v57;
            v8[63] = v58;
            v8[64] = v59;
            v8[65] = v60;
          }
          else
          {
            *((_QWORD *)v8 + 31) = 0;
            *((_QWORD *)v8 + 32) = 0;
          }
          v61 = *(_DWORD *)(v20 + 28);
          v62 = *(_DWORD *)(v20 + 32);
          v63 = *(_DWORD *)(v20 + 36);
          v8[66] = *(_DWORD *)(v20 + 24);
          v8[67] = v61;
          v8[68] = v62;
          v8[69] = v63;
          v8[60] = 1;
        }
        else
        {
          if ( v21 )
          {
            if ( *(_DWORD *)(v19 + 748) )
            {
              if ( *(_BYTE *)(v19 + 72) == 4 || *(_BYTE *)(v19 + 72) && (v64 = v21[7], (*v8 = v64) == 0) )
                *v8 = v21[21];
            }
            else
            {
              *v8 = v21[7];
            }
          }
          else
          {
            *v8 = 0;
          }
          v22 = dword_BBB2C;
          v8[1] = *(_DWORD *)(v19 + 20);
          if ( v22 )
            v8[60] = 0;
        }
        v23 = *(_WORD *)(v20 + 18);
        *((_BYTE *)v8 + 10) = 0;
        *((_WORD *)v8 + 4) = v23;
        v24 = &GLOBAL_OFFSET_TABLE_;
        if ( sys_peer == v20 )
          *((_BYTE *)v8 + 10) = 2;
        v25 = *(_DWORD *)(v20 + 68);
        if ( (v25 & 1) != 0 )
        {
          v24 = (Elf32_Dyn **)(*((unsigned __int8 *)v8 + 10) | 1);
          *((_BYTE *)v8 + 10) = (_BYTE)v24;
        }
        if ( (v25 & 8) != 0 )
        {
          v24 = (Elf32_Dyn **)(*((unsigned __int8 *)v8 + 10) | 8);
          *((_BYTE *)v8 + 10) = (_BYTE)v24;
        }
        if ( (v25 & 0x20) != 0 )
        {
          v24 = (Elf32_Dyn **)(*((unsigned __int8 *)v8 + 10) | 0x10);
          *((_BYTE *)v8 + 10) = (_BYTE)v24;
        }
        if ( (v25 & 0x40) != 0 )
          *((_BYTE *)v8 + 10) |= 4u;
        v26 = *(unsigned __int8 *)(v20 + 296);
        if ( v26 == 4 )
        {
          *((_BYTE *)v8 + 10) |= 0x40u;
        }
        else if ( v26 > 5 )
        {
          *((_BYTE *)v8 + 10) = ~((unsigned int)~(*((unsigned __int8 *)v8 + 10) << 25) >> 25);
        }
        v27 = v8 + 45;
        v28 = v8;
        v29 = (char *)(v20 + 552);
        *((_BYTE *)v8 + 11) = *(_BYTE *)(v20 + 91);
        *((_BYTE *)v8 + 12) = *(_BYTE *)(v20 + 63);
        *((_BYTE *)v8 + 13) = *(_BYTE *)(v20 + 92);
        v8[7] = *(_DWORD *)(v20 + 124);
        *((_BYTE *)v8 + 14) = *(_BYTE *)(v20 + 93);
        *((_BYTE *)v8 + 15) = *(_BYTE *)(v20 + 94);
        *((_BYTE *)v8 + 16) = *(_BYTE *)(v20 + 64);
        *((_BYTE *)v8 + 17) = *(_BYTE *)(v20 + 95);
        *((_BYTE *)v8 + 18) = *(_BYTE *)(v20 + 62);
        *((_BYTE *)v8 + 20) = *(_BYTE *)(v20 + 298);
        *((_BYTE *)v8 + 21) = *(_DWORD *)(v20 + 708);
        v30 = *(_DWORD *)(v20 + 300);
        *((_BYTE *)v8 + 22) = v30;
        v31 = *(_DWORD *)(v20 + 76);
        v32 = *(double *)(v20 + 616);
        *((_WORD *)v8 + 12) = v30;
        *((_BYTE *)v8 + 23) = v31;
        v33 = *(unsigned __int16 *)(v20 + 60);
        v34 = (unsigned int)(*(double *)(v20 + 96) * 65536.0);
        v8[59] = bswap32((int)(v32 * 65536.0));
        *((_WORD *)v8 + 13) = __rev16(v33);
        v8[11] = bswap32(v34);
        v35 = *(_DWORD *)(v20 + 320);
        v36 = *(_DWORD *)(v20 + 568);
        v37 = *(double *)(v20 + 104) * 65536.0;
        v8[9] = *(_DWORD *)(v20 + 112);
        v38 = *(_QWORD *)(v20 + 116);
        v67 = v8;
        v39 = v35 - 1;
        v8[14] = bswap32(HIDWORD(v38));
        HIDWORD(v38) = *(_DWORD *)(v20 + 588);
        v8[13] = bswap32(v38);
        LODWORD(v38) = *(_DWORD *)(v20 + 584);
        v8[16] = bswap32(HIDWORD(v38));
        HIDWORD(v38) = *(_DWORD *)(v20 + 560);
        v8[15] = bswap32(v38);
        v8[17] = bswap32(HIDWORD(v38));
        LODWORD(v38) = *(_DWORD *)(v20 + 572);
        v8[18] = bswap32(*(_DWORD *)(v20 + 564));
        v8[19] = bswap32(v36);
        v8[20] = bswap32(v38);
        v8[12] = bswap32((unsigned int)v37);
        v40 = v8 + 21;
        do
        {
          if ( v39 < 0 )
            v44 = 7;
          else
            v44 = v39;
          HIDWORD(v45) = v20 + 8 * v44;
          if ( v39 < 0 )
            v39 = 6;
          else
            --v39;
          *v40++ = bswap32((int)(*(double *)(HIDWORD(v45) + 328) * 65536.0));
          v46 = *(double *)(HIDWORD(v45) + 392);
          LODWORD(v45) = 32;
          ldexp(v45, (int)v24);
          if ( v46 >= 0.0 )
            v41 = sub_8BBA8(LODWORD(v46), HIDWORD(v46));
          else
            v41 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v46), HIDWORD(COERCE_UNSIGNED_INT64(-v46)));
          v28[29] = bswap32(HIDWORD(v41));
          v27 = (int *)((char *)v27 + 1);
          v28[30] = bswap32(v41);
          v28 += 2;
          v42 = *v29++;
          v43 = *(_DWORD *)(v20 + 320) - v42;
          HIDWORD(v41) = (unsigned __int8)(v43 + 7);
          if ( HIDWORD(v41) > 7 )
            *((_BYTE *)v27 - 1) = v43 - 1;
          else
            *((_BYTE *)v27 - 1) = BYTE4(v41);
        }
        while ( (char *)(v20 + 560) != v29 );
        v47 = *(double *)(v20 + 608);
        LODWORD(v41) = 32;
        ldexp(*(double *)&v41, (int)v24);
        if ( v47 < 0.0 )
          *(_QWORD *)&v48 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v47), HIDWORD(COERCE_UNSIGNED_INT64(-v47)));
        else
          v48 = COERCE_DOUBLE(sub_8BBA8(LODWORD(v47), HIDWORD(v47)));
        v49 = *(double *)(v20 + 616);
        v67[49] = bswap32(HIDWORD(v48));
        LODWORD(v48) = bswap32(LODWORD(v48));
        v67[50] = LODWORD(v48);
        v50 = *(double *)(v20 + 632);
        v51 = sqrt(v50);
        v67[47] = bswap32((int)(v49 * 65536.0));
        if ( v50 < 0.0 )
          v48 = sqrt(v48);
        v52 = *(double *)(v20 + 624);
        v53 = (unsigned int)(v51 * 65536.0);
        v54 = sqrt(v52);
        v67[48] = bswap32(v53);
        if ( v52 < 0.0 )
          sqrt(v48);
        v67[51] = bswap32((unsigned int)(v54 * 65536.0));
        v8 = (int *)sub_3A5E8();
      }
      v66 = (unsigned __int16)(v66 - 1);
      v55 = v8 == 0;
      if ( v8 )
        v55 = v66 == 0;
    }
    while ( !v55 );
  }
  return sub_3AD04();
}

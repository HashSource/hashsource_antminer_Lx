int __fastcall sub_3C0A4(double a1, int a2)
{
  char v2; // lr
  int v3; // r3
  int v4; // r1
  int v5; // r5
  int *v6; // r4
  int v7; // r3
  int v8; // r2
  int v9; // r2
  int v10; // r3
  unsigned int v11; // r3
  double v12; // d0
  __int64 v13; // r0
  double v14; // d0
  double v15; // d8
  bool v16; // zf
  int v17; // lr
  int v18; // r2
  int v19; // r3
  int *v20; // lr
  int v21; // r2
  int v22; // r3
  int v23; // r2

  v2 = *(_BYTE *)(a2 + 2);
  dword_BBB28 = LODWORD(a1);
  LOBYTE(a1) = *(_BYTE *)(a2 + 3);
  v3 = dword_BBB2C;
  dword_BBB24 = HIDWORD(a1);
  if ( dword_BBB2C )
    v4 = 72;
  else
    v4 = 32;
  byte_BB926 = v2;
  dword_BB91C = v4;
  if ( dword_BBB2C )
    HIDWORD(a1) = 18432;
  else
    HIDWORD(a1) = 0x2000;
  byte_BB927 = LOBYTE(a1);
  dword_BBB20 = 0;
  word_BB92A = WORD2(a1);
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  v5 = peer_list;
  if ( peer_list )
  {
    v6 = &dword_BB92C;
    while ( 1 )
    {
      if ( *(_WORD *)(v5 + 16) == 10 )
      {
        if ( !v3 )
          goto LABEL_34;
        v17 = *(_DWORD *)(v5 + 56);
        HIDWORD(a1) = *(_DWORD *)(v5 + 28);
        v18 = *(_DWORD *)(v5 + 32);
        v19 = *(_DWORD *)(v5 + 36);
        v6[14] = *(_DWORD *)(v5 + 24);
        v6[15] = HIDWORD(a1);
        v6[16] = v18;
        v6[17] = v19;
        v6[8] = 1;
        if ( v17 )
        {
          v20 = (int *)(v17 + 32);
          HIDWORD(a1) = v20[1];
          v21 = v20[2];
          v22 = v20[3];
          v6[10] = *v20;
          v6[11] = HIDWORD(a1);
          v6[12] = v21;
          v6[13] = v22;
        }
        else
        {
          *((_QWORD *)v6 + 5) = 0;
          *((_QWORD *)v6 + 6) = 0;
        }
      }
      else
      {
        v16 = v3 == 0;
        v7 = *(_DWORD *)(v5 + 56);
        v8 = *(_DWORD *)(v5 + 20);
        if ( !v16 )
          v6[8] = 0;
        if ( !v7 )
          *v6 = 0;
        v6[1] = v8;
        if ( v7 )
        {
          if ( *(_DWORD *)(v5 + 748) )
          {
            if ( *(_BYTE *)(v5 + 72) == 4 || *(_BYTE *)(v5 + 72) && (v23 = *(_DWORD *)(v7 + 28), (*v6 = v23) == 0) )
              *v6 = *(_DWORD *)(v7 + 84);
          }
          else
          {
            *v6 = *(_DWORD *)(v7 + 28);
          }
        }
      }
      *((_WORD *)v6 + 4) = *(_WORD *)(v5 + 18);
      *((_BYTE *)v6 + 10) = *(_BYTE *)(v5 + 93);
      *((_BYTE *)v6 + 11) = *(_BYTE *)(v5 + 64);
      *((_BYTE *)v6 + 12) = *(_BYTE *)(v5 + 94);
      v9 = *(unsigned __int8 *)(v5 + 298);
      *((_BYTE *)v6 + 14) = 0;
      *((_BYTE *)v6 + 13) = v9;
      if ( sys_peer == v5 )
        *((_BYTE *)v6 + 14) = 2;
      v10 = *(_DWORD *)(v5 + 68);
      if ( (v10 & 1) != 0 )
      {
        v9 = *((unsigned __int8 *)v6 + 14) | 1;
        *((_BYTE *)v6 + 14) = v9;
      }
      if ( (v10 & 8) != 0 )
      {
        v9 = *((unsigned __int8 *)v6 + 14) | 8;
        *((_BYTE *)v6 + 14) = v9;
      }
      if ( (v10 & 0x20) != 0 )
      {
        v9 = *((unsigned __int8 *)v6 + 14) | 0x10;
        *((_BYTE *)v6 + 14) = v9;
      }
      if ( (v10 & 0x40) != 0 )
        *((_BYTE *)v6 + 14) |= 4u;
      v11 = *(unsigned __int8 *)(v5 + 296);
      if ( v11 == 4 )
      {
        *((_BYTE *)v6 + 14) |= 0x40u;
      }
      else if ( v11 > 5 )
      {
        *((_BYTE *)v6 + 14) = ~((unsigned int)~(*((unsigned __int8 *)v6 + 14) << 25) >> 25);
      }
      *((_BYTE *)v6 + 15) = *(_BYTE *)(v5 + 63);
      v12 = *(double *)(v5 + 608);
      v6[4] = bswap32((int)(*(double *)(v5 + 616) * 65536.0));
      LODWORD(a1) = 32;
      ldexp(a1, v9);
      if ( v12 < 0.0 )
        v13 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v12), HIDWORD(COERCE_UNSIGNED_INT64(-v12)));
      else
        v13 = sub_8BBA8(LODWORD(v12), HIDWORD(v12));
      v14 = *(double *)(v5 + 632);
      LODWORD(v13) = bswap32(v13);
      v6[5] = bswap32(HIDWORD(v13));
      v6[6] = v13;
      v15 = sqrt(v14);
      if ( v14 < 0.0 )
        sqrt(*(double *)&v13);
      v6[7] = bswap32((unsigned int)(v15 * 65536.0));
      v6 = (int *)sub_3A5E8();
LABEL_34:
      v5 = *(_DWORD *)v5;
      v16 = v5 == 0;
      if ( v5 )
        v16 = v6 == 0;
      if ( v16 )
        return sub_3AD04();
      v3 = dword_BBB2C;
    }
  }
  return sub_3AD04();
}

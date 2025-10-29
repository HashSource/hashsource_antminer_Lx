int __fastcall sub_3D4E0(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v5; // r5
  char v6; // r1
  unsigned int v7; // r9
  unsigned int *v8; // r8
  signed int v9; // r5
  int *v10; // r4
  __int64 v11; // r0
  int v12; // r2
  double v13; // d0
  unsigned int v14; // r3
  int *v15; // r0
  bool v16; // cc
  unsigned int v17; // r3
  unsigned int v18; // t1
  int v19; // r3
  char v20; // r3
  double v21; // d0
  unsigned int v22; // r1
  unsigned int v23; // r2
  bool v24; // fnf
  unsigned int v25; // r0
  double v26; // r0
  unsigned __int64 v27; // r2
  __int64 v29; // [sp+8h] [bp-84h]
  _BYTE v32[12]; // [sp+20h] [bp-6Ch] BYREF
  unsigned int v33; // [sp+2Ch] [bp-60h]
  unsigned int v34; // [sp+30h] [bp-5Ch]
  unsigned int v35; // [sp+34h] [bp-58h]
  unsigned int v36; // [sp+38h] [bp-54h]
  unsigned int v37; // [sp+3Ch] [bp-50h]
  double v38; // [sp+48h] [bp-44h]
  double v39; // [sp+50h] [bp-3Ch]
  unsigned int v40; // [sp+58h] [bp-34h]
  int v41; // [sp+5Ch] [bp-30h]
  char v42; // [sp+60h] [bp-2Ch]
  char v43; // [sp+61h] [bp-2Bh]
  _WORD *v44; // [sp+64h] [bp-28h]
  int v45; // [sp+68h] [bp-24h] BYREF
  __int64 v46; // [sp+6Ch] [bp-20h]
  __int64 v47; // [sp+74h] [bp-18h]
  double v48; // [sp+7Ch] [bp-10h]

  v5 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
  v6 = *(_BYTE *)(a3 + 3);
  byte_BB926 = *(_BYTE *)(a3 + 2);
  v46 = 0;
  v47 = 0;
  dword_BBB24 = a2;
  byte_BB927 = v6;
  dword_BBB28 = (int)a1;
  dword_BB91C = 52;
  v48 = 0.0;
  word_BB92A = 13312;
  v45 = 2063597570;
  dword_BBB20 = 0;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  if ( !v5 )
    return sub_3AD04();
  v7 = bswap32(*(_DWORD *)(a3 + 8)) & 0xFFFF0000;
  LODWORD(v46) = *(_DWORD *)(a3 + 8);
  v8 = (unsigned int *)(a3 + 12);
  if ( v7 == 2139029504 )
  {
    v9 = v5 - 1;
    v10 = &dword_BB92C;
    while ( sub_31748((unsigned __int16 *)&v45, 0, 0, -1, 0, 0) )
    {
      v44 = 0;
      sub_3A084((unsigned int)&v45, (int)v32, v19);
      *v10 = v46;
      v20 = v32[1];
      *((_BYTE *)v10 + 4) = v32[0];
      *((_BYTE *)v10 + 5) = v20;
      *((_BYTE *)v10 + 6) = v43;
      *((_BYTE *)v10 + 7) = v42;
      v21 = v38;
      v22 = v35;
      v23 = v36;
      v24 = v38 < 0.0;
      v25 = v34;
      v10[2] = bswap32(v33);
      v26 = COERCE_DOUBLE(_byteswap_uint64(__PAIR64__(v25, v22)));
      v27 = _byteswap_uint64(__PAIR64__(v23, v37));
      *(double *)(v10 + 3) = v26;
      *(_QWORD *)(v10 + 5) = v27;
      LODWORD(v26) = 32;
      ldexp(v26, v27);
      if ( v24 )
        v11 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v21), HIDWORD(COERCE_UNSIGNED_INT64(-v21)));
      else
        v11 = sub_8BBA8(LODWORD(v21), HIDWORD(v21));
      v13 = v39;
      v10[7] = bswap32(HIDWORD(v11));
      v10[8] = bswap32(v11);
      LODWORD(v11) = 32;
      ldexp(*(double *)&v11, v12);
      if ( v13 < 0.0 )
        v29 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v13), HIDWORD(COERCE_UNSIGNED_INT64(-v13)));
      else
        v29 = sub_8BBA8(LODWORD(v13), HIDWORD(v13));
      v14 = bswap32(v40);
      v10[12] = v41;
      v10[9] = bswap32(HIDWORD(v29));
      v10[11] = v14;
      v10[10] = bswap32(v29);
      sub_24B90(v44);
      v15 = (int *)sub_3A5E8();
      v16 = (int)v15 <= 0;
      if ( v15 )
        v16 = v9 <= 0;
      v10 = v15;
      if ( v16 )
        return sub_3AD04();
      v18 = *v8++;
      v17 = v18;
      LODWORD(v46) = v18;
      if ( (unsigned __int16)v45 == 2 )
      {
        --v9;
        if ( (bswap32(v17) & 0xFFFF0000) == v7 )
          continue;
      }
      return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
    }
  }
  return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
}

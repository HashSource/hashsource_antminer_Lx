int __fastcall sub_3DA4C(struct sockaddr *a1, int a2, int a3)
{
  char v3; // r12
  unsigned int v4; // r6
  unsigned int v5; // r5
  int v6; // r7
  unsigned int v7; // r5
  int *v8; // r4
  int v9; // r3
  __int16 v10; // r3
  int v11; // r0
  int v12; // r12
  int *v13; // r3
  int *v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  unsigned int v19; // r6
  int v20; // r1
  int v21; // r2
  int v22; // r3
  __int16 v23; // r1
  unsigned int v24; // r3
  int v25; // r2
  unsigned int v26; // lr
  unsigned int v27; // r0
  unsigned int v28; // r1
  unsigned int v29; // r2
  unsigned int v30; // r10
  unsigned int v31; // r3
  unsigned int v32; // r6
  unsigned int v33; // r1
  unsigned int v34; // r3
  unsigned int v35; // r2
  bool v36; // zf
  int v37; // r2
  int v38; // r3
  unsigned int v40; // [sp+8h] [bp-4Ch]
  _BYTE v41[28]; // [sp+10h] [bp-44h] BYREF
  __int64 v42; // [sp+2Ch] [bp-28h] BYREF
  __int64 v43; // [sp+34h] [bp-20h]
  double v44; // [sp+3Ch] [bp-18h]
  double v45; // [sp+44h] [bp-10h]

  v3 = *(_BYTE *)(a3 + 2);
  v4 = __rev16(*(unsigned __int16 *)(a3 + 6)) & 0xFFF;
  if ( v4 > 0x20 )
    return sub_3AA2C(a1, a2, v3, *(_BYTE *)(a3 + 3), 3);
  v5 = *(unsigned __int16 *)(a3 + 4);
  v6 = a3 + 8;
  byte_BB927 = *(_BYTE *)(a3 + 3);
  v7 = __rev16(v5) & 0xFFF;
  dword_BBB28 = (int)a1;
  byte_BB926 = v3;
  v8 = &dword_BB92C;
  if ( dword_BBB2C )
    v9 = 120;
  else
    v9 = 80;
  dword_BBB24 = a2;
  dword_BB91C = v9;
  if ( dword_BBB2C )
    v10 = 30720;
  else
    v10 = 20480;
  dword_BBB20 = 0;
  dword_BB910 = 0;
  word_BB92A = v10;
  dword_BB914 = 0;
  dword_BB918 = 0;
  v40 = v4;
  while ( 1 )
  {
    v36 = v8 == 0;
    if ( v8 )
      v36 = v7 == 0;
    if ( v36 )
      break;
    v42 = 0;
    v43 = 0;
    v44 = 0.0;
    v45 = 0.0;
    _memcpy_chk(&v42, v6);
    memset(v41, 0, sizeof(v41));
    *(_WORD *)&v41[2] = WORD2(v42);
    if ( dword_BBB2C && (_DWORD)v43 )
    {
      strcpy(v41, "\n");
      *(double *)&v41[8] = v44;
      *(double *)&v41[16] = v45;
    }
    else
    {
      *(_WORD *)v41 = 2;
      *(_DWORD *)&v41[4] = v42;
    }
    v6 += v40;
    v11 = sub_31748((unsigned __int16 *)v41, 0, 0, -1, 0, 0);
    v12 = v11;
    if ( v11 )
    {
      v13 = *(int **)(v11 + 56);
      if ( *(_WORD *)(v11 + 16) == 2 )
      {
        v19 = *(_DWORD *)(v11 + 748);
        if ( v13 )
        {
          if ( v19 )
          {
            if ( *(_BYTE *)(v11 + 72) == 4 || *(_BYTE *)(v11 + 72) && (v37 = v13[7], (*v8 = v37) == 0) )
              *v8 = v13[21];
          }
          else
          {
            *v8 = v13[7];
          }
        }
        else
        {
          *v8 = 0;
        }
        v38 = dword_BBB2C;
        v8[1] = *(_DWORD *)(v11 + 20);
        if ( v38 )
          v8[20] = 0;
      }
      else
      {
        if ( v13 )
        {
          if ( *(_BYTE *)(v11 + 72) == 4 )
            v14 = v13 + 22;
          else
            v14 = v13 + 8;
          v15 = *v14;
          v16 = v14[1];
          v17 = v14[2];
          v18 = v14[3];
          v8[22] = v15;
          v8[23] = v16;
          v8[24] = v17;
          v8[25] = v18;
        }
        else
        {
          *((_QWORD *)v8 + 11) = 0;
          *((_QWORD *)v8 + 12) = 0;
        }
        v19 = *(_DWORD *)(v12 + 748);
        v20 = *(_DWORD *)(v12 + 28);
        v21 = *(_DWORD *)(v12 + 32);
        v22 = *(_DWORD *)(v12 + 36);
        v8[26] = *(_DWORD *)(v12 + 24);
        v8[27] = v20;
        v8[28] = v21;
        v8[29] = v22;
        v8[20] = 1;
      }
      v23 = *(_WORD *)(v12 + 18);
      v24 = 0;
      *((_WORD *)v8 + 5) = 0;
      *((_WORD *)v8 + 4) = v23;
      v25 = *(_DWORD *)(v12 + 68);
      if ( sys_peer == v12 )
      {
        *((_WORD *)v8 + 5) = 2;
        v24 = 2;
      }
      if ( (v25 & 1) != 0 )
      {
        v24 |= 1u;
        *((_WORD *)v8 + 5) = v24;
      }
      if ( (v25 & 8) != 0 )
      {
        v24 |= 8u;
        *((_WORD *)v8 + 5) = v24;
      }
      if ( (v25 & 0x20) != 0 )
      {
        v24 |= 0x10u;
        *((_WORD *)v8 + 5) = v24;
      }
      if ( (v25 & 0x40) != 0 )
      {
        v24 |= 4u;
        *((_WORD *)v8 + 5) = v24;
      }
      if ( (v25 & 0x100) != 0 )
      {
        v24 |= 0x100u;
        *((_WORD *)v8 + 5) = v24;
      }
      v26 = *(unsigned __int8 *)(v12 + 296);
      if ( v26 == 4 )
      {
        v24 |= 0x40u;
      }
      else if ( v26 > 5 )
      {
        v24 |= 0x80u;
      }
      *((_WORD *)v8 + 5) = __rev16(v24);
      v27 = *(_DWORD *)(v12 + 740);
      v28 = current_time - *(_DWORD *)(v12 + 732);
      v29 = *(_DWORD *)(v12 + 720) - current_time;
      v30 = *(_DWORD *)(v12 + 752);
      v8[6] = bswap32(current_time - *(_DWORD *)(v12 + 736));
      v31 = *(_DWORD *)(v12 + 760);
      v8[9] = bswap32(v19);
      v8[4] = bswap32(v28);
      v32 = bswap32(v31);
      v33 = *(_DWORD *)(v12 + 764);
      v34 = *(_DWORD *)(v12 + 772);
      v8[5] = bswap32(v29);
      v35 = *(_DWORD *)(v12 + 768);
      v8[7] = bswap32(v27);
      v8[11] = bswap32(v30);
      v8[12] = v32;
      v8[13] = bswap32(v33);
      *((_QWORD *)v8 + 8) = _byteswap_uint64(__PAIR64__(v35, v34));
      *((_BYTE *)v8 + 76) = v26;
      v8 = (int *)sub_3A5E8();
    }
    v7 = (unsigned __int16)(v7 - 1);
  }
  return sub_3AD04();
}

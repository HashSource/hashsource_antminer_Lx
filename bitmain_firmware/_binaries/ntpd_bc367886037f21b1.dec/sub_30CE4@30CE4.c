int __fastcall sub_30CE4(int a1, int a2)
{
  int v5; // r0
  unsigned int v6; // r11
  int v7; // r0
  int v8; // r4
  int *v9; // r8
  int v10; // r11
  int v11; // r0
  unsigned int v12; // r1
  __int16 v13; // r10
  int v14; // lr
  int v15; // r3
  unsigned int v16; // r6
  __int64 v17; // r8
  int v18; // r12
  int v19; // r12
  int v20; // lr
  int v21; // r12
  int v22; // r3
  int v23; // lr
  int v24; // r8
  int v25; // r1
  int v26; // r0
  _BOOL4 v27; // r3
  float v28; // r3
  int v29; // r4
  unsigned int v30; // r3
  int v31; // r0
  int v32; // r1
  unsigned int v33; // r12
  int v34; // r1
  int v35; // r2
  int v36; // r12
  int v37; // r0
  int v38; // r1
  _DWORD *v39; // r3
  int v40; // r2
  bool v41; // zf
  int v42; // r2
  char v43; // r3
  int v44; // r3
  _DWORD *v45; // r10
  int v46; // r2
  int v47; // r3
  _DWORD *v48; // r0
  int v49; // r3
  char v50; // [sp+8h] [bp-24h]
  char v51; // [sp+8h] [bp-24h]
  int v52; // [sp+Ch] [bp-20h]
  int v53; // [sp+14h] [bp-18h]

  if ( !a1 )
    sub_6E8F0("ntp_monitor.c", 328, 0, "rbufp != ((void *)0)");
  if ( !mon_enabled )
    return a2 & 0xF7BF;
  v5 = sub_6C1C4(a1 + 4);
  v6 = *(unsigned __int8 *)(a1 + 88);
  v50 = v6 & 7;
  v52 = (v6 >> 3) & 7;
  v7 = v5 & ~(-1 << mon_hash_bits);
  v8 = *(_DWORD *)(mon_hash + 4 * v7);
  v9 = (int *)(mon_hash + 4 * v7);
  v53 = 4 * v7;
  if ( v8 )
  {
    v10 = *(unsigned __int16 *)(a1 + 4);
    while ( 1 )
    {
      if ( *(unsigned __int16 *)(v8 + 44) != v10 )
        goto LABEL_7;
      if ( v10 == 2 )
      {
        if ( *(_DWORD *)(v8 + 48) == *(_DWORD *)(a1 + 8) )
          goto LABEL_12;
        v8 = *(_DWORD *)v8;
        if ( !v8 )
          break;
      }
      else
      {
        if ( !memcmp((const void *)(v8 + 52), (const void *)(a1 + 12), 0x10u)
          && *(_DWORD *)(v8 + 68) == *(_DWORD *)(a1 + 28) )
        {
LABEL_12:
          v11 = *(_DWORD *)(a1 + 72);
          v12 = *(_DWORD *)(a1 + 76);
          v13 = *(_WORD *)(a1 + 6);
          v14 = v11 - *(_DWORD *)(v8 + 24);
          v15 = v12;
          v16 = *(_DWORD *)(v8 + 28);
          v17 = *(_QWORD *)(v8 + 4);
          *(_DWORD *)(v8 + 24) = v11;
          *(_DWORD *)(v8 + 28) = v12;
          v18 = *(_DWORD *)(v8 + 36);
          *(_BYTE *)(v8 + 42) = v50 | (8 * v52);
          if ( v12 >= v16 )
            v15 = 0;
          *(_WORD *)(v8 + 46) = v13;
          v19 = v18 + 1;
          if ( v12 < v16 )
            v15 = 1;
          *(_DWORD *)(v8 + 36) = v19;
          *(_DWORD *)(v17 + 8) = HIDWORD(v17);
          v20 = v14 + ((v12 - v16) >> 31) - v15;
          v21 = v20 + 1;
          v22 = *(_DWORD *)(v8 + 32);
          *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4) = v17;
          v23 = (v22 - v20) & ~((v22 - v20) >> 31);
          v24 = dword_107314;
          *(_DWORD *)(v8 + 4) = &mon_mru_list;
          *(_DWORD *)(v8 + 8) = v24;
          *(_DWORD *)(dword_107314 + 4) = v8;
          dword_107314 = v8;
          *(_DWORD *)(v8 + 32) = v23;
          v25 = 8 << ntp_minpoll;
          v26 = v23 + (1 << ntp_minpoll);
          v27 = v21 >= ntp_minpkt;
          if ( v26 >= 8 << ntp_minpoll )
            v27 = 0;
          if ( v27 )
          {
            *(_DWORD *)(v8 + 32) = v26 - 2;
            a2 &= 0xF7BFu;
          }
          else
          {
            if ( v23 < v25 )
              *(_DWORD *)(v8 + 32) = (1 << ntp_minpoll) + v25;
            else
              a2 &= ~0x800u;
            if ( v23 >= v25 )
              a2 = (unsigned __int16)a2;
          }
          *(_WORD *)(v8 + 40) = a2;
          return a2;
        }
LABEL_7:
        v8 = *(_DWORD *)v8;
        if ( !v8 )
          break;
      }
    }
  }
  v28 = mru_entries;
  if ( LODWORD(mru_entries) >= (unsigned int)mru_mindepth )
  {
    v45 = (_DWORD *)dword_107310;
    v46 = dword_107310 != (_DWORD)&mon_mru_list;
    if ( !dword_107310 )
      v46 = 0;
    if ( v46 )
    {
      v46 = *(_DWORD *)(a1 + 72)
          - *(_DWORD *)(dword_107310 + 24)
          + ((__PAIR64__(
                (unsigned int)(*(_DWORD *)(a1 + 76) - *(_DWORD *)(dword_107310 + 28)) >> 31,
                *(_DWORD *)(a1 + 76))
            - *(unsigned int *)(dword_107310 + 28)) >> 32);
      if ( (int)mru_maxage < v46 )
      {
        v47 = *(_DWORD *)(dword_107310 + 4);
        v48 = (_DWORD *)dword_107310;
        v29 = dword_107310;
        a2 &= 0xF7BFu;
        *(_DWORD *)(v47 + 8) = *(_DWORD *)(dword_107310 + 8);
        *(_DWORD *)(v45[2] + 4) = v47;
        sub_30834(v48);
        memset(v45, 0, 0x48u);
        v9 = (int *)(mon_hash + v53);
        v28 = mru_entries;
        goto LABEL_30;
      }
    }
    else
    {
      v45 = 0;
    }
    v29 = dword_B9E94;
    if ( !dword_B9E94 )
    {
      if ( mru_alloc >= (unsigned int)mru_maxdepth )
      {
        if ( (double)sub_686F8(mru_alloc, &dword_B9E90) * 1.16415322e-10 > (double)v46 / (double)(int)mon_age )
          return a2 & 0xF7BF;
        v49 = v45[1];
        a2 &= 0xF7BFu;
        *(_DWORD *)(v49 + 8) = v45[2];
        *(_DWORD *)(v45[2] + 4) = v49;
        sub_30834(v45);
        memset(v45, 0, 0x48u);
        v29 = (int)v45;
        v9 = (int *)(mon_hash + v53);
        v28 = mru_entries;
        goto LABEL_30;
      }
      sub_30728();
      v29 = dword_B9E94;
      if ( !dword_B9E94 )
        goto LABEL_50;
      v9 = (int *)(mon_hash + v53);
      v28 = mru_entries;
    }
    a2 &= 0xF7BFu;
    dword_B9E94 = *(_DWORD *)v29;
    goto LABEL_30;
  }
  v29 = dword_B9E94;
  if ( !dword_B9E94 )
  {
    sub_30728();
    v29 = dword_B9E94;
    if ( !dword_B9E94 )
LABEL_50:
      sub_6E8F0("ntp_monitor.c", 471, 2, "mon != ((void *)0)");
  }
  a2 &= 0xF7BFu;
  dword_B9E94 = *(_DWORD *)v29;
  v9 = (int *)(mon_hash + v53);
  v28 = mru_entries;
LABEL_30:
  v30 = LODWORD(v28) + 1;
  LODWORD(mru_entries) = v30;
  v51 = v50 | (8 * v52);
  v31 = *(_DWORD *)(a1 + 72);
  v32 = *(_DWORD *)(a1 + 76);
  v33 = mru_peakentries;
  *(_DWORD *)(v29 + 24) = v31;
  *(_DWORD *)(v29 + 28) = v32;
  *(_DWORD *)(v29 + 16) = v31;
  *(_DWORD *)(v29 + 20) = v32;
  *(_WORD *)(v29 + 40) = a2;
  *(_DWORD *)(v29 + 36) = 1;
  if ( v33 >= v30 )
    v30 = v33;
  *(_DWORD *)(v29 + 32) = 0;
  mru_peakentries = v30;
  v34 = *(_DWORD *)(a1 + 8);
  v35 = *(_DWORD *)(a1 + 12);
  v36 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(v29 + 44) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(v29 + 48) = v34;
  *(_DWORD *)(v29 + 52) = v35;
  *(_DWORD *)(v29 + 56) = v36;
  v37 = *(_DWORD *)(a1 + 20);
  v38 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v29 + 68) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(v29 + 60) = v37;
  *(_DWORD *)(v29 + 64) = v38;
  *(_BYTE *)(v29 + 42) = v51;
  v39 = *(_DWORD **)(a1 + 60);
  v40 = v39[36];
  *(_DWORD *)(v29 + 12) = v39;
  v41 = (v40 & 0x40) == 0;
  v42 = *(_DWORD *)(a1 + 64);
  if ( v41 || v42 != v39[3] )
  {
    if ( v39[4] == v42 )
      v43 = 4;
    else
      v43 = 1;
  }
  else
  {
    v43 = 2;
  }
  *(_BYTE *)(v29 + 43) = v43;
  *(_DWORD *)v29 = *v9;
  *v9 = v29;
  v44 = dword_107314;
  *(_DWORD *)(v29 + 4) = &mon_mru_list;
  *(_DWORD *)(v29 + 8) = v44;
  *(_DWORD *)(dword_107314 + 4) = v29;
  dword_107314 = v29;
  return a2;
}

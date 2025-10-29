int __fastcall sub_3E214(struct sockaddr *a1, int a2, int a3)
{
  char v3; // r5
  char v4; // r2
  unsigned int v5; // r5
  int v6; // lr
  __int16 v7; // r2
  int *v8; // r12
  _WORD *v9; // r4
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r0
  unsigned int v18; // r1
  unsigned int v19; // r3
  _BOOL4 v20; // r3
  unsigned int v21; // lr
  int v22; // r2
  int v23; // r1
  int v24; // r3

  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  if ( num_ctl_traps )
  {
    byte_BB926 = v3;
    byte_BB927 = v4;
    dword_BBB24 = a2;
    dword_BBB28 = (int)a1;
    v5 = 0;
    if ( dword_BBB2C )
      v6 = 64;
    else
      v6 = 28;
    if ( dword_BBB2C )
      v7 = 0x4000;
    else
      v7 = 7168;
    dword_BB91C = v6;
    word_BB92A = v7;
    v8 = &dword_BB92C;
    dword_BBB20 = 0;
    dword_BB910 = 0;
    dword_BB914 = 0;
    dword_BB918 = 0;
    v9 = &unk_1071C8;
    while ( 1 )
    {
      v21 = *((unsigned __int8 *)v9 - 2);
      if ( (v21 & 1) == 0 )
        goto LABEL_12;
      v22 = dword_BBB2C;
      if ( *(v9 - 26) == 2 )
        break;
      if ( dword_BBB2C )
      {
        v10 = *(_DWORD *)(*((_DWORD *)v9 - 6) + 36);
        v11 = *(_DWORD *)(*((_DWORD *)v9 - 6) + 40);
        v12 = *(_DWORD *)(*((_DWORD *)v9 - 6) + 44);
        v8[8] = *(_DWORD *)(*((_DWORD *)v9 - 6) + 32);
        v8[9] = v10;
        v8[10] = v11;
        v8[11] = v12;
        v13 = *((_DWORD *)v9 - 10);
        v14 = *((_DWORD *)v9 - 9);
        v15 = *((_DWORD *)v9 - 8);
        v8[12] = *((_DWORD *)v9 - 11);
        v8[13] = v13;
        v8[14] = v14;
        v8[15] = v15;
        v8[7] = 1;
LABEL_11:
        v16 = *((_DWORD *)v9 - 5);
        *((_WORD *)v8 + 4) = *(v9 - 25);
        v17 = *((_DWORD *)v9 - 3);
        *((_WORD *)v8 + 5) = __rev16((unsigned __int16)*(v9 - 2));
        v18 = *((_DWORD *)v9 - 2);
        v8[6] = bswap32(v21);
        v19 = bswap32(current_time - v17);
        v8[3] = bswap32(current_time - v16);
        v8[4] = v19;
        v8[5] = bswap32(v18);
        v8 = (int *)sub_3A5E8();
      }
LABEL_12:
      ++v5;
      v9 += 26;
      v20 = v5 <= 2;
      if ( !v8 )
        v20 = 0;
      if ( !v20 )
        return sub_3AD04();
    }
    v23 = *((_DWORD *)v9 - 6);
    if ( v23 == any_interface )
      v24 = 0;
    else
      v24 = *(_DWORD *)(v23 + 28);
    *v8 = v24;
    v8[1] = *((_DWORD *)v9 - 12);
    if ( v22 )
      v8[7] = 0;
    goto LABEL_11;
  }
  return sub_3AA2C(a1, a2, v3, v4, 4);
}

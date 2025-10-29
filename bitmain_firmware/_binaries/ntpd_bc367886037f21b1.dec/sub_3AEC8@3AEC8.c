int __fastcall sub_3AEC8(int a1, int a2, int a3)
{
  char v3; // r4
  char v4; // r0
  int v5; // r3
  int v6; // r1
  __int16 v7; // r1
  int v8; // r4
  int *v9; // r12
  int v10; // r2
  char v11; // r3
  unsigned int v12; // r3
  bool v13; // zf
  int v14; // r1
  int v15; // r2
  int v16; // r3

  v3 = *(_BYTE *)(a3 + 2);
  dword_BBB28 = a1;
  v4 = *(_BYTE *)(a3 + 3);
  v5 = dword_BBB2C;
  dword_BBB24 = a2;
  if ( dword_BBB2C )
    v6 = 32;
  else
    v6 = 8;
  byte_BB926 = v3;
  dword_BB91C = v6;
  if ( dword_BBB2C )
    v7 = 0x2000;
  else
    v7 = 2048;
  byte_BB927 = v4;
  dword_BBB20 = 0;
  word_BB92A = v7;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  v8 = peer_list;
  if ( peer_list )
  {
    v9 = &dword_BB92C;
    while ( 1 )
    {
      if ( *(_WORD *)(v8 + 16) == 10 )
      {
        if ( !v5 )
          goto LABEL_20;
        v14 = *(_DWORD *)(v8 + 28);
        v15 = *(_DWORD *)(v8 + 32);
        v16 = *(_DWORD *)(v8 + 36);
        v9[4] = *(_DWORD *)(v8 + 24);
        v9[5] = v14;
        v9[6] = v15;
        v9[7] = v16;
        v9[2] = 1;
      }
      else
      {
        v10 = *(_DWORD *)(v8 + 20);
        if ( v5 )
          v9[2] = 0;
        *v9 = v10;
      }
      *((_WORD *)v9 + 2) = *(_WORD *)(v8 + 18);
      v11 = *(_BYTE *)(v8 + 63);
      *((_BYTE *)v9 + 7) = 0;
      *((_BYTE *)v9 + 6) = v11;
      if ( (*(_DWORD *)(v8 + 68) & 1) != 0 )
        *((_BYTE *)v9 + 7) = 1;
      if ( sys_peer == v8 )
        *((_BYTE *)v9 + 7) |= 2u;
      v12 = *(unsigned __int8 *)(v8 + 296);
      if ( v12 == 4 )
      {
        *((_BYTE *)v9 + 7) |= 0x40u;
      }
      else if ( v12 > 5 )
      {
        *((_BYTE *)v9 + 7) |= 0x80u;
      }
      v9 = (int *)sub_3A5E8();
LABEL_20:
      v8 = *(_DWORD *)v8;
      v13 = v8 == 0;
      if ( v8 )
        v13 = v9 == 0;
      if ( v13 )
        return sub_3AD04();
      v5 = dword_BBB2C;
    }
  }
  return sub_3AD04();
}

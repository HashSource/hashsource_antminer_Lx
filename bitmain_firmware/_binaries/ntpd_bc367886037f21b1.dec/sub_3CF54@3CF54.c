int __fastcall sub_3CF54(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v5; // r5
  char v6; // r1
  unsigned int v7; // r9
  unsigned int *v8; // r8
  signed int v9; // r5
  int *v10; // r4
  __int64 v11; // r0
  int v12; // r2
  int v13; // r1
  int v14; // r3
  int v15; // r3
  unsigned int *v16; // r0
  int *v17; // r3
  unsigned int v18; // t1
  int v19; // r2
  int v20; // r3
  int v21; // r3
  unsigned int *v22; // r9
  int *v23; // r3
  unsigned int v24; // r2
  int *v25; // r0
  _BOOL4 v26; // r3
  unsigned int v27; // r3
  unsigned int v28; // t1
  int v32; // [sp+18h] [bp-16Ch] BYREF
  __int64 v33; // [sp+1Ch] [bp-168h]
  __int64 v34; // [sp+24h] [bp-160h]
  double v35; // [sp+2Ch] [bp-158h]
  unsigned int s[82]; // [sp+34h] [bp-150h] BYREF

  v5 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
  v6 = *(_BYTE *)(a3 + 3);
  byte_BB926 = *(_BYTE *)(a3 + 2);
  v33 = 0;
  v34 = 0;
  dword_BBB24 = a2;
  byte_BB927 = v6;
  dword_BBB28 = (int)a1;
  dword_BB91C = 332;
  v35 = 0.0;
  word_BB92A = 19457;
  v32 = 2063597570;
  dword_BBB20 = 0;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  if ( !v5 )
    return sub_3AD04();
  v7 = bswap32(*(_DWORD *)(a3 + 8)) & 0xFFFF0000;
  LODWORD(v33) = *(_DWORD *)(a3 + 8);
  v8 = (unsigned int *)(a3 + 12);
  if ( v7 == 2139029504 )
  {
    v9 = v5 - 1;
    v10 = &dword_BB92C;
    while ( sub_31748((unsigned __int16 *)&v32, 0, 0, -1, 0, 0) )
    {
      memset(s, 0, sizeof(s));
      HIDWORD(v11) = s;
      LODWORD(v11) = &v32;
      sub_3A368(v11);
      if ( !LOWORD(s[0]) )
        break;
      v12 = HIWORD(s[0]);
      *v10 = v33;
      v13 = LOBYTE(s[0]);
      if ( LOBYTE(s[0]) >= 0x10u )
        v14 = 16;
      else
        v14 = LOBYTE(s[0]);
      *((_BYTE *)v10 + 4) = v14;
      *((_WORD *)v10 + 3) = __rev16(v12 & ~(-1 << v14));
      if ( v13 )
      {
        v15 = v14 + 1;
        v16 = &s[v15 + 1];
        v17 = &v10[v15 + 2];
        do
        {
          v18 = *--v16;
          *--v17 = bswap32(v18);
        }
        while ( v17 != v10 + 3 );
      }
      v19 = BYTE1(s[0]);
      if ( BYTE1(s[0]) >= 0x20u )
        v20 = 32;
      else
        v20 = BYTE1(s[0]);
      *((_BYTE *)v10 + 5) = v20;
      v10[2] = bswap32(s[1]);
      if ( v19 )
      {
        v21 = 2 * v20;
        v22 = &s[v21];
        v23 = &v10[v21];
        do
        {
          v24 = v22[16];
          v23 -= 2;
          v22 -= 2;
          v23[19] = bswap32(v24);
          v23[20] = bswap32(v22[19]);
        }
        while ( v10 != v23 );
      }
      v25 = (int *)sub_3A5E8();
      v26 = v9 > 0;
      v10 = v25;
      if ( !v25 )
        v26 = 0;
      if ( !v26 )
        return sub_3AD04();
      v28 = *v8++;
      v27 = v28;
      LODWORD(v33) = v28;
      if ( (unsigned __int16)v32 == 2 )
      {
        --v9;
        if ( (bswap32(v27) & 0xFFFF0000) == 0x7F7F0000 )
          continue;
      }
      return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
    }
  }
  return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
}

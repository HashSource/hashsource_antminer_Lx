int __fastcall sub_3D7B8(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v3; // r5
  bool v4; // zf
  unsigned int v5; // r4
  int v6; // r6
  int v7; // r12
  unsigned int v8; // r3
  _BOOL4 v9; // r2
  __int64 v14; // [sp+30h] [bp-CCh] BYREF
  unsigned int v15; // [sp+38h] [bp-C4h]
  __int64 v16; // [sp+3Ch] [bp-C0h]
  __int64 v17; // [sp+44h] [bp-B8h]
  unsigned int s[42]; // [sp+4Ch] [bp-B0h] BYREF

  v3 = __rev16(*(unsigned __int16 *)(a3 + 6)) & 0xFFF;
  if ( v3 > 0xA8 )
    return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v5 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
  v4 = v5 == 0;
  LOWORD(v5) = v5 - 1;
  if ( v4 )
    return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
  v6 = a3 + 8;
  while ( 1 )
  {
    memset(s, 0, sizeof(s));
    _memcpy_chk(s, v6);
    if ( (s[2] & 2) != 0 )
      v7 = 32;
    else
      v7 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    if ( (s[2] & 4) != 0 )
      v7 |= 0x40u;
    if ( (s[2] & 8) != 0 )
      v7 |= 0x100u;
    if ( (s[2] & 0x20) != 0 )
      v7 |= 0x800u;
    if ( dword_BBB2C && s[36] )
    {
      LOWORD(v14) = 10;
      v15 = s[38];
      v16 = *(_QWORD *)&s[39];
      LODWORD(v17) = s[41];
    }
    else
    {
      LOWORD(v14) = 2;
      v8 = bswap32(s[0]);
      HIDWORD(v14) = s[0];
      if ( (v8 & 0xFFFF0000) != 0x7F7F0000 )
      {
        v9 = (v8 & 0xFF000000) == 2130706432;
        if ( v8 == 2130706433 )
          v9 = 0;
        if ( v9 )
          return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
      }
    }
    WORD1(v14) = 31488;
    if ( LOBYTE(s[1]) > 6u )
      return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
    if ( !sub_3259C(&v14, 0, 0, -1, s[1], SBYTE1(s[1]), BYTE2(s[1]), HIBYTE(s[1]), v7, BYTE1(s[2]), s[3], 0) )
      break;
    v6 += v3;
    v5 = (unsigned __int16)(v5 - 1);
    if ( v5 == 0xFFFF )
      return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
  }
  return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
}

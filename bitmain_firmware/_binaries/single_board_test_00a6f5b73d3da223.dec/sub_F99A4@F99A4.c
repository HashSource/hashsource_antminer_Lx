int __fastcall sub_F99A4(int a1, int a2)
{
  __int64 v2; // r0
  _QWORD *v3; // r0
  __int64 v4; // kr58_8
  __int64 v5; // kr60_8
  int v6; // r4
  _QWORD v10[16]; // [sp+30h] [bp+8h] BYREF
  _QWORD s[16]; // [sp+B0h] [bp+88h] BYREF
  int m; // [sp+130h] [bp+108h]
  int k; // [sp+134h] [bp+10Ch]
  int j; // [sp+138h] [bp+110h]
  int i; // [sp+13Ch] [bp+114h]
  _BYTE v16[4]; // [sp+140h] [bp+118h] BYREF

  memset(s, 0, sizeof(s));
  memset(v10, 0, sizeof(v10));
  for ( i = 0; i <= 7; ++i )
  {
    *(_QWORD *)&v16[8 * i - 144] = *(_QWORD *)(8 * i + a1);
    *(_QWORD *)&v16[8 * i - 80] = *(_QWORD *)&dword_1EF838[2 * i];
  }
  s[12] ^= 0x40uLL;
  s[14] = ~s[14];
  for ( j = 0; j <= 7; ++j )
  {
    v2 = sub_F9438((unsigned __int8 *)(a2 + 8 * j));
    v10[j] = v2;
  }
  for ( k = 0; k <= 15; ++k )
  {
    sub_F953C(
      (int)s,
      0,
      4,
      8,
      12,
      v10[byte_1EF878[16 * k + 1]],
      v10[byte_1EF878[16 * k]],
      qword_1EF978[byte_1EF878[16 * k + 1]],
      qword_1EF978[byte_1EF878[16 * k]]);
    sub_F953C(
      (int)s,
      1,
      5,
      9,
      13,
      v10[byte_1EF878[16 * k + 3]],
      v10[byte_1EF878[16 * k + 2]],
      qword_1EF978[byte_1EF878[16 * k + 3]],
      qword_1EF978[byte_1EF878[16 * k + 2]]);
    sub_F953C(
      (int)s,
      2,
      6,
      10,
      14,
      v10[byte_1EF878[16 * k + 5]],
      v10[byte_1EF878[16 * k + 4]],
      qword_1EF978[byte_1EF878[16 * k + 5]],
      qword_1EF978[byte_1EF878[16 * k + 4]]);
    sub_F953C(
      (int)s,
      3,
      7,
      11,
      15,
      v10[byte_1EF878[16 * k + 7]],
      v10[byte_1EF878[16 * k + 6]],
      qword_1EF978[byte_1EF878[16 * k + 7]],
      qword_1EF978[byte_1EF878[16 * k + 6]]);
    sub_F953C(
      (int)s,
      0,
      5,
      10,
      15,
      v10[byte_1EF878[16 * k + 9]],
      v10[byte_1EF878[16 * k + 8]],
      qword_1EF978[byte_1EF878[16 * k + 9]],
      qword_1EF978[byte_1EF878[16 * k + 8]]);
    sub_F953C(
      (int)s,
      1,
      6,
      11,
      12,
      v10[byte_1EF878[16 * k + 11]],
      v10[byte_1EF878[16 * k + 10]],
      qword_1EF978[byte_1EF878[16 * k + 11]],
      qword_1EF978[byte_1EF878[16 * k + 10]]);
    sub_F953C(
      (int)s,
      2,
      7,
      8,
      13,
      v10[byte_1EF878[16 * k + 13]],
      v10[byte_1EF878[16 * k + 12]],
      qword_1EF978[byte_1EF878[16 * k + 13]],
      qword_1EF978[byte_1EF878[16 * k + 12]]);
    sub_F953C(
      (int)s,
      3,
      4,
      9,
      14,
      v10[byte_1EF878[16 * k + 15]],
      v10[byte_1EF878[16 * k + 14]],
      qword_1EF978[byte_1EF878[16 * k + 15]],
      qword_1EF978[byte_1EF878[16 * k + 14]]);
  }
  for ( m = 0; m <= 7; ++m )
  {
    v3 = (_QWORD *)(a1 + 8 * m);
    *v3 ^= *(_QWORD *)&v16[8 * m - 80] ^ *(_QWORD *)&v16[8 * m - 144];
  }
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 48);
  v6 = HIDWORD(v5) ^ HIDWORD(v4) ^ *(_DWORD *)(a1 + 4);
  *(_DWORD *)a1 ^= v5 ^ (unsigned int)v4;
  *(_DWORD *)(a1 + 4) = v6;
  *(_QWORD *)(a1 + 8) ^= *(_QWORD *)(a1 + 56) ^ *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 16) ^= *(_QWORD *)(a1 + 40);
  return a1 + 16;
}

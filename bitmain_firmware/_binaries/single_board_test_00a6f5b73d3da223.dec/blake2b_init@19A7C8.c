int __fastcall blake2b_init(int a1, unsigned int a2, int a3, unsigned int a4)
{
  int v5; // r4
  unsigned int i; // [sp+14h] [bp+14h]
  unsigned int j; // [sp+14h] [bp+14h]

  if ( !a2 || a2 > 0x40 || a4 > 0x40 )
    return -1;
  for ( i = 0; i <= 7; ++i )
    *(_QWORD *)(8 * (i + 16) + a1) = qword_1DBE28[i];
  v5 = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a1 + 128) ^= a2 ^ (a4 << 8) ^ 0x1010000;
  *(_DWORD *)(a1 + 132) = v5;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = a2;
  for ( j = a4; j <= 0x7F; ++j )
    *(_BYTE *)(j + a1) = 0;
  if ( a4 )
  {
    blake2b_update((__int64 *)a1, a3, a4);
    *(_DWORD *)(a1 + 208) = 128;
  }
  return 0;
}

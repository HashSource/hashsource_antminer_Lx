__int64 *__fastcall blake2b_final(int a1, int a2)
{
  int v2; // r3
  __int64 *result; // r0
  __int64 v4; // r2
  char v5; // r1
  unsigned int i; // [sp+Ch] [bp+Ch]

  *(_QWORD *)(a1 + 192) += *(unsigned int *)(a1 + 208);
  if ( *(_QWORD *)(a1 + 192) < (unsigned __int64)*(unsigned int *)(a1 + 208) )
    ++*(_QWORD *)(a1 + 200);
  while ( *(_DWORD *)(a1 + 208) <= 0x7Fu )
  {
    v2 = *(_DWORD *)(a1 + 208);
    *(_DWORD *)(a1 + 208) = v2 + 1;
    *(_BYTE *)(a1 + v2) = 0;
  }
  result = sub_1997D0(a1, 1);
  for ( i = 0; *(_DWORD *)(a1 + 212) > i; ++i )
  {
    v4 = *(_QWORD *)(8 * ((i >> 3) + 16) + a1);
    v5 = 8 * (i & 7);
    result = (__int64 *)(HIDWORD(v4) >> (v5 - 32));
    *(_BYTE *)(a2 + i) = ((unsigned int)v4 >> v5) | (HIDWORD(v4) << (32 - v5)) | (unsigned __int8)result;
  }
  return result;
}

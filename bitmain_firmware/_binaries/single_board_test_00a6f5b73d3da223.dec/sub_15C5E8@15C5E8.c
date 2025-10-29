void *__fastcall sub_15C5E8(int a1, char a2, unsigned int a3, void *a4, size_t a5, const void *a6)
{
  char v10[128]; // [sp+10h] [bp+10h] BYREF
  __int64 v11; // [sp+90h] [bp+90h]
  __int64 v12; // [sp+98h] [bp+98h]
  int v13; // [sp+A4h] [bp+A4h]
  unsigned int i; // [sp+A8h] [bp+A8h]
  size_t n; // [sp+ACh] [bp+ACh]

  v13 = 128 >> a3;
  v10[0] = (128 >> a3) | a2 & -(128 >> a3);
  if ( *(_DWORD *)(a1 + 64) || a3 )
    n = 111 - *(_DWORD *)(a1 + 64);
  else
    n = 47;
  memset(&v10[1], 0, n);
  v12 = a3 + (*(_QWORD *)(a1 + 200) << 9) + (unsigned int)(8 * *(_DWORD *)(a1 + 64));
  v11 = *(_DWORD *)(a1 + 204) >> 23;
  sub_156E9C(&v10[n + 1], (int)&v10[n + 1], v11, SHIDWORD(v11));
  sub_156E9C(&v10[n + 9], (int)&v10[n + 9], v12, SHIDWORD(v12));
  sub_156F8C(a1, v10, n + 17);
  for ( i = 0; i <= 0xF; ++i )
    sub_156E40((int)&v10[4 * i], *(_DWORD *)(a1 + 4 * (i + 34)));
  memcpy(a4, &v10[4 * (16 - a5)], 4 * a5);
  return sub_156F58((_DWORD *)a1, a6);
}

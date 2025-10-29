const void *__fastcall sub_C38AC(_DWORD *a1, int a2, _DWORD *a3)
{
  int src[32]; // [sp+10h] [bp-A4h] BYREF
  unsigned int v7; // [sp+90h] [bp-24h]
  int v8; // [sp+94h] [bp-20h]
  unsigned int v9; // [sp+98h] [bp-1Ch]
  int *v10; // [sp+9Ch] [bp-18h]
  unsigned int j; // [sp+A0h] [bp-14h]
  unsigned int i; // [sp+A4h] [bp-10h]

  v10 = src;
  v9 = (a2 + 63) & 0xFFFFFFC0;
  sub_C2A30(a1, (int)src);
  for ( i = 0; i < 0x400; i += 2 )
  {
    memcpy((void *)(v9 + (i << 7)), src, 0x80u);
    sub_C2FF4(src, &src[16]);
    sub_C2FF4(&src[16], src);
    memcpy((void *)(v9 + ((i + 1) << 7)), src, 0x80u);
    sub_C2FF4(src, &src[16]);
    sub_C2FF4(&src[16], src);
  }
  for ( i = 0; i < 0x400; i += 2 )
  {
    v8 = src[16] & 0x3FF;
    v7 = v9 + (v8 << 7);
    for ( j = 0; j <= 0xF; ++j )
      *(_QWORD *)&v10[2 * j] ^= *(_QWORD *)(v7 + 8 * j);
    sub_C2FF4(src, &src[16]);
    sub_C2FF4(&src[16], src);
    v8 = src[16] & 0x3FF;
    v7 = v9 + (v8 << 7);
    for ( j = 0; j <= 0xF; ++j )
      *(_QWORD *)&v10[2 * j] ^= *(_QWORD *)(v7 + 8 * j);
    sub_C2FF4(src, &src[16]);
    sub_C2FF4(&src[16], src);
  }
  return sub_C2D68(a1, src, a3);
}

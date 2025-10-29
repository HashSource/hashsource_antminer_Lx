int __fastcall sub_10366C(_DWORD *a1, int a2, _DWORD *a3)
{
  int *v3; // r0
  int *v4; // r0
  int src[32]; // [sp+10h] [bp+10h] BYREF
  unsigned int v9; // [sp+90h] [bp+90h]
  int v10; // [sp+94h] [bp+94h]
  unsigned int v11; // [sp+98h] [bp+98h]
  int *v12; // [sp+9Ch] [bp+9Ch]
  unsigned int j; // [sp+A0h] [bp+A0h]
  unsigned int i; // [sp+A4h] [bp+A4h]

  v12 = src;
  v11 = (a2 + 63) & 0xFFFFFFC0;
  sub_102D84(a1, (int)src);
  for ( i = 0; i < 0x400; i += 2 )
  {
    memcpy((void *)((i << 7) + v11), src, 0x80u);
    sub_1031C8(src, &src[16]);
    sub_1031C8(&src[16], src);
    memcpy((void *)(((i + 1) << 7) + v11), src, 0x80u);
    sub_1031C8(src, &src[16]);
    sub_1031C8(&src[16], src);
  }
  for ( i = 0; i < 0x400; i += 2 )
  {
    v10 = src[16] & 0x3FF;
    v9 = (v10 << 7) + v11;
    for ( j = 0; j <= 0xF; ++j )
    {
      v3 = &v12[2 * j];
      *(_QWORD *)v3 ^= *(_QWORD *)(8 * j + v9);
    }
    sub_1031C8(src, &src[16]);
    sub_1031C8(&src[16], src);
    v10 = src[16] & 0x3FF;
    v9 = (v10 << 7) + v11;
    for ( j = 0; j <= 0xF; ++j )
    {
      v4 = &v12[2 * j];
      *(_QWORD *)v4 ^= *(_QWORD *)(8 * j + v9);
    }
    sub_1031C8(src, &src[16]);
    sub_1031C8(&src[16], src);
  }
  return sub_102FE8(a1, src, a3);
}

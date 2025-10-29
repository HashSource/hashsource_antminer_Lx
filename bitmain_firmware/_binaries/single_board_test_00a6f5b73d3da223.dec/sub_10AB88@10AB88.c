_BYTE *__fastcall sub_10AB88(unsigned int a1, char a2, int a3, int a4, unsigned int a5)
{
  unsigned int v5; // r3
  __int64 v6; // kr00_8
  __int64 v7; // r0
  _BYTE *result; // r0
  __int64 v9; // r0
  _BYTE s[112]; // [sp+10h] [bp+10h] BYREF
  __int64 v13; // [sp+80h] [bp+80h] BYREF
  __int64 v14; // [sp+88h] [bp+88h] BYREF
  int v15; // [sp+94h] [bp+94h]
  __int64 v16; // [sp+98h] [bp+98h]
  __int64 v17; // [sp+A0h] [bp+A0h]
  int v18; // [sp+A8h] [bp+A8h]
  unsigned int v19; // [sp+ACh] [bp+ACh]
  int v20; // [sp+B0h] [bp+B0h]
  unsigned int i; // [sp+B4h] [bp+B4h]

  v20 = *(_DWORD *)(a1 + 128);
  v19 = a3 + 8 * v20;
  v18 = 128 >> a3;
  s[v20] = (128 >> a3) | a2 & -(128 >> a3);
  v17 = v19 + *(_QWORD *)(a1 + 232);
  v16 = *(_QWORD *)(a1 + 240);
  if ( v20 || a3 )
  {
    if ( *(_QWORD *)(a1 + 232) )
    {
      *(_QWORD *)(a1 + 232) -= 1024 - v19;
    }
    else
    {
      v5 = v19;
      *(_DWORD *)(a1 + 232) = v19 - 1024;
      *(_DWORD *)(a1 + 236) = (v5 >= 0x400) - 1;
      v6 = *(_QWORD *)(a1 + 240);
      *(_DWORD *)(a1 + 240) = v6 - 1;
      *(_DWORD *)(a1 + 244) = ((_DWORD)v6 != 0) + HIDWORD(v6) - 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 232) = -1024;
    *(_DWORD *)(a1 + 236) = -1;
    *(_DWORD *)(a1 + 240) = -1;
    *(_DWORD *)(a1 + 244) = -1;
  }
  if ( v19 > 0x37E )
  {
    memset(&s[v20 + 1], 0, 127 - v20);
    HIDWORD(v9) = &s[v20];
    LODWORD(v9) = a1;
    sub_1093A4(v9, 128 - v20);
    *(_DWORD *)(a1 + 232) = -1024;
    *(_DWORD *)(a1 + 236) = -1;
    *(_DWORD *)(a1 + 240) = -1;
    *(_DWORD *)(a1 + 244) = -1;
    memset(s, 0, sizeof(s));
    if ( a5 == 8 )
      s[111] = 1;
    sub_105094(&v13, (int)&v13, v16, SHIDWORD(v16));
    sub_105094(&v14, (int)&v14, v17, SHIDWORD(v17));
    result = (_BYTE *)sub_1093A4(__SPAIR64__(s, a1), 0x80u);
  }
  else
  {
    memset(&s[v20 + 1], 0, 111 - v20);
    if ( a5 == 8 )
      s[111] |= 1u;
    sub_105094(&v13, (int)&v13, v16, SHIDWORD(v16));
    sub_105094(&v14, (int)&v14, v17, SHIDWORD(v17));
    HIDWORD(v7) = &s[v20];
    LODWORD(v7) = a1;
    result = (_BYTE *)sub_1093A4(v7, 128 - v20);
  }
  v15 = a4;
  for ( i = 0; i < a5; ++i )
    result = sub_104FD8(
               (_BYTE *)(v15 + 8 * i),
               v15 + 8 * i,
               *(_DWORD *)(8 * (i + 17) + a1),
               *(_DWORD *)(8 * (i + 17) + a1 + 4));
  return result;
}

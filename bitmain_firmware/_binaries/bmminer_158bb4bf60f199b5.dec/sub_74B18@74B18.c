int __fastcall sub_74B18(unsigned int a1, unsigned int a2)
{
  bool v3; // cc
  unsigned int v5; // r1
  unsigned __int8 v6; // r7
  unsigned __int8 v8; // r6
  int v9; // [sp+Ch] [bp-10h] BYREF
  int v10; // [sp+10h] [bp-Ch] BYREF
  int v11[2]; // [sp+14h] [bp-8h] BYREF

  v3 = a2 > 0x2DC6C0;
  v5 = 8 * a2;
  if ( v3 )
  {
    v6 = 0x17D78400 / v5 - 1;
    sub_75D9C(0, a1, 0, 0x68u, &v10);
    sub_75D9C(0, a1, 0, 0x28u, v11);
    HIBYTE(v10) = HIBYTE(v10) & 0x9F | 0x40;
    LOBYTE(v10) = v10 & 0x88 | 0x11;
    BYTE1(v10) = BYTE1(v10) & 0xC0 | 1;
    HIWORD(v10) = HIWORD(v10) & 0xF000 | 0x70;
    sub_748C4(a1, 1, 0, 0x68u, v10);
    sub_748C4(a1, 1, 0, 0x68u, v10);
    LOBYTE(v11[0]) = 15;
    HIBYTE(v11[0]) = HIBYTE(v11[0]) & 0x30 | 6;
    *(_WORD *)((char *)v11 + 1) = BYTE1(v11[0]) & 0xF;
    sub_748C4(a1, 1, 0, 0x28u, v11[0]);
    sub_75D9C(0, a1, 0, 0x18u, &v9);
    HIBYTE(v9) = HIBYTE(v9) & 0xF0 | (v6 >> 5) & 0xF;
    BYTE1(v9) = BYTE1(v9) & 0xE0 | v6 & 0x1F;
    BYTE2(v9) |= 1u;
  }
  else
  {
    v8 = 0x17D7840 / v5 - 1;
    sub_75D9C(0, a1, 0, 0x68u, &v10);
    sub_75D9C(0, a1, 0, 0x28u, v11);
    sub_75D9C(0, a1, 0, 0x18u, &v9);
    HIBYTE(v9) = HIBYTE(v9) & 0xF0 | (v8 >> 5) & 0xF;
    BYTE1(v9) = BYTE1(v9) & 0xE0 | v8 & 0x1F;
    BYTE2(v9) &= ~1u;
  }
  sub_748C4(a1, 1, 0, 0x18u, v9);
  sub_70CE4(a1, a2);
  return 0;
}

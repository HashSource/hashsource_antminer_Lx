int __fastcall sub_667A4(int a1, int *a2)
{
  char v3; // lr
  unsigned int v4; // r6
  unsigned int v5; // r11
  int v6; // r3
  unsigned int v7; // r8
  unsigned int v8; // r2
  unsigned int v9; // r1
  __int16 v10; // r3
  bool v11; // cc
  int result; // r0
  unsigned int v13; // [sp+14h] [bp-10h] BYREF
  int v14; // [sp+18h] [bp-Ch]

  sub_655B4((int *)&v13, a2);
  v3 = v14;
  v4 = (v14 >> 31) ^ v14;
  v5 = (v14 >> 31) ^ (v4 / 0x15180);
  v6 = v5 + v13 + 693595;
  v7 = (v14 >> 31) ^ (v4 / 0xE10);
  v8 = (v14 >> 31) ^ (v4 / 0x3C);
  *(_BYTE *)(a1 + 4) = v7 - 24 * v5;
  v9 = (v6 >> 31) ^ ((v6 ^ (unsigned int)(v6 >> 31)) / 7);
  *(_BYTE *)(a1 + 5) = v8 - 60 * v7;
  *(_BYTE *)(a1 + 6) = v3 - 60 * v8;
  *(_BYTE *)(a1 + 3) = v6 - 7 * v9 + 1;
  sub_666C8(&v13, v9);
  v10 = v13;
  v11 = v13 > 0xFFFE;
  *(_BYTE *)(a1 + 2) = v14 + 1;
  result = !v11;
  *(_WORD *)a1 = v10 + 1;
  return result;
}

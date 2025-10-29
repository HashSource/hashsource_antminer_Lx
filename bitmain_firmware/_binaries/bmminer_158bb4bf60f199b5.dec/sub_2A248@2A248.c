int __fastcall sub_2A248(_BYTE *a1, char a2, char a3)
{
  int v4; // r3
  int result; // r0

  *(_DWORD *)a1 = 0;
  *(_WORD *)a1 = 1346;
  v4 = dword_A0D68;
  a1[4] = 0;
  LOBYTE(v4) = *(_BYTE *)(v4 + 12954);
  a1[3] = a3;
  a1[2] = v4 * a2;
  result = sub_51554(a1, 0x20u);
  a1[4] = a1[4] & 0xE0 | result & 0x1F;
  return result;
}

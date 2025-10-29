unsigned int __fastcall sub_65A6C(_DWORD *a1, int a2)
{
  unsigned int v2; // r4
  unsigned int v4; // r2
  unsigned int result; // r0
  unsigned int v6; // r3

  v2 = (a2 >> 31) ^ a2;
  v4 = (a2 >> 31) ^ (v2 / 0xE10);
  result = (a2 >> 31) ^ (v2 / 0x15180);
  v6 = (a2 >> 31) ^ (v2 / 0x3C);
  a1[2] = v4 - 24 * result;
  a1[1] = v6 - 60 * v4;
  *a1 = a2 - 60 * v6;
  return result;
}

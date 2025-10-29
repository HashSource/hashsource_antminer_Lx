int __fastcall sub_1569D4(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // [sp+4h] [bp+4h]

  v6 = ((unsigned int)(a2 << 9) >> 23) + (a3 << 9);
  sub_140E58(a1, a5 + 8 * a4 + (a2 << 9));
  return sub_140E58(a1 + 4, v6);
}

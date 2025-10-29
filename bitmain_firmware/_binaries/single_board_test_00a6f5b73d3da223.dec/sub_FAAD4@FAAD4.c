int __fastcall sub_FAAD4(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int result; // r0

  gEdges[84 * a1 + 2 * a2] = a3 >> 1;
  result = 42 * a1;
  gEdges[2 * a2 + 1 + 2 * result] = a4 >> 1;
  return result;
}

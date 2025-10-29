int __fastcall visited_set(_DWORD *a1, unsigned int a2)
{
  int result; // r0
  char v3; // r1
  unsigned int v5; // [sp+Ch] [bp+Ch]

  v5 = a2 / a1[2];
  result = sub_1A363C(a2, a1[2]);
  *(_DWORD *)(4 * v5 + *a1) |= 1 << v3;
  return result;
}

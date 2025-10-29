int __fastcall visited_test(_DWORD *a1, unsigned int a2)
{
  char v2; // r1
  unsigned int v5; // [sp+Ch] [bp+Ch]

  v5 = a2 / a1[2];
  sub_1A363C(a2, a1[2]);
  return (*(_DWORD *)(4 * v5 + *a1) >> v2) & 1;
}

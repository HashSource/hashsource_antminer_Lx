int __fastcall visited_reset(_DWORD *a1, unsigned int a2)
{
  int result; // r0
  char v4; // r1

  result = sub_12D1F4(a2, a1[2]);
  *(_DWORD *)(*a1 + 4 * result) &= ~(1 << v4);
  return result;
}

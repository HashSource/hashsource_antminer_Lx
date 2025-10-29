int __fastcall sub_C4C5C(_DWORD *a1, int *a2)
{
  int result; // r0

  result = sub_C4C24((int)a1, *a2);
  a2[2] = *(_DWORD *)(*a1 + 4 * result);
  *(_DWORD *)(*a1 + 4 * result) = a2;
  return result;
}

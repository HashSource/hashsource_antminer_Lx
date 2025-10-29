_DWORD *__fastcall sub_FC740(_DWORD *a1, int a2, int a3)
{
  int v6; // [sp+10h] [bp+10h]
  unsigned int v7; // [sp+14h] [bp+14h]

  v7 = (*(int (__fastcall **)(_DWORD, int))(a1[20] + 52))(a1[20], a2);
  v6 = (*(int (__fastcall **)(_DWORD, int))(a1[21] + 52))(a1[21], a3);
  return sub_FC64C(a1, v7, v6);
}

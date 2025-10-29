_DWORD *__fastcall sub_FC080(_DWORD *a1, int a2, int a3)
{
  char v5; // [sp+8h] [bp+8h]
  unsigned int v7; // [sp+10h] [bp+10h]
  unsigned int v8; // [sp+14h] [bp+14h]

  v5 = a2;
  v8 = (*(int (__fastcall **)(_DWORD, int))(a1[20] + 52))(a1[20], a2);
  v7 = (*(int (__fastcall **)(_DWORD, int))(a1[21] + 52))(a1[21], a3);
  return sub_FBFD4(a1, v8 >> 1, v7 >> 1, v5 & 1);
}

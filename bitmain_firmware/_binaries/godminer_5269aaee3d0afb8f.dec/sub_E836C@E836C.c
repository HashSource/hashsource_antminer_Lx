int __fastcall sub_E836C(_DWORD *a1, char a2)
{
  unsigned int v4; // r5
  unsigned int v5; // r0

  v4 = (*(int (**)(void))(a1[20] + 52))();
  v5 = (*(int (**)(void))(a1[21] + 52))();
  return sub_E82E4(a1, v4 >> 1, v5 >> 1, a2 & 1);
}

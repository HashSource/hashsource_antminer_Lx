unsigned int __fastcall sub_49AEC(int a1, int a2)
{
  int v4; // r0
  void *v5; // r4
  char v7[60]; // [sp+8h] [bp-44h] BYREF

  v4 = *(_DWORD *)(a2 + 84);
  v5 = *(void **)v4;
  if ( *(_DWORD *)(v4 + 28) != -1 )
    sub_18C18(v4 + 8);
  if ( v5 )
    free(v5);
  sub_6BCB0(v7, 60, "JJY stopped. unit=%d mode=%d", a1, *(_DWORD *)(a2 + 76));
  return sub_41CA4(a2 + 16, v7);
}

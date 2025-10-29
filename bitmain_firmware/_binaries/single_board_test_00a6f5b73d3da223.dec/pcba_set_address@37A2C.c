int __fastcall pcba_set_address(int a1)
{
  int v3; // [sp+Ch] [bp+Ch]

  v3 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 240) = sub_379DC(*(_DWORD *)(a1 + 296), v3);
  return (*(int (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), v3);
}

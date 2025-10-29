int __fastcall pcba_eth_reg_init(int a1, int a2)
{
  int v3; // [sp+Ch] [bp+Ch] BYREF

  v3 = a2;
  *(_DWORD *)(a1 + 304) = 1;
  return (*(int (__fastcall **)(int, int *))(a1 + 40))(a1, &v3);
}

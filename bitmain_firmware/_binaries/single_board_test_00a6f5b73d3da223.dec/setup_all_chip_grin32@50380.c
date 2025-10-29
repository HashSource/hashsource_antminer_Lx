int __fastcall setup_all_chip_grin32(int a1)
{
  puts("setup_all_chip_grin32");
  *(_DWORD *)(a1 + 240) = sub_4FF2C(*(_DWORD *)(a1 + 296), 1u);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), 1);
  sub_4BF8C(a1, 1);
  enable_core_clk(a1);
  sub_4D138(a1, 16, 1);
  if ( *(_BYTE *)(a1 + 268) != 1 )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return 0;
}

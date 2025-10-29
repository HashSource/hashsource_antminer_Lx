int __fastcall setup_all_chip_eth(int a1)
{
  puts("setup_all_chip_eth");
  *(_DWORD *)(a1 + 240) = sub_D9ED8(*(_DWORD *)(a1 + 296), 8u);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), 8);
  sub_759E8(a1, 8);
  setup_clk(a1);
  set_debug_ctrl(a1, 19);
  sub_77910(a1, 1);
  if ( *(_BYTE *)(a1 + 268) != 1 )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return 0;
}

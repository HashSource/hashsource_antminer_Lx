int __fastcall setup_all_chip_ae(int a1)
{
  puts("setup_all_chip_ae");
  *(_DWORD *)(a1 + 240) = makeup_chip_addr_ae(*(_DWORD *)(a1 + 296), 4u);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), 4);
  sub_7090C(a1, 4);
  sub_71AB8(a1, 0, 1);
  if ( *(_BYTE *)(a1 + 268) != 1 )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return 0;
}

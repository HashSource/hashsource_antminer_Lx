int __fastcall update_chip_status(unsigned int a1, unsigned int a2, int a3)
{
  if ( byte_153C1C[*(_DWORD *)(a1 + 248)] != 1 )
  {
    sub_6A418(a1);
    *(_DWORD *)(a2 + 80) = *(_DWORD *)(a1 + 464);
    update_str_and_flag(__PAIR64__(a2, a1), (unsigned __int64 *)(a3 + 48));
    *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 424);
    byte_153C1C[*(_DWORD *)(a1 + 248)] = 1;
  }
  else if ( *(_BYTE *)(a1 + 258) == 1 )
  {
    *(_DWORD *)(a2 + 80) = *(_DWORD *)(a1 + 464);
    chip_speed_test(a1);
    update_str_and_flag(__PAIR64__(a2, a1), (unsigned __int64 *)(a3 + 48));
  }
  return a3 + 48;
}

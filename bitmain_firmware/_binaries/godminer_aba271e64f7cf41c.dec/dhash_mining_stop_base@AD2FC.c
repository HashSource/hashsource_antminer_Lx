int __fastcall dhash_mining_stop_base(int a1)
{
  (*(void (__fastcall **)(int))(a1 + 4))(a1);
  *(_BYTE *)(a1 + 257) = 0;
  *(_BYTE *)(a1 + 258) = 0;
  return 0;
}

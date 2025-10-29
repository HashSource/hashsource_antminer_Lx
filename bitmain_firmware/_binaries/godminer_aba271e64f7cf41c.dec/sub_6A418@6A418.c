int __fastcall sub_6A418(int result)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i < *(_DWORD *)(result + 336); ++i )
    *(_DWORD *)(*(_DWORD *)(result + 528) + 44 * i + 16) = 0;
  return result;
}

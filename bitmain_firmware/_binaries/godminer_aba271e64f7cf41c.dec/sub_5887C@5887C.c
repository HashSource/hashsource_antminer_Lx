int __fastcall sub_5887C(int a1)
{
  **(_DWORD **)(a1 + 24) = chip_setting_get_md5sum_x7(
                             *(_DWORD *)a1,
                             *(_DWORD *)(*(_DWORD *)a1 + 336),
                             *(_BYTE *)(a1 + 8),
                             *(const void **)(a1 + 12),
                             *(_DWORD *)(a1 + 16),
                             *(_BYTE **)(a1 + 20));
  return 0;
}

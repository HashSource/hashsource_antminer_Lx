int __fastcall sub_58818(int a1)
{
  **(_DWORD **)(a1 + 16) = chip_setting_send_update_cmd_x7(
                             *(_DWORD *)a1,
                             *(_DWORD *)(*(_DWORD *)a1 + 336),
                             *(_BYTE *)(a1 + 8),
                             *(_BYTE **)(a1 + 12));
  return 0;
}

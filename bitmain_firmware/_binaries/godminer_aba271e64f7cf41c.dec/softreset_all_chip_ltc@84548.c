int __fastcall softreset_all_chip_ltc(int a1)
{
  chip_setting_software_reset_ltc(a1);
  chip_setting_ticket_mask_ltc(a1, 0xFFFFFFFF);
  return 0;
}

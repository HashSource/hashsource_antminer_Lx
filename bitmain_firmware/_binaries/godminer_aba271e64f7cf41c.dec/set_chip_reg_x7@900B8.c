int __fastcall set_chip_reg_x7(int a1, unsigned __int8 *a2)
{
  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  wait_x7_chip_setting_not_pending(a1);
  send_command_packet(a1, a2, a2[5] + 8);
  return 0;
}

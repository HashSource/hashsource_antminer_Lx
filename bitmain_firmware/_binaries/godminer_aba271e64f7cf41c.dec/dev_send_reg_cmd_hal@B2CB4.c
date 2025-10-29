int __fastcall dev_send_reg_cmd_hal(int a1, int a2, unsigned int a3)
{
  return uart_send(g_chain_info[2 * a1], a2, a3);
}

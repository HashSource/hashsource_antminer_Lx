int __fastcall dev_read_nonce_reg_data_hal(int a1, void *a2, size_t a3)
{
  return uart_receive(g_chain_info[2 * a1], a2, a3, 0);
}

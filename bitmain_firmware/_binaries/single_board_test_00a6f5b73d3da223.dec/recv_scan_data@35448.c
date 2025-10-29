int32_t __cdecl recv_scan_data(char *recv_buffer, int32_t length)
{
  int32_t v3; // r3
  int32_t readable_byte_num; // [sp+Ch] [bp+Ch]

  readable_byte_num = uart_get_readable_byte_num(3);
  if ( readable_byte_num <= 0 )
    return -1;
  v3 = readable_byte_num;
  if ( readable_byte_num >= length )
    v3 = length;
  return uart_receive(3, (int)recv_buffer, v3);
}

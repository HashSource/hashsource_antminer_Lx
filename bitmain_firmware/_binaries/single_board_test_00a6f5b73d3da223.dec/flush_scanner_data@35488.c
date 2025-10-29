int flush_scanner_data()
{
  dword_1F0D84 = 0;
  dword_1ED16C = 255;
  memset(byte_1F0D88, 0, sizeof(byte_1F0D88));
  return uart_flush(3);
}

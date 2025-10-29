int get_nonce_number_in_fifo()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x18u, &v1);
  return v1;
}

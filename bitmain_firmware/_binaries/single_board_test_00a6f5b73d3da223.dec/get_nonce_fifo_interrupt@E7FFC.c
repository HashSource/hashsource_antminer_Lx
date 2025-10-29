int get_nonce_fifo_interrupt()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x1Cu, &v1);
  return v1;
}

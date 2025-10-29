unsigned int all_chain_reset_high()
{
  unsigned int v1; // [sp+4h] [bp+4h] BYREF

  v1 = 0;
  fpga_read(0x34u, &v1);
  v1 = ~(~HIWORD(v1) << 16);
  fpga_write(0x34u, v1);
  return sleep(2u);
}

int get_block_header_version()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x130u, &v1);
  return v1;
}

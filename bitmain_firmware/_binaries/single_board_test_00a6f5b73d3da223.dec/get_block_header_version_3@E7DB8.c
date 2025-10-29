int get_block_header_version_3()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x16Cu, &v1);
  return v1;
}

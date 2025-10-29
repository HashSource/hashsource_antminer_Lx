int get_block_header_version_2()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x168u, &v1);
  return v1;
}

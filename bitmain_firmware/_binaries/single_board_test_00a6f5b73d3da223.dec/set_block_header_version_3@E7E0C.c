int __fastcall set_block_header_version_3(int a1)
{
  return fpga_write(0x16Cu, a1);
}

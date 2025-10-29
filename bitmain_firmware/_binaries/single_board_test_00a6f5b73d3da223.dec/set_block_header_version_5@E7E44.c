int __fastcall set_block_header_version_5(int a1)
{
  return fpga_write(0x474u, a1);
}

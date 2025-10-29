int __fastcall set_block_header_version_6(int a1)
{
  return fpga_write(0x478u, a1);
}

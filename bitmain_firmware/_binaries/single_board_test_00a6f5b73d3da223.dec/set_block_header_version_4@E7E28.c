int __fastcall set_block_header_version_4(int a1)
{
  return fpga_write(0x470u, a1);
}

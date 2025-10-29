int __fastcall set_block_header_version(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x130u, a1);
  return fpga_read(0x130u, &v2);
}

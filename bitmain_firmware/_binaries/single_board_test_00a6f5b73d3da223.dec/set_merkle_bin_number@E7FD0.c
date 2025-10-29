int __fastcall set_merkle_bin_number(unsigned __int16 a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x114u, a1);
  return fpga_read(0x114u, &v2);
}

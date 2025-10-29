int __fastcall set_target_bits(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x138u, a1);
  return fpga_read(0x138u, &v2);
}

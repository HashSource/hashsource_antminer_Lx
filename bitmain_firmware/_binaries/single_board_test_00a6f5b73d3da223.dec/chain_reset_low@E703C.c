int __fastcall chain_reset_low(char a1)
{
  int v3; // [sp+Ch] [bp+Ch] BYREF

  v3 = 0;
  fpga_read(0x34u, &v3);
  return fpga_write(0x34u, v3 | (1 << a1));
}

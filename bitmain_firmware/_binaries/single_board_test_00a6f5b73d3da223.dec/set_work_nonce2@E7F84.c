int __fastcall set_work_nonce2(int *a1)
{
  int v3; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x108u, *a1);
  fpga_write(0x10Cu, a1[1]);
  fpga_read(0x108u, &v3);
  return fpga_read(0x10Cu, &v3);
}

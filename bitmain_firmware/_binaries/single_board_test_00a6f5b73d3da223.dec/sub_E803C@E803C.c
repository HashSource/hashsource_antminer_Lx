int __fastcall sub_E803C(int *a1)
{
  int v3; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0xC4u, *a1);
  fpga_write(0xC8u, a1[1]);
  fpga_write(0xCCu, a1[2]);
  fpga_read(0xC4u, &v3);
  fpga_read(0xC8u, &v3);
  return fpga_read(0xCCu, &v3);
}

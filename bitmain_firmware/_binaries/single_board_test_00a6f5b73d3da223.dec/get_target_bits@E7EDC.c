int get_target_bits()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x138u, &v1);
  return v1;
}

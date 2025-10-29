int get_hash_counting_number()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x90u, &v1);
  return v1;
}

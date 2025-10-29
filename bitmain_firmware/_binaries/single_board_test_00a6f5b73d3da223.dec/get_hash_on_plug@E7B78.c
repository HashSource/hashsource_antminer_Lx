int get_hash_on_plug()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(8u, &v1);
  return v1;
}

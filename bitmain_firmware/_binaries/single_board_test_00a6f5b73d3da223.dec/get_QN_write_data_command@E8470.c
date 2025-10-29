int get_QN_write_data_command()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x80u, &v1);
  return v1;
}

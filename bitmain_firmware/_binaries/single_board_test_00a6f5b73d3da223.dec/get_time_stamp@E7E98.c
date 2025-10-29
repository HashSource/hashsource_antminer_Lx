int get_time_stamp()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x134u, &v1);
  return v1;
}

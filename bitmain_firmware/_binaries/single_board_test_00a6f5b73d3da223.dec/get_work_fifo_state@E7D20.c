int get_work_fifo_state()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0xCu, &v1);
  return v1;
}

int get_job_start_address()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x118u, &v1);
  return v1;
}
